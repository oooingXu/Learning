/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>
#ifndef CONFIG_TARGET_AM
	#include "cpu/ftrace.h"
#endif

#define R(i) gpr(i)
#define C(i) csr(i)
#define Mr vaddr_read
#define Mw vaddr_write

#define CSR_MEPC 0x341

enum {
  TYPE_I, TYPE_U, TYPE_S,TYPE_R, TYPE_J, TYPE_B,
  TYPE_N, // none
};

#define src1R() do { *src1 = R(rs1); } while (0)
#define src2R() do { *src2 = R(rs2); } while (0)
#define immI() do { *imm = SEXT(BITS(i, 31, 20), 12); } while(0)
#define immU() do { *imm = SEXT(BITS(i, 31, 12), 20) << 12; } while(0)
#define immS() do { *imm = SEXT(BITS(i, 31, 25) << 5 | BITS(i, 11, 7), 12); } while(0)
#define immB() do { *imm = SEXT((BITS(i, 31, 31) << 11 | BITS(i, 7, 7) << 10 | BITS(i, 30, 25) << 4 | BITS(i, 11, 8)) << 1 , 13); } while(0) 
#define immJ() do { *imm = SEXT((BITS(i, 31, 31) << 19 | BITS(i, 19, 12) << 11 | BITS(i, 20, 20) << 10 | BITS(i, 30, 21)) << 1, 21); } while(0) 

static void decode_operand(Decode *s, int *rd, word_t *src1, word_t *src2, word_t *imm, int type) {
  uint32_t i = s->isa.inst.val;
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  *rd     = BITS(i, 11, 7);
	IFDEF(CONFIG_MTRACE, printf("inst = 0x%08x, rs1 = %d, rs2 = %d\n", i, rs1, rs2));
  switch (type) {
    case TYPE_I: src1R();					 immI(); break;
    case TYPE_U:                   immU(); break;
    case TYPE_S: src1R(); src2R(); immS(); break;
    case TYPE_B: src1R(); src2R(); immB(); break;
    case TYPE_J:									 immJ(); break;
    case TYPE_R: src1R(); src2R();				 break;
  }
}

static int decode_exec(Decode *s) {
  int rd = 0;
  word_t src1 = 0, src2 = 0, imm = 0;
  s->dnpc = s->snpc;

  int zimm = BITS(s->isa.inst.val, 19, 15);
  //int rs2 = BITS(s->isa.inst.val, 24, 20);
#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
  decode_operand(s, &rd, &src1, &src2, &imm, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

  INSTPAT_START();
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(rd) = src1 + imm);
  INSTPAT("??????? ????? ????? 010 ????? 00100 11", slti   , I, R(rd) = ((int32_t)src1  < (int32_t)imm));
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(rd) = (src1 < (uint32_t)imm));

  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I,IFDEF(CONFIG_MTRACE, printf("src1 = 0x%08x, imm = 0x%08x\n", src1, imm)); R(rd) = Mr(src1 + imm, 1));
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, R(rd) = Mr(src1 + imm, 2)); 
  INSTPAT("??????? ????? ????? 110 ????? 00000 11", lwu    , I, R(rd) = Mr(src1 + imm, 4)); 

  INSTPAT("??????? ????? ????? 000 ????? 00000 11", lb     , I, R(rd) = SEXT(Mr(src1 + imm, 1), 8));
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, R(rd) = SEXT(Mr(src1 + imm, 2), 16)); 
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(rd) = SEXT(Mr(src1 + imm, 4), 32));

  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(rd) = src1 ^ imm);
  INSTPAT("??????? ????? ????? 110 ????? 00100 11", ori    , I, R(rd) = src1 | imm);
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(rd) = src1 & imm);

  INSTPAT("0000000 ????? ????? 001 ????? 00100 11", slli   , I, R(rd) = (src1 << SEXT(imm, 5)));
  INSTPAT("0000000 ????? ????? 101 ????? 00100 11", srli   , I, R(rd) = (src1 >> SEXT(imm, 5)));
  INSTPAT("0100000 ????? ????? 101 ????? 00100 11", srai   , I, R(rd) = ((int32_t)src1  >> SEXT(imm, 5)));

  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, s->dnpc = (src1 + imm)&~(word_t)1; IFDEF(CONFIG_FTRACE, jalr_print(s->isa.inst.val, rd, imm, s->pc, s->dnpc)); R(rd) = s->pc + 4);
	INSTPAT("??????? ????? ????? ??? ????? 11001 11", ret		 , I, s->dnpc = R(1); IFDEF(CONFIG_FTRACE, printf("0x%08x: ret  [%s]\n", s->pc, get_func_name(s->pc))));
	INSTPAT("000 ???? ???? 00000 000 00000 00011 11", fence	 , I, s->dnpc = s->pc + 4);

  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + imm, 1, src2));
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + imm, 2, src2));
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + imm, 4, src2));

  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, s->dnpc = (src1 == src2) ? (s->pc + imm): s->dnpc);
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, IFDEF(CONFIG_MTRACE, printf("imm = 0x%08x, rs1 = 0x%08x, rs2 = 0x%08x\n", imm, src1, src2)); s->dnpc = ((int32_t)src1 != (int32_t)src2) ? (s->pc + (int32_t)imm): s->dnpc); 
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B, s->dnpc = ((int32_t)src1 <  (int32_t)src2) ? (s->pc + imm): s->dnpc); 

  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, s->dnpc = ((int32_t)src1 >=  (int32_t)src2)  ? (s->pc + imm): s->dnpc); 
  INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu   , B, s->dnpc = ((uint32_t)src1 <  (uint32_t)src2) ? (s->pc + imm): s->dnpc); 
  INSTPAT("??????? ????? ????? 111 ????? 11000 11", bgeu   , B, s->dnpc = ((uint32_t)src1 >= (uint32_t)src2) ? (s->pc + imm): s->dnpc); 

  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(rd) = src1 + src2);
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(rd) = src1 - src2);
	
  INSTPAT("0000000 ????? ????? 101 ????? 01100 11", srl    , R, R(rd) = (uint32_t)src1 >> SEXT(src2, 5));
  INSTPAT("0100000 ????? ????? 101 ????? 01100 11", sra    , R, R(rd) = (int32_t)src1  >> SEXT(src2, 5));
  INSTPAT("0000000 ????? ????? 001 ????? 01100 11", sll    , R, R(rd) = src1 << SEXT(src2, 5));

  INSTPAT("0000000 ????? ????? 100 ????? 01100 11", xor    , R, R(rd) = src1 ^ src2);
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(rd) = src1 | src2);
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(rd) = src1 & src2);

  INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul    , R, R(rd) = src1 * src2);
  INSTPAT("0000001 ????? ????? 001 ????? 01100 11", mulh   , R, R(rd) = SEXT((int32_t)src1, 32) * SEXT((int32_t)src2, 32) >> 32); 
  INSTPAT("0000001 ????? ????? 010 ????? 01100 11", mulhsu , R, R(rd) = SEXT((int32_t)src1, 32) * (uint64_t)src2 >> 32); 
  INSTPAT("0000001 ????? ????? 011 ????? 01100 11", mulhu  , R, R(rd) = (uint64_t)src1 * (uint64_t)src2 >> 32); 

  INSTPAT("0000001 ????? ????? 100 ????? 01100 11", div    , R, R(rd) = (int32_t)src2  != 0 ? (int32_t)src1  / (int32_t)src2  : -1); 
  INSTPAT("0000001 ????? ????? 101 ????? 01100 11", divu   , R, R(rd) = (uint32_t)src2 != 0 ? (uint32_t)src1 / (uint32_t)src2 : -1); 

  INSTPAT("0000001 ????? ????? 110 ????? 01100 11", rem    , R, R(rd) = (int32_t)src2  != 0 ? (int32_t)src1  % (int32_t)src2  : (int32_t)src1); //wrong
  INSTPAT("0000001 ????? ????? 111 ????? 01100 11", remu   , R, R(rd) = (uint32_t)src2 != 0 ? (uint32_t)src1 % (uint32_t)src2 : (uint32_t)src1); 

  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt    , R, R(rd) = ((int32_t)src1 < (int32_t)src2));
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(rd) = ((uint32_t)src1 < (uint32_t)src2));

  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(rd) = s->pc + imm);
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui		 , U, R(rd) = SEXT(imm, 32));
  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal		 , J, s->dnpc = s->pc + imm; IFDEF(CONFIG_FTRACE, jal_print(rd, s->pc, s->dnpc)); R(rd) = s->snpc); 

	#ifdef CONFIG_CTE
	INSTPAT("??????? ????? ????? 001 ????? 11100 11", csrrw	 , I, uint32_t t = C(imm); C(imm) = src1; R(rd) = t);
	INSTPAT("??????? ????? ????? 010 ????? 11100 11", csrrs	 , I, uint32_t t = C(imm); C(imm) = t | src1; R(rd) = t);
	INSTPAT("??????? ????? ????? 011 ????? 11100 11", csrrc	 , I, uint32_t t = C(imm); C(imm) = t & (~src1); R(rd) = t);
	INSTPAT("??????? ????? ????? 101 ????? 11100 11", csrrwi , I, R(rd) = C(imm); C(imm) = zimm);
	INSTPAT("??????? ????? ????? 110 ????? 11100 11", csrrsi , I, uint32_t t = C(imm); C(imm) = t | zimm; R(rd) = t);
	INSTPAT("??????? ????? ????? 111 ????? 11100 11", csrrci , I, uint32_t t = C(imm); C(imm) = t & (~zimm); R(rd) = t);
	INSTPAT("0000000 00000 00000 000 00000 11100 11", ecall  , N, IFDEF(CONFIG_ETRACE, printf("ecall: dnpc = 0x%08x\n", isa_raise_intr(11, s->pc))); s->dnpc = isa_raise_intr(11, s->pc));
	INSTPAT("0011000 00010 00000 000 00000 11100 11", mret   , N, IFDEF(CONFIG_ETRACE, printf("met: dnpc = 0x%08x\n", s->dnpc)); s->dnpc = C(CSR_MEPC));
	#endif

  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}

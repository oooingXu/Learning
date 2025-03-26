#include <cpu.h>

enum {
  TYPE_I, TYPE_U, TYPE_S,TYPE_R, TYPE_J, TYPE_B,
  TYPE_N, // none
};

#define immI() do { *imm = SEXT(BITS(i, 31, 20), 12); } while(0)
#define immU() do { *imm = SEXT(BITS(i, 31, 12), 20) << 12; } while(0)
#define immS() do { *imm = SEXT(BITS(i, 31, 25) << 5 | BITS(i, 11, 7), 12); } while(0)
#define immB() do { *imm = SEXT((BITS(i, 31, 31) << 11 | BITS(i, 7, 7) << 10 | BITS(i, 30, 25) << 4 | BITS(i, 11, 8)) << 1 , 13); } while(0)
#define immJ() do { *imm = SEXT((BITS(i, 31, 31) << 19 | BITS(i, 19, 12) << 11 | BITS(i, 20, 20) << 10 | BITS(i, 30, 21)) << 1, 21); } while(0)

const char *instB[] = {
	"beq", "bne", "intrb_none", "intrb_none", "blt", "bge", "bltu", "bgeu"
};

const char *instR[] = {
	"add", "sll", "slt", "sltu", "xor", "srl", "or", "and"
};

const char *instS[] = {
	"sb", "sh", "sw"
};

const char *instI[] = {
	"addi", "slli", "slti", "sltiu", "xori", "srli", "ori", "andi"
};

const char *instLOAD[] = {
	"lb", "lh", "lw", "lbu", "lhu"
};

static void itrace_b(uint32_t func3, int rs1, int rs2, uint32_t imm) {
	if(rs1 >= R || rs2 >= R) {
		printf("B reg fail\n");
		assert(0);
	}

	if(func3 > 7){
		printf("inst B decode fail\n");
	}
	printf("func3 = %ld, rs1 = %d, rs2 = $d, imm = %x\n", func3, rs1, rs2, imm);
	printf("%s %s,%s,%x\n", instB[func3], regs[rs1], regs[rs2], cpu.pc + imm);
}

static void itrace_r(uint32_t func7, uint32_t func3, int rd, int rs1, int rs2) {
	if(rd >= R || rs1 >= R) {
		printf("R reg fail\n");
		assert(0);
	}
	if(func3 > 7){
		printf("inst R decode fail\n");
		assert(0);
	}
	if(func3 == 0) {
		if(func7 == 0) {
			printf("%s %s,%s,%s\n", instR[func3], regs[rd], regs[rs1], regs[rs2]);
		} else {
			printf("%s %s,%s,%s\n", "sub", regs[rd], regs[rs1], regs[rs2]);
		}
	} else if(func3 == 5) {
		if(func7 == 0) {
			printf("%s %s,%s,%s\n", instR[func3], regs[rd], regs[rs1], regs[rs2]);
		} else {
			printf("%s %s,%s,%s\n", "sra", regs[rd], regs[rs1], regs[rs2]);
		}
	}else {
		printf("%s %s,%s,%s\n", instR[func3], regs[rd], regs[rs1], regs[rs2]);
	}
}

static void itrace_j(uint32_t imm) {
	printf("%s %x\n", "jal", cpu.pc + imm);
}

static void itrace_s(uint32_t func3, int rs1, int rs2, uint32_t imm) {
	if(rs1 >= R || rs2 >= R) {
		printf("S reg fail\n");
		assert(0);
	}
	if(func3 > 3){
		printf("inst S decode fail\n");
		assert(0);
	}
	printf("%s %s,%s,%x\n", instS[func3], regs[rs1], regs[rs2], imm);
}

static void itrace_u(uint32_t opcode, int rd, uint32_t imm) {
	if(rd >= R) {
		printf("U reg fail\n");
		printf("rd = %d\n", rd);
		assert(0);
	}
	if(opcode == 0x17) {
		printf("%s %s,%x\n", "auipc", regs[rd], cpu.pc + imm);
	} else if(opcode == 0x37) {
		printf("%s %s,%x\n", "lui", regs[rd], imm);
	}
}

static void itrace_i(uint32_t opcode, uint32_t func7, uint32_t func3, int rd, int rs1, uint32_t imm, uint32_t shamt) {
	if(rs1 >= R || rd >= R) {
		printf("I reg fail\n");
		assert(0);
	}
	if(opcode == 0x67) {
		printf("%s %s,%s,%x\n", "jalr", regs[rd], regs[rs1],cpu.gpr[rs1] + imm);
	} else if(opcode == 0x73) {
		if(func3 == 0) {
			if(imm == 0) printf("ecall\n");
			else printf("ebreak\n");
		}
	} else if(opcode == 0x13) {
		if(func3 > 7) {
			printf("inst I decode fail\n");
			assert(0);
		}
		if(func3 == 5 && func7 == 2) {
			printf("%s %s,%s,%x\n", "srai", regs[rd], regs[rs1], shamt);
		} else {
			printf("%s %s,%s,%x\n", instI[func3], regs[rd], regs[rs1], imm);
		}
	} else if(opcode == 0x03) {
		if(func3 > 4) {
			printf("inst LOAD decode fail\n");
			assert(0);
		}
			printf("%s %s,%x(%s)\n", instLOAD[func3], regs[rd], cpu.gpr[rs1] + imm, regs[rs1]);
	}
}

static int type_instr(uint32_t opcode) {
	if(opcode == 0x63) {
		return TYPE_B;
	} else if(opcode == 0x33) {
		return TYPE_R;
	} else if(opcode == 0x23) {
		return TYPE_S;
	} else if(opcode == 0x6f) {
		return TYPE_J;
	} else if(opcode == 0x17 || opcode == 0x37) {
		return TYPE_U;
	} else if(opcode == 0x67 || opcode == 0x73 || opcode == 0x13 || opcode == 0x03) {
		return TYPE_I;
	} else {
		return TYPE_N;
	}
}

void itrace(uint32_t instr) {
	uint32_t i = instr;
	uint32_t opcode = instr & 0x7f;
	uint32_t func3 = (instr & 0x7000) >> 12;
	uint32_t func7 = (instr & 0xfe000000) >> 25;
	uint32_t shamt = SEXT(BITS(i, 24, 20), 5);

	uint32_t immb = SEXT((BITS(i, 31, 31) << 11 | BITS(i, 7, 7) << 10 | BITS(i, 30, 25) << 4 | BITS(i, 11, 8)) << 1 , 13); 
	uint32_t imms = SEXT(BITS(i, 31, 25) << 5 | BITS(i, 11, 7), 12);
	uint32_t immi = SEXT(BITS(i, 31, 20), 12);
	uint32_t immu = SEXT(BITS(i, 31, 12), 20) << 12;
	uint32_t immj = SEXT((BITS(i, 31, 31) << 19 | BITS(i, 19, 12) << 11 | BITS(i, 20, 20) << 10 | BITS(i, 30, 21)) << 1, 21);

  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  int rd  = BITS(i, 11, 7);

	switch(type_instr(opcode)) {
		case TYPE_B: itrace_b(func3, rs1, rs2, immb); break;
		case TYPE_R: itrace_r(func7, func3, rd, rs1, rs2); break;
		case TYPE_S: itrace_s(func3, rs1, rs2, imms); break;
		case TYPE_J: itrace_j(immj); break;
		case TYPE_U: itrace_u(opcode, rd, immu); break;
		case TYPE_I: itrace_i(opcode, func7, func3, rd, rs1, immi, shamt); break;
		default: printf("decode fail\n"); npc_state.state = NPC_ABORT; 
	}
}


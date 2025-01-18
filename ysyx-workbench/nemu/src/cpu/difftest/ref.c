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

#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

#define R 32
#define C 4096
/*
#define MEM_SIZE 67108864
#define MBASE 0x80000000

extern uint32_t memory[MEM_SIZE];
*/

__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
	if(addr != 0){
		if( direction == DIFFTEST_TO_REF) {
			memcpy(guest_to_host(addr), buf, n);
		} else {
			assert(0);
		}
	}
}

__EXPORT void difftest_regcpy(void *dut, bool direction) {
	CPU_state *diff_dut = (CPU_state *)dut;
	if(direction == DIFFTEST_TO_REF){
			printf("old mstatus ref = 0x%08x, dut = 0x%08x\n", cpu.csr[0x300], diff_dut->csr[0x300]);
			memcpy(&cpu.gpr ,diff_dut->gpr, R * sizeof(cpu.gpr[0]));
			memcpy(&cpu.csr ,diff_dut->csr, C * sizeof(cpu.csr[0]));
			printf("new mstatus ref = 0x%08x, dut = 0x%08x\n", cpu.csr[0x300], diff_dut->csr[0x300]);
			printf("old ref.pc = 0x%08x, ", cpu.pc);
			cpu.pc = diff_dut->pc;
			printf("new ref.pc = 0x%08x, ", cpu.pc);
			//printf("cpu.dnpc = 0x%08x, dut.pc= 0x%08x\n", cpu.pc, diff_dut->pc);
		/*
		for(int i = 0; i < R; i++){
			cpu.gpr[i] = diff_dut->gpr[i];
		}
		*/
	} 
	else {
		memcpy(diff_dut->gpr, &cpu.gpr, R * sizeof(cpu.gpr[0]));
		memcpy(diff_dut->csr, &cpu.csr, C * sizeof(cpu.csr[0]));
		diff_dut->pc = cpu.pc;
		/*
		for(int i = 0; i < R; i++){
			diff_dut->gpr[i] = cpu.gpr[i];
		}
		*/
	}
}

__EXPORT void difftest_exec(uint64_t n) {
	cpu_exec(n);
}

__EXPORT void difftest_raise_intr(word_t NO) {
  assert(0);
}

__EXPORT void difftest_init(int port) {
  void init_mem();
  init_mem();
  /* Perform ISA dependent initialization. */
  init_isa();
}

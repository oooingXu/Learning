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
			memcpy(&cpu.gpr ,diff_dut->gpr, R * sizeof(cpu.gpr[0]));
		/*
		for(int i = 0; i < R; i++){
			cpu.gpr[i] = diff_dut->gpr[i];
		}
		*/
	} 
	else {
		memcpy(diff_dut->gpr, &cpu.gpr, R * sizeof(cpu.gpr[0]));
		/*
		for(int i = 0; i < R; i++){
			diff_dut->gpr[i] = cpu.gpr[i];
		}
		*/
	}
}

__EXPORT void difftest_exec(CPU_state *ref) {
	cpu.pc = ref->pc;
	cpu_exec(1);
	ref->pc = cpu.pc;
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

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
#include <cpu/difftest.h>
#include <memory/paddr.h>
#include "../local-include/reg.h"

/*
#define CHECK(csr) if(ref_r->csr != cpu.csr) { \
	printf("ref->" #csr " = 0x%08x, cpu." #csr " = 0x%08x\n", ref_r->csr, cpu.csr); \
	return false; \
}
*/

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
	for(int i = 0; i < 32; i++){
		if(ref_r->gpr[i] != cpu.gpr[i]){
			printf("ref_r->gpr[%d] = 0x%08x, cpu.gpr[%d] = 0x%08x\n", i, ref_r->gpr[i], i, cpu.gpr[i]);
			return false;
		}
	}

	/*
#ifdef CONFIG_CTE
		if(cpu.mstatus != ref_r->mstatus) {
			printf("ref->mstatus = 0x%08x, cpu.mstatus = 0x%08x\n", ref_r->mstatus, cpu.mstatus);
			printf("ref->pc  = 0x%08x, cpu.pc  = 0x%08x\n", ref_r->pc, cpu.pc);
			return false;
	}

		if(cpu.mcause != ref_r->mcause) {
			printf("ref->mcause = 0x%08x, cpu.mcause = 0x%08x\n", ref_r->mcause, cpu.mcause);
			printf("ref->pc  = 0x%08x, cpu.pc  = 0x%08x\n", ref_r->pc, cpu.pc);
			return false;
	}

		if(cpu.mepc != ref_r->mepc) {
			printf("ref->mepc = 0x%08x, cpu.mepc = 0x%08x\n", ref_r->mepc, cpu.mepc);
			printf("ref->pc  = 0x%08x, cpu.pc  = 0x%08x\n", ref_r->pc, cpu.pc);
			return false;
	}

		if(cpu.mtvec != ref_r->mtvec) {
			printf("ref->mtvec = 0x%08x, cpu.mtvec = 0x%08x\n", ref_r->mtvec, cpu.mtvec);
			printf("ref->pc  = 0x%08x, cpu.pc  = 0x%08x\n", ref_r->pc, cpu.pc);
			return false;
	}
#endif
*/

	if(ref_r->pc != cpu.pc){
		printf("ref->pc = 0x%08x, cpu.pc = 0x%08x\n", ref_r->pc, cpu.pc);
		return false;
	}

  return true;
}

void isa_difftest_attach() {
}

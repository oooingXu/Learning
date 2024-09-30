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

#define CSR_MSTATUS 0x300
#define CSR_MTVEC		0x305
#define CSR_MEPC		0x341
#define CSR_MCAUSE	0x342

word_t isa_raise_intr(word_t NO, vaddr_t epc) {
#ifdef CONFIG_CTE
	cpu.mepc = epc;
	cpu.mcause = NO;
	return cpu.mtvec;
#endif
  /* TODO: Trigger an interrupt/exception with ``NO''.
   * Then return the address of the interrupt/exception vector.
   */
	printf("MTVEC = 0\n");

  return 0;
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}

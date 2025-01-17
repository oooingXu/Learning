#ifndef __CPU_CPU_H__
#define __CPU_CPU_H__

#include"../include/common.h"
#include"../include/utils.h"
#include"../include/debug.h"
#include"../memory/pmem.h"
#include<stdio.h>
#include<dlfcn.h>

#define R 32
#define C 4096

typedef struct{
	uint32_t gpr[32];
	uint32_t pc;
	uint32_t dnpc;
	uint32_t reset;
	bool		 valid;

	uint32_t mepc;
	uint32_t mcause;
	uint32_t mtvec;
	uint32_t mstatus;
	uint32_t csr[4096];

	char	logbuf[128];
}CPU_state;

extern CPU_state cpu;

extern const char *regs[];

void isa_reg_display();
uint32_t isa_reg_str2val(const char *s, bool *success);

void init_difftest(char *ref_so_file, long img_size);
void difftest_step();
void difftest_skip_ref();
void difftest_skip_dut(CPU_state *ref, int nr_ref, int nr_dut);

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF};

#endif


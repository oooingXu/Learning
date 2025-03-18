#ifndef __CPU_H__
#define __CPU_H__

#include <common.h>
#include <utils.h>
#include <debug.h>
#include <pmem.h>
#include <stdio.h>
#include <dlfcn.h>

#define R 16
#define C 4096

#define MEPC    0x341
#define MTVEC   0x305
#define MCAUSE  0x342
#define MSTATUS 0x300

typedef struct{
	uint32_t gpr[R];
	uint32_t pc;

	uint32_t mepc;
	uint32_t mcause;
	uint32_t mtvec;
	uint32_t mstatus;
	uint32_t mvendorid;  
	uint32_t marchid;

	uint32_t dnpc;
	uint32_t reset;
	bool		 valid;

	char	logbuf[128];
} CPU_state;

extern CPU_state cpu;

extern const char *regs[];

typedef struct {
	 uint32_t araddr;
	 uint32_t awaddr;
	 uint32_t wdata;
	 int wstrb;
	 int arsize;

	 bool arvalid;
	 bool awvalid;
} MEM_DIFF;

extern MEM_DIFF mem_diff;

void isa_reg_display();
uint32_t isa_reg_str2val(const char *s, bool *success);

void init_difftest(char *ref_so_file, long img_size);
void difftest_step();
void difftest_skip_ref();
void difftest_skip_dut(CPU_state *ref, int nr_ref, int nr_dut);

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF, DIFFTEST_TO_NPC};

#endif


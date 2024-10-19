#include<svdpi.h>
#include<verilated.h>
#include<verilated_vcd_c.h>
#include "Vysyx_23060336.h"
#include "Vysyx_23060336___024root.h"
//#include "Vysyx_23060336___024unit.h"

#include <fstream>
#include <iostream>
#include <vector>

#include <dlfcn.h>

#include "include/common.h"
#include "include/utils.h"
#include "include/debug.h"
#include "cpu/cpu.h"
#include "sdb/sdb.h"
#include "memory/pmem.h"
#include "device/map.h"

#define MAX_INST_TO_PRINT 1000
#define NR_WP 32
#define R 32

#define MEPC		0x341
#define MTVEC		0x305
#define MCAUSE  0x342
#define MSTATUS 0x300

uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0;
static bool g_print_step = false;
static int ebreak = 0;

//void device_update();

static char *img_file = NULL;
static bool ret = false;

NPCState npc_state;
CPU_state cpu = {};

Vysyx_23060336 *ysyx_23060336 = new Vysyx_23060336;
vluint64_t sim_time = 0;
#ifdef CONFIG_WAVE
VerilatedVcdC *m_trace = new VerilatedVcdC;
#endif

extern "C" int set_npc_state(int isebreak){
	if(pmem_read(isebreak) == 0x00100073 && ebreak == 0){
		npc_state.state = NPC_END;
		ebreak++;
		printf("ebreak = %d\n",ebreak);
		return 1;
	} else {
		return 0;
	}
}

static long load_program() {
	if(img_file == NULL){
		Log("No image is given.");
		return 4096;
	} else{
		debug("img_file = %s", img_file);
	}

	FILE *fp = fopen(img_file, "rb");
	debug("fp = %p, img_file = %s", fp, img_file);
	if(fp == NULL){
		printf("Can not open '%s'", img_file);
		assert(1);
	}

	fseek(fp, 0, SEEK_END);
	long size = ftell(fp);

	Log("The image is %s, size = %ld", img_file, size);

	fseek(fp, 0, SEEK_SET);
	int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
	assert(ret == 1);

	fclose(fp);
	return size;
}

static void statistic(){
	Log("host time spent = %ld us", g_timer);
	Log("total guest instructions = %ld", g_nr_guest_inst);
	if(g_timer > 0) Log("simulation frequency = %ld inst/s", g_nr_guest_inst * 1000000 / g_timer);
	else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

static void init_npc(){
	cpu.pc = RESET_VECTOR;
	for(int i = 0; i < R; i++){
		cpu.gpr[i] = 0;
	}

	cpu.mstatus = 0x1800;

	ysyx_23060336->clock = 0;
	ysyx_23060336->reset = 1;
	ysyx_23060336->eval();
}

static void trace_and_difftest(){
#ifdef CONFIG_DIFFTEST
	difftest_step();
#endif
}

static void renew_state(){
		npc_state.halt_ret = ysyx_23060336->io_halt_ret;
		npc_state.halt_pc  = ysyx_23060336->io_PC;

		cpu.pc = ysyx_23060336->io_PC;
		cpu.dnpc = ysyx_23060336->io_NPC;
		debug("renew pc = 0x%08x, dut_pc = 0x%08x, dnpc = 0x%08x, dut_dnpc = 0x%08x", ysyx_23060336->io_PC, cpu.pc, ysyx_23060336->io_NPC, cpu.dnpc);
		for(int i = 0; i < R; i++){
			cpu.gpr[i] = ysyx_23060336->rootp->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[i];
		}

		cpu.mepc    = ysyx_23060336->rootp->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory[MEPC];
		cpu.mtvec   = ysyx_23060336->rootp->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory[MTVEC];
		cpu.mcause  = ysyx_23060336->rootp->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory[MCAUSE];
		cpu.mstatus = ysyx_23060336->rootp->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory[MSTATUS];
}

void exec_once(){
		if(sim_time == 0) ysyx_23060336->reset = 1;
		else ysyx_23060336->reset = 0;

		ysyx_23060336->clock = !ysyx_23060336->clock;
		ysyx_23060336->eval();
		sim_time++;
#ifdef CONFIG_WAVE
		m_trace->dump(sim_time);
#endif
}

void execute(uint32_t n){
	for(; n > 0; n--){
		//debug("n = %ld",n);
		uint32_t einst = ysyx_23060336->io_inst;
		while(einst == ysyx_23060336->io_inst){
			einst = ysyx_23060336->io_inst;
			for(int j = 0; j < 2; j++){
				exec_once();
			}
		}
		renew_state();
		debug("dnpc = 0x%08x, pc = 0x%08x", ysyx_23060336->io_NPC, ysyx_23060336->io_PC);
		debug("inst = %08x", host_read(guest_to_host(ysyx_23060336->io_PC)));
#ifdef ITRACE
		char *p = cpu.logbuf;
		p += snprintf(p, sizeof(cpu.logbuf), FMT_WORD ":", cpu.pc);
		int ilen = cpu.dnpc - cpu.pc;
		int i;
		uint32_t ainst = pmem_read(cpu.pc);
		uint8_t *inst = (uint8_t *)&ainst;
		for(i = ilen - 1; i >= 0; i--){
			p += snprintf(p , 4, " %02x", inst[i]);
		}
		int ilen_max = 4;
		int space_len = ilen_max - ilen;
		if(space_len < 0) space_len = 0;
		space_len = space_len * 3 + 1;
		memset(p, ' ', space_len);
		p += space_len;

	//	void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
//		disassemble(p, cpu.logbuf + sizeof(cpu.logbuf) - p, cpu.pc, inst, ilen);

		if(g_print_step) { puts(cpu.logbuf);}
#endif

		debug("Success exec_once");
		if(npc_state.state != NPC_END){
			trace_and_difftest();
		}
		g_nr_guest_inst++;

		debug("Success difftest");
		if(npc_state.state != NPC_RUNNING) break;
		device_update();
	}
}

void assert_fall_msg() {
#ifdef CONFIG_WAVE
	m_trace->close();
#endif

	isa_reg_display();
	statistic();
	npc_state.state = NPC_ABORT;
}

void cpu_exec(uint32_t n){
	g_print_step = (n < MAX_INST_TO_PRINT);

	switch(npc_state.state){
		case NPC_END: case NPC_ABORT:
			printf("Program execution has ended. TO restart the program, exit riscv32e-npc and run again.\n");
			break;
		default: npc_state.state = NPC_RUNNING;
	}
		uint64_t timer_start = get_time();

		execute(n);

		uint64_t timer_end = get_time();
		g_timer += timer_end - timer_start;

		switch(npc_state.state){
			case NPC_RUNNING: npc_state.state = NPC_STOP; break;

			case NPC_END: case NPC_ABORT: 
				Log("npc: %s at pc = " FMT_WORD, 
				(npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :  
				(npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) : 
					ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))), 
				npc_state.halt_pc);
			case NPC_QUIT: statistic(); 
		}
}

static void welcome(){
	printf("Welcome to %s\n", ANSI_FMT("riscv32e-npc", ANSI_FG_GREEN));
}

int main(int argc, char **argv)
{
	Verilated::commandArgs(argc, argv); //设置仿真参数
																			
	if(argc < 2) {
     std::cerr << "Usage: " << argv[0] << " <program.bin>" << std::endl;
     return 1;
   }
	
#ifdef CONFIG_WAVE
	Verilated::traceEverOn(true); //开启波形跟踪

	ysyx_23060336->trace(m_trace, 5);
	m_trace->open("waveform.vcd");
#endif

	img_file = argv[1];
	//debug("filename = '%s'",img_file);
	
	init_npc();
	init_device();
	long img_size = load_program();
#ifdef CONFIG_DIFFTEST
	init_difftest(argv[2], img_size);
#endif

	welcome();
#ifdef CONFIG_BATCH
	cpu_exec(-1);
#else
	sdb_main();
#endif

#ifdef CONFIG_WAVE
	m_trace->close();
#endif
	ysyx_23060336->final();
	delete ysyx_23060336;

	return 0;
}




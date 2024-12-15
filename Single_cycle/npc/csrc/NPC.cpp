#include<svdpi.h>
#include<verilated.h>
#include<verilated_fst_c.h>
#include "VNPC.h"
#include "VNPC___024unit.h"
#include "VNPC___024root.h"

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

//void device_update();

static char *img_file = NULL;
static bool ret = false;

NPCState npc_state;
CPU_state cpu = {};

VNPC *NPC = new VNPC;
vluint64_t sim_time = 0;
#ifdef CONFIG_WAVE
VerilatedFstC *m_trace = new VerilatedFstC;
//VerilatedVcdC *m_trace = new VerilatedVcdC;
#endif

extern "C" void set_npc_state(int isebreak){
	difftest_skip_ref();
	if(pmem_read(isebreak) == 0x00100073){
		npc_state.state = NPC_END;
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
	cpu.reset = 1;
	for(int i = 0; i < R; i++){
		cpu.gpr[i] = 0;
	}

	cpu.mstatus = 0x1800;

	NPC->clock = 0;
	NPC->io_reset = 1;
	NPC->eval();
}

static void trace_and_difftest(){
#ifdef CONFIG_DIFFTEST
	difftest_step();
#endif
}

static void renew_state(){
		npc_state.halt_ret = NPC->io_halt_ret;
		npc_state.halt_pc  = NPC->io_PC;

		cpu.pc = NPC->io_PC;
		cpu.dnpc = NPC->io_NPC;
		debug("renew pc = 0x%08x, dut_pc = 0x%08x, dnpc = 0x%08x, dut_dnpc = 0x%08x", NPC->io_PC, cpu.pc, NPC->io_NPC, cpu.dnpc);
		for(int i = 0; i < R; i++){
			cpu.gpr[i] = NPC->rootp->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[i];
		}

		for(int i = 0; i < 4096; i++){
			cpu.csr[i] = NPC->rootp->NPC__DOT__idu__DOT__Csr_ext__DOT__Memory[i];
		}

		cpu.mepc    = NPC->rootp->NPC__DOT__idu__DOT__Csr_ext__DOT__Memory[MEPC];
		cpu.mtvec   = NPC->rootp->NPC__DOT__idu__DOT__Csr_ext__DOT__Memory[MTVEC];
		cpu.mcause  = NPC->rootp->NPC__DOT__idu__DOT__Csr_ext__DOT__Memory[MCAUSE];
		cpu.mstatus = NPC->rootp->NPC__DOT__idu__DOT__Csr_ext__DOT__Memory[MSTATUS];

#ifdef CONFIG_CTRACE
		if(cpu.mtvec) printf("********************\nmtvecc = 0x%08x\n********************\n", cpu.mtvec);
#endif

}

void exec_once(){
		if(sim_time == 0) NPC->io_reset = 1;
		else NPC->io_reset = 0;

		NPC->clock = !NPC->clock;
		NPC->eval();
		sim_time++;
#ifdef CONFIG_WAVE
		m_trace->dump(sim_time);
#endif
}

void execute(uint32_t n){
	for(; n > 0; n--){
		//debug("n = %ld",n);
		uint32_t einst = NPC->io_inst;
		while(einst == NPC->io_inst){
			einst = NPC->io_inst;
			for(int j = 0; j < 2; j++){
				exec_once();
			}
		}

		debug("dnpc = 0x%08x, pc = 0x%08x", NPC->io_NPC, NPC->io_PC);
		debug("inst = %08x", host_read(guest_to_host(NPC->io_PC)));
#ifdef ITRACE
#endif

#ifdef CONFIG_FTRACE
		  is_jal(host_read(guest_to_host(cpu.pc))); 
			is_jalr(host_read(guest_to_host(cpu.pc)));
#endif

		debug("Success exec_once");
		if(npc_state.state != NPC_END){
			trace_and_difftest();
		}
		renew_state();
		g_nr_guest_inst++;

#ifdef CONFIG_CTRACE
		if(cpu.pc == 0x80001350) {
			npc_state.state = NPC_STOP;
			printf("reach mtvec\n");
		}
#endif

		debug("Success difftest");
		if(npc_state.state != NPC_RUNNING) break;
		device_update();
	}
}

void assert_fall_msg() {
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

	NPC->trace(m_trace, 99);
	m_trace->open("waveform.fst");
#endif

	img_file = argv[1];
	//debug("filename = '%s'",img_file);
	
	init_npc();
	init_device();
	long img_size = load_program();

#ifdef CONFIG_DIFFTEST
	init_difftest(argv[2], img_size);
#endif

#ifdef CONFIG_FTRACE
	init_ftrace(argv[3]);
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
	NPC->final();
	delete NPC;

	return 0;
}




#include<svdpi.h>
#include<verilated.h>
#include<verilated_fst_c.h>

#include <fstream>
#include <iostream>

#include <lightsss.h>
#include <cpu.h>
#include <pmem.h>
#include <sdb.h>
#include <counter.h>
#include <map.h>

class TOP_NAME;
static TOP_NAME *dut = NULL;

uint64_t cur_inst_cycle = 0;
uint64_t g_nr_guest_clk = 0;
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0;
static uint64_t timer_start = 0;
static uint64_t timer_end = 0;
static bool			ret = false;
bool ebreak_done = false;

bool force_dump_wave = false;
uint32_t inst_last = 0;
uint32_t INST_WAIT = 10;

uint32_t pipeline_pc, pipeline_dnpc;
bool pipeline_valid;

IFDEF(CONFIG_LIGHTSSS, LightSSS *lightsss = NULL; bool have_initial_fork = false;)

NPCState npc_state;
CPU_state cpu = {};

#ifdef CONFIG_SOC
#include <nvboard.h>
#include "VysyxSoCFull.h"
#include "VysyxSoCFull___024unit.h"
#include "VysyxSoCFull___024root.h"
#endif

#ifdef CONFIG_NPC
#include "Vysyx_23060336.h"
#include "Vysyx_23060336___024unit.h"
#include "Vysyx_23060336___024root.h"
#endif

static vluint64_t sim_time = 0;
VerilatedFstC *m_trace = NULL;
IFDEF(CONFIG_PCOUNTER, std::ofstream output_file("/home/romeo/ysyx-workbench/npc/performance_trace.csv", std::ios::out | std::ios::app));

#ifdef CONFIG_SOC 
void nvboard_bind_all_pins(VysyxSoCFull* top);
#endif

#ifdef CONFIG_LIGHTSSS
inline bool is_fork_child() {
	return lightsss->is_child();
}
#endif

void wave_init() {
#if defined(CONFIG_LIGHTSSS) || defined(CONFIG_WAVE)
	Verilated::traceEverOn(true); //开启波形跟踪
	m_trace = new VerilatedFstC;
	dut->trace(m_trace, 99);
	m_trace->open("build/waveform.fst");
	force_dump_wave = true;
#endif
}

void fork_child_init() {
	FORK_PRINTF("the oldest checkpoint start to dump wave...\n")
	wave_init();
}

static void statistic(){
	g_nr_guest_inst++;
	Log("host time spent = %ld us, %ld s", g_timer, g_timer / 1000000);
	Log("total guest instructions = %ld", g_nr_guest_inst);
	Log("total guest clock = %ld", g_nr_guest_clk);
	if(g_timer > 0) {
		Log("simulation IPC = %.8f inst/clk ", (float)g_nr_guest_inst / g_nr_guest_clk);
		Log("simulation frequency = %ld inst/s", g_nr_guest_inst * 1000000 / g_timer);
		Log("simulation frequency = %ld clk/s", g_nr_guest_clk * 1000000 / g_timer);
	} else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

static void check_state(){
		switch(npc_state.state){
			case NPC_RUNNING: npc_state.state = NPC_STOP; break;
			case NPC_ABORT: case NPC_END:  
				Log("npc: %s at pc = " FMT_WORD, 
				(npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :  
				(npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) : 
					ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))), 
				npc_state.halt_pc);
			case NPC_QUIT: 
				timer_end = get_time();
				g_timer += timer_end - timer_start;
				statistic();
				if(force_dump_wave && m_trace) {
					m_trace->close();
					delete m_trace;
					m_trace = NULL;
				}
		}
#ifdef CONFIG_LIGHTSSS 
	if(!is_fork_child()) {
		bool need_wakeup = npc_state.state == NPC_ABORT;
		if(need_wakeup) {
			//printf(ANSI_FMT("Lightsss wakeup_child\n", ANSI_FG_GREEN));
			lightsss->wakeup_child(g_nr_guest_clk);
		} else {
			lightsss->do_clear();
		}
		delete lightsss;
		lightsss = NULL;
	}
#endif
		
}

extern "C" void set_npc_state(int ebreak, uint32_t wbu_clk_h, uint32_t wbu_clk_l){
	IFDEF(CONFIG_COUNTER, performance_count(ebreak));

	ebreak_done = ebreak;
	if(ebreak){
		npc_state.state = NPC_END;
		IFDEF(CONFIG_PCOUNTER, output_file.close());

		dut->final();
		//printf(ANSI_FMT("Ebreak done\n", ANSI_FG_GREEN));
		return;
	}
}

extern "C" void pipeline_state(uint32_t pc, uint32_t dnpc, bool valid){
	pipeline_pc    = pc;
	pipeline_dnpc  = dnpc;
	pipeline_valid = valid;
}

static long load_program(char * img,uint32_t addr) {
	if(img == NULL){
		Log("No image is given.");
		return 4096;
	} else{
		debug("img = %s", img);
	}

	FILE *fp = fopen(img, "rb");
	debug("fp = %p, img = %s", fp, img);
	if(fp == NULL){
		printf("Can not open '%s'", img);
		assert(1);
	}

	fseek(fp, 0, SEEK_END);
	long size = ftell(fp);

	Log("Guest: The image is %s, size = %ld, addr = 0x%08x, fp = 0x%08x", img, size, addr, fp);

	fseek(fp, 0, SEEK_SET);
	int ret = fread(guest_to_host(addr), size, 1, fp);
	assert(ret == 1);

	fclose(fp);
	return size;
}

static void renew_pc(){
#ifdef CONFIG_SOC
		npc_state.halt_ret = dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[10];
#endif

#ifdef CONFIG_NPC
		npc_state.halt_ret = dut->rootp->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[10];
#endif

		//printf("renew_pc: cpu.pc = 0x%08x, cpu.dnpc 0x%08x, s_pc = 0x%08x, s_dnpc 0x%08x\n", cpu.dnpc, cpu.dnpc, pipeline_pc, pipeline_dnpc);
		npc_state.halt_pc  = pipeline_pc;
		cpu.pc    = pipeline_pc;
		cpu.dnpc  = pipeline_dnpc;
		cpu.valid = pipeline_valid;
}

static void renew_reg(){
#ifdef CONFIG_SOC
		for(int i = 0; i < R; i++){
			cpu.gpr[i] = dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[i];
		}

		cpu.mepc    = dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mepc;
		cpu.mtvec   = dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mtvec;
		cpu.mcause  = dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mcause;
		cpu.mstatus = dut->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mstatus;
#endif

#ifdef CONFIG_NPC
		for(int i = 0; i < R; i++){
			cpu.gpr[i] = dut->rootp->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[i];
		}

		cpu.mepc    = dut->rootp->ysyx_23060336__DOT__csr__DOT__mepc;
		cpu.mtvec   = dut->rootp->ysyx_23060336__DOT__csr__DOT__mtvec;
		cpu.mcause  = dut->rootp->ysyx_23060336__DOT__csr__DOT__mcause;
		cpu.mstatus = dut->rootp->ysyx_23060336__DOT__csr__DOT__mstatus;
#endif
}

static void init_npc(){
	if(dut == NULL) {
		dut = new TOP_NAME;
	}

	for(int i = 0; i < R; i++){
		cpu.gpr[i] = 0;
	}

	dut->clock = 0;
	dut->reset = 1;
	dut->eval();

	// init cpu.pc
	IFDEF(CONFIG_SOC, cpu.pc = 0x30000000);
	IFDEF(CONFIG_NPC, cpu.pc = 0x80000000);

	cpu.mstatus   = 0x1800;
	cpu.mvendorid = 0x79737978;
	cpu.marchid   = 0x015fdf70;
}

static void trace_and_difftest(){
	if(!(cpu.reset || (cpu.pc == cpu.dnpc) || (cpu.pc == 0) || (cpu.dnpc == 0) || !cpu.valid)) {
		// ftrace
		IFDEF(CONFIG_FTRACE, ftrace(get_inst(cpu.pc)));
		// difftest
		IFDEF(CONFIG_DIFFTEST,  difftest_step()); 
		// exec once inst
		g_nr_guest_inst++;
	}
}

void sim_once(){
		if(sim_time >= 0 && sim_time <= 21) dut->reset = 1;
		else dut->reset = 0;

		dut->clock = !dut->clock; dut->eval();

		sim_time++;
#if defined(CONFIG_LIGHTSSS) || defined(CONFIG_WAVE)
		if(force_dump_wave) {
			m_trace->dump(sim_time);
		}
#endif
}

void exec_once(){
		sim_once(); // clock 1 -> 0
		renew_reg();
		if(npc_state.state != NPC_END) trace_and_difftest();
		sim_once(); // clock 0 -> 1
		renew_pc();
}

void execute(uint64_t n){
	for(; n > 0; n--){

#ifdef CONFIG_LIGHTSSS
		if((g_nr_guest_inst - inst_last == INST_WAIT || !have_initial_fork) && !is_fork_child()) {
			have_initial_fork = true;
			//printf(ANSI_FMT("Lightsss do_fork\n", ANSI_FG_GREEN));
			switch(lightsss->do_fork()) {
				case FORK_ERROR: printf(ANSI_FMT("Lightsss error\n", ANSI_FG_RED)); printf(" \n"); return;
				case FORK_CHILD: printf(ANSI_FMT("Lightsss fork_child_init\n", ANSI_FG_GREEN)); printf(" \n"); fork_child_init();
				default: break;
			}
			inst_last = g_nr_guest_inst;
		}
#endif

		exec_once();

		IFDEF(CONFIG_SOC, nvboard_update());
		g_nr_guest_clk++;

#ifdef CONFIG_LIGHTSSS
		if (is_fork_child() && g_nr_guest_clk != 0) {
			if (g_nr_guest_clk == lightsss->get_end_cycles()) {
				FORK_PRINTF("checkpoint has reached the main process abort point: %lu\n", g_nr_guest_clk)
			}
		}
#endif

		if(cpu.pc == cpu.dnpc) cur_inst_cycle++;
		else cur_inst_cycle = 0;

		if(cur_inst_cycle > 0xff) {
			Log(ANSI_FMT("Too many cycles for one instruction, maybe a bug.", ANSI_FG_RED));
			npc_state.state = NPC_ABORT;
			break;
		}

		if(npc_state.state != NPC_RUNNING) break;

		device_update();
	}
}

void assert_fall_msg() {
	isa_reg_display();
	statistic();
	npc_state.state = NPC_ABORT;
	printf("assert fall msg\n");
}

void cpu_exec(uint64_t n){

	switch(npc_state.state){
		case NPC_END: case NPC_ABORT:
			printf("Program execution has ended. TO restart the program, exit riscv32e-npc and run again.\n");
			break;
		default: npc_state.state = NPC_RUNNING;
	}
		timer_start = get_time();

		execute(n);

		timer_end = get_time();
		g_timer += timer_end - timer_start;

		check_state();
}

static void welcome(){
	printf("Welcome to %s\n", ANSI_FMT(
#ifdef CONFIG_SOC 
				"riscv32e-ysyxsoc"
#else 
				"riscv32e-npc"
#endif
				, ANSI_FG_GREEN));
}

static int is_exit_status_bad() {
	int good = (npc_state.state == NPC_END && npc_state.halt_ret == 0) || (npc_state.state == NPC_QUIT);
	return !good;
}

int main(int argc, char **argv)
{
	Verilated::commandArgs(argc, argv); //设置仿真参数
																			
	init_npc();
	if(argc < 2) {
     std::cerr << "Usage: " << argv[0] << " <program.bin>" << std::endl;
     return 1;
  }

	IFDEF(CONFIG_LIGHTSSS, lightsss = new LightSSS);
	
#if defined(CONFIG_WAVE) || !defined(CONFIG_LIGHTSSS)
	wave_init();
#endif

#ifdef CONFIG_SOC 
	nvboard_bind_all_pins(dut);
	nvboard_init();
	long img_size = load_program(argv[1], MBASE);
#endif

	IFDEF(CONFIG_FTRACE, init_ftrace(argv[3]));
	IFDEF(CONFIG_NPC, long img_size = load_program(argv[1], 0x80000000));
	IFDEF(CONFIG_DEVICE, init_device());
	IFDEF(CONFIG_DIFFTEST, init_difftest(argv[2], img_size));

	welcome();

#ifdef CONFIG_BATCH
	cpu_exec(-1);
	//printf(ANSI_FMT("cpu exec end\n", ANSI_FG_RED));
#else
	sdb_main();
#endif

	IFDEF(CONFIG_PCOUNTER, output_file.close());
	dut->final();
	delete dut;

	return is_exit_status_bad();
}


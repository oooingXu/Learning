#include<svdpi.h>
#include<verilated.h>
#include<verilated_fst_c.h>
#include "VysyxSoCFull.h"
#include "VysyxSoCFull___024unit.h"
#include "VysyxSoCFull___024root.h"

#include <fstream>
#include <iostream>
#include <vector>

#include <dlfcn.h>
#include <nvboard.h>

#include "include/common.h"
#include "include/utils.h"
#include "include/debug.h"
#include "cpu/cpu.h"
#include "sdb/sdb.h"
#include "memory/pmem.h"
#include "device/map.h"

#define NR_WP 32
#define R 32

#define MEPC		0x341
#define MTVEC		0x305
#define MCAUSE  0x342
#define MSTATUS 0x300

static uint64_t g_nr_guest_inst = 0;
static uint64_t g_nr_guest_clk = 0;
static uint64_t g_timer = 0;
static uint64_t timer_start = 0;
static uint64_t timer_end = 0;
static bool			ret = false;

NPCState npc_state;
CPU_state cpu = {};

static VysyxSoCFull *ysyxSoCFull = new VysyxSoCFull;
static vluint64_t sim_time = 0;
IFDEF(CONFIG_WAVE, VerilatedFstC *m_trace = new VerilatedFstC);

void nvboard_bind_all_pins(VysyxSoCFull* top);

static void statistic(){
	g_nr_guest_inst++;
	Log("host time spent = %ld us, %ld s", g_timer, g_timer / 1000000);
	Log("total guest instructions = %ld", g_nr_guest_inst);
	Log("total guest clock = %ld", g_nr_guest_clk);
	if(g_timer > 0) {
		Log("simulation IPC = %ld clk/inst ", g_nr_guest_clk / g_nr_guest_inst );
		Log("simulation frequency = %ld inst/s", g_nr_guest_inst * 1000000 / g_timer);
	} else Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}


static void check_state(){
		switch(npc_state.state){
			case NPC_RUNNING: npc_state.state = NPC_STOP; break;

			case NPC_END: case NPC_ABORT: 
				Log("npc: %s at pc = " FMT_WORD, 
				(npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) :  
				(npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) : 
					ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))), 
				npc_state.halt_pc);
			case NPC_QUIT: 
				timer_end = get_time();
				g_timer += timer_end - timer_start;
				statistic();
		}
}

static void performance_count(uint32_t ifu_count, uint32_t lsu_count, uint32_t i_type_count, uint32_t s_type_count, uint32_t u_type_count, uint32_t b_type_count, uint32_t r_type_count, uint32_t j_type_count, uint32_t c_type_count, uint32_t w_type_count, uint64_t ifu_clk_count, uint64_t lsu_clk_count) {
	  float lsu_ratio		 = (float)lsu_count / ifu_count * 100;
	  float i_type_ratio = (float)i_type_count / ifu_count * 100;
    float s_type_ratio = (float)s_type_count / ifu_count * 100;
    float u_type_ratio = (float)u_type_count / ifu_count * 100;
    float b_type_ratio = (float)b_type_count / ifu_count * 100;
    float r_type_ratio = (float)r_type_count / ifu_count * 100;
    float j_type_ratio = (float)j_type_count / ifu_count * 100;
    float c_type_ratio = (float)c_type_count / ifu_count * 100;
    float w_type_ratio = (float)w_type_count / ifu_count * 100;

    // 计算平均执行周期
    float ifu_avg_cycles_inst = (float)ifu_clk_count / ifu_count;
    float lsu_avg_cycles_inst = (float)lsu_clk_count / lsu_count;

		// 计算平均占用周期
		float ifu_avg_cycles = (float)ifu_clk_count / g_nr_guest_clk * 100;
		float lsu_avg_cycles = (float)lsu_clk_count / g_nr_guest_clk * 100;
		printf("lsu clk = %ld, total clk = %ld\n", lsu_clk_count, g_nr_guest_clk);

    // 打印信息
		printf("Performance  counter\n");
    printf("ifu指令  : %-8u, 平均周期: %.2f, 时钟占比: %.2f%\n", ifu_count, ifu_avg_cycles_inst, ifu_avg_cycles);
    printf("lsu指令  : %-8u, 指令占比: %.2f%%, 平均周期: %.2f, 时钟占比: %.2f%\n", lsu_count, lsu_ratio, lsu_avg_cycles_inst, lsu_avg_cycles);
    printf("I类型指令: %-8u, 指令占比: %.2f%%\n", i_type_count, i_type_ratio);
    printf("S类型指令: %-8u, 指令占比: %.2f%%\n", s_type_count, s_type_ratio);
    printf("U类型指令: %-8u, 指令占比: %.2f%%\n", u_type_count, u_type_ratio);
    printf("B类型指令: %-8u, 指令占比: %.2f%%\n", b_type_count, b_type_ratio);
    printf("R类型指令: %-8u, 指令占比: %.2f%%\n", r_type_count, r_type_ratio);
    printf("J类型指令: %-8u, 指令占比: %.2f%%\n", j_type_count, j_type_ratio);
    printf("C类型指令: %-8u, 指令占比: %.2f%%\n", c_type_count, c_type_ratio);
    printf("错误类型指令: %-8u, 指令占比: %.2f%%\n", w_type_count, w_type_ratio);
}

extern "C" void set_npc_state(int ebreak, uint32_t ifu_count, uint32_t lsu_count, uint32_t i_type_count, uint32_t s_type_count, uint32_t u_type_count, uint32_t b_type_count, uint32_t r_type_count, uint32_t j_type_count, uint32_t c_type_count, uint32_t w_type_count, uint32_t ifu_clk_count_h, uint32_t ifu_clk_count_l, uint32_t lsu_clk_count_h, uint32_t lsu_clk_count_l){
	if(ebreak){
		npc_state.state = NPC_END;
		check_state();
		IFDEF(CONFIG_COUNTER, performance_count(ifu_count, lsu_count, i_type_count, s_type_count, u_type_count, b_type_count, r_type_count, j_type_count, c_type_count, w_type_count, ifu_clk_count_h << 32 | ifu_clk_count_l, lsu_clk_count_h << 32 | lsu_clk_count_l));

		IFDEF(CONFIG_WAVE, m_trace->close());

		ysyxSoCFull->final();
		exit(0);
	}
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

	fseek(fp, 0, SEEK_SET);
	Log("Guest: The image is %s, size = %ld", img, size);
	int ret = fread(guest_to_host(addr), size, 1, fp);
	assert(ret == 1);

	fclose(fp);
	return size;
}

static void renew_pc(){
		npc_state.halt_ret = ysyxSoCFull->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[10];
		npc_state.halt_pc  = ysyxSoCFull->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__PC;;

		cpu.pc   = ysyxSoCFull->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__PC;
		cpu.dnpc = ysyxSoCFull->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_wbu_io_dnpc;
		cpu.valid= ysyxSoCFull->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__state == 5;
}

static void renew_reg(){
		for(int i = 0; i < R; i++){
			cpu.gpr[i] = ysyxSoCFull->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[i];
		}

		for(int i = 0; i < C; i++){
			cpu.csr[i] = ysyxSoCFull->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory[i];
		}

		cpu.mepc    = ysyxSoCFull->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory[MEPC];
		cpu.mtvec   = ysyxSoCFull->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory[MTVEC];
		cpu.mcause  = ysyxSoCFull->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory[MCAUSE];
		cpu.mstatus = ysyxSoCFull->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory[MSTATUS];
}

static void init_npc(){
	cpu.pc = RESET_VECTOR;
	for(int i = 0; i < R; i++){
		cpu.gpr[i] = 0;
	}

	ysyxSoCFull->clock = 0;
	ysyxSoCFull->reset = 1;
	ysyxSoCFull->eval();
	cpu.csr[0x300] = 0x1800;
	cpu.csr[0xf11] = 0x79737978;
	cpu.csr[0xf12] = 0x015fdf70;
}

static void trace_and_difftest(){
	if(!(cpu.reset || (cpu.pc == cpu.dnpc) || (cpu.pc == 0) || (cpu.dnpc == 0) || !cpu.valid)) {
		IFDEF(CONFIG_DIFFTEST,  difftest_step()); 
		g_nr_guest_inst++;
	}
}

void sim_once(){
		if(sim_time >= 0 && sim_time <= 21) ysyxSoCFull->reset = 1;
		else ysyxSoCFull->reset = 0;

		ysyxSoCFull->clock = !ysyxSoCFull->clock; ysyxSoCFull->eval();
		sim_time++;
		IFDEF(CONFIG_WAVE, m_trace->dump(sim_time));
}

void exec_once(){
		sim_once(); // clock 1 -> 0
		renew_reg();
		if(npc_state.state != NPC_END){
			trace_and_difftest();
		}
		sim_once(); // clock 0 -> 1
		renew_pc();
}

void execute(uint32_t n){
	for(; n > 0; n--){
		exec_once();
		nvboard_update();
		g_nr_guest_clk++;

		if(npc_state.state != NPC_RUNNING) break;

		device_update();
	}
}

void assert_fall_msg() {
	IFDEF(CONFIG_WAVE, m_trace->close());

	isa_reg_display();
	statistic();
	npc_state.state = NPC_ABORT;
}

void cpu_exec(uint32_t n){

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
	printf("Welcome to %s\n", ANSI_FMT("riscv32e-npc", ANSI_FG_GREEN));
}

static int is_exit_status_bad() {
	int good = (npc_state.state == NPC_END && npc_state.halt_ret == 0) || (npc_state.state == NPC_QUIT);
	return !good;
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
	ysyxSoCFull->trace(m_trace, 99);
	m_trace->open("waveform.fst");
#endif

	char * img_file = argv[1];
	
	nvboard_bind_all_pins(ysyxSoCFull);
	nvboard_init();

	init_npc();
	IFDEF(CONFIG_DEVICE, init_device());
	long img_size = load_program(img_file, MBASE);
	IFDEF(CONFIG_DIFFTEST, init_difftest(argv[2], img_size));

	welcome();
#ifdef CONFIG_BATCH
	cpu_exec(-1);
#else
	sdb_main();
#endif

	IFDEF(CONFIG_WAVE, m_trace->close());
	ysyxSoCFull->final();
	delete ysyxSoCFull;

	return is_exit_status_bad();
}




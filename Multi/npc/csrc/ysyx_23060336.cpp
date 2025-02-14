#include<svdpi.h>
#include<verilated.h>
#include<verilated_fst_c.h>

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

#ifdef CONFIG_SOC 
class VysyxSoCFull;
static VysyxSoCFull *ysyxSoCFull = NULL;
#endif

#ifdef CONFIG_NPC 
class Vysyx_23060336;
static Vysyx_23060336 *ysyx_23060336 = NULL;
#endif

#define NR_WP 32
#define R 16

static uint64_t g_nr_guest_inst = 0;
static uint64_t g_nr_guest_clk = 0;
static uint64_t g_timer = 0;
static uint64_t timer_start = 0;
static uint64_t timer_end = 0;
static bool			ret = false;

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
IFDEF(CONFIG_WAVE, VerilatedFstC *m_trace = new VerilatedFstC);
IFDEF(CONFIG_PCOUNTER, std::ofstream output_file("/home/romeo/ysyx-workbench/npc/performance_trace.csv", std::ios::out | std::ios::app));

#ifdef CONFIG_SOC 
void nvboard_bind_all_pins(VysyxSoCFull* top);
#endif

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

static void performance_count(bool ebreak, uint32_t ifu_count, uint32_t lsu_count, uint32_t i_type_count, uint32_t s_type_count, uint32_t u_type_count, uint32_t b_type_count, uint32_t r_type_count, uint32_t j_type_count, uint32_t c_type_count, uint32_t w_type_count, uint64_t ifu_clk_count, uint64_t lsu_clk_count, uint64_t ifu_psram_clk, uint64_t ifu_flash_clk, uint32_t i_clk, uint32_t s_clk, uint32_t u_clk, uint32_t b_clk, uint32_t r_clk, uint32_t j_clk, uint32_t c_clk, uint32_t w_clk, uint64_t backend_clk, uint32_t ifu_flash_count, uint32_t ifu_psram_count) {

#ifdef CONFIG_PCOUNTER
	output_file << g_nr_guest_clk << ","
							<< ifu_clk_count  << ","
							<< backend_clk		<< ","
							<< ifu_flash_clk	<< ","
							<< ifu_psram_clk	<< ","
							<< i_clk					<< ","
							<< b_clk					<< ","
							<< r_clk					<< ","
							<< j_clk					<< ","
							<< c_clk					<< "\n";
#endif

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
		float flash_avg						= (float)ifu_flash_clk / ifu_flash_count;
		float psram_avg						= (float)ifu_psram_clk / ifu_psram_count;

		// 计算平均占用周期
		float ifu_avg_cycles = (float)ifu_clk_count / g_nr_guest_clk * 100;
		float ifu_psram_avg_cycles = (float)ifu_psram_clk / g_nr_guest_clk * 100;
		float ifu_flash_avg_cycles = (float)ifu_flash_clk / g_nr_guest_clk * 100;
		float lsu_avg_cycles = (float)lsu_clk_count / g_nr_guest_clk * 100;
		float i_avg_cycles = (float)i_clk / g_nr_guest_clk * 100;
		float s_avg_cycles = (float)s_clk / g_nr_guest_clk * 100;
		float u_avg_cycles = (float)u_clk / g_nr_guest_clk * 100;
		float b_avg_cycles = (float)b_clk / g_nr_guest_clk * 100;
		float r_avg_cycles = (float)r_clk / g_nr_guest_clk * 100;
		float j_avg_cycles = (float)j_clk / g_nr_guest_clk * 100;
		float c_avg_cycles = (float)c_clk / g_nr_guest_clk * 100;
		float w_avg_cycles = (float)w_clk / g_nr_guest_clk * 100;

		// 计算前后端平均占用的周期
		float backend_avg_cycles  = (float)backend_clk / g_nr_guest_clk * 100; 
		float frontend_avg_cycles = (float)ifu_clk_count / g_nr_guest_clk * 100; 

    // 打印信息
		if(ebreak) {
			printf("Performance  counter\n");
			printf("前端时钟占比: %.2f%, 后端时钟占比: %.2f%\n", frontend_avg_cycles, backend_avg_cycles);
    	printf("ifu指令  : %-8u, 平均周期: %.2f, 时钟占比: %.2f%, flash时钟占比: %.2f%, 平均周期: %.2f, psram时钟占比: %.2f%, 平均周期: %.2f\n", ifu_count, ifu_avg_cycles_inst, ifu_avg_cycles, ifu_flash_avg_cycles, flash_avg,  ifu_psram_avg_cycles, psram_avg);
    	printf("lsu指令  : %-8u, 指令占比: %.2f%, 平均周期: %.2f, 时钟占比: %.2f%\n", lsu_count, lsu_ratio, lsu_avg_cycles_inst, lsu_avg_cycles);
    	printf("I类型指令: %-8u, 指令占比: %.2f%, 时钟占比: %.2f%\n", i_type_count, i_type_ratio, i_avg_cycles);
    	printf("S类型指令: %-8u, 指令占比: %.2f%, 时钟占比: %.2f%\n", s_type_count, s_type_ratio, s_avg_cycles);
    	printf("U类型指令: %-8u, 指令占比: %.2f%, 时钟占比: %.2f%\n", u_type_count, u_type_ratio, u_avg_cycles);
    	printf("B类型指令: %-8u, 指令占比: %.2f%, 时钟占比: %.2f%\n", b_type_count, b_type_ratio, b_avg_cycles);
    	printf("R类型指令: %-8u, 指令占比: %.2f%, 时钟占比: %.2f%\n", r_type_count, r_type_ratio, r_avg_cycles);
    	printf("J类型指令: %-8u, 指令占比: %.2f%, 时钟占比: %.2f%\n", j_type_count, j_type_ratio, j_avg_cycles);
    	printf("C类型指令: %-8u, 指令占比: %.2f%, 时钟占比: %.2f%\n", c_type_count, c_type_ratio, c_avg_cycles);
    	printf("错误类型指令: %-6u, 指令占比: %.2f%, 时钟占比: %.2f%\n", w_type_count, w_type_ratio, w_avg_cycles);
		}
}

extern "C" void set_npc_state(int ebreak, uint32_t ifu_count, uint32_t lsu_count, uint32_t i_type_count, uint32_t s_type_count, uint32_t u_type_count, uint32_t b_type_count, uint32_t r_type_count, uint32_t j_type_count, uint32_t c_type_count, uint32_t w_type_count, uint32_t ifu_clk_count_h, uint32_t ifu_clk_count_l, uint32_t lsu_clk_count_h, uint32_t lsu_clk_count_l, uint32_t ifu_psram_clk_h, uint32_t ifu_psram_clk_l, uint32_t ifu_flash_clk_h, uint32_t ifu_flash_clk_l, uint32_t i_clk, uint32_t s_clk, uint32_t u_clk, uint32_t b_clk, uint32_t r_clk, uint32_t j_clk, uint32_t c_clk, uint32_t w_clk, uint32_t backend_clk_h, uint32_t backend_clk_l, uint32_t ifu_flash_count, uint32_t ifu_psram_count){
	IFDEF(CONFIG_COUNTER, performance_count(ebreak, ifu_count, lsu_count, i_type_count, s_type_count, u_type_count, b_type_count, r_type_count, j_type_count, c_type_count, w_type_count, ifu_clk_count_h << 32 | ifu_clk_count_l, lsu_clk_count_h << 32 | lsu_clk_count_l, ifu_psram_clk_h << 32 | ifu_psram_clk_l, ifu_flash_clk_h << 32 | ifu_flash_clk_l, i_clk, s_clk, u_clk, b_clk, r_clk, j_clk, c_clk, w_clk, backend_clk_h << 32 | backend_clk_l, ifu_flash_count, ifu_psram_count));
	if(ebreak){
		npc_state.state = NPC_END;
		check_state();

		IFDEF(CONFIG_WAVE, m_trace->close());
		IFDEF(CONFIG_PCOUNTER, output_file.close());

		IFDEF(CONFIG_SOC, ysyxSoCFull->final());
		IFDEF(CONFIG_NPC, ysyx_23060336->final());
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

	Log("Guest: The image is %s, size = %ld, addr = 0x%08x, fp = 0x%08x", img, size, addr, fp);

	fseek(fp, 0, SEEK_SET);
	int ret = fread(guest_to_host(addr), size, 1, fp);
	assert(ret == 1);

	fclose(fp);
	return size;
}

static void renew_pc(){
#ifdef CONFIG_SOC
		npc_state.halt_ret = ysyxSoCFull->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[10];
		npc_state.halt_pc  = ysyxSoCFull->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__PC;;

		cpu.pc   = ysyxSoCFull->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__PC;
		cpu.dnpc = ysyxSoCFull->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_wbu_io_dnpc;
		cpu.valid= ysyxSoCFull->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__state == 5;
#endif

#ifdef CONFIG_NPC
		npc_state.halt_ret = ysyx_23060336->rootp->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[10];
		npc_state.halt_pc  = ysyx_23060336->rootp->ysyx_23060336__DOT__ifu__DOT__PC;;

		cpu.pc    = ysyx_23060336->rootp->ysyx_23060336__DOT__ifu__DOT__PC;
		cpu.dnpc  = ysyx_23060336->rootp->ysyx_23060336__DOT___lsu_wbu_io_dnpc;
		cpu.valid = ysyx_23060336->rootp->ysyx_23060336__DOT__lsu_wbu__DOT__state == 5;
#endif
}

static void renew_reg(){
#ifdef CONFIG_SOC
		for(int i = 0; i < R; i++){
			cpu.gpr[i] = ysyxSoCFull->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[i];
		}

		cpu.mepc    = ysyxSoCFull->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mepc;
		cpu.mtvec   = ysyxSoCFull->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mtvec;
		cpu.mcause  = ysyxSoCFull->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mcause;
		cpu.mstatus = ysyxSoCFull->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__mstatus;
#endif

#ifdef CONFIG_NPC
		for(int i = 0; i < R; i++){
			cpu.gpr[i] = ysyx_23060336->rootp->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[i];
		}

		cpu.mepc    = ysyx_23060336->rootp->ysyx_23060336__DOT__csr__DOT__mepc;
		cpu.mtvec   = ysyx_23060336->rootp->ysyx_23060336__DOT__csr__DOT__mtvec;
		cpu.mcause  = ysyx_23060336->rootp->ysyx_23060336__DOT__csr__DOT__mcause;
		cpu.mstatus = ysyx_23060336->rootp->ysyx_23060336__DOT__csr__DOT__mstatus;
#endif
}

static void init_npc(){
#ifdef CONFIG_SOC
	if(ysyxSoCFull == NULL) {
		ysyxSoCFull = new VysyxSoCFull;
	}
#endif

#ifdef CONFIG_NPC
	if(ysyx_23060336 == NULL) {
		ysyx_23060336 = new Vysyx_23060336;
	}
#endif

	for(int i = 0; i < R; i++){
		cpu.gpr[i] = 0;
	}

#ifdef CONFIG_SOC
	ysyxSoCFull->clock = 0;
	ysyxSoCFull->reset = 1;
	ysyxSoCFull->eval();
	cpu.pc = 0x30000000;
#endif

#ifdef CONFIG_NPC
	ysyx_23060336->clock = 0;
	ysyx_23060336->reset = 1;
	ysyx_23060336->eval();
	cpu.pc = 0x80000000;
#endif

	cpu.mstatus = 0x1800;
	cpu.mvendorid = 0x79737978;
	cpu.marchid = 0x015fdf70;
}

static void trace_and_difftest(){
	if(!(cpu.reset || (cpu.pc == cpu.dnpc) || (cpu.pc == 0) || (cpu.dnpc == 0) || !cpu.valid)) {
		IFDEF(CONFIG_DIFFTEST,  difftest_step()); 
		g_nr_guest_inst++;
	}
}

void sim_once(){
#ifdef CONFIG_SOC
		if(sim_time >= 0 && sim_time <= 21) ysyxSoCFull->reset = 1;
		else ysyxSoCFull->reset = 0;

		ysyxSoCFull->clock = !ysyxSoCFull->clock; ysyxSoCFull->eval();
#endif

#ifdef CONFIG_NPC
		if(sim_time >= 0 && sim_time <= 21) ysyx_23060336->reset = 1;
		else ysyx_23060336->reset = 0;

		ysyx_23060336->clock = !ysyx_23060336->clock; ysyx_23060336->eval();
#endif
		sim_time++;
		IFDEF(CONFIG_WAVE, m_trace->dump(sim_time));
}

void exec_once(){
		sim_once(); // clock 1 -> 0
		renew_reg();
		if(npc_state.state != NPC_END) trace_and_difftest();
		sim_once(); // clock 0 -> 1
		renew_pc();
}

void execute(uint32_t n){
	for(; n > 0; n--){
		exec_once();
		IFDEF(CONFIG_SOC, nvboard_update());
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
	
#ifdef CONFIG_WAVE
	Verilated::traceEverOn(true); //开启波形跟踪
	IFDEF(CONFIG_SOC, ysyxSoCFull->trace(m_trace, 99));
	IFDEF(CONFIG_NPC, ysyx_23060336->trace(m_trace, 99));
	m_trace->open("waveform.fst");
#endif

	char * img_file = argv[1];
	
#ifdef CONFIG_SOC 
	nvboard_bind_all_pins(ysyxSoCFull);
	nvboard_init();
#endif

#ifdef CONFIG_SOC
	long img_size = load_program(img_file, MBASE);
#endif

#ifdef CONFIG_NPC
	long img_size = load_program(img_file, 0x80000000);
#endif

	IFDEF(CONFIG_DEVICE, init_device());
	IFDEF(CONFIG_DIFFTEST, init_difftest(argv[2], img_size));

	welcome();
#ifdef CONFIG_BATCH
	cpu_exec(-1);
#else
	sdb_main();
#endif

	IFDEF(CONFIG_WAVE, m_trace->close());
	IFDEF(CONFIG_PCOUNTER, output_file.close());
#ifdef CONFIG_SOC
	ysyxSoCFull->final();
	delete ysyxSoCFull;
#endif

#ifdef CONFIG_NPC
	ysyx_23060336->final();
	delete ysyx_23060336;
#endif


	return is_exit_status_bad();
}




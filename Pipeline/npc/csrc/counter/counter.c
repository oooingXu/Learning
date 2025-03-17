#include <counter.h>
#include <stdio.h>

uint64_t access_time; 
uint64_t miss_penalty;
uint64_t AMAT;
float p;

uint32_t ifu_count;
uint32_t ifu_flash_count, ifu_psram_count, branch_pre_fail;
uint64_t ifu_clk_count, ifu_psram_clk, ifu_flash_clk;
uint64_t idu_clk, raw_data_clk;
uint64_t exu_clk, raw_control_clk;
uint64_t lsu_clk, wbu_clk;
float flash_avg,	psram_avg;

extern void performance_count(bool ebreak) {

#ifdef CONFIG_PCOUNTER
	output_file << g_nr_guest_clk << ","
							<< ifu_clk_count  << ","
						//	<< backend_clk		<< ","
							<< ifu_flash_clk	<< ","
							<< ifu_psram_clk	<< "\n";
#endif

    // 计算平均执行周期
    float ifu_avg_cycles_inst = (float)ifu_clk_count / ifu_count;

		// 计算平均占用周期
		float ifu_psram_avg_cycles = (float)ifu_psram_clk / g_nr_guest_clk * 100;
		float ifu_flash_avg_cycles = (float)ifu_flash_clk / g_nr_guest_clk * 100;
		float ifu_avg_cycles = (float)ifu_clk_count / g_nr_guest_clk * 100;

		float idu_avg_cycles = (float)idu_clk / g_nr_guest_clk * 100;
		float exu_avg_cycles = (float)exu_clk / g_nr_guest_clk * 100;
		float lsu_avg_cycles = (float)lsu_clk / g_nr_guest_clk * 100;
		float wbu_avg_cycles = (float)wbu_clk / g_nr_guest_clk * 100;

		// 计算前后端平均占用的周期
		//float backend_avg_cycles  = (float)backend_clk / g_nr_guest_clk * 100; 
		//float frontend_avg_cycles = (float)ifu_clk_count / g_nr_guest_clk * 100; 
		float branch_prediction = (float)(ifu_count - branch_pre_fail) / ifu_count * 100;
		float raw_control_avg_cycles = (float)raw_control_clk / g_nr_guest_clk * 100;
		float raw_data_avg_cycles = (float)raw_data_clk / g_nr_guest_clk * 100;
		float amat = (float)AMAT / ifu_count;

    // 打印信息
		if(ebreak) {
			printf("\n*************** Counter ***************\n");
			printf("icache: AMAT: %.2f clk/inst, 命中率: %.2f%\n", amat, p * 100);
			//printf("前端时钟占比: %.2f%, 后端时钟占比: %.2f%\n", frontend_avg_cycles, backend_avg_cycles);
			printf("数据冒险时钟占比: %.2f%, 结构冒险时钟占比： %.2f%, 分支预测准确率: %.2f%\n", raw_data_avg_cycles, raw_control_avg_cycles, branch_prediction);
#ifdef CONFIG_SOC
    	printf("ifu指令  : %-8u, 平均周期: %.2f, 时钟占比: %.2f%\n", ifu_count, ifu_avg_cycles_inst, ifu_avg_cycles);
			IFDEF(CONFIG_SOC, printf("flash时钟占比: %.2f%, 平均周期: %.2f, psram时钟占比: %.2f%, 平均周期: %.2f\n", ifu_flash_avg_cycles, flash_avg,  ifu_psram_avg_cycles, psram_avg));
			printf("idu时钟占比: %.2f%, 时钟周期: %ld\n", idu_avg_cycles, idu_clk);
			printf("exu时钟占比: %.2f%, 时钟周期: %ld\n", exu_avg_cycles, exu_clk);
			printf("lsu时钟占比: %.2f%, 时钟周期: %ld\n", lsu_avg_cycles, lsu_clk);
			printf("wbu时钟占比: %.2f%, 时钟周期: %ld\n", wbu_avg_cycles, wbu_clk);
#endif
		}
}

extern "C" void icache_counter(uint32_t icache_count, uint32_t icache_miss_count, uint32_t access_time_h, uint32_t access_time_l, uint32_t miss_penalty_h, uint32_t miss_penalty_l){
	// AMAT
	access_time = access_time_h << 32 | access_time_l; 
	miss_penalty = miss_penalty_h << 32 | miss_penalty_l;
	p = 1 - (float)icache_miss_count / icache_count ;
	AMAT = access_time + (uint64_t)((1 - p) * miss_penalty);
}

extern "C" void ifu_counter(uint32_t ifu_flash_count, uint32_t ifu_psram_count, uint32_t ifu_clk_count_h, uint32_t ifu_clk_count_l, uint32_t ifu_psram_clk_h, uint32_t ifu_psram_clk_l, uint32_t ifu_flash_clk_h, uint32_t ifu_flash_clk_l, uint32_t _ifu_count) {
	ifu_count				= _ifu_count;
	ifu_clk_count   = ifu_clk_count_h << 32 | ifu_clk_count_l;
	ifu_psram_clk   = ifu_psram_clk_h << 32 | ifu_psram_clk_l;
	ifu_flash_clk   = ifu_flash_clk_h << 32 | ifu_flash_clk_l;
	flash_avg       = (float)ifu_flash_clk / ifu_flash_count;
	psram_avg       = (float)ifu_psram_clk / ifu_psram_count;

}

extern "C" void idu_counter(uint32_t idu_clk_h, uint32_t idu_clk_l, uint32_t raw_data_clk_h, uint32_t raw_data_clk_l) {
	idu_clk = idu_clk_h << 32 | idu_clk_l;
	raw_data_clk = raw_data_clk_h << 32 | raw_data_clk_l;
}

extern "C" void exu_counter(uint32_t exu_clk_h, uint32_t exu_clk_l, uint32_t raw_control_clk_h, uint32_t raw_control_clk_l, uint32_t _branch_pre_fail) {
	exu_clk = exu_clk_h << 32 | exu_clk_l;
	raw_control_clk = raw_control_clk_h << 32 | raw_control_clk_l;
	branch_pre_fail = _branch_pre_fail;
}

extern "C" void lsu_counter(uint32_t lsu_clk_h, uint32_t lsu_clk_l) {
	lsu_clk = lsu_clk_h << 32 | lsu_clk_l;
}

extern "C" void wbu_counter(uint32_t wbu_clk_h, uint32_t wbu_clk_l) {
	wbu_clk = wbu_clk_h << 32 | wbu_clk_l;
}


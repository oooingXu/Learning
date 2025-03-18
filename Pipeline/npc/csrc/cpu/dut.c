#include <cpu.h>

void (*ref_difftest_memcpy)(uint32_t addr, void *buf, size_t n, int direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint32_t NO) = NULL;
void (*ref_difftest_mem_diff)(void *dut) = NULL;

static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;
static uint32_t skip_time = 0;

void difftest_skip_ref() {
	is_skip_ref = true;
	skip_dut_nr_inst = 0;
	skip_time++;
}

void difftest_skip_dut(CPU_state *ref, int nr_ref, int nr_dut) {
	skip_dut_nr_inst += nr_dut;

	while(nr_ref-- > 0) {
		ref_difftest_exec(1);
	}
}

void init_difftest(char *ref_so_file, long img_size){
	assert(ref_so_file != NULL);

	void *handle;
	handle = dlopen(ref_so_file, RTLD_LAZY);
	//debug("handle = %p", handle);
	assert(handle);

	ref_difftest_memcpy = (void (*)(uint32_t, void*, size_t, int))dlsym(handle, "difftest_memcpy");
	//debug("ref_difftest_memcpy = %p", ref_difftest_memcpy);
	assert(ref_difftest_memcpy);

	ref_difftest_regcpy = (void (*)(void*, bool))dlsym(handle, "difftest_regcpy");
	//debug("ref_difftest_regcpy = %p", ref_difftest_regcpy);
	assert(ref_difftest_regcpy);

	ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
	//debug("ref_difftest_exec = %p", ref_difftest_exec);
	assert(ref_difftest_exec);

	ref_difftest_raise_intr = (void (*)(uint32_t))dlsym(handle, "difftest_raise_intr");
	assert(ref_difftest_raise_intr);

	ref_difftest_mem_diff = (void (*)(void*))dlsym(handle, "difftest_mem_diff");
	assert(ref_difftest_mem_diff);

	void (*ref_difftest_init)(int) = (void (*)(int))dlsym(handle, "difftest_init");
	//debug("ref_difftest_init = %p", ref_difftest_init);
	assert(ref_difftest_init);

	ref_difftest_init(0);
	//debug("success difftest_init");
#ifdef CONFIG_SOC
	ref_difftest_memcpy(0x30000000, guest_to_host(0), img_size, DIFFTEST_TO_REF);
#endif

#ifdef CONFIG_NPC
	ref_difftest_memcpy(0x80000000, guest_to_host(0x80000000), img_size, DIFFTEST_TO_NPC);
#endif
	//debug("success difftest_memcpy");
	ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
	//debug("success difftest_regcpy");
}

static bool isa_difftest_checkmem() {
	MEM_DIFF mem_ref;
	ref_difftest_mem_diff(&mem_ref);
	bool ret;
	if(mem_diff.arvalid) {
		ret = ((mem_diff.araddr == mem_ref.araddr) && (mem_diff.arsize == mem_ref.arsize)); 
		if(!ret) {
			printf("Load Fail\n");
			printf("dut.araddr = 0x%08x, ref.araddr = 0x%08x\n", mem_diff.araddr, mem_ref.araddr);
			printf("dut.arsize = 0x%08x, ref.arsize = 0x%08x\n", mem_diff.arsize, mem_ref.arsize);
		}
	} else if(mem_diff.awvalid) {
		ret = ((mem_diff.awaddr == mem_ref.awaddr) && (mem_diff.wdata == mem_ref.wdata) && (mem_diff.wstrb == mem_ref.wstrb));
		if(!ret) {
			printf("Store Fail\n");
			printf("dut.awaddr = 0x%08x, ref.awaddr = 0x%08x\n", mem_diff.awaddr, mem_ref.awaddr);
			printf("dut.wdata = 0x%08x, ref.wdata = 0x%08x\n", mem_diff.wdata, mem_ref.wdata);
			printf("dut.wstrb = 0x%08x, ref.wstrb = 0x%08x\n", mem_diff.wstrb, mem_ref.wstrb);
		}
	} else {
		ret = true;
	}
	
	return ret;
}

static bool isa_difftest_checkregs(CPU_state *ref, uint32_t pc){

	for(int i = 0; i < R; i++){
		if(ref->gpr[i] != cpu.gpr[i]){
			printf("\nWrong regs\n");
			printf("ref.gpr[%s] = 0x%08x, ",regs[i],ref->gpr[i]);
			printf("dut->gpr[%s] = 0x%08x, ",regs[i],cpu.gpr[i]);
			printf("dut->pc = 0x%08x, dut->dnpc = 0x%08x, ref->dnpc = 0x%08x\n",cpu.pc, cpu.dnpc, ref->pc);
			return false;
		}
	}

	if(cpu.mtvec != ref->mtvec || cpu.mepc != ref->mepc || cpu.mcause != ref->mcause || cpu.mstatus != ref->mstatus){
		printf("Wrong csrs\n");
		printf("dut->pc = 0x%08x, dut->dnpc = 0x%08x, ref->dnpc = 0x%08x\n",cpu.pc, cpu.dnpc, ref->pc);

		printf("\nref->csr\n");
		printf("mtvec ref = 0x%08x, dut = 0x%08x\n", ref->mtvec, cpu.mtvec);
		printf("mepc ref = 0x%08x, dut = 0x%08x\n", ref->mepc, cpu.mepc);
		printf("mcause  ref = 0x%08x, dut = 0x%08x\n", ref->mcause, cpu.mcause);
		printf("mstatus ref = 0x%08x, dut = 0x%08x\n\n", ref->mstatus, cpu.mstatus);
		return false;
	}

	if(ref->pc != cpu.dnpc) {
		printf("Wrong pc\n");
		printf("ref.pc = 0x%08x, dut.pc = 0x%08x\n", ref->pc, cpu.dnpc);
	}

	bool ret = isa_difftest_checkmem();
	if(!ret) return false;


	debug("All right");
	debug("ref->dnpc = 0x%08x, dut->dnpc = 0x%08x, dut->pc = 0x%08x",ref->pc, cpu.dnpc, cpu.pc);

	return true;
}


static void checkregs(CPU_state *ref, uint32_t pc){
	if(!isa_difftest_checkregs(ref, pc)){
		npc_state.state = NPC_ABORT; 
		npc_state.halt_pc = pc;
		if(cpu.pc != cpu.dnpc){
			isa_reg_display();
		}
	}
}

void difftest_step(){
	CPU_state ref_r;

	if(skip_dut_nr_inst > 0) {
		ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
		if(ref_r.pc == cpu.dnpc) {
			skip_dut_nr_inst = 0;
			checkregs(&ref_r, cpu.dnpc);
			return;
		}
		skip_dut_nr_inst--;
		if(skip_dut_nr_inst == 0)
			printf("can not catch up with ref.pc = " FMT_WORD " at pc = " FMT_WORD, ref_r.pc, cpu.pc);
			assert(0);
		return;
	}

	if(is_skip_ref) {
		cpu.pc = cpu.dnpc;
		ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
		//printf("dut->pc = 0x%08x, dut->dnpc = 0x%08x, ref->pc = 0x%08x\n", cpu.pc, cpu.dnpc, ref_r.pc);
		is_skip_ref = false;
		return;
	}

	ref_difftest_exec(1);
	ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
#ifdef CONFIG_PTRACE
	if(cpu.pc != cpu.dnpc){
	printf("dut->pc = 0x%08x, dut->dnpc = 0x%08x, ref->dnpc = 0x%08x\n", cpu.pc, cpu.dnpc, ref_r.pc);
	}
#endif

	//debug("ref->pc = 0x%08x", ref_r.pc);
	IFDEF(CONFIG_PTRACE, printf("skip_time = %d\n", skip_time));
	checkregs(&ref_r, cpu.pc);
#ifdef PRINT_DIFF
	debug("Success difftest_step");
#endif
}


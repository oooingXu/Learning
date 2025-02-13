#include"cpu.h"

//enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF};

void (*ref_difftest_memcpy)(uint32_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint32_t NO) = NULL;

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

	ref_difftest_memcpy = (void (*)(uint32_t, void*, size_t, bool))dlsym(handle, "difftest_memcpy");
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

	void (*ref_difftest_init)(int) = (void (*)(int))dlsym(handle, "difftest_init");
	//debug("ref_difftest_init = %p", ref_difftest_init);
	assert(ref_difftest_init);

	ref_difftest_init(0);
	//debug("success difftest_init");
	ref_difftest_memcpy(RESET_VECTOR, guest_to_host(0), img_size, DIFFTEST_TO_REF);
	//debug("success difftest_memcpy");
	ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
	//debug("success difftest_regcpy");
}

static bool isa_difftest_checkregs(CPU_state *ref, uint32_t pc){

	for(int i = 0; i < R; i++){
		if(ref->gpr[i] != cpu.gpr[i]){
			printf("\nWrong regs\n");
			printf("ref.gpr[%s] = 0x%08x, ",regs[i],ref->gpr[i]);
			printf("dut->gpr[%s] = 0x%08x, ",regs[i],cpu.gpr[i]);
			printf("ref->dnpc = 0x%08x, dut->dnpc = 0x%08x, dut->pc = 0x%08x\n",ref->pc, cpu.dnpc, cpu.pc);
			return false;
		}
	}

	for(int i = 0; i < C; i++){
		if(ref->csr[i] != cpu.csr[i]){
			printf("Wrong csrs\n");
			printf("csr[%x]: ref->csr = 0x%08x, dut->csr = 0x%08x\n", i, ref->csr[i], cpu.csr[i]);
			printf("ref->dnpc = 0x%08x, dut->dnpc = 0x%08x, dut->pc = 0x%08x\n",ref->pc, cpu.dnpc, cpu.pc);

			printf("\nref->csr\n");
			printf("mtvec   ref = 0x%08x, dut = 0x%08x\n", ref->csr[0x305], cpu.csr[0x305]);
			printf("mepc    ref = 0x%08x, dut = 0x%08x\n", ref->csr[0x341], cpu.csr[0x341]);
			printf("mcause  ref = 0x%08x, dut = 0x%08x\n", ref->csr[0x342], cpu.csr[0x342]);
			printf("mstatus ref = 0x%08x, dut = 0x%08x\n\n", ref->csr[0x300], cpu.csr[0x300]);
			return false;
		}
	}

	debug("All right");
	debug("ref->dnpc = 0x%08x, dut->dnpc = 0x%08x, dut->pc = 0x%08x",ref->pc, cpu.dnpc, cpu.pc);

	return true;
}


static void checkregs(CPU_state *ref, uint32_t pc){
	if(!isa_difftest_checkregs(ref, pc)){
		npc_state.state = NPC_ABORT; //NPC_ABORT
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
	uint32_t ref_pc = ref_r.pc;


	ref_difftest_exec(1);
	ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
#ifdef CONFIG_PTRACE
	if(cpu.pc != cpu.dnpc){
	printf("dut->pc = 0x%08x, dut->dnpc = 0x%08x, ref->pc = 0x%08x, ref->dnpc = 0x%08x\n", cpu.pc, cpu.dnpc, ref_pc, ref_r.pc);
	}
#endif

	//debug("ref->pc = 0x%08x", ref_r.pc);
	IFDEF(CONFIG_PTRACE, printf("skip_time = %d\n", skip_time));
	checkregs(&ref_r, cpu.pc);
#ifdef PRINT_DIFF
	debug("Success difftest_step");
#endif
}


#include"cpu.h"

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
	int len = (sizeof(regs) / sizeof(regs[0]));
	for(int i = 0; i < len; i++) {
		printf("%-3s --->  0x%x\n",regs[i],cpu.gpr[i]);
	}
	printf("\ncsr\n");
	printf("mtvec		---> 0x%08x\n", cpu.mtvec);
	printf("mepc		---> 0x%08x\n", cpu.mepc);
	printf("mstatus ---> 0x%08x\n", cpu.mstatus);
	printf("mcause	---> 0x%08x\n", cpu.mcause);
	printf("\n");
	for(int i = 0; i < 4096; i++){
		if(cpu.csr[i]) printf("%x 0x%08x\n", i, cpu.csr[i]);
	}
}

uint32_t isa_reg_str2val(const char *s, bool *success) {
	int len = (sizeof(regs) / sizeof(regs[0]));
	const char *s1 = (s[0] == '$' ? s + 1 : s);
	int cmp = strcmp(s1,"pc");
	for(int i = 0; i < len; i++) {
		int compare = strcmp(s1,regs[i]);
		if( compare == 0){
			*success = true;
			return cpu.gpr[i];
		}
		
	}
	if(cmp == 0){
			*success = true;
			return cpu.pc;
	}
	*success = false;

  return 0;
}




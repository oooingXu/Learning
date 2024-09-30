#include"pmem.h"
#include"../device/map.h"

uint8_t pmem[MSIZE] PG_ALIGN = {};

uint8_t* guest_to_host(uint32_t paddr) { return pmem + paddr - MBASE; }
uint32_t host_to_guest(uint8_t *haddr) { return haddr - pmem + MBASE; }

uint32_t host_read(void *addr){ return *(uint32_t *)addr; }

void host_write(void *addr, int len, uint32_t data) { 
	switch(len){
		case 1: *(uint8_t  *)addr = data; return;
		case 2: *(uint16_t *)addr = data; return;
		case 4: *(uint32_t *)addr = data; return;
	default: assert(0);	
	}
}

void out_of_bound(uint32_t addr){
	printf("pmem address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] \n", addr, PMEM_LEFT, PMEM_RIGHT);
	assert_fall_msg();
}

bool in_pmem(uint32_t addr){
	return addr - MBASE < MSIZE;
}

int pmem_read(int Maddr) {
	//Maddr = Maddr & ~0x3u;
#ifdef CONFIG_CTRACE
	if(host_read(guest_to_host(Maddr)) == 0x73) {
			printf("mtvec = 0x%08x\n", cpu.mtvec);
	}
#endif

#ifdef CONFIG_MTRACE
	printf("pread at " FMT_PADDR ", data = " FMT_PADDR "\n", Maddr, host_read(guest_to_host(Maddr)));
#endif
	if(likely(in_pmem(Maddr))) {
	uint32_t ret = host_read(guest_to_host(Maddr));
	return ret;
	} else {
		return mmio_read(Maddr);
	}
	printf("read out of bound\b");
	out_of_bound(Maddr);
	return 0;
}

void pmem_write(int Maddr, int DataIn, int wmask) {
	//Maddr = Maddr & ~0x3u;

#ifdef CONFIG_MTRACE
	printf("pwrite at " FMT_PADDR ", data = " FMT_WORD ", len = %d\n", Maddr, DataIn, wmask);
#endif
	if(likely(in_pmem(Maddr))){
		host_write(guest_to_host(Maddr), wmask, DataIn); return;
	} else {
		mmio_write(Maddr, wmask, DataIn); return;
	}
	printf("write out of bound\b");
		out_of_bound(Maddr);
}

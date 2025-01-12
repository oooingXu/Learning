#include"pmem.h"
#include"../device/map.h"

uint8_t pmem[MSIZE] PG_ALIGN = {};

uint8_t* guest_to_host(uint32_t paddr) { return pmem + paddr - MBASE; }
uint32_t host_to_guest(uint8_t *haddr) { return haddr - pmem + MBASE; }

uint32_t host_read(void *addr){ return *(uint32_t *)addr; }

void host_write(void *addr, int len, uint32_t data) { 
	switch(len){
		case 0: *(uint8_t  *)addr = data; return;
		case 1: *(uint16_t *)addr = data; return;
		case 3: *(uint32_t *)addr = data; return;
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


int pmem_read(int araddr) {
	//araddr = araddr & ~0x3u;

#ifdef CONFIG_MTRACE
	printf("pread at " FMT_PADDR ", data = " FMT_PADDR "\n", araddr, host_read(guest_to_host(araddr)));
#endif

	if(likely(in_pmem(araddr))) {
	uint32_t ret = host_read(guest_to_host(araddr));
	return ret;
	} else {
		return mmio_read(araddr);
	}
	printf("read out of bound\b");
	out_of_bound(araddr);
	return 0;
}

int pmem_write(int awaddr, int wdata, int wstrb) {
	//awaddr = awaddr & ~0x3u;

#ifdef CONFIG_MTRACE
	printf("pwrite at " FMT_PADDR ", data = " FMT_WORD ", len = %d\n", awaddr, wdata, wstrb);
#endif
	if(likely(in_pmem(awaddr))){
		host_write(guest_to_host(awaddr), wstrb, wdata); return 0;
	} else {
		mmio_write(awaddr, wstrb, wdata); return 0;
	}
	printf("write out of bound\b");
		out_of_bound(awaddr);
}

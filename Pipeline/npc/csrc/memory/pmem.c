#include <pmem.h>
#include <map.h>

uint8_t pmem[MSIZE] PG_ALIGN = {};
uint8_t cmem[0x20] = {};
uint8_t sram[SRAM_SIZE] PG_ALIGN = {};

MEM_DIFF mem_diff;

static void mem_diff_update(uint32_t inst, uint32_t araddr, bool arvalid, int arsize, uint32_t awaddr, uint32_t wdata, bool awvalid, int wstrb) {
	mem_diff.inst		 = inst;
	mem_diff.araddr  = araddr;
	mem_diff.awaddr  = awaddr;
	mem_diff.wdata   = wdata;
	mem_diff.wstrb   = wstrb;
	mem_diff.arsize  = arsize;

	mem_diff.arvalid = arvalid;
	mem_diff.awvalid = awvalid;
}

//static uint32_t psram[0x4000];
static uint8_t *psram = NULL;
static void psram_init(){
	psram = (uint8_t *)malloc(0x400000);
	if(psram == NULL) {
		printf("Failed to allocate PSRAM\n");
	}
}

uint32_t host_to_guest(uint8_t *haddr) { 
	return haddr - pmem + MBASE; 
}
uint8_t* guest_to_host(uint32_t paddr) { 
	return pmem + paddr - MBASE; 
}

uint8_t* p_guest_to_host(uint32_t paddr) { return psram + paddr; }
uint8_t* s_guest_to_host(uint32_t paddr) { return sram + paddr; }

uint8_t* c_guest_to_host(uint32_t paddr) { return cmem + paddr; }
uint32_t c_host_to_guest(uint8_t *haddr) { return haddr - cmem; }

uint32_t host_read(void *addr){ return *(uint32_t *)addr; }

void host_write(void *addr, int len, uint32_t data) { 
	switch(len){
		case 1:  *(uint8_t  *)addr = data; return;
		case 3:  *(uint16_t *)addr = data; return;
		case 15: *(uint32_t *)addr = data; return;
	default: assert(0);	
	}
}

void out_of_bound(uint32_t addr){
	printf("pmem address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] \n", addr, PMEM_LEFT, PMEM_RIGHT);
	assert_fall_msg();
}

static int r_size(int arsize){
	switch(arsize) {
		case 0:	return 1; 
		case 1:	return 2; 
		case 2: return 4;
		default: printf("arsize = %d wrong\n", arsize); break;
	}
}

static int w_size(int wstrb) {
	switch(wstrb) {
		case 1:		return 1;
		case 3:		return 2;
		case 15:	return 4;
		default:	printf("wstrb = %d wrong\n", wstrb);
	}
}

bool in_sram(uint32_t addr){return addr - SRAM_START < SRAM_SIZE;}
bool in_device(uint32_t addr){return (addr >= UART_START && addr <= UART_END) || (addr >= CLINT_START && addr <= CLINT_END) || (addr >= GPIO_START && addr <= GPIO_END) || (addr >= KBD_START && addr <= KBD_END) || (addr >= VGA_START && addr <= VGA_END);}

bool in_pmem(uint32_t addr){return addr - MBASE < MSIZE;}

static uint32_t rdata_shift(uint32_t data, uint32_t addr){
	int rstrb = addr & 0x3;
	switch(rstrb) {
		case 1: return data << 8; break;
		case 2: return data << 16; break;
		case 3: return data << 24; break;
		default: return data;
	}
}

extern "C" int pmem_read(int araddr) {
	if(likely(in_pmem(araddr))) {
		uint32_t data = host_read(guest_to_host(araddr));
		uint32_t ret = rdata_shift(data, araddr);
		IFDEF(CONFIG_MTRACE, printf("(npc) pmem READ: at " FMT_PADDR ", data = " FMT_PADDR "\n", araddr, ret));
		return ret;
	} else {
		return mmio_read(araddr);
	}
	printf("read out of bound\b");
	out_of_bound(araddr);
	return 0;
}

static int wmask(int wstrb) {
	if(wstrb == 1 || wstrb == 2 || wstrb == 4 || wstrb == 8) {
		return 1;
	} else if(wstrb == 3 || wstrb == 12) {
		return 3;
	} else if(wstrb == 15) {
		return 15;
	} else {
		printf("(npc) wstrb wrong\n");
	}
}

static int wdata_shift(uint32_t wdata, int wstrb) {
	switch(wstrb) {
		case 1:  return wdata;
		case 2:  return wdata >> 8;
		case 3:  return wdata;
		case 4:  return wdata >> 16;
		case 8:  return wdata >> 24;
		case 12: return wdata >> 16;
		case 15: return wdata;
		default: printf("(npc) wdata wstrb wrong\n");
	}
}

int pmem_write(int awaddr, int wdata, int wstrb) {
	wdata  = wdata_shift(wdata, wstrb);
	wstrb  = wmask(wstrb);

	IFDEF(CONFIG_MTRACE, printf("(npc) pmem WRITE: at " FMT_PADDR ", data = " FMT_WORD ", len = %d\n", awaddr, wdata, wstrb));

	if(likely(in_pmem(awaddr))){
		host_write(guest_to_host(awaddr), wstrb, wdata); return 0;
	} else {
		mmio_write(awaddr, wstrb, wdata); return 0;
	}
	printf("write out of bound\b");
		out_of_bound(awaddr);
}

static uint32_t reverse_low_8(uint32_t value) {
    uint32_t low8 = value & 0x000000FF;  // 低8位
    uint32_t high24 = value & 0xFFFFFF00; // 高24位

    uint32_t reversed_low8 = 0;
    for (int i = 0; i < 8; i++) {
      reversed_low8 |= (((low8 >> i) & 0x01) << (7 - i));
    }

    return high24 | reversed_low8;
}

extern "C" void flash_read(int32_t addr, int32_t *data) { 
	if(addr >= 0x00000000 && addr <= 0x0fffffff){
		*data = host_read(guest_to_host(addr));
		IFDEF(CONFIG_FMTRACE, printf("(npc)  flash READ: addr = 0x%08x, data = 0x%08x\n", addr, *data));
		return;
	} else {
		*data = mmio_read(addr);
		return;
	}
	printf("read out of bound\b");
	out_of_bound(addr);
	return ;
}

extern "C" void mrom_read(int32_t addr, int32_t *data) {
	if(addr >= 0x20000000 && addr <= 0x20000fff){
		*data = host_read(guest_to_host(addr));
		IFDEF(CONFIG_MTRACE, printf("(npc) mrom READ: addr = 0x%08x, data = 0x%08x\n", addr, *data));
		return;
	} else {
		printf("mrom_read out of bound addr = 0x%08x\n", addr);
		assert(0);
	}
}


extern "C" void psram_read(uint32_t addr, uint32_t *data, uint32_t wr) {
	if(psram == NULL) psram_init();

	if(wr == 2){
		*data = host_read(p_guest_to_host(addr));
		IFDEF(CONFIG_PMTRACE, printf("(npc) psram READ: addr = 0x%08x, data = 0x%08x, size = %d\n", addr, *data, 4));
		return;
	} else if(wr == 1 || wr == 3 || wr == 15) {
		IFDEF(CONFIG_PMTRACE, printf("(npc) psram WRITE: addr = 0x%08x, data = 0x%08x, size = %d\n", addr, *data, (wr == 15) ? 4 : (wr == 3) ? 2 : 1));
		host_write(p_guest_to_host(addr), wr, *data);
		return;
	}
}

extern "C" void sram_read(uint32_t inst, uint32_t araddr, bool arvalid, int arsize, uint32_t awaddr, uint32_t wdata, bool awvalid, int wstrb) {
	if((in_device(araddr) && arvalid) || (in_device(awaddr) && awvalid)) difftest_skip_ref();
	mem_diff_update(inst, araddr, arvalid, arsize, awaddr, wdata, awvalid, wstrb);

	if(in_sram(araddr) && arvalid) {
		uint32_t rdata = host_read(s_guest_to_host(araddr));
		IFDEF(CONFIG_SMTRACE, printf("(npc) sram READ: addr = 0x%08x, data = 0x%08x, size = %d\n", araddr, rdata, r_size(arsize)));
	} else if(in_sram(awaddr) && awvalid) {
		IFDEF(CONFIG_SMTRACE, printf("(npc) sram WRITE: addr = 0x%08x, data = 0x%08x, size = %d\n", awaddr, wdata, w_size(wstrb)));
		host_write(s_guest_to_host(awaddr), wstrb, wdata);
	}
}

uint32_t get_inst(uint32_t pc) {
#ifdef CONFIG_NPC
	return pmem_read(pc);
#endif
}

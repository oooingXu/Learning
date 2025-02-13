/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>

#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static uint8_t psram[PSRAM_SIZE];
static uint8_t* p_guest_to_host(paddr_t paddr) { return psram + paddr - PSRAM_BASE; }

static uint8_t sram[SRAM_SIZE];
static uint8_t* s_guest_to_host(paddr_t paddr) { return sram + paddr - SRAM_BASE; }

static word_t pmem_read(paddr_t addr, int len) {
	//addr = addr & 0xfffffffc;
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
	//addr = addr & 0xfffffffc;
  host_write(guest_to_host(addr), len, data);
}

static word_t psram_read(paddr_t addr, int len) {
	word_t ret = host_read(p_guest_to_host(addr), len);
	//printf("(nemu) psram_read addr = 0x%08x, data = 0x%08x, len = %d\n", addr, ret, len);
	return ret;
}

static void psram_write(paddr_t addr, int len, word_t data) {
	//printf("(nemu) psram_write pc = 0x%08x, addr = 0x%08x, data = 0x%08x, len = %d\n", cpu.pc ,addr, data, len);
	host_write(p_guest_to_host(addr), len, data);
}

static word_t sram_read(paddr_t addr, int len) {
	word_t ret = host_read(s_guest_to_host(addr), len);
	//printf("(nemu) sram_read addr = 0x%08x, data = 0x%08x, len = %d\n", addr, ret, len);
	return ret;
}

static void sram_write(paddr_t addr, int len, word_t data) {
	//printf("(nemu) sram_write pc = 0x%08x, addr = 0x%08x, data = 0x%08x, len = %d\n", cpu.pc ,addr, data, len);
	host_write(s_guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr) {
  panic("(nemu) address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
  IFDEF(CONFIG_MEM_RANDOM, memset(pmem, rand(), CONFIG_MSIZE));
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
}

word_t paddr_read(paddr_t addr, int len) {
	//IFDEF(CONFIG_MTRACE, printf("(nemu) pread  at " FMT_PADDR " len = %d\n", addr, len));

  if (likely(in_pmem(addr))) {
		IFDEF(CONFIG_FMTRACE, printf("(nemu) flash READ: addr = 0x%08x, data = 0x%08x, size = %d\n", addr, pmem_read(addr, len), len));
		return pmem_read(addr, len);
	} else if(in_sram(addr)) {
		IFDEF(CONFIG_SMTRACE, printf("(nemu) sram READ: addr = 0x%08x, data = 0x%08x, size = %d\n", addr, sram_read(addr, len), len));
		return sram_read(addr, len);
	} else if(in_psram(addr)) {
		IFDEF(CONFIG_PMTRACE, printf("(nemu) psram READ: addr = 0x%08x, data = 0x%08x, size = %d\n", addr, psram_read(addr, len), len));
		return psram_read(addr, len);
	}
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void paddr_write(paddr_t addr, int len, word_t data) {
	//IFDEF(CONFIG_MTRACE, printf("pwrite at " FMT_PADDR " len = %d data = " FMT_WORD"\n" , addr, len, data));

 if (likely(in_pmem(addr))) { 
	 IFDEF(CONFIG_FMTRACE, printf("(nemu) flash WRITE: addr = 0x%08x, data = 0x%08x, size = %d\n", addr, data, len));
	 pmem_write(addr, len, data); return; 
 } else if(in_sram(addr)) {
	 IFDEF(CONFIG_SMTRACE, printf("(nemu) sram WRITE: addr = 0x%08x, data = 0x%08x, size = %d\n", addr, data, len));
	 sram_write(addr, len, data); return;
 } else if(in_psram(addr)) {
	 IFDEF(CONFIG_PMTRACE, printf("(nemu) psram WRITE: addr = 0x%08x, data = 0x%08x, size = %d\n", addr, data, len));
	 psram_write(addr, len, data); return;
 }
  IFDEF(CONFIG_DEVICE,  mmio_write(addr, len, data); return);
  out_of_bound(addr);
}

#ifndef __MEMORY_PMEM_H__
#define __MEMORY_PMEM_H__

#include <stdint.h>
#include <assert.h>
#include <stdio.h>
#include <macro.h>
#include <common.h>

#ifdef CONFIG_SOC
#define MBASE				(0x00000000)
#define MSIZE				(0x08000000)
#else
#define MBASE				(0x80000000)
#define MSIZE				(0x08000000)
#endif 

#define FLASH_START (0x30000000)
#define FLASH_END		(0x31ffffff)
#define FLASH_SIZE	(0x02000000)

#define PSRAM_START	(0x80000000)
#define	PSRAM_END		(0x803fffff)
#define PSRAM_SIZE	(0x00400000)

#define SRAM_START	(0x0f000000)
#define SRAM_END		(0x0f001fff)
#define SRAM_SIZE		(0x00002000)

#define PMEM_LEFT ((uint32_t)MBASE)
#define PMEM_RIGHT ((uint32_t)MBASE + MSIZE - 1)
#define RESET_VECTOR (0x30000000)

uint8_t* guest_to_host(uint32_t paddr);
uint32_t host_to_guest(uint8_t *haddr);

uint8_t* c_guest_to_host(uint32_t paddr);
uint32_t c_host_to_guest(uint8_t *haddr);

uint32_t host_read(void *addr);
void host_write(void *addr, int len, uint32_t data); 

void out_of_bound(uint32_t addr);
bool in_pmem(uint32_t addr);

void assert_fall_msg();

void init_ftrace(const char *elf_file);
void ftrace(uint32_t inst);
uint32_t get_inst(uint32_t pc);

extern "C" int pmem_read(int araddr);
extern "C" int pmem_write(int awaddr, int wdata, int wstrb);

#endif


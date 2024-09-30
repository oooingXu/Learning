#ifndef __MEMORY_PMEM_H__
#define __MEMORY_PMEM_H__

#include<stdint.h>
#include<assert.h>
#include<stdio.h>
#include"../include/macro.h"
#include"../include/common.h"

#define MBASE 0x80000000
#define MSIZE 0x8000000

#define PMEM_LEFT ((uint32_t)MBASE)
#define PMEM_RIGHT ((uint32_t)MBASE + MSIZE - 1)
#define RESET_VECTOR PMEM_LEFT

uint8_t* guest_to_host(uint32_t paddr);
uint32_t host_to_guest(uint8_t *haddr);

uint32_t host_read(void *addr);
void host_write(void *addr, int len, uint32_t data); 

void out_of_bound(uint32_t addr);
bool in_pmem(uint32_t addr);

void assert_fall_msg();

extern "C" int pmem_read(int Maddr);
extern "C" void pmem_write(int Maddr, int DataIn, int wmask);

#endif


#ifndef __NPC_H__
#define __NPC_H__

#include <klib-macros.h>

#include ISA_H

#define npc_trap(code) asm volatile("mv a0, %0; ebreak" : :"r"(code))

#define DEVICE_BASE 0xa0000000
#define MMIO_BASE   0xa0000000

#define SERIAL_PORT ( 0x10000000)
#define RTC_ADDR    ( 0x02000000)
#define KBD_ADDR    ( 0x10011000)

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  (0x80400000)
#define NPC_PADDR_SPACE \
	RANGE($_pmem_start, PMEM_END), \
	RANGE(FB_ADDR, FB_ADDR + 0x200000), \
	RANGE(MMIO_BASE, MMIO_BASE + 0x1000)

typedef uintptr_t PTE;

#define PGSIZE		4096

#endif



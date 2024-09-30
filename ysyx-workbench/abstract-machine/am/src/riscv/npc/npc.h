#ifndef __NPC_H__
#define __NPC_H__

//#include <kilb-macros.h>

#define npc_trap(code) asm volatile("mv a0, %0; ebreak" : :"r"(code))

#define DEVICE_BASE 0xa0000000
#define MMIO_BASE   0xa0000000

#define SERIAL_PORT ( DEVICE_BASE + 0x000003f8)
#define KBD_ADDR    ( DEVICE_BASE + 0x00000060)
#define RTC_ADDR    ( DEVICE_BASE + 0x00000048)

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)
#define NPC_PADDR_SPACE \
	RANGE($_pmem_start, PMEM_END), \
	RANGE(FB_ADDR, FB_ADDR + 0x200000), \
	RANGE(MMIO_BASE, MMIO_BASE + 0x1000)

typedef uintptr_t PTE;

#define PGSIZE		4096

#endif



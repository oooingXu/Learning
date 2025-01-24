#ifndef __YSYXSOC_H__
#define __YSYXSOC_H__

//#include <kilb-macros.h>

#define ysyxsoc_trap(code) asm volatile("mv a0, %0; ebreak" : :"r"(code))

#define DEVICE_BASE 0xa0000000
#define MMIO_BASE   0x10000000

#define SERIAL_PORT ( 0x10000000L)
#define RTC_ADDR    ( DEVICE_BASE + 0x00000048)
#define KBD_ADDR    ( DEVICE_BASE + 0x00000060)

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)
#define YSYXSOC_PADDR_SPACE \
	RANGE($_pmem_start, PMEM_END), \
	RANGE(FB_ADDR, FB_ADDR + 0x200000), \
	RANGE(MMIO_BASE, MMIO_BASE + 0x1000)

typedef uintptr_t PTE;

#define PGSIZE		4096

#endif



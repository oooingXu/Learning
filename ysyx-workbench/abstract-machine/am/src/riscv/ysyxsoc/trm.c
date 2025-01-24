#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include "../riscv.h"
#include "ysyxsoc.h"

#define UART_BASE 0x10000000L
#define UART_TX		(UART_BASE + 0x0)
#define UART_LCR	(UART_BASE + 0x3)
#define UART_LSR	(UART_BASE + 0x5)
#define UART_LSB	(UART_BASE + 0x0)
#define UART_MSB	(UART_BASE + 0x1)

extern char _heap_start;

extern char _etext;
extern char _data;
extern char _edata;

extern char _bss_start;  
extern char _bss_end;

int main(const char *args);

Area heap = RANGE(&_heap_start, PMEM_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

extern void putch(char ch) {
	if(*(volatile char *)UART_LCR == 0x03){
		while(!(*(volatile char *)UART_LSR & 0x20));
	}
	outb(SERIAL_PORT, ch);
}

extern void halt(int code) {
	ysyxsoc_trap(code);

  while (1);
}

static void uart_init(){
	unsigned int divisor = 150;

	uint32_t lcr = 0x03;
	lcr |= 0x00;

	*(volatile char *)UART_LCR = 0x80 | lcr; // enable divisor latch
																	 
	*(volatile char *)UART_MSB = 0xff & (divisor >> 8);
	*(volatile char *)UART_LSB = 0xff & divisor; 

	*(volatile char *)UART_LCR = lcr; // resume	
}

extern void _trm_init() {
	uart_init();
  int ret = main(mainargs);
  halt(ret);
}

extern void _bootloader(void) {
	char *src = &_etext;
	char *dst = &_data;

	while(dst < &_edata)
		*dst++ = *src++;

	for(dst = &_bss_start; dst < &_bss_end; dst++)
		*dst = 0;

	_trm_init();
}


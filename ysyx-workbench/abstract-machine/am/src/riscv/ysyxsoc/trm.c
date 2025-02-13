#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include "../riscv.h"
#include "ysyxsoc.h"

extern char _heap_start;

extern char _ssbl_lma, _ssbl, _essbl;
extern char _text_lma, _text, _etext;
extern char _rodata_lma, _rodata, _erodata;
extern char _data_lma, _data, _edata;
extern char _bss, _ebss;

//#define RTT
#ifdef RTT
extern char _data_extra_lma, _data_extra, _edata_extra;
extern char _bss_extra, _ebss_extra;
#endif

int main(const char *args);

Area heap = RANGE(&_heap_start, HEAP_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

void putch(char ch) {
	if(*(volatile char *)UART_LCR == 0x03){
		while(!(*(volatile char *)UART_LSR & 0x20));
	}
	outb(UART_TX, ch);
}

void halt(int code) {
	ysyxsoc_trap(code);

  while (1);
}

static void uart_init(){
	unsigned int divisor = 1;
	uint32_t lcr = 0x03;

	outb(UART_LCR, 0x80 | lcr); // enable divisor latch
	outb(UART_MSB, 0xff & (divisor >> 8));
	outb(UART_LSB, 0xff & divisor); 
	outb(UART_LCR, lcr); // resume	
}

void _trm_init() {
	uart_init();
	//uint32_t mvendodir, marchid;
	//asm volatile("csrr %0, mvendorid" : "=r"(mvendodir));
	//asm volatile("csrr %0, marchid" : "=r"(marchid));
	//printf("mvendodir = %d\n",mvendodir);
	//printf("marchid = %d\n",marchid);

  int ret = main(mainargs);
  halt(ret);
}

void __attribute((section(".ssbl")))_bootloader(void) {
	char *src = &_text_lma;
	char *dst = &_text;
	while(dst < &_etext)
		*dst++ = *src++;

	src = &_rodata_lma;
	dst = &_rodata;
	while(dst < &_erodata)
		*dst++ = *src++;

#ifdef RTT
	src = &_data_extra_lma;
	dst = &_data_extra;
	while(dst < &_edata_extra)
		*dst++ = *src++;
#endif

	src = &_data_lma;
	dst = &_data;
	while(dst < &_edata)
		*dst++ = *src++;

#ifdef RTT
	for(dst = &_bss_extra; dst < &_ebss_extra; dst++)
		*dst = 0;
#endif

	for(dst = &_bss; dst < &_ebss; dst++)
		*dst = 0;

	_trm_init();
}

void __attribute((section(".fsbl")))_fsbl_init(void) {
	char *src = &_ssbl_lma;
	char *dst = &_ssbl;
	while(dst < &_essbl)
		*dst++ = *src++;

	_bootloader();
}


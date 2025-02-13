#include <am.h>
#include <klib.h>
#include <nemu.h>

extern char _heap_start; 
extern char _ssbl_lma, _ssbl, _essbl, _text_lma, _text, _etext, _rodata_lma, _rodata, _erodata, _data_lma, _data,  _edata, _bss, _ebss;
//#define RTT
#ifdef RTT
extern char _data_extra,  _edata_extra , _data_extra_lma;
extern char _bss_extra,  _ebss_extra;
#endif

int main(const char *args);

Area heap = RANGE(&_heap_start, HEAP_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

void putch(char ch) {
  outb(SERIAL_PORT, ch);
}

void halt(int code) {
  nemu_trap(code);

  // should not reach here
  while (1);
}

extern void _trm_init() {
	uint32_t mvendodir, marchid;
	asm volatile("csrr %0, mvendorid" : "=r"(mvendodir));
	asm volatile("csrr %0, marchid" : "=r"(marchid));
	printf("mvendodir = %d\n",mvendodir);
	printf("marchid = %d\n",marchid);

  int ret = main(mainargs);
  halt(ret);
}

void  __attribute((section(".ssbl")))_bootloader(void) {
	char *src = &_text_lma;
	char *dst = &_text;

	while(dst < &_etext) {
		*dst++ = *src++;
	}

	src = &_rodata_lma;
	dst = &_rodata;

	while(dst < &_erodata) {
		*dst++ = *src++;
	}

#ifdef RTT
	src = &_data_extra_lma;
	dst = &_data_extra;

	while(dst < &_edata_extra) {
		*dst++ = *src++;
	}
#endif

	src = &_data_lma;
	dst = &_data;

	while(dst < &_edata) {
		*dst++ = *src++;
	}

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

	while(dst < &_essbl) {
		*dst++ = *src++;
	}

	_bootloader();
}

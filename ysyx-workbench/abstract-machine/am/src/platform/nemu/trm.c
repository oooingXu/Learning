#include <am.h>
#include <klib.h>
#include <nemu.h>

extern char _heap_start, _etext, _data,  _edata, _bss_start, _bss_end;

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

void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}

void  _bootloader(void) {
	char *src = &_etext;
	char *dst = &_data;

	while(dst < & _edata) {
		*dst++ = *src++;
	}

	for(dst = &_bss_start; dst < &_bss_end; dst++)
		*dst = 0;

	_trm_init();
}


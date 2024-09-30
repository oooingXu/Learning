#include <am.h>
#include <klib-macros.h>
#include "../riscv.h"
#include "npc.h"


extern char _heap_start;
int main(const char *args);

Area heap = RANGE(&_heap_start, PMEM_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

void putch(char ch) {
	outb(SERIAL_PORT, ch);
}

void halt(int code) {
	npc_trap(code);

  while (1);
}

void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}

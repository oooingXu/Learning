/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/
//#include "../../abstract-machine/am/include/am.h"
#include "../include/utils.h"
#include "map.h"

/* http://en.wikibooks.org/wiki/Serial_Programming/8250_UART_Programming */
// NOTE: this is compatible to 16550

#define CH_OFFSET 0

static uint8_t *serial_base = NULL;

char tmp = 0;

static void serial_putc(char ch) {
	//printf("cpu: pc = 0x%08x, dnpc = 0x%08x, valid = %d\n", cpu.pc, cpu.dnpc, cpu.valid);
  //MUXDEF(CONFIG_TARGET_AM, putch(ch), putc(ch, stderr));
}

static void serial_io_handler(uint32_t offset, int len, bool is_write) {
  assert(len == 1);
  switch (offset) {
    /* We bind the serial port with the host stderr in NEMU. */
    case CH_OFFSET:
      if (is_write) serial_putc(serial_base[0]);
      else printf("do not support read"); assert(0);
      break;
    default: printf("do not support offset = %d", offset); assert(0);
  }
}

void init_serial() {
  serial_base = new_space(8);
  add_mmio_map("serial", SERIAL_MMIO, serial_base, 8, serial_io_handler);

}

#ifndef __COUNTER_H__
#define __COUNTER_H__

#include <stdint.h>

extern uint64_t g_nr_guest_clk;
extern uint64_t g_nr_guest_inst;

void performance_count(bool ebreak);

#endif


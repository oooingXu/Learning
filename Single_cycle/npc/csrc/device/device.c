#include "../include/common.h"
#include "../include/utils.h"
#include "map.h"

void init_map();
void init_serial();
void init_timer();

void vga_update_screen();

void device_update() {
	static uint64_t last = 0;
	uint64_t now = get_time();
	if(now - last < 1000000 / TIMER_HZ) {
		return;
	}
	last = now;

}

void init_device() {
	init_map();
	IFDEF(CONFIG_HAS_SERIAL, init_serial());
	IFDEF(CONFIG_HAS_TIMER,  init_timer());

}

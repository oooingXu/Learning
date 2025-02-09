#ifndef __DEVICE_MAP_H__
#define __DEVICE_MAP_H__

#include "../cpu/cpu.h"
#include "../memory/pmem.h"

#define TIMER_HZ 60

#define DEVICE_BASE 0xa0000000
#define RTC_MMIO (DEVICE_BASE + 0x00000048)
#define SERIAL_MMIO (DEVICE_BASE + 0x000003f8)

#define UART_START	(0x10000000)
#define UART_END		(0x10000fff)

#define CLINT_START	(0x02000000)
#define CLINT_END		(0x0200ffff)

typedef void(*io_callback_t)(uint32_t, int, bool);
uint8_t* new_space(int size);

typedef struct {
	const char *name;
	uint32_t low;
	uint32_t high;
	void *space;
	io_callback_t callback;
} IOMap;

static inline bool map_inside(IOMap *map, uint32_t addr) {
	return (addr >= map->low && addr <= map->high);
}

static inline int find_mapid_by_addr(IOMap *maps, int size, uint32_t addr) {
	int i;
	for(i = 0; i < size; i++) {
		if(map_inside(maps + i, addr)) {
			difftest_skip_ref();
			return i;
		}
	}
	return -1;
}

void device_update();
void send_key(uint8_t scancode, bool is_keydown);

void add_mmio_map(const char *name, uint32_t addr, 
		void *space, uint32_t len, io_callback_t callback);

uint32_t map_read(uint32_t addr, IOMap *map);
void map_write(uint32_t addr, int len, uint32_t data, IOMap *map);

uint32_t mmio_read(uint32_t addr);
void mmio_write(uint32_t addr, int len, uint32_t data);

void init_device();

#endif


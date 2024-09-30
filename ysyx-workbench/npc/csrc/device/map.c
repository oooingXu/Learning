#include "map.h"

#define PAGE_SHIFT 12
#define PAGE_SIZE (1ul << PAGE_SHIFT)
#define PAGE_MASK (PAGE_SIZE - 1)

#define IO_SPACE_MAX (2 * 1024 * 1024)

static uint8_t *io_space = NULL;
static uint8_t *p_space = NULL;

uint8_t *new_space(int size) {
	uint8_t *p = p_space;

	size = (size + (PAGE_SIZE - 1)) & ~PAGE_MASK;
	p_space += size;
	assert(p_space - io_space < IO_SPACE_MAX);
	return p;
}

static void check_bound(IOMap *map, uint32_t addr) {
	if(map == NULL) {
		printf("address (0x%08x) is out of bound at pc 0x%08x\n", addr, cpu.pc);
		assert(map != NULL);
	} else {
		if(addr > map->high || addr < map->low){
			printf("address (0x%08x) is out of bound {%s} [0x%08x, 0x%08x] at pc = 0x%08x\n", addr, map->name, map->low, map->high,  cpu.pc);
		}
		assert(addr <= map->high && addr >= map->low);
	}
}

static void invoke_callback(io_callback_t c, uint32_t offset, int len, bool is_write) {
	if(c != NULL) { c(offset, len, is_write); }
}

void init_map() {
	io_space = (uint8_t *)malloc(IO_SPACE_MAX);
	assert(io_space);
	p_space = io_space;
}

uint32_t map_read(uint32_t addr, IOMap *map) {
	IFDEF(CONFIG_DTRACE, printf("name = %s, addr = 0x%08x\n", map->name, addr));
	check_bound(map, addr);
	uint32_t offset = addr - map->low;
	invoke_callback(map->callback, offset, 4, false);

	uint32_t ret = host_read(map->space + offset);
	return ret;
}

void map_write(uint32_t addr, int len, uint32_t data, IOMap *map) {
	IFDEF(CONFIG_DTRACE, printf("name = %s, addr = 0x%08x, data = 0x%08x\n", map->name, addr, data));
	assert(len >= 1 && len <= 8);
	check_bound(map, addr);
	uint32_t offset = addr - map->low;
	host_write(map->space + offset, len, data);
	invoke_callback(map->callback, offset, len, true);
}



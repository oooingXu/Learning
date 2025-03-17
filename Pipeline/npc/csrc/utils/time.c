#include <sys/time.h>

#include <common.h>
#include <utils.h>

#define CLOCKS_PER_SEC ((__clock_t)1000000)


static uint64_t boot_time = 0;

static uint64_t get_time_internal() {
	struct timeval now;
	gettimeofday(&now, NULL);
	uint64_t us = now.tv_sec * 1000000 + now.tv_usec;

	return us;
}

uint64_t get_time() {
	if (boot_time == 0) boot_time = get_time_internal();
	uint64_t now = get_time_internal();

	return now - boot_time;
}

void init_rand() {
	srand(get_time_internal());
}


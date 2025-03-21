#include <common.h>
#include <locale.h>
#include <signal.h>

static struct timeval boot = {};

uint64_t uptime(void) {
	struct timeval t;
	gettimeofday(&t, NULL);

	int s = t.tv_sec - boot.tv_sec;
	int us = t.tv_usec - boot.tv_usec;
	if(us < 0) {
		s--;
		us += 1000000;
	}

	return s * 1000 + (us + 500) / 1000;
}

static eprintf_handle_t eprintf_handle = vprintf;

int eprintf(const char *fmt, ...) {
  va_list args;
  int ret;
  va_start(args, fmt);
  ret = (*eprintf_handle)(fmt, args);
  va_end(args);
  return ret;
}

bool sim_verbose = true;


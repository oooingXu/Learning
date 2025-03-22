#include <lcommon.h>
#include <locale.h>
#include <signal.h>

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


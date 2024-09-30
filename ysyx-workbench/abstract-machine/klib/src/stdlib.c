

#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;

/*
typedef struct block { 
	size_t size;
	int free;
	void *addr;
	struct block *next;
}Block;

Block *hbrk = NULL;
*/

int rand(void) {
  // RAND_MAX assumed to be 32767
  next = next * 1103515245 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

void srand(unsigned int seed) {
  next = seed;
}

int abs(int x) {
  return (x < 0 ? -x : x);
}

int atoi(const char* nptr) {
  int x = 0;
  while (*nptr == ' ') { nptr ++; }
  while (*nptr >= '0' && *nptr <= '9') {
    x = x * 10 + *nptr - '0';
    nptr ++;
  }
  return x;
}

/*
void initialize() {
	hbrk->addr = heap.start;
	hbrk->size = heap.end - heap.start;
	//printf("addr = %d, size = %d\n", addr, addr->size);
	hbrk->free = 1;
	hbrk->next = NULL;
}
*/

#if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
#endif

	//extern char _heap_start;
	//char *hbrk = &_heap_start;
	char *hbrk;

void initialize() {
	hbrk = heap.start;
}

void *malloc(size_t size) {
	if(hbrk == NULL) {
		initialize();
	}
  
  size  = (size_t)ROUNDUP(size, 4);
  char *old = hbrk;
  hbrk += size;
  return old;
  // On native, malloc() will be called during initializaion of C runtime.
  // Therefore do not call panic() here, else it will yield a dead recursion:
  //   panic() -> putchar() -> (glibc) -> malloc() -> panic()
	
		/*
#if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
  //panic("Not implemented");
  size  = (size_t)ROUNDUP(size, 4);
  char *old = hbrk;
  hbrk += size;
  return old;
#endif
*/
		//printf("size = %d, addr->size = %d, addr = %d\n");
		//printf("Wrong malloc!\n");
  return NULL;
}

void free(void *ptr) {
	/*
	if(ptr == NULL) return;

		Block *cur = (Block *)ptr;
    cur->free = 1;

    if (cur->next != NULL && cur->next->free == 1) {
        cur->size += cur->next->size + sizeof(Block);
        cur->next = cur->next->next;
    }

    if (addr == NULL || addr > cur) {
				cur->next = addr;
        addr = cur;
    }
		*/
}

#endif

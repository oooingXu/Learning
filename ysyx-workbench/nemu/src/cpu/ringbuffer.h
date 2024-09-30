#ifndef _RingBuffer_h
#define _RingBuffer_h

#include<cpu/bstrlib.h>

#define IRINGBUF_SIZE 10

typedef struct 
{
	char buf[128];
	int length;
	int count;
	int on_off;
}RingBuffer;

extern RingBuffer iringbuf[IRINGBUF_SIZE];

void RingBuffer_init();

void RingBuffer_write(RingBuffer ringbuffer[], char *data);

void RingBuffer_print();

#endif


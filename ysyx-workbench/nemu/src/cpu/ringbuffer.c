#ifdef CONFIG_RTRACE
#include<assert.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<cpu/cpu.h>
#include<cpu/ringbuffer.h>

RingBuffer iringbuf[IRINGBUF_SIZE] ;

void RingBuffer_init(){
	iringbuf->count = 0;
	iringbuf->length = IRINGBUF_SIZE;
}

void RingBuffer_write(RingBuffer ringbuffer[], char *data)
{
	strcpy(ringbuffer[iringbuf->count].buf, data);
	ringbuffer[iringbuf->count].on_off = 1;

	if(iringbuf->count < IRINGBUF_SIZE - 1){
		iringbuf->count++;
	} else {
		iringbuf->count = 0;
	}
}

void RingBuffer_print(){
	printf("\nWrong instruction:\n");

	int iwrong = iringbuf->count == 0 ? IRINGBUF_SIZE -1 : iringbuf->count - 1;

	for(int i = iringbuf->count; i < iringbuf->count + IRINGBUF_SIZE; i++){
		if(i  + 1 == IRINGBUF_SIZE + iringbuf->count && iringbuf[iwrong].on_off == 1){
				printf("---> %-10s\n", iringbuf[iwrong].buf);
		} 
		else if(i < IRINGBUF_SIZE && iringbuf[i].on_off == 1){
				printf("     %-10s\n", iringbuf[i].buf);
		}
		else if(iringbuf[i-IRINGBUF_SIZE].on_off == 1){
				printf("     %-10s\n", iringbuf[i-IRINGBUF_SIZE].buf);
		}
	}
}
			
#endif

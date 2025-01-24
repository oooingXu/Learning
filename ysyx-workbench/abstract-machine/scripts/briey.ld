ENTRY(_start)
PHDRS { 
	text PT_LOAD; 
	data PT_LOAD;
	rodata PT_LOAD;
	bss PT_LOAD;
 }

MEMORY {
	ddr   : ORIGIN = 0x40000000, LENGTH = 1M
	bram  : ORIGIN = 0x80000000, LENGTH = 1024M
}
SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS */
  . = _pmem_start + _entry_offset;
  .text : {
    *(entry)
    *(.text*)
  } > bram : text
  etext = .;
  _etext = .;
  .rodata : {
    *(.rodata*)
  } > bram
  .data : {
    *(.data)
  } > bram : data
  edata = .;
  _data = .;
  .bss : {
	_bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  } > bram
	.heap (NOLOAD) : {
		_heap_start = .;
		. = . + 0x8000;
		_heap_end = .;
	} > bram
	.stack (NOLOAD) : {
		_stack_start = .;
		. = . + 0x8000;
		_stack_end = .;
	} > bram
  _stack_top = ALIGN(0x1000);
  . = _stack_top + 0x8000;
  _stack_pointer = .;
  end = .;
  _end = .;
  _heap_start = ALIGN(0x1000);
}

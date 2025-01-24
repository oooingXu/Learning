ENTRY(_start)
/*PHDRS { text PT_LOAD; data PT_LOAD; }*/

MEMORY {
	mrom : ORIGIN = 0x20000000, LENGTH = 4K
	sram : ORIGIN = 0x0f000000, LENGTH = 8K
}

SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS */
	. = ORIGIN(sram);
	. = ALIGN(4);
  .text : {
    *(entry)
    *(.text*)
		_etext = .;
  } > mrom AT> mrom

	. = ALIGN(4);
  .rodata : {
    *(.rodata*)
  } > mrom AT> mrom

	. = ALIGN(4);
  .data : {  
    _data = .;
    *(.data)  
    _edata = .;           
  } > sram AT> mrom 
  
	. = ALIGN(4);
  .bss : {  
    _bss_start = .; 
    *(.bss*)
    *(.sbss*) 
    *(.scommon) 
    _bss_end = .;
  } > sram AT> mrom 
   
	. = ORIGIN(sram) + SIZEOF(.data);
  _stack_top = ALIGN(0x0100);
	. = _stack_top + 0x1000;
  _stack_pointer = .;
	_stack_end = .;
  _heap_start = ALIGN(0x100);
	_heap_end = ORIGIN(sram) + LENGTH(sram) - 0x1;
}

ENTRY(_start)

MEMORY {
	/*mrom : ORIGIN = 0x20000000, LENGTH = 4K*/
	sram  : ORIGIN = 0x0f000000, LENGTH = 8K
	flash : ORIGIN = 0x30000000, LENGTH = 16M
	psram : ORIGIN = 0x80000000, LENGTH = 4M
}

SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS */
	. = _pmem_start + _entry_offset;

	.fsbl : {
		. = ALIGN(8);
    *(entry)
		*(.fsbl*)
		. = ALIGN(8);
	} > flash AT> flash

	.ssbl : {
		. = ALIGN(8);
		_ssbl = .;
		*(.ssbl*)
		_essbl = .;
		. = ALIGN(8);
	} > psram AT> flash
	_ssbl_lma = LOADADDR(.ssbl);
	_ssbl_size = _essbl - _ssbl;

  .text : {
		. = ALIGN(8);
		_text = .;
    *(.text*)
		_etext = .;
		. = ALIGN(8);
  } > psram AT> flash 
	_text_lma = LOADADDR(.text);
	_text_size = _etext - _text;

  .rodata : {
		. = ALIGN(8);
		_rodata = .;
    *(.rodata*)
    *(.srodata*)
		_erodata = .;
		. = ALIGN(8);
  } > psram AT> flash
	_rodata_lma = LOADADDR(.rodata);
	_rodata_size = _erodata - _rodata;

  .data : {
		. = ALIGN(8);
		_data = .;
    *(.data*)
    *(.sdata*)
		_edata = .;
		. = ALIGN(8);
  } > psram AT> flash 
	_data_lma = LOADADDR(.data);
	_data_size = _edata - _data;

  .bss : {
		. = ALIGN(8);
		_bss = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon*)
		_ebss = .;
		. = ALIGN(8);
  } > psram AT> flash
	_bss_size = _ebss - _bss;

  _heap_start = ALIGN(0x1000);
  _heap_end = ORIGIN(psram) + LENGTH(psram);

  _stack_top = ORIGIN(sram);
	. = _stack_top + LENGTH(sram);
  _stack_pointer = .;
	_stack_end = .;
}

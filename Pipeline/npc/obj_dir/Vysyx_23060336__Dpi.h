// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_23060336__DPI_H_
#define VERILATED_VYSYX_23060336__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/romeo/ysyx-workbench/npc/vsrc/ysyx_23060336.sv:4730:31
    extern int pmem_read(int araddr);
    // DPI import at /home/romeo/ysyx-workbench/npc/vsrc/ysyx_23060336.sv:4729:29
    extern int pmem_write(int awaddr, int wdata, int wstrb);
    // DPI import at /home/romeo/ysyx-workbench/npc/vsrc/ysyx_23060336.sv:4713:30
    extern void set_npc_state(int ebreak);

#ifdef __cplusplus
}
#endif

#endif  // guard

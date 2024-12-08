// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VNPC__DPI_H_
#define VERILATED_VNPC__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/romeo/ysyx-workbench/npc/build/NPC.sv:3634:29
    extern int pmem_read(int Maddr);
    // DPI import at /home/romeo/ysyx-workbench/npc/build/NPC.sv:3656:30
    extern void pmem_write(int Maddr, int DataIn, int wmask);
    // DPI import at /home/romeo/ysyx-workbench/npc/build/NPC.sv:3684:30
    extern void set_npc_state(int isbreak);

#ifdef __cplusplus
}
#endif

#endif  // guard

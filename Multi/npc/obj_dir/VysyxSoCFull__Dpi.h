// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/romeo/ysyx-workbench/npc/../ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/romeo/ysyx-workbench/npc/../ysyxSoC/build/ysyxSoCFull.v:4716:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at /home/romeo/ysyx-workbench/npc/../ysyxSoC/perip/psram/psram.v:1:30
    extern void psram_read(int addr, int* data, int wr);
    // DPI import at /home/romeo/ysyx-workbench/npc/vsrc/ysyx_23060336.sv:4376:30
    extern void set_npc_state(int ebreak, int ifu_count, int lsu_count, int i_type_count, int s_type_count, int u_type_count, int b_type_count, int r_type_count, int j_type_count, int c_type_count, int w_type_count, int ifu_clk_count_h, int ifu_clk_count_l, int lsu_clk_count_h, int lsu_clk_count_l, int ifu_psram_clk_h, int ifu_psram_clk_l, int ifu_flash_clk_h, int ifu_flash_clk_l, int i_clk, int s_clk, int u_clk, int b_clk, int r_clk, int j_clk, int c_clk, int w_clk, int backend_clk_h, int backend_clk_l, int ifu_flash_count, int ifu_psram_count);
    // DPI import at /home/romeo/ysyx-workbench/npc/vsrc/ysyx_23060336.sv:4459:30
    extern void sram_read(int araddr, int arvalid, int arready, int arsize, int awaddr, int wdata, int awvalid, int awready, int wstrb);

#ifdef __cplusplus
}
#endif

#endif  // guard

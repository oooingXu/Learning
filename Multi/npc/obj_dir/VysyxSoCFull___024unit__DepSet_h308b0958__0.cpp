// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024unit.h"

extern "C" void psram_read(int addr, int* data, int wr);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_psram_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data, IData/*31:0*/ wr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_psram_read_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int data__Vcvt;
    for (size_t data__Vidx = 0; data__Vidx < 1; ++data__Vidx) data__Vcvt = data;
    int wr__Vcvt;
    for (size_t wr__Vidx = 0; wr__Vidx < 1; ++wr__Vidx) wr__Vcvt = wr;
    psram_read(addr__Vcvt, &data__Vcvt, wr__Vcvt);
    data = data__Vcvt;
}

extern "C" void flash_read(int addr, int* data);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int data__Vcvt;
    flash_read(addr__Vcvt, &data__Vcvt);
    data = data__Vcvt;
}

extern "C" void set_npc_state(int ebreak);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_set_npc_state_TOP____024unit(IData/*31:0*/ ebreak) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_set_npc_state_TOP____024unit\n"); );
    // Body
    int ebreak__Vcvt;
    for (size_t ebreak__Vidx = 0; ebreak__Vidx < 1; ++ebreak__Vidx) ebreak__Vcvt = ebreak;
    set_npc_state(ebreak__Vcvt);
}

extern "C" void diff_skip_sign(int araddr, int arvalid, int arready, int awaddr, int awvalid, int awready);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_diff_skip_sign_TOP____024unit(IData/*31:0*/ araddr, IData/*31:0*/ arvalid, IData/*31:0*/ arready, IData/*31:0*/ awaddr, IData/*31:0*/ awvalid, IData/*31:0*/ awready) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_diff_skip_sign_TOP____024unit\n"); );
    // Body
    int araddr__Vcvt;
    for (size_t araddr__Vidx = 0; araddr__Vidx < 1; ++araddr__Vidx) araddr__Vcvt = araddr;
    int arvalid__Vcvt;
    for (size_t arvalid__Vidx = 0; arvalid__Vidx < 1; ++arvalid__Vidx) arvalid__Vcvt = arvalid;
    int arready__Vcvt;
    for (size_t arready__Vidx = 0; arready__Vidx < 1; ++arready__Vidx) arready__Vcvt = arready;
    int awaddr__Vcvt;
    for (size_t awaddr__Vidx = 0; awaddr__Vidx < 1; ++awaddr__Vidx) awaddr__Vcvt = awaddr;
    int awvalid__Vcvt;
    for (size_t awvalid__Vidx = 0; awvalid__Vidx < 1; ++awvalid__Vidx) awvalid__Vcvt = awvalid;
    int awready__Vcvt;
    for (size_t awready__Vidx = 0; awready__Vidx < 1; ++awready__Vidx) awready__Vcvt = awready;
    diff_skip_sign(araddr__Vcvt, arvalid__Vcvt, arready__Vcvt, awaddr__Vcvt, awvalid__Vcvt, awready__Vcvt);
}

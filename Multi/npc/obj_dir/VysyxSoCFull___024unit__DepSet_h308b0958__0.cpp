// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024unit.h"

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

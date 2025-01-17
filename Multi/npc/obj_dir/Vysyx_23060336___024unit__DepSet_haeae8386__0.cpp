// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060336.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060336__Syms.h"
#include "Vysyx_23060336___024unit.h"

extern "C" void set_npc_state(int ebreak);

VL_INLINE_OPT void Vysyx_23060336___024unit____Vdpiimwrap_set_npc_state_TOP____024unit(IData/*31:0*/ ebreak) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_23060336___024unit____Vdpiimwrap_set_npc_state_TOP____024unit\n"); );
    // Body
    int ebreak__Vcvt;
    for (size_t ebreak__Vidx = 0; ebreak__Vidx < 1; ++ebreak__Vidx) ebreak__Vcvt = ebreak;
    set_npc_state(ebreak__Vcvt);
}

extern "C" int pmem_write(int awaddr, int wdata, int wstrb);

VL_INLINE_OPT void Vysyx_23060336___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ awaddr, IData/*31:0*/ wdata, IData/*31:0*/ wstrb, IData/*31:0*/ &pmem_write__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_23060336___024unit____Vdpiimwrap_pmem_write_TOP____024unit\n"); );
    // Body
    int awaddr__Vcvt;
    for (size_t awaddr__Vidx = 0; awaddr__Vidx < 1; ++awaddr__Vidx) awaddr__Vcvt = awaddr;
    int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    int wstrb__Vcvt;
    for (size_t wstrb__Vidx = 0; wstrb__Vidx < 1; ++wstrb__Vidx) wstrb__Vcvt = wstrb;
    int pmem_write__Vfuncrtn__Vcvt;
    pmem_write__Vfuncrtn__Vcvt = pmem_write(awaddr__Vcvt, wdata__Vcvt, wstrb__Vcvt);
    pmem_write__Vfuncrtn = pmem_write__Vfuncrtn__Vcvt;
}

extern "C" int pmem_read(int araddr);

VL_INLINE_OPT void Vysyx_23060336___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ araddr, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vysyx_23060336___024unit____Vdpiimwrap_pmem_read_TOP____024unit\n"); );
    // Body
    int araddr__Vcvt;
    for (size_t araddr__Vidx = 0; araddr__Vidx < 1; ++araddr__Vidx) araddr__Vcvt = araddr;
    int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(araddr__Vcvt);
    pmem_read__Vfuncrtn = pmem_read__Vfuncrtn__Vcvt;
}

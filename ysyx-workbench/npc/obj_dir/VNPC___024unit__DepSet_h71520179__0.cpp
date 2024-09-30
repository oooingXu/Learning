// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNPC.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VNPC__Syms.h"
#include "VNPC___024unit.h"

extern "C" int pmem_read(int Maddr);

VL_INLINE_OPT void VNPC___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ Maddr, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNPC___024unit____Vdpiimwrap_pmem_read_TOP____024unit\n"); );
    // Body
    int Maddr__Vcvt;
    for (size_t Maddr__Vidx = 0; Maddr__Vidx < 1; ++Maddr__Vidx) Maddr__Vcvt = Maddr;
    int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(Maddr__Vcvt);
    pmem_read__Vfuncrtn = pmem_read__Vfuncrtn__Vcvt;
}

extern "C" void pmem_write(int Maddr, int DataIn, int wmask);

VL_INLINE_OPT void VNPC___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ Maddr, IData/*31:0*/ DataIn, IData/*31:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNPC___024unit____Vdpiimwrap_pmem_write_TOP____024unit\n"); );
    // Body
    int Maddr__Vcvt;
    for (size_t Maddr__Vidx = 0; Maddr__Vidx < 1; ++Maddr__Vidx) Maddr__Vcvt = Maddr;
    int DataIn__Vcvt;
    for (size_t DataIn__Vidx = 0; DataIn__Vidx < 1; ++DataIn__Vidx) DataIn__Vcvt = DataIn;
    int wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(Maddr__Vcvt, DataIn__Vcvt, wmask__Vcvt);
}

extern "C" void set_npc_state(int isbreak);

VL_INLINE_OPT void VNPC___024unit____Vdpiimwrap_set_npc_state_TOP____024unit(IData/*31:0*/ isbreak) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VNPC___024unit____Vdpiimwrap_set_npc_state_TOP____024unit\n"); );
    // Body
    int isbreak__Vcvt;
    for (size_t isbreak__Vidx = 0; isbreak__Vidx < 1; ++isbreak__Vidx) isbreak__Vcvt = isbreak;
    set_npc_state(isbreak__Vcvt);
}

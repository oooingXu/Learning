// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNPC.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VNPC__Syms.h"
#include "VNPC___024unit.h"

void VNPC___024unit___ctor_var_reset(VNPC___024unit* vlSelf);

VNPC___024unit::VNPC___024unit(VNPC__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VNPC___024unit___ctor_var_reset(this);
}

void VNPC___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VNPC___024unit::~VNPC___024unit() {
}

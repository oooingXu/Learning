// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060336.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060336__Syms.h"
#include "Vysyx_23060336___024root.h"

void Vysyx_23060336___024root___ctor_var_reset(Vysyx_23060336___024root* vlSelf);

Vysyx_23060336___024root::Vysyx_23060336___024root(Vysyx_23060336__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vysyx_23060336___024root___ctor_var_reset(this);
}

void Vysyx_23060336___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vysyx_23060336___024root::~Vysyx_23060336___024root() {
}

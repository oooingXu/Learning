// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNPC.h for the primary calling header

#ifndef VERILATED_VNPC___024UNIT_H_
#define VERILATED_VNPC___024UNIT_H_  // guard

#include "verilated.h"

class VNPC__Syms;

class VNPC___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VNPC__Syms* const vlSymsp;

    // CONSTRUCTORS
    VNPC___024unit(VNPC__Syms* symsp, const char* v__name);
    ~VNPC___024unit();
    VL_UNCOPYABLE(VNPC___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

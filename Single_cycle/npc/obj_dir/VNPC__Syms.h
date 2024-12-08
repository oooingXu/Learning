// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VNPC__SYMS_H_
#define VERILATED_VNPC__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VNPC.h"

// INCLUDE MODULE CLASSES
#include "VNPC___024root.h"
#include "VNPC___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class VNPC__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VNPC* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VNPC___024root                 TOP;
    VNPC___024unit                 TOP____024unit;

    // CONSTRUCTORS
    VNPC__Syms(VerilatedContext* contextp, const char* namep, VNPC* modelp);
    ~VNPC__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

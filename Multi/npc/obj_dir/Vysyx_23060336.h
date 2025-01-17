// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VYSYX_23060336_H_
#define VERILATED_VYSYX_23060336_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vysyx_23060336__Syms;
class Vysyx_23060336___024root;
class VerilatedFstC;
class Vysyx_23060336___024unit;


// This class is the main interface to the Verilated model
class Vysyx_23060336 VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vysyx_23060336__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_OUT8(&io_checkright,0,0);
    VL_OUT8(&io_ebreak,0,0);
    VL_OUT8(&io_iduopcode,6,0);
    VL_OUT8(&io_idupcmux,1,0);
    VL_OUT8(&io_exupcmux,3,0);
    VL_OUT8(&io_ifuvalid,0,0);
    VL_OUT8(&io_ifuready,0,0);
    VL_OUT8(&io_iduvalid,0,0);
    VL_OUT8(&io_iduready,0,0);
    VL_OUT8(&io_exuvalid,0,0);
    VL_OUT8(&io_exuready,0,0);
    VL_OUT8(&io_lsuvalid,0,0);
    VL_OUT8(&io_lsuready,0,0);
    VL_OUT8(&io_lsuarvalid,0,0);
    VL_OUT8(&io_lsuarready,0,0);
    VL_OUT8(&io_lsuawvalid,0,0);
    VL_OUT8(&io_lsuawready,0,0);
    VL_OUT8(&io_lsurready,0,0);
    VL_OUT8(&io_lsurvalid,0,0);
    VL_OUT8(&io_lsuwready,0,0);
    VL_OUT8(&io_lsuwvalid,0,0);
    VL_OUT8(&io_ifurvalid,0,0);
    VL_OUT8(&io_ifuarvalid,0,0);
    VL_OUT8(&io_wbuvalid,0,0);
    VL_OUT8(&io_wbuready,0,0);
    VL_OUT8(&io_MemtoReg,0,0);
    VL_OUT8(&io_iduMemWr,0,0);
    VL_OUT8(&io_exuMemWr,0,0);
    VL_OUT8(&io_lsuMemWr,0,0);
    VL_OUT8(&io_isRAW,0,0);
    VL_OUT8(&io_checkfail,0,0);
    VL_OUT8(&io_arid_halt,3,0);
    VL_OUT8(&io_awid_halt,3,0);
    VL_OUT8(&io_alumux,3,0);
    VL_OUT8(&io_idurs1,4,0);
    VL_OUT8(&io_idurs2,4,0);
    VL_OUT8(&io_exurd,4,0);
    VL_OUT8(&io_lsurd,4,0);
    VL_OUT8(&io_wburd,4,0);
    VL_OUT8(&io_regrs1,4,0);
    VL_OUT8(&io_regrs2,4,0);
    VL_OUT8(&io_regwen,0,0);
    VL_OUT8(&io_regwaddr,4,0);
    VL_OUT(&io_NPC,31,0);
    VL_OUT(&io_PC,31,0);
    VL_OUT(&io_inst,31,0);
    VL_OUT(&io_mcause,31,0);
    VL_OUT(&io_mstatus,31,0);
    VL_OUT(&io_iduinst,31,0);
    VL_OUT(&io_idupc,31,0);
    VL_OUT(&io_exupc,31,0);
    VL_OUT(&io_pcadd,31,0);
    VL_OUT(&io_pca,31,0);
    VL_OUT(&io_pcb,31,0);
    VL_OUT(&io_aluresult,31,0);
    VL_OUT(&io_ina,31,0);
    VL_OUT(&io_inb,31,0);
    VL_OUT(&io_regdata,31,0);
    VL_OUT(&io_csrdata,31,0);
    VL_OUT(&io_ifuaraddr,31,0);
    VL_OUT(&io_lsuaraddr,31,0);
    VL_OUT(&io_lsurdata,31,0);
    VL_OUT(&io_ifurdata,31,0);
    VL_OUT(&io_lsuawaddr,31,0);
    VL_OUT(&io_lsuwdata,31,0);
    VL_OUT(&io_wburesult,31,0);
    VL_OUT(&io_wbupc,31,0);
    VL_OUT(&io_lsupc,31,0);
    VL_OUT(&io_regsrc1,31,0);
    VL_OUT(&io_regsrc2,31,0);
    VL_OUT(&io_regwdata,31,0);
    VL_OUT(&io_imm,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vysyx_23060336___024unit* const __PVT____024unit;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vysyx_23060336___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vysyx_23060336(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vysyx_23060336(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vysyx_23060336();
  private:
    VL_UNCOPYABLE(Vysyx_23060336);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedFstC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

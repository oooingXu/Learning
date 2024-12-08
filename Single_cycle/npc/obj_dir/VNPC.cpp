// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VNPC.h"
#include "VNPC__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VNPC::VNPC(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VNPC__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_reset{vlSymsp->TOP.io_reset}
    , io_rd{vlSymsp->TOP.io_rd}
    , io_instType{vlSymsp->TOP.io_instType}
    , io_AluMux{vlSymsp->TOP.io_AluMux}
    , io_AluSel{vlSymsp->TOP.io_AluSel}
    , io_PCMux{vlSymsp->TOP.io_PCMux}
    , io_MemNum{vlSymsp->TOP.io_MemNum}
    , io_RegWr{vlSymsp->TOP.io_RegWr}
    , io_MemWr{vlSymsp->TOP.io_MemWr}
    , io_stop{vlSymsp->TOP.io_stop}
    , io_MemtoReg{vlSymsp->TOP.io_MemtoReg}
    , io_src1{vlSymsp->TOP.io_src1}
    , io_src2{vlSymsp->TOP.io_src2}
    , io_halt_ret{vlSymsp->TOP.io_halt_ret}
    , io_PC{vlSymsp->TOP.io_PC}
    , io_NPC{vlSymsp->TOP.io_NPC}
    , io_halt{vlSymsp->TOP.io_halt}
    , io_result{vlSymsp->TOP.io_result}
    , io_ina{vlSymsp->TOP.io_ina}
    , io_inb{vlSymsp->TOP.io_inb}
    , io_inst{vlSymsp->TOP.io_inst}
    , io_DataOut{vlSymsp->TOP.io_DataOut}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VNPC::VNPC(const char* _vcname__)
    : VNPC(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VNPC::~VNPC() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VNPC___024root___eval_debug_assertions(VNPC___024root* vlSelf);
#endif  // VL_DEBUG
void VNPC___024root___eval_static(VNPC___024root* vlSelf);
void VNPC___024root___eval_initial(VNPC___024root* vlSelf);
void VNPC___024root___eval_settle(VNPC___024root* vlSelf);
void VNPC___024root___eval(VNPC___024root* vlSelf);

void VNPC::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VNPC::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VNPC___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VNPC___024root___eval_static(&(vlSymsp->TOP));
        VNPC___024root___eval_initial(&(vlSymsp->TOP));
        VNPC___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VNPC___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VNPC::eventsPending() { return false; }

uint64_t VNPC::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VNPC::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VNPC___024root___eval_final(VNPC___024root* vlSelf);

VL_ATTR_COLD void VNPC::final() {
    VNPC___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VNPC::hierName() const { return vlSymsp->name(); }
const char* VNPC::modelName() const { return "VNPC"; }
unsigned VNPC::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VNPC::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VNPC___024root__trace_init_top(VNPC___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VNPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VNPC___024root*>(voidSelf);
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VNPC___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VNPC___024root__trace_register(VNPC___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VNPC::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VNPC::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VNPC___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vysyx_23060336.h"
#include "Vysyx_23060336__Syms.h"
#include "verilated_fst_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vysyx_23060336::Vysyx_23060336(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vysyx_23060336__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_ebreak{vlSymsp->TOP.io_ebreak}
    , io_iduopcode{vlSymsp->TOP.io_iduopcode}
    , io_idupcmux{vlSymsp->TOP.io_idupcmux}
    , io_exupcmux{vlSymsp->TOP.io_exupcmux}
    , io_ifuvalid{vlSymsp->TOP.io_ifuvalid}
    , io_ifuready{vlSymsp->TOP.io_ifuready}
    , io_iduvalid{vlSymsp->TOP.io_iduvalid}
    , io_iduready{vlSymsp->TOP.io_iduready}
    , io_exuvalid{vlSymsp->TOP.io_exuvalid}
    , io_exuready{vlSymsp->TOP.io_exuready}
    , io_lsuvalid{vlSymsp->TOP.io_lsuvalid}
    , io_lsuready{vlSymsp->TOP.io_lsuready}
    , io_lsuarvalid{vlSymsp->TOP.io_lsuarvalid}
    , io_lsuarready{vlSymsp->TOP.io_lsuarready}
    , io_lsuawvalid{vlSymsp->TOP.io_lsuawvalid}
    , io_lsuawready{vlSymsp->TOP.io_lsuawready}
    , io_lsurready{vlSymsp->TOP.io_lsurready}
    , io_lsurvalid{vlSymsp->TOP.io_lsurvalid}
    , io_lsuwready{vlSymsp->TOP.io_lsuwready}
    , io_lsuwvalid{vlSymsp->TOP.io_lsuwvalid}
    , io_ifurvalid{vlSymsp->TOP.io_ifurvalid}
    , io_ifuarvalid{vlSymsp->TOP.io_ifuarvalid}
    , io_wbuvalid{vlSymsp->TOP.io_wbuvalid}
    , io_wbuready{vlSymsp->TOP.io_wbuready}
    , io_MemtoReg{vlSymsp->TOP.io_MemtoReg}
    , io_iduMemWr{vlSymsp->TOP.io_iduMemWr}
    , io_exuMemWr{vlSymsp->TOP.io_exuMemWr}
    , io_lsuMemWr{vlSymsp->TOP.io_lsuMemWr}
    , io_isRAW{vlSymsp->TOP.io_isRAW}
    , io_checkright{vlSymsp->TOP.io_checkright}
    , io_checkfail{vlSymsp->TOP.io_checkfail}
    , io_arid_halt{vlSymsp->TOP.io_arid_halt}
    , io_awid_halt{vlSymsp->TOP.io_awid_halt}
    , io_alumux{vlSymsp->TOP.io_alumux}
    , io_idurs1{vlSymsp->TOP.io_idurs1}
    , io_idurs2{vlSymsp->TOP.io_idurs2}
    , io_exurd{vlSymsp->TOP.io_exurd}
    , io_lsurd{vlSymsp->TOP.io_lsurd}
    , io_wburd{vlSymsp->TOP.io_wburd}
    , io_regrs1{vlSymsp->TOP.io_regrs1}
    , io_regrs2{vlSymsp->TOP.io_regrs2}
    , io_regwen{vlSymsp->TOP.io_regwen}
    , io_regwaddr{vlSymsp->TOP.io_regwaddr}
    , io_NPC{vlSymsp->TOP.io_NPC}
    , io_PC{vlSymsp->TOP.io_PC}
    , io_inst{vlSymsp->TOP.io_inst}
    , io_mcause{vlSymsp->TOP.io_mcause}
    , io_mstatus{vlSymsp->TOP.io_mstatus}
    , io_iduinst{vlSymsp->TOP.io_iduinst}
    , io_idupc{vlSymsp->TOP.io_idupc}
    , io_exupc{vlSymsp->TOP.io_exupc}
    , io_pcadd{vlSymsp->TOP.io_pcadd}
    , io_pca{vlSymsp->TOP.io_pca}
    , io_pcb{vlSymsp->TOP.io_pcb}
    , io_aluresult{vlSymsp->TOP.io_aluresult}
    , io_ina{vlSymsp->TOP.io_ina}
    , io_inb{vlSymsp->TOP.io_inb}
    , io_regdata{vlSymsp->TOP.io_regdata}
    , io_csrdata{vlSymsp->TOP.io_csrdata}
    , io_ifuaraddr{vlSymsp->TOP.io_ifuaraddr}
    , io_lsuaraddr{vlSymsp->TOP.io_lsuaraddr}
    , io_lsurdata{vlSymsp->TOP.io_lsurdata}
    , io_ifurdata{vlSymsp->TOP.io_ifurdata}
    , io_lsuawaddr{vlSymsp->TOP.io_lsuawaddr}
    , io_lsuwdata{vlSymsp->TOP.io_lsuwdata}
    , io_wburesult{vlSymsp->TOP.io_wburesult}
    , io_wbupc{vlSymsp->TOP.io_wbupc}
    , io_lsupc{vlSymsp->TOP.io_lsupc}
    , io_regsrc1{vlSymsp->TOP.io_regsrc1}
    , io_regsrc2{vlSymsp->TOP.io_regsrc2}
    , io_regwdata{vlSymsp->TOP.io_regwdata}
    , io_imm{vlSymsp->TOP.io_imm}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vysyx_23060336::Vysyx_23060336(const char* _vcname__)
    : Vysyx_23060336(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vysyx_23060336::~Vysyx_23060336() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vysyx_23060336___024root___eval_debug_assertions(Vysyx_23060336___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_23060336___024root___eval_static(Vysyx_23060336___024root* vlSelf);
void Vysyx_23060336___024root___eval_initial(Vysyx_23060336___024root* vlSelf);
void Vysyx_23060336___024root___eval_settle(Vysyx_23060336___024root* vlSelf);
void Vysyx_23060336___024root___eval(Vysyx_23060336___024root* vlSelf);

void Vysyx_23060336::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vysyx_23060336::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vysyx_23060336___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vysyx_23060336___024root___eval_static(&(vlSymsp->TOP));
        Vysyx_23060336___024root___eval_initial(&(vlSymsp->TOP));
        Vysyx_23060336___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vysyx_23060336___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vysyx_23060336::eventsPending() { return false; }

uint64_t Vysyx_23060336::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vysyx_23060336::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vysyx_23060336___024root___eval_final(Vysyx_23060336___024root* vlSelf);

VL_ATTR_COLD void Vysyx_23060336::final() {
    Vysyx_23060336___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vysyx_23060336::hierName() const { return vlSymsp->name(); }
const char* Vysyx_23060336::modelName() const { return "Vysyx_23060336"; }
unsigned Vysyx_23060336::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vysyx_23060336::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vysyx_23060336___024root__trace_init_top(Vysyx_23060336___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vysyx_23060336___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060336___024root*>(voidSelf);
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vysyx_23060336___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vysyx_23060336___024root__trace_register(Vysyx_23060336___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vysyx_23060336::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vysyx_23060336::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vysyx_23060336___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}

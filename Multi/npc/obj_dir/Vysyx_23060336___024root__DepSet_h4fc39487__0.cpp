// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060336.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060336__Syms.h"
#include "Vysyx_23060336___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060336___024root___dump_triggers__ico(Vysyx_23060336___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060336___024root___eval_triggers__ico(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_23060336___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060336___024root___dump_triggers__act(Vysyx_23060336___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060336___024root___eval_triggers__act(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__VactTriggered.at(1U) = ((((IData)(vlSelf->io_out_valid) 
                                        & (~ (IData)(vlSelf->__Vtrigrprev__TOP__io_out_valid))) 
                                       | ((~ (IData)(vlSelf->ysyx_23060336__DOT___arbiter_io_ifu_rvalid)) 
                                          & (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_23060336__DOT___arbiter_io_ifu_rvalid))) 
                                      | ((IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_empty) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_23060336__DOT___idu_exu_io_empty))));
    vlSelf->__VactTriggered.at(2U) = (((IData)(vlSelf->clock) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock))) 
                                      | ((IData)(vlSelf->reset) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__reset))));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    vlSelf->__Vtrigrprev__TOP__io_out_valid = vlSelf->io_out_valid;
    vlSelf->__Vtrigrprev__TOP__ysyx_23060336__DOT___arbiter_io_ifu_rvalid 
        = vlSelf->ysyx_23060336__DOT___arbiter_io_ifu_rvalid;
    vlSelf->__Vtrigrprev__TOP__ysyx_23060336__DOT___idu_exu_io_empty 
        = vlSelf->ysyx_23060336__DOT___idu_exu_io_empty;
    vlSelf->__Vtrigrprev__TOP__reset = vlSelf->reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_23060336___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vysyx_23060336___024unit____Vdpiimwrap_set_npc_state_TOP____024unit(IData/*31:0*/ ebreak);

VL_INLINE_OPT void Vysyx_23060336___024root___nba_sequent__TOP__0(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__ysyx_23060336__DOT__ifu__DOT__state;
    __Vdly__ysyx_23060336__DOT__ifu__DOT__state = 0;
    CData/*4:0*/ __Vdlyvdim0__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0;
    __Vdlyvval__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0;
    __Vdlyvset__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __Vdlyvdim0__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0;
    __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0;
    __Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v1;
    __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v1;
    __Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v2;
    __Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v3;
    __Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v3 = 0;
    // Body
    Vysyx_23060336___024unit____Vdpiimwrap_set_npc_state_TOP____024unit(vlSelf->ysyx_23060336__DOT___idu_exu_io_ebreak);
    __Vdly__ysyx_23060336__DOT__ifu__DOT__state = vlSelf->ysyx_23060336__DOT__ifu__DOT__state;
    __Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v1 = 0U;
    __Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v2 = 0U;
    __Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v3 = 0U;
    __Vdlyvset__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__ysyx_23060336__DOT__arbiter__DOT__ifuinst 
        = vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst;
    if (((IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_CsrWr) 
         & (2U == (IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__state)))) {
        __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT___alu_io_result;
        __Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0 
            = (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
               >> 0x14U);
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_23060336__DOT__arbiter__DOT__state = 2U;
        __Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v3 = 1U;
        vlSelf->__Vdly__ysyx_23060336__DOT__arbiter__DOT__ifuinst = 0U;
        vlSelf->ysyx_23060336__DOT__ifu__DOT__PC = 0x80000000U;
        __Vdly__ysyx_23060336__DOT__ifu__DOT__state = 0U;
        vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__state = 0U;
    } else {
        vlSelf->ysyx_23060336__DOT__arbiter__DOT__state 
            = ((2U == (IData)(vlSelf->ysyx_23060336__DOT__arbiter__DOT__state))
                ? (2U & ((~ (IData)(vlSelf->ysyx_23060336__DOT___sram_rvalid)) 
                         << 1U)) : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__arbiter__DOT__state))
                                     ? ((IData)(vlSelf->ysyx_23060336__DOT___sram_rvalid)
                                         ? 2U : 1U)
                                     : ((0U == (IData)(vlSelf->ysyx_23060336__DOT__arbiter__DOT__state)) 
                                        & (IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__io_axi_arvalid_0))));
        if (((1U == ((IData)(vlSelf->ysyx_23060336__DOT__arbiter__DOT___GEN)
                      ? 2U : 1U)) & (IData)(vlSelf->ysyx_23060336__DOT___sram_rvalid))) {
            vlSelf->__Vdly__ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                = vlSelf->ysyx_23060336__DOT__sram__DOT__sramdata;
        }
        if (vlSelf->reset) {
            vlSelf->ysyx_23060336__DOT__ifu__DOT__PC = 0x80000000U;
        } else if (((IData)(vlSelf->ysyx_23060336__DOT__ifu__DOT__state) 
                    & (IData)(vlSelf->io_out_valid))) {
            vlSelf->ysyx_23060336__DOT__ifu__DOT__PC 
                = vlSelf->io_dnpc;
        }
        __Vdly__ysyx_23060336__DOT__ifu__DOT__state 
            = (1U & ((IData)(vlSelf->ysyx_23060336__DOT__ifu__DOT__state)
                      ? (~ (IData)(vlSelf->io_out_valid))
                      : (IData)(vlSelf->ysyx_23060336__DOT___arbiter_io_ifu_rvalid)));
        vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__state 
            = vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__casez_tmp;
    }
    if (vlSelf->ysyx_23060336__DOT____Vcellinp__csr__io_ecall) {
        __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v1 
            = vlSelf->io_pc;
        __Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v1 = 1U;
        __Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v2 = 1U;
    }
    if (vlSelf->ysyx_23060336__DOT__reg_0__DOT____Vcellinp__ysyx_23060336_regs_ext__W0_en) {
        __Vdlyvval__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0 
            = ((IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_CsrWr)
                ? vlSelf->ysyx_23060336__DOT___csr_io_rdata
                : (((2U == (IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_RegNum)) 
                    | (5U == (IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_RegNum)))
                    ? vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__DataOut
                    : ((3U == (IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_RegNum))
                        ? (0xffU & vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__DataOut)
                        : ((4U == (IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_RegNum))
                            ? (0xffffU & vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__DataOut)
                            : ((0U == (IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_RegNum))
                                ? (((- (IData)((1U 
                                                & (vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__DataOut 
                                                   >> 7U)))) 
                                    << 8U) | (0xffU 
                                              & vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__DataOut))
                                : ((1U == (IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_RegNum))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__DataOut 
                                                       >> 0xfU)))) 
                                        << 0x10U) | 
                                       (0xffffU & vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__DataOut))
                                    : vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__DataOut))))));
        __Vdlyvset__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0 
            = (0x1fU & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                        >> 7U));
    }
    vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__arvalid 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_MemtoReg) 
                                         & (~ (IData)(vlSelf->ysyx_23060336__DOT___arbiter_io_lsu_rvalid))));
    if (__Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0) {
        vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory[__Vdlyvdim0__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0] 
            = __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0;
    }
    if (__Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v1) {
        vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory[0x341U] 
            = __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v1;
    }
    if (__Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v2) {
        vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory[0x342U] = 0xbU;
    }
    if (__Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v3) {
        vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory[0x300U] = 0x1800U;
    }
    if (__Vdlyvset__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0) {
        vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[__Vdlyvdim0__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0] 
            = __Vdlyvval__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0;
    }
    vlSelf->ysyx_23060336__DOT__ifu__DOT__state = __Vdly__ysyx_23060336__DOT__ifu__DOT__state;
    vlSelf->io_pc = vlSelf->ysyx_23060336__DOT__ifu__DOT__PC;
}

void Vysyx_23060336___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ araddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vysyx_23060336___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ awaddr, IData/*31:0*/ wdata, IData/*31:0*/ wstrb, IData/*31:0*/ &pmem_write__Vfuncrtn);

VL_INLINE_OPT void Vysyx_23060336___024root___nba_sequent__TOP__1(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vfunc_pmem_read__1__Vfuncout;
    __Vfunc_pmem_read__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_pmem_write__2__Vfuncout;
    __Vfunc_pmem_write__2__Vfuncout = 0;
    CData/*0:0*/ __Vdly__ysyx_23060336__DOT___sram_bvalid;
    __Vdly__ysyx_23060336__DOT___sram_bvalid = 0;
    CData/*0:0*/ __Vdly__ysyx_23060336__DOT___sram_rvalid;
    __Vdly__ysyx_23060336__DOT___sram_rvalid = 0;
    CData/*4:0*/ __Vdly__ysyx_23060336__DOT__sram__DOT__RLFSR;
    __Vdly__ysyx_23060336__DOT__sram__DOT__RLFSR = 0;
    CData/*4:0*/ __Vdly__ysyx_23060336__DOT__sram__DOT__WLFSR;
    __Vdly__ysyx_23060336__DOT__sram__DOT__WLFSR = 0;
    IData/*31:0*/ __Vdly__ysyx_23060336__DOT__sram__DOT__resp;
    __Vdly__ysyx_23060336__DOT__sram__DOT__resp = 0;
    // Body
    __Vdly__ysyx_23060336__DOT__sram__DOT__resp = vlSelf->ysyx_23060336__DOT__sram__DOT__resp;
    __Vdly__ysyx_23060336__DOT__sram__DOT__WLFSR = vlSelf->ysyx_23060336__DOT__sram__DOT__WLFSR;
    __Vdly__ysyx_23060336__DOT__sram__DOT__RLFSR = vlSelf->ysyx_23060336__DOT__sram__DOT__RLFSR;
    __Vdly__ysyx_23060336__DOT___sram_bvalid = vlSelf->ysyx_23060336__DOT___sram_bvalid;
    __Vdly__ysyx_23060336__DOT___sram_rvalid = vlSelf->ysyx_23060336__DOT___sram_rvalid;
    if (vlSelf->reset) {
        __Vdly__ysyx_23060336__DOT___sram_bvalid = 0U;
        __Vdly__ysyx_23060336__DOT___sram_rvalid = 0U;
        vlSelf->ysyx_23060336__DOT__sram__DOT__Begin = 0U;
    } else {
        if (((IData)(vlSelf->ysyx_23060336__DOT___arbiter_io_axi_arvalid) 
             & (~ (IData)(vlSelf->ysyx_23060336__DOT___sram_rvalid)))) {
            if ((0xaU <= (IData)(vlSelf->ysyx_23060336__DOT__sram__DOT__RLFSR))) {
                Vysyx_23060336___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                                                ((IData)(vlSelf->ysyx_23060336__DOT__arbiter__DOT___GEN)
                                                                                 ? vlSelf->ysyx_23060336__DOT__idu_exu__DOT___alu_io_result
                                                                                 : vlSelf->ysyx_23060336__DOT___ifu_io_axi_araddr), __Vfunc_pmem_read__1__Vfuncout);
                __Vdly__ysyx_23060336__DOT__sram__DOT__RLFSR = 0U;
                __Vdly__ysyx_23060336__DOT___sram_rvalid = 1U;
                vlSelf->ysyx_23060336__DOT__sram__DOT__sramdata 
                    = __Vfunc_pmem_read__1__Vfuncout;
            } else {
                __Vdly__ysyx_23060336__DOT__sram__DOT__RLFSR 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyx_23060336__DOT__sram__DOT__RLFSR)));
                __Vdly__ysyx_23060336__DOT___sram_rvalid = 0U;
            }
        } else {
            __Vdly__ysyx_23060336__DOT__sram__DOT__RLFSR = 0U;
            __Vdly__ysyx_23060336__DOT___sram_rvalid = 0U;
        }
        if ((((IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__io_axi_awvalid_0) 
              & (IData)(vlSelf->ysyx_23060336__DOT___arbiter_io_axi_wlast)) 
             & (~ (IData)(vlSelf->ysyx_23060336__DOT___sram_bvalid)))) {
            if ((0xaU <= (IData)(vlSelf->ysyx_23060336__DOT__sram__DOT__WLFSR))) {
                Vysyx_23060336___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___alu_io_result, vlSelf->ysyx_23060336__DOT___arbiter_io_axi_wdata, 
                                                                                (((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_MemNum_orMatrixOutputs_T_4)) 
                                                                                << 3U) 
                                                                                | (((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_MemNum_orMatrixOutputs_T_4)) 
                                                                                << 2U) 
                                                                                | ((2U 
                                                                                & ((~ (IData)(
                                                                                (0x1ffU 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_MemNum_andMatrixOutputs_T_1)))) 
                                                                                << 1U)) 
                                                                                | (0x3ffU 
                                                                                != 
                                                                                ((0x200U 
                                                                                & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                                << 7U)) 
                                                                                | ((0x80U 
                                                                                & ((~ (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                                                                                >> 1U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                                                                                >> 2U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                                >> 1U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                                                                                >> 4U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                                                                                >> 5U)) 
                                                                                << 2U)) 
                                                                                | (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h6a9262f1__0))))))))))))), __Vfunc_pmem_write__2__Vfuncout);
                __Vdly__ysyx_23060336__DOT__sram__DOT__WLFSR = 0U;
                __Vdly__ysyx_23060336__DOT__sram__DOT__resp 
                    = __Vfunc_pmem_write__2__Vfuncout;
                __Vdly__ysyx_23060336__DOT___sram_bvalid = 1U;
            } else {
                __Vdly__ysyx_23060336__DOT__sram__DOT__WLFSR 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyx_23060336__DOT__sram__DOT__WLFSR)));
                __Vdly__ysyx_23060336__DOT__sram__DOT__resp = 2U;
                __Vdly__ysyx_23060336__DOT___sram_bvalid = 0U;
            }
        } else {
            __Vdly__ysyx_23060336__DOT__sram__DOT__resp 
                = vlSelf->ysyx_23060336__DOT__sram__DOT__resp;
            __Vdly__ysyx_23060336__DOT__sram__DOT__WLFSR = 0U;
            __Vdly__ysyx_23060336__DOT___sram_bvalid = 0U;
        }
    }
    vlSelf->ysyx_23060336__DOT__sram__DOT__RLFSR = __Vdly__ysyx_23060336__DOT__sram__DOT__RLFSR;
    vlSelf->ysyx_23060336__DOT__sram__DOT__WLFSR = __Vdly__ysyx_23060336__DOT__sram__DOT__WLFSR;
    vlSelf->ysyx_23060336__DOT__sram__DOT__resp = __Vdly__ysyx_23060336__DOT__sram__DOT__resp;
    vlSelf->ysyx_23060336__DOT___sram_bvalid = __Vdly__ysyx_23060336__DOT___sram_bvalid;
    vlSelf->ysyx_23060336__DOT___sram_rvalid = __Vdly__ysyx_23060336__DOT___sram_rvalid;
}

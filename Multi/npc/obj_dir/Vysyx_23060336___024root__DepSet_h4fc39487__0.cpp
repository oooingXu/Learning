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
    vlSelf->__VactTriggered.at(1U) = (((IData)(vlSelf->clock) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock))) 
                                      | ((IData)(vlSelf->reset) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__reset))));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
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
    IData/*31:0*/ __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v2;
    __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v2 = 0;
    // Body
    Vysyx_23060336___024unit____Vdpiimwrap_set_npc_state_TOP____024unit(vlSelf->ysyx_23060336__DOT___idu_exu_io_ebreak);
    vlSelf->__Vdly__ysyx_23060336__DOT__ifu__DOT__state 
        = vlSelf->ysyx_23060336__DOT__ifu__DOT__state;
    vlSelf->__Vdly__ysyx_23060336__DOT__lsu_wbu__DOT__state 
        = vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__state;
    __Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__ysyx_23060336__DOT__lsu_wbu__DOT__state 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__state)
                                                ? (~ 
                                                   (((IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__prepare) 
                                                     | (~ (IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_MemtoReg))) 
                                                    & (0U 
                                                       != vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)))
                                                : (IData)(vlSelf->ysyx_23060336__DOT___sdram_ifu_rvalid))));
    if (vlSelf->ysyx_23060336__DOT___lsu_wbu_io_CsrWr) {
        __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT___alu_io_result;
        __Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0 
            = (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
               >> 0x14U);
    }
    __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v1 
        = vlSelf->ysyx_23060336__DOT__csr__DOT____Vcellinp__ysyx_23060336_csrs_ext__W1_data;
    __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v2 
        = vlSelf->ysyx_23060336__DOT__csr__DOT____Vcellinp__ysyx_23060336_csrs_ext__W2_data;
    if (((((IData)(((3U == (0xfU & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                    & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h14776bc0__0))) 
           | ((IData)((0x13U == (0x5bU & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata))) 
              | ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h52335523__0) 
                 | (IData)(vlSelf->ysyx_23060336__DOT___lsu_wbu_io_CsrWr)))) 
          & ((IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_MemtoReg) 
             ^ (IData)(vlSelf->ysyx_23060336__DOT___sdram_ifu_rvalid))) 
         & (0U != (0x1fU & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                            >> 7U))))) {
        __Vdlyvval__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0 
            = ((IData)(vlSelf->ysyx_23060336__DOT___lsu_wbu_io_CsrWr)
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
            = (0x1fU & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                        >> 7U));
    }
    if (__Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0) {
        vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory[__Vdlyvdim0__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0] 
            = __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0;
    }
    vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory[0x341U] 
        = __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v1;
    vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory[0x342U] 
        = __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v2;
    vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory[0x300U] = 0x1800U;
    if (__Vdlyvset__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0) {
        vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[__Vdlyvdim0__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0] 
            = __Vdlyvval__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0;
    }
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
    IData/*31:0*/ __Vfunc_pmem_read__2__Vfuncout;
    __Vfunc_pmem_read__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_pmem_write__3__Vfuncout;
    __Vfunc_pmem_write__3__Vfuncout = 0;
    IData/*31:0*/ __Vdly__ysyx_23060336__DOT__sdram_ifu__DOT__Begin;
    __Vdly__ysyx_23060336__DOT__sdram_ifu__DOT__Begin = 0;
    CData/*0:0*/ __Vdly__ysyx_23060336__DOT__sdram_lsu__DOT__bvalid;
    __Vdly__ysyx_23060336__DOT__sdram_lsu__DOT__bvalid = 0;
    CData/*0:0*/ __Vdly__ysyx_23060336__DOT___sdram_lsu_rvalid;
    __Vdly__ysyx_23060336__DOT___sdram_lsu_rvalid = 0;
    IData/*31:0*/ __Vdly__ysyx_23060336__DOT__sdram_lsu__DOT__Begin;
    __Vdly__ysyx_23060336__DOT__sdram_lsu__DOT__Begin = 0;
    IData/*31:0*/ __Vdly__ysyx_23060336__DOT__sdram_lsu__DOT__resp;
    __Vdly__ysyx_23060336__DOT__sdram_lsu__DOT__resp = 0;
    // Body
    __Vdly__ysyx_23060336__DOT__sdram_ifu__DOT__Begin 
        = vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__Begin;
    vlSelf->__Vdly__ysyx_23060336__DOT___sdram_ifu_rvalid 
        = vlSelf->ysyx_23060336__DOT___sdram_ifu_rvalid;
    __Vdly__ysyx_23060336__DOT__sdram_lsu__DOT__resp 
        = vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__resp;
    __Vdly__ysyx_23060336__DOT__sdram_lsu__DOT__Begin 
        = vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__Begin;
    __Vdly__ysyx_23060336__DOT__sdram_lsu__DOT__bvalid 
        = vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__bvalid;
    __Vdly__ysyx_23060336__DOT___sdram_lsu_rvalid = vlSelf->ysyx_23060336__DOT___sdram_lsu_rvalid;
    if (vlSelf->reset) {
        __Vdly__ysyx_23060336__DOT__sdram_lsu__DOT__bvalid = 0U;
        __Vdly__ysyx_23060336__DOT___sdram_lsu_rvalid = 0U;
        __Vdly__ysyx_23060336__DOT__sdram_lsu__DOT__Begin = 0U;
    } else {
        __Vdly__ysyx_23060336__DOT__sdram_lsu__DOT__Begin 
            = ((IData)(1U) + vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__Begin);
        __Vdly__ysyx_23060336__DOT__sdram_lsu__DOT__bvalid 
            = (((IData)(vlSelf->ysyx_23060336__DOT___lsu_wbu_io_axi_awvalid) 
                & (IData)(vlSelf->ysyx_23060336__DOT___lsu_wbu_io_axi_wlast)) 
               & (~ (IData)(vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__bvalid)));
        if (((IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__io_axi_arvalid_0) 
             & (~ (IData)(vlSelf->ysyx_23060336__DOT___sdram_lsu_rvalid)))) {
            Vysyx_23060336___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___alu_io_result, __Vfunc_pmem_read__2__Vfuncout);
            __Vdly__ysyx_23060336__DOT___sdram_lsu_rvalid = 1U;
            vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__sdramdata 
                = __Vfunc_pmem_read__2__Vfuncout;
        } else {
            __Vdly__ysyx_23060336__DOT___sdram_lsu_rvalid = 0U;
        }
        if (vlSelf->ysyx_23060336__DOT___lsu_wbu_io_axi_awvalid) {
            Vysyx_23060336___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___alu_io_result, vlSelf->ysyx_23060336__DOT___reg_io_rdata2, 
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
                                                                                & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
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
                                                                                & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
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
                                                                                | (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h6a9262f1__0))))))))))))), __Vfunc_pmem_write__3__Vfuncout);
            __Vdly__ysyx_23060336__DOT__sdram_lsu__DOT__resp 
                = __Vfunc_pmem_write__3__Vfuncout;
        } else {
            __Vdly__ysyx_23060336__DOT__sdram_lsu__DOT__resp 
                = vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__resp;
        }
    }
    vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__bvalid 
        = __Vdly__ysyx_23060336__DOT__sdram_lsu__DOT__bvalid;
    vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__Begin 
        = __Vdly__ysyx_23060336__DOT__sdram_lsu__DOT__Begin;
    vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__resp 
        = __Vdly__ysyx_23060336__DOT__sdram_lsu__DOT__resp;
    vlSelf->ysyx_23060336__DOT___sdram_lsu_rvalid = __Vdly__ysyx_23060336__DOT___sdram_lsu_rvalid;
    if (vlSelf->reset) {
        vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__bvalid = 0U;
        vlSelf->__Vdly__ysyx_23060336__DOT___sdram_ifu_rvalid = 0U;
        __Vdly__ysyx_23060336__DOT__sdram_ifu__DOT__Begin = 0U;
    } else {
        __Vdly__ysyx_23060336__DOT__sdram_ifu__DOT__Begin 
            = ((IData)(1U) + vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__Begin);
        vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__resp 
            = vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__resp;
        if (((IData)(vlSelf->ysyx_23060336__DOT___ifu_io_axi_arvalid) 
             & (~ (IData)(vlSelf->ysyx_23060336__DOT___sdram_ifu_rvalid)))) {
            Vysyx_23060336___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                                            ((IData)(vlSelf->reset)
                                                                              ? 0x80000000U
                                                                              : 
                                                                             (((IData)(vlSelf->ysyx_23060336__DOT__ifu__DOT__state) 
                                                                               & (IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__state))
                                                                               ? vlSelf->io_dnpc
                                                                               : vlSelf->ysyx_23060336__DOT__ifu__DOT__PC)), __Vfunc_pmem_read__1__Vfuncout);
            vlSelf->__Vdly__ysyx_23060336__DOT___sdram_ifu_rvalid = 1U;
            vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                = __Vfunc_pmem_read__1__Vfuncout;
        } else {
            vlSelf->__Vdly__ysyx_23060336__DOT___sdram_ifu_rvalid = 0U;
        }
        vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__bvalid = 0U;
    }
    vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__Begin 
        = __Vdly__ysyx_23060336__DOT__sdram_ifu__DOT__Begin;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hd4808a30__0 
        = (IData)((0U == (0xc0000000U & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_ecall_andMatrixOutputs_T 
        = ((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
            << 0x1fU) | ((0x40000000U & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                         << 0x1dU)) 
                         | ((0x20000000U & ((~ (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                >> 2U)) 
                                            << 0x1dU)) 
                            | ((0x10000000U & ((~ (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                   >> 3U)) 
                                               << 0x1cU)) 
                               | ((0x8000000U & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & ((~ (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                 >> 7U)) 
                                             << 0x18U)) 
                                         | ((0x800000U 
                                             & ((~ 
                                                 (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                  >> 8U)) 
                                                << 0x17U)) 
                                            | ((0x400000U 
                                                & ((~ 
                                                    (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                     >> 9U)) 
                                                   << 0x16U)) 
                                               | ((0x200000U 
                                                   & ((~ 
                                                       (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                        >> 0xaU)) 
                                                      << 0x15U)) 
                                                  | ((0x100000U 
                                                      & ((~ 
                                                          (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                           >> 0xbU)) 
                                                         << 0x14U)) 
                                                     | ((0x80000U 
                                                         & ((~ 
                                                             (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                              >> 0xcU)) 
                                                            << 0x13U)) 
                                                        | ((0x40000U 
                                                            & ((~ 
                                                                (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                                 >> 0xdU)) 
                                                               << 0x12U)) 
                                                           | ((0x20000U 
                                                               & ((~ 
                                                                   (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                                    >> 0xeU)) 
                                                                  << 0x11U)) 
                                                              | ((0x10000U 
                                                                  & ((~ 
                                                                      (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                                       >> 0xfU)) 
                                                                     << 0x10U)) 
                                                                 | ((0x8000U 
                                                                     & ((~ 
                                                                         (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                                          >> 0x10U)) 
                                                                        << 0xfU)) 
                                                                    | ((0x4000U 
                                                                        & ((~ 
                                                                            (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                                             >> 0x11U)) 
                                                                           << 0xeU)) 
                                                                       | ((0x2000U 
                                                                           & ((~ 
                                                                               (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                                                >> 0x12U)) 
                                                                              << 0xdU)) 
                                                                          | ((0x1000U 
                                                                              & ((~ 
                                                                                (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                                                >> 0x13U)) 
                                                                                << 0xcU)) 
                                                                             | ((0x800U 
                                                                                & ((~ 
                                                                                (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((~ 
                                                                                (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                                                >> 0x15U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((~ 
                                                                                (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                                                >> 0x16U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                                                >> 0x17U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((~ 
                                                                                (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                                                >> 0x18U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ 
                                                                                (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                                                >> 0x19U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))))));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__immNum_invInputs 
        = (0x7fU & (~ ((0x60U & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                 >> 7U)) | (0x1fU & 
                                            (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                             >> 2U)))));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h171c6c87__0 
        = ((2U & ((~ (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                      >> 5U)) << 1U)) | (1U & (~ (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                  >> 6U))));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0993e147__0 
        = ((2U & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                  >> 4U)) | (1U & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                   >> 6U)));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0f7b3c5e__0 
        = (IData)((0x2070U == (0x2070U & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0855c605__0 
        = (IData)((0x20U == (0x60U & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h14776bc0__0 
        = (IData)((0U == (0x60U & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h22c3cfbd__0 
        = ((0x10U & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata) 
           | ((8U & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                     >> 2U)) | ((4U & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                       >> 4U)) | ((2U 
                                                   & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                      >> 0xbU)) 
                                                  | (1U 
                                                     & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                        >> 0xdU))))));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h049281d3__0 
        = (IData)((0x60U == (0x60U & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h7fc75f50__0 
        = (IData)((0x6000U == (0x6000U & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN 
        = ((0xe0U & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                     >> 7U)) | (0x1fU & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                         >> 2U)));
    vlSelf->ysyx_23060336__DOT___idu_exu_io_ebreak 
        = (IData)(((0x100073U == (0x3fffffffU & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                   & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hd4808a30__0)));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_2 
        = ((0x20U & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                     << 5U)) | ((0x10U & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                          << 3U)) | 
                                ((8U & ((~ (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                            >> 2U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & ((~ 
                                                        (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                         >> 3U)) 
                                                       << 2U)) 
                                                   | (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h171c6c87__0)))));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_3 
        = ((0x40U & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                     << 6U)) | ((0x20U & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                          << 4U)) | 
                                ((0x10U & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                           << 2U)) 
                                 | ((8U & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata) 
                                    | ((4U & ((~ (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                  >> 4U)) 
                                              << 2U)) 
                                       | (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h171c6c87__0))))));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_6 
        = ((0x20U & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                     << 5U)) | ((0x10U & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                          << 3U)) | 
                                ((8U & ((~ (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                            >> 2U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & ((~ 
                                                        (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                         >> 3U)) 
                                                       << 2U)) 
                                                   | (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0993e147__0)))));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_8 
        = ((0x20U & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                     << 5U)) | ((0x10U & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                          << 3U)) | 
                                ((8U & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                        << 1U)) | (
                                                   (4U 
                                                    & ((~ 
                                                        (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                         >> 4U)) 
                                                       << 2U)) 
                                                   | (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0993e147__0)))));
    vlSelf->ysyx_23060336__DOT___lsu_wbu_io_CsrWr = 
        (1U & (IData)(((3U == (0xfU & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                       & ((IData)((0x1070U == (0x1070U 
                                               & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata))) 
                          | (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0f7b3c5e__0)))));
    vlSelf->ysyx_23060336__DOT___lsu_wbu_io_axi_wlast 
        = (IData)(((3U == (0x1fU & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                   & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0855c605__0)));
    vlSelf->ysyx_23060336__DOT___idu_exu_io_MemtoReg 
        = (IData)(((3U == (0x1fU & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                   & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h14776bc0__0)));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h03617c08__0 
        = ((~ (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
               >> 4U)) & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h049281d3__0));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h036178c4__0 
        = ((~ (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
               >> 4U)) & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h049281d3__0));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_ha09dbe48__0 
        = ((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
            >> 0xcU) & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h7fc75f50__0));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h6a9262f1__0 
        = ((2U & ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                      >> 6U)) << 1U)) | (1U & (~ ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                                                  >> 7U))));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h6c886094__0 
        = (IData)((0U == (0x60U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hc5ce86a9__0 
        = ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
               >> 5U)) & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h7fc75f50__0));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h70585f8a__0 
        = (1U & ((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                  >> 0xdU) & (~ ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                                 >> 7U))));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h795fdc33__0 
        = (1U & ((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                  >> 0xcU) & (~ ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                                 >> 6U))));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h62cc9b06__0 
        = (1U & ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                     >> 6U)) & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                >> 0xeU)));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs 
        = (0x7fffU & (~ ((0x7f00U & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                     >> 0x11U)) | (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__casez_tmp 
        = ((0U == (((IData)((3U == (0x5fU & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata))) 
                    << 5U) | (((IData)((0x3fU == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_2))) 
                               << 4U) | (((IData)((0x7fU 
                                                   == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_3))) 
                                          << 3U) | 
                                         (((IData)(
                                                   (0x17U 
                                                    == 
                                                    (0x5fU 
                                                     & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0x3fU 
                                                     == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_6))) 
                                            << 1U) 
                                           | (IData)(
                                                     (0x63U 
                                                      == 
                                                      (0x7bU 
                                                       & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)))))))))
            ? ((0U == (((IData)((3U == (0x4fU & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata))) 
                        << 3U) | (((IData)((0x7fU == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_3))) 
                                   << 2U) | (((IData)(
                                                      (0x33U 
                                                       == 
                                                       (0x3fU 
                                                        & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata))) 
                                              << 1U) 
                                             | (0x3fU 
                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_8))))))
                ? 0U : ((0U == (((IData)((0x3fU == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_2))) 
                                 << 3U) | (((IData)(
                                                    (0x7fU 
                                                     == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_3))) 
                                            << 2U) 
                                           | (((IData)(
                                                       (0x3fU 
                                                        == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_6))) 
                                               << 1U) 
                                              | (0x3fU 
                                                 == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_8))))))
                         ? 0U : (((- (IData)((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata) 
                                               | ((0x800U 
                                                   & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                        >> 0x14U)))))))
            : ((0U == (((IData)((3U == (0x4fU & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata))) 
                        << 3U) | (((IData)((0x7fU == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_3))) 
                                   << 2U) | (((IData)(
                                                      (0x33U 
                                                       == 
                                                       (0x3fU 
                                                        & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata))) 
                                              << 1U) 
                                             | (0x3fU 
                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_8))))))
                ? ((0U == (((IData)((0x3fU == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_2))) 
                            << 3U) | (((IData)((0x7fU 
                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_3))) 
                                       << 2U) | (((IData)(
                                                          (0x3fU 
                                                           == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_6))) 
                                                  << 1U) 
                                                 | (0x3fU 
                                                    == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_8))))))
                    ? (0xfffff000U & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)
                    : (((- (IData)((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0x800U & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                     << 4U)) | ((0x7e0U 
                                                 & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                      >> 7U))))))
                : ((0U == (((IData)((0x3fU == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_2))) 
                            << 3U) | (((IData)((0x7fU 
                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_3))) 
                                       << 2U) | (((IData)(
                                                          (0x3fU 
                                                           == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_6))) 
                                                  << 1U) 
                                                 | (0x3fU 
                                                    == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_8))))))
                    ? (((- (IData)((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                          >> 0x14U)))));
    vlSelf->ysyx_23060336__DOT___lsu_wbu_io_axi_awvalid 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyx_23060336__DOT___lsu_wbu_io_axi_wlast));
    vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__io_axi_arvalid_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_MemtoReg));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hcfa7c5ac__0 
        = ((~ (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
               >> 3U)) & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h03617c08__0));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h52335523__0 
        = (IData)(((7U == (7U & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                   & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h036178c4__0)));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hcfa7dcbc__0 
        = ((~ (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
               >> 3U)) & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h036178c4__0));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hd8e30b4d__0 
        = ((4U & ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                      >> 4U)) << 2U)) | (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h6a9262f1__0));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h76b56b94__0 
        = (IData)(((0x60U == (0x60U & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                   & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h795fdc33__0)));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h859083b2__0 
        = ((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
            >> 0xcU) & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h62cc9b06__0));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h1cfc0c30__0 
        = (IData)((0x7f00U == (0x7f00U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs))));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__imm = 
        ((1U & (IData)(((0x1013U == (0x1013U & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                        & (0x5bU == (0x5bU & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__immNum_invInputs))))))
          ? (((- (IData)((1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT__casez_tmp 
                                >> 4U)))) << 5U) | 
             (0x1fU & vlSelf->ysyx_23060336__DOT__idu_exu__DOT__casez_tmp))
          : vlSelf->ysyx_23060336__DOT__idu_exu__DOT__casez_tmp);
    vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__prepare 
        = ((IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__io_axi_arvalid_0) 
           & (IData)(vlSelf->ysyx_23060336__DOT___sdram_lsu_rvalid));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hc0dd1abe__0 
        = (IData)(((3U == (7U & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                   & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hcfa7c5ac__0)));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_MemNum_andMatrixOutputs_T_1 
        = ((0x100U & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                      << 8U)) | ((0x80U & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                           << 6U)) 
                                 | ((0x40U & ((~ (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN)) 
                                              << 6U)) 
                                    | ((0x20U & ((~ 
                                                  ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                                                   >> 1U)) 
                                                 << 5U)) 
                                       | ((0x10U & 
                                           ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                                                >> 2U)) 
                                            << 4U)) 
                                          | ((8U & 
                                              (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                               >> 2U)) 
                                             | (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hd8e30b4d__0)))))));
    vlSelf->ysyx_23060336__DOT___idu_exu_io_RegNum 
        = (((0U == ((0xfffffffcU & ((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                     << 2U) & ((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                << 1U) 
                                               & ((IData)(
                                                          ((0U 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                           & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h6c886094__0))) 
                                                  << 2U)))) 
                    | (((IData)(((3U == (3U & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                 & (0U == (0xbfU & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))))) 
                        << 1U) | (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                  & ((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                      >> 1U) & (IData)(
                                                       ((0U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                        & (7U 
                                                           == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hd8e30b4d__0))))))))) 
            << 2U) | (((0U == ((0xfffffffcU & ((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                << 2U) 
                                               & ((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                   << 1U) 
                                                  & ((IData)(
                                                             ((0U 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                              & (7U 
                                                                 == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hd8e30b4d__0)))) 
                                                     << 2U)))) 
                               | ((0xfffffffeU & ((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                   << 1U) 
                                                  & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                     & ((IData)(
                                                                ((0U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                                 & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h795fdc33__0))) 
                                                        << 1U)))) 
                                  | (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                     & ((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                         >> 1U) & (IData)(
                                                          ((0U 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                           & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hc5ce86a9__0)))))))) 
                       << 1U) | (0U == (((IData)(((3U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                                  & (0U 
                                                     == 
                                                     (0xbfU 
                                                      & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))))) 
                                         << 1U) | (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                   & ((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                       >> 1U) 
                                                      & (IData)(
                                                                ((0U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                                 & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h859083b2__0)))))))));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN_0 
        = (((IData)((((0x13U == (0x13U & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                      & (0U == (3U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN)))) 
                     & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h76b56b94__0))) 
            << 3U) | ((0xfffffffcU & ((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                       << 2U) & ((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                  << 1U) 
                                                 & (((IData)(
                                                             ((0x14U 
                                                               == 
                                                               (0x1cU 
                                                                & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                                              & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h14776bc0__0))) 
                                                     | ((IData)(
                                                                ((0x10U 
                                                                  == 
                                                                  (0x1cU 
                                                                   & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                                                 & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0855c605__0))) 
                                                        | (((~ 
                                                             (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                              >> 2U)) 
                                                            & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hcfa7dcbc__0)) 
                                                           | (IData)(
                                                                     ((0U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                                      & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0f7b3c5e__0)))))) 
                                                    << 2U)))) 
                      | ((2U & (((IData)((0x33U == 
                                          (0x7bU & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata))) 
                                 << 1U) | ((0xfffffffeU 
                                            & ((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                << 1U) 
                                               & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                  & ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hcfa7dcbc__0) 
                                                     << 1U)))) 
                                           | (((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h52335523__0) 
                                               | (IData)(
                                                         (((0x73U 
                                                            == 
                                                            (0x73U 
                                                             & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                                           & (0U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN)))) 
                                                          & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h7fc75f50__0)))) 
                                              << 1U)))) 
                         | (1U & ((IData)((3U == (0x4fU 
                                                  & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata))) 
                                  | ((IData)((0x23U 
                                              == (0x3fU 
                                                  & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata))) 
                                     | ((IData)((0x33U 
                                                 == 
                                                 (0x7bU 
                                                  & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata))) 
                                        | (IData)((
                                                   ((0x73U 
                                                     == 
                                                     (0x73U 
                                                      & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                                    & (0U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN)))) 
                                                   & ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h70585f8a__0) 
                                                      | (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h859083b2__0)))))))))));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h96c0b08d__0 
        = ((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
            >> 0xdU) & (((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs) 
                         >> 7U) & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h1cfc0c30__0)));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h45879115__0 
        = ((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
            >> 0xeU) & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h1cfc0c30__0));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_MemNum_orMatrixOutputs_T_4 
        = ((2U & ((IData)(((0x23U == (0x23U & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                           & (0U == (0xb7U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))))) 
                  << 1U)) | (0x1ffU == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_MemNum_andMatrixOutputs_T_1)));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h9ecf676a__0 
        = (((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs) 
            >> 6U) & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h45879115__0));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel 
        = ((((IData)((((0x13U == (0x13U & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                       & (3U == (3U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs)))) 
                      & (((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                           >> 5U) & (((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs) 
                                      >> 4U) & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h96c0b08d__0))) 
                         | (((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs) 
                             >> 4U) & ((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                        >> 0xcU) & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h9ecf676a__0)))))) 
             << 3U) | ((4U & (((IData)(((0x1013U == 
                                         (0x1013U & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                        & (0x7fd3U 
                                           == (0x7fd3U 
                                               & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs))))) 
                               | ((IData)((((0x33U 
                                             == (0x33U 
                                                 & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                            & (0x33U 
                                               == (0x33U 
                                                   & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs)))) 
                                           & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h45879115__0))) 
                                  | (IData)(((0x40005013U 
                                              == (0x40005013U 
                                                  & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                             & (0x5f53U 
                                                == 
                                                (0x5f53U 
                                                 & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs))))))) 
                              << 2U)) | ((2U & (((IData)(
                                                         ((0x1013U 
                                                           == 
                                                           (0x1013U 
                                                            & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                                          & (0x7fd3U 
                                                             == 
                                                             (0x7fd3U 
                                                              & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs))))) 
                                                 | ((IData)(
                                                            (((0x3033U 
                                                               == 
                                                               (0x3033U 
                                                                & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                                              & (0x13U 
                                                                 == 
                                                                 (0x13U 
                                                                  & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs)))) 
                                                             & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h1cfc0c30__0))) 
                                                    | (IData)(
                                                              ((0x40005013U 
                                                                == 
                                                                (0x40005013U 
                                                                 & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                                               & (0x5f53U 
                                                                  == 
                                                                  (0x5f53U 
                                                                   & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs))))))) 
                                                << 1U)) 
                                         | (1U & ((IData)(
                                                          ((0x1013U 
                                                            == 
                                                            (0x1013U 
                                                             & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                                           & (0x7fd3U 
                                                              == 
                                                              (0x7fd3U 
                                                               & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs))))) 
                                                  | (IData)(
                                                            (((0x33U 
                                                               == 
                                                               (0x33U 
                                                                & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                                              & (0x13U 
                                                                 == 
                                                                 (0x13U 
                                                                  & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs)))) 
                                                             & ((((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs) 
                                                                  >> 5U) 
                                                                 & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h96c0b08d__0)) 
                                                                | ((((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs) 
                                                                     >> 5U) 
                                                                    & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h9ecf676a__0)) 
                                                                   | ((IData)(
                                                                              ((0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                                                               & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h45879115__0))) 
                                                                      | (IData)(
                                                                                ((0x5fe0U 
                                                                                == 
                                                                                (0x5fe0U 
                                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs))) 
                                                                                & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                                                >> 0x1eU))))))))))))) 
           | (((IData)((((3U == (3U & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                         & (0U == (3U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN)))) 
                        & (((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                                >> 2U)) & (IData)((
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                                   & (~ 
                                                      ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                                                       >> 6U))))) 
                           | (((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                >> 4U) & (IData)(((0U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                  & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h70585f8a__0)))) 
                              | ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                                     >> 2U)) & (IData)(
                                                       (0x4060U 
                                                        == 
                                                        (0x4060U 
                                                         & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)))))))) 
               << 3U) | (((IData)((((3U == (3U & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                    & (0U == (3U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN)))) 
                                   & ((IData)(((0U 
                                                == 
                                                (0xc4U 
                                                 & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                               & (0x60U 
                                                  == 
                                                  (0x60U 
                                                   & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)))) 
                                      | ((IData)(((0x2070U 
                                                   == 
                                                   (0x2070U 
                                                    & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                                  & (~ 
                                                     ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                                                      >> 5U)))) 
                                         | ((IData)(
                                                    ((0x4010U 
                                                      == 
                                                      (0x4010U 
                                                       & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                                     & (0U 
                                                        == 
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))))) 
                                            | ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                                                   >> 2U)) 
                                               & (IData)(
                                                         ((0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                                          & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_ha09dbe48__0))))))))) 
                          << 2U) | ((2U & ((0xfffffffeU 
                                            & ((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                << 1U) 
                                               & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                  & ((IData)(
                                                             ((0U 
                                                               == 
                                                               (7U 
                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                              & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h76b56b94__0))) 
                                                     << 1U)))) 
                                           | (((IData)(
                                                       ((0x3013U 
                                                         == 
                                                         (0x3013U 
                                                          & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                                        & (0U 
                                                           == 
                                                           (0x1bU 
                                                            & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))))) 
                                               << 1U) 
                                              | ((0xfffffffeU 
                                                  & ((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                      << 1U) 
                                                     & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                        & ((IData)(
                                                                   ((0U 
                                                                     == 
                                                                     (3U 
                                                                      & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                                    & (0x1fU 
                                                                       == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h22c3cfbd__0)))) 
                                                           << 1U)))) 
                                                 | ((IData)(
                                                            (((0x63U 
                                                               == 
                                                               (0x63U 
                                                                & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                                              & (0U 
                                                                 == 
                                                                 (7U 
                                                                  & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN)))) 
                                                             & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hc5ce86a9__0))) 
                                                    << 1U))))) 
                                    | ((IData)((((0x63U 
                                                  == 
                                                  (0x63U 
                                                   & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                                 & (0U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN)))) 
                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h6c886094__0))) 
                                       | ((IData)((
                                                   ((0x13U 
                                                     == 
                                                     (0x13U 
                                                      & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                                    & (0U 
                                                       == 
                                                       (0x3bU 
                                                        & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN)))) 
                                                   & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h70585f8a__0))) 
                                          | (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                             & (((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                  >> 1U) 
                                                 & (IData)(
                                                           ((0U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                            & (0x1fU 
                                                               == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h22c3cfbd__0))))) 
                                                | ((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                    >> 1U) 
                                                   & (IData)(
                                                             ((0U 
                                                               == 
                                                               (3U 
                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                              & (((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                                   >> 4U) 
                                                                  & (IData)(
                                                                            ((0U 
                                                                              == 
                                                                              (0x38U 
                                                                               & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                                             & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h62cc9b06__0)))) 
                                                                 | (((~ 
                                                                      ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                                                                       >> 2U)) 
                                                                     & (IData)(
                                                                               ((0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h62cc9b06__0)))) 
                                                                    | ((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                                        >> 4U) 
                                                                       & (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x18U 
                                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_ha09dbe48__0)))))))))))))))));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__cin 
        = (IData)((0U != (9U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel))));
}

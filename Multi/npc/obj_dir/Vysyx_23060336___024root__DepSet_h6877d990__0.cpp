// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060336.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060336___024root.h"

VL_INLINE_OPT void Vysyx_23060336___024root___ico_sequent__TOP__0(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_23060336__DOT___lsu_wbu_io_axi_awvalid 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyx_23060336__DOT___lsu_wbu_io_axi_wlast));
    vlSelf->io_dnpc = ((IData)(vlSelf->reset) ? 0x80000000U
                        : ((0xffffffffU == vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_ecall_andMatrixOutputs_T)
                            ? vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                           [0x305U] : ((IData)(((0x30200073U 
                                                 == 
                                                 (0x3fffffffU 
                                                  & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hd4808a30__0)))
                                        ? vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                                       [0x341U] : (
                                                   ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h99d72b5f__0)
                                                     ? vlSelf->ysyx_23060336__DOT___reg_io_rdata1
                                                     : vlSelf->ysyx_23060336__DOT__ifu__DOT__PC) 
                                                   + 
                                                   (((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h99d72b5f__0) 
                                                     | ((1U 
                                                         == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__PCMux)) 
                                                        | ((5U 
                                                            == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__PCMux)) 
                                                           | (0xdU 
                                                              == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__PCMux)))))
                                                     ? vlSelf->ysyx_23060336__DOT__idu_exu__DOT__imm
                                                     : 4U)))));
    vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__io_axi_arvalid_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_MemtoReg));
    vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__prepare 
        = ((IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__io_axi_arvalid_0) 
           & (IData)(vlSelf->ysyx_23060336__DOT___sdram_lsu_rvalid));
    vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__DataOut 
        = ((IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__prepare)
            ? vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__sdramdata
            : vlSelf->ysyx_23060336__DOT__idu_exu__DOT___alu_io_result);
}

void Vysyx_23060336___024root___eval_ico(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vysyx_23060336___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vysyx_23060336___024root___eval_act(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vysyx_23060336___024root___nba_sequent__TOP__2(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__state 
        = vlSelf->__Vdly__ysyx_23060336__DOT__lsu_wbu__DOT__state;
    if (vlSelf->reset) {
        vlSelf->ysyx_23060336__DOT__ifu__DOT__PC = 0x80000000U;
        vlSelf->__Vdly__ysyx_23060336__DOT__ifu__DOT__state = 0U;
    } else {
        if (vlSelf->reset) {
            vlSelf->ysyx_23060336__DOT__ifu__DOT__PC = 0x80000000U;
        } else if (((IData)(vlSelf->ysyx_23060336__DOT__ifu__DOT__state) 
                    & (IData)(vlSelf->io_out_valid))) {
            vlSelf->ysyx_23060336__DOT__ifu__DOT__PC 
                = vlSelf->io_dnpc;
        }
        vlSelf->__Vdly__ysyx_23060336__DOT__ifu__DOT__state 
            = (1U & ((IData)(vlSelf->ysyx_23060336__DOT__ifu__DOT__state)
                      ? (~ (IData)(vlSelf->io_out_valid))
                      : (IData)(vlSelf->ysyx_23060336__DOT___sdram_ifu_rvalid)));
    }
    vlSelf->io_out_valid = vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__state;
    vlSelf->ysyx_23060336__DOT__ifu__DOT__state = vlSelf->__Vdly__ysyx_23060336__DOT__ifu__DOT__state;
    vlSelf->io_pc = vlSelf->ysyx_23060336__DOT__ifu__DOT__PC;
}

VL_INLINE_OPT void Vysyx_23060336___024root___nba_comb__TOP__0(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT___out13_T_1;
    ysyx_23060336__DOT__idu_exu__DOT__alu__DOT___out13_T_1 = 0;
    // Body
    vlSelf->ysyx_23060336__DOT___reg_io_rdata2 = ((0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                       >> 0x14U)))
                                                   ? 
                                                  vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                      >> 0x14U))]
                                                   : 0U);
    vlSelf->ysyx_23060336__DOT___csr_io_rdata = vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
        [(vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
          >> 0x14U)];
    vlSelf->ysyx_23060336__DOT___reg_io_rdata1 = ((0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                       >> 0xfU)))
                                                   ? 
                                                  vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                      >> 0xfU))]
                                                   : 0U);
    if ((0xffffffffU == vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_ecall_andMatrixOutputs_T)) {
        vlSelf->ysyx_23060336__DOT__csr__DOT____Vcellinp__ysyx_23060336_csrs_ext__W2_data = 0xbU;
        vlSelf->ysyx_23060336__DOT__csr__DOT____Vcellinp__ysyx_23060336_csrs_ext__W1_data 
            = vlSelf->ysyx_23060336__DOT__ifu__DOT__PC;
    } else {
        vlSelf->ysyx_23060336__DOT__csr__DOT____Vcellinp__ysyx_23060336_csrs_ext__W2_data 
            = vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
            [0x342U];
        vlSelf->ysyx_23060336__DOT__csr__DOT____Vcellinp__ysyx_23060336_csrs_ext__W1_data 
            = vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
            [0x341U];
    }
    vlSelf->ysyx_23060336__DOT___ifu_io_axi_arvalid 
        = ((0U == vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata) 
           | (IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__state));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_inb 
        = ((7U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN_0))
            ? vlSelf->ysyx_23060336__DOT___reg_io_rdata2
            : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN_0))
                ? vlSelf->ysyx_23060336__DOT__idu_exu__DOT__imm
                : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN_0))
                    ? 4U : ((3U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN_0))
                             ? vlSelf->ysyx_23060336__DOT__idu_exu__DOT__imm
                             : (((5U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN_0)) 
                                 | (6U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN_0)))
                                 ? vlSelf->ysyx_23060336__DOT___csr_io_rdata
                                 : ((4U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN_0))
                                     ? vlSelf->ysyx_23060336__DOT__idu_exu__DOT__imm
                                     : 0U))))));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
        = (((7U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN_0)) 
            | (1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN_0)))
            ? vlSelf->ysyx_23060336__DOT___reg_io_rdata1
            : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN_0))
                ? vlSelf->ysyx_23060336__DOT__ifu__DOT__PC
                : ((3U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN_0))
                    ? 0U : ((4U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN_0))
                             ? vlSelf->ysyx_23060336__DOT__ifu__DOT__PC
                             : (((5U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN_0)) 
                                 | (8U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN_0)))
                                 ? ((- (IData)((IData)(
                                                       ((3U 
                                                         == 
                                                         (0xfU 
                                                          & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                                        & (0x1fU 
                                                           == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h22c3cfbd__0)))))) 
                                    ^ vlSelf->ysyx_23060336__DOT___reg_io_rdata1)
                                 : (((9U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN_0)) 
                                     | (6U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN_0)))
                                     ? ((IData)(((3U 
                                                  == 
                                                  (0xfU 
                                                   & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                                 & (0x1fU 
                                                    == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h22c3cfbd__0))))
                                         ? (0xffffffe0U 
                                            | (0x1fU 
                                               & (~ 
                                                  (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                   >> 0xfU))))
                                         : (0x1fU & 
                                            (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                             >> 0xfU)))
                                     : 0U))))));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4 
        = ((2U & ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel) 
                  << 1U)) | (1U & vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_inb));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_3 
        = ((2U & ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel) 
                  << 1U)) | (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_inb 
                                   >> 1U)));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_2 
        = ((2U & ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel) 
                  << 1U)) | (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_inb 
                                   >> 2U)));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_1 
        = ((2U & ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel) 
                  << 1U)) | (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_inb 
                                   >> 3U)));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel 
        = ((2U & ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel) 
                  << 1U)) | (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_inb 
                                   >> 4U)));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__addsub__DOT__t_no_cin 
        = ((- (IData)((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__cin))) 
           ^ vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_inb);
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn 
        = (IData)((((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel) 
                    >> 1U) & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                              >> 0x1fU)));
    if ((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel))) {
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp 
            = (1U & vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina);
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_1 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 1U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_3 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 2U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_5 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 3U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_7 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 4U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_9 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 5U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_11 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 6U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_13 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 7U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_0 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 8U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_2 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 9U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_4 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0xaU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_6 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0xbU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_8 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0xcU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_10 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0xdU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_12 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0xeU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_14 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0xfU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_29 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x1eU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_30 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x1fU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_27 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x1cU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_28 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x1dU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_25 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x1aU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_26 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x1bU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_23 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x18U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_24 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x19U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_21 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x16U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_22 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x17U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_19 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x14U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_20 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x15U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_17 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x12U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_18 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x13U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_15 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x10U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_16 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x11U));
    } else if ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel))) {
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x10U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_1 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x11U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_3 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x12U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_5 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x13U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_7 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x14U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_9 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x15U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_11 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x16U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_13 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x17U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_0 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x18U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_2 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x19U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_4 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x1aU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_6 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x1bU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_8 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x1cU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_10 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x1dU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_12 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x1eU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_14 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x1fU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_29 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_30 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_27 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_28 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_25 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_26 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_23 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_24 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_21 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_22 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_19 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_20 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_17 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_18 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_15 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_16 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
    } else {
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_1 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                        >> 1U)));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_3 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                        >> 2U)));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_5 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                        >> 3U)));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_7 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                        >> 4U)));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_9 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                        >> 5U)));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_11 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                        >> 6U)));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_13 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                        >> 7U)));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_0 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                        >> 8U)));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_2 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                        >> 9U)));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_4 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                        >> 0xaU)));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_6 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                        >> 0xbU)));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_8 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                        >> 0xcU)));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_10 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                        >> 0xdU)));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_12 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                        >> 0xeU)));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_14 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                        >> 0xfU)));
        if ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel))) {
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_29 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 0x1eU));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_30 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 0x1fU));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_27 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 0x1cU));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_28 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 0x1dU));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_25 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 0x1aU));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_26 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 0x1bU));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_23 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 0x18U));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_24 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 0x19U));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_21 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 0x16U));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_22 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 0x17U));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_19 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 0x14U));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_20 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 0x15U));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_17 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 0x12U));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_18 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 0x13U));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_15 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 0x10U));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_16 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 0x11U));
        } else {
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_29 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 0xeU));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_30 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 0xfU));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_27 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 0xcU));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_28 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 0xdU));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_25 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 0xaU));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_26 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 0xbU));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_23 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 8U));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_24 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 9U));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_21 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 6U));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_22 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 7U));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_19 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 4U));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_20 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 5U));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_17 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 2U));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_18 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 3U));
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_15 
                = (1U & vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina);
            vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_16 
                = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                         >> 1U));
        }
    }
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__addsub__DOT___sum_T_1 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina)) 
                             + ((QData)((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__addsub__DOT__t_no_cin)) 
                                + (QData)((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__cin)))));
    if ((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_1))) {
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_31 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_33 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_1;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_35 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_3;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_37 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_5;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_32 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_7;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_34 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_9;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_36 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_11;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_38 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_13;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_61 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_29;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_45 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_12;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_53 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_21;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_62 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_30;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_46 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_14;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_54 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_22;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_59 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_27;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_43 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_8;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_51 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_19;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_60 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_28;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_44 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_10;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_52 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_20;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_57 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_25;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_41 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_4;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_49 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_17;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_58 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_26;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_42 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_6;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_50 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_18;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_39 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_0;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_47 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_15;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_55 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_23;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_40 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_2;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_48 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_16;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_56 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_24;
    } else if ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_1))) {
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_31 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_0;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_33 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_2;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_35 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_4;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_37 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_6;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_32 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_8;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_34 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_10;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_36 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_12;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_38 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_14;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_61 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_45 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_21;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_53 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_29;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_62 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_46 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_22;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_54 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_30;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_59 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_43 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_19;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_51 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_27;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_60 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_44 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_20;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_52 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_28;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_57 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_41 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_17;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_49 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_25;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_58 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_42 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_18;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_50 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_26;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_39 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_15;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_47 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_23;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_55 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_40 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_16;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_48 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_24;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_56 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn;
    } else if ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_1))) {
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_31 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_33 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_1;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_35 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_3;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_37 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_5;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_32 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_7;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_34 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_9;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_36 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_11;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_38 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_13;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_61 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_29;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_45 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_12;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_53 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_21;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_62 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_30;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_46 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_14;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_54 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_22;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_59 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_27;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_43 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_8;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_51 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_19;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_60 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_28;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_44 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_10;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_52 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_20;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_57 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_25;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_41 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_4;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_49 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_17;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_58 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_26;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_42 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_6;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_50 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_18;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_39 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_0;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_47 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_15;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_55 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_23;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_40 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_2;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_48 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_16;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_56 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_24;
    } else {
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_31 = 0U;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_33 = 0U;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_35 = 0U;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_37 = 0U;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_32 = 0U;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_34 = 0U;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_36 = 0U;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_38 = 0U;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_61 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_21;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_45 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_11;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_53 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_12;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_62 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_22;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_46 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_13;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_54 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_14;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_59 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_19;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_43 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_7;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_51 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_8;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_60 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_20;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_44 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_9;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_52 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_10;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_57 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_17;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_41 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_3;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_49 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_4;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_58 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_18;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_42 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_5;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_50 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_6;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_39 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_47 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_0;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_55 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_15;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_40 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_1;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_48 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_2;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_56 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_16;
    }
    ysyx_23060336__DOT__idu_exu__DOT__alu__DOT___out13_T_1 
        = ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__cin) 
           ^ (vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__addsub__DOT___sum_T_1 
              >> 0x20U));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT___addsub_io_overflow 
        = (((vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
             >> 0x1fU) == (vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__addsub__DOT__t_no_cin 
                           >> 0x1fU)) & ((1U & (IData)(
                                                       (vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__addsub__DOT___sum_T_1 
                                                        >> 0x1fU))) 
                                         != (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                                             >> 0x1fU)));
    if ((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_2))) {
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_63 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_31;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_65 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_33;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_64 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_35;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_66 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_37;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_93 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_61;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_89 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_57;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_69 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_36;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_73 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_41;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_77 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_45;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_81 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_49;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_85 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_53;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_94 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_62;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_90 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_58;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_70 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_38;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_74 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_42;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_78 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_46;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_82 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_50;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_86 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_54;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_67 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_32;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_71 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_39;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_75 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_43;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_79 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_47;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_83 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_51;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_87 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_55;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_91 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_59;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_68 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_34;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_72 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_40;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_76 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_44;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_80 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_48;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_84 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_52;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_88 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_56;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_92 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_60;
    } else if ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_2))) {
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_63 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_32;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_65 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_34;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_64 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_36;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_66 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_38;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_93 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_89 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_61;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_69 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_41;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_73 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_45;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_77 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_49;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_81 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_53;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_85 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_57;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_94 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_90 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_62;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_70 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_42;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_74 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_46;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_78 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_50;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_82 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_54;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_86 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_58;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_67 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_39;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_71 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_43;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_75 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_47;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_79 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_51;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_83 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_55;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_87 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_59;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_91 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_68 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_40;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_72 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_44;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_76 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_48;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_80 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_52;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_84 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_56;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_88 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_60;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_92 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn;
    } else if ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_2))) {
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_63 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_31;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_65 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_33;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_64 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_35;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_66 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_37;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_93 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_61;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_89 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_57;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_69 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_36;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_73 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_41;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_77 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_45;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_81 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_49;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_85 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_53;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_94 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_62;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_90 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_58;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_70 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_38;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_74 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_42;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_78 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_46;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_82 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_50;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_86 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_54;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_67 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_32;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_71 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_39;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_75 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_43;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_79 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_47;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_83 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_51;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_87 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_55;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_91 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_59;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_68 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_34;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_72 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_40;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_76 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_44;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_80 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_48;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_84 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_52;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_88 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_56;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_92 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_60;
    } else {
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_63 = 0U;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_65 = 0U;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_64 = 0U;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_66 = 0U;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_93 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_57;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_89 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_53;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_69 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_35;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_73 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_36;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_77 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_41;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_81 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_45;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_85 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_49;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_94 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_58;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_90 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_54;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_70 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_37;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_74 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_38;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_78 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_42;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_82 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_46;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_86 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_50;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_67 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_31;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_71 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_32;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_75 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_39;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_79 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_43;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_83 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_47;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_87 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_51;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_91 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_55;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_68 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_33;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_72 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_34;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_76 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_40;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_80 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_44;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_84 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_48;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_88 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_52;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_92 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_56;
    }
    if ((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_3))) {
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_95 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_63;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_65;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_64;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_67;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_69;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_71;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_73;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_75;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_77;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_79;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_81;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_83;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_85;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_87;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_89;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_91;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_93;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_66;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_68;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_70;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_72;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_74;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_76;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_78;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_80;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_82;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_84;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_86;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_88;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_90;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_92;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_94;
    } else if ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_3))) {
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_95 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_64;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_66;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_67;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_69;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_71;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_73;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_75;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_77;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_79;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_81;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_83;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_85;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_87;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_89;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_91;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_93;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_68;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_70;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_72;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_74;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_76;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_78;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_80;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_82;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_84;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_86;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_88;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_90;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_92;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_94;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn;
    } else if ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_3))) {
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_95 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_63;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_65;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_64;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_67;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_69;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_71;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_73;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_75;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_77;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_79;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_81;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_83;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_85;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_87;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_89;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_91;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_93;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_66;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_68;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_70;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_72;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_74;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_76;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_78;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_80;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_82;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_84;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_86;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_88;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_90;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_92;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_94;
    } else {
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_95 = 0U;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96 = 0U;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_63;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_64;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_67;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_69;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_71;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_73;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_75;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_77;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_79;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_81;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_83;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_85;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_87;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_89;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_91;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_65;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_66;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_68;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_70;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_72;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_74;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_76;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_78;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_80;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_82;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_84;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_86;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_88;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_90;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_92;
    }
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT___alu_io_result 
        = (((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel)) 
            | (1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel)))
            ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__addsub__DOT___sum_T_1)
            : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel))
                ? (~ vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina)
                : ((3U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel))
                    ? (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                       & vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_inb)
                    : ((4U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel))
                        ? (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                           | vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_inb)
                        : ((5U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel))
                            ? (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                               ^ vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_inb)
                            : (((6U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel)) 
                                | ((7U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel)) 
                                   | (8U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel))))
                                ? ((((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                      : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                          ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn)
                                          : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                              : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)))) 
                                    << 0x1fU) | (((
                                                   (0U 
                                                    == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                    ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)
                                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124)))) 
                                                  << 0x1eU) 
                                                 | ((((0U 
                                                       == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                       ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                        ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)
                                                        : 
                                                       ((2U 
                                                         == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124)
                                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123)))) 
                                                     << 0x1dU) 
                                                    | ((((0U 
                                                          == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                          ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123)
                                                          : 
                                                         ((1U 
                                                           == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                           ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124)
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                            ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123)
                                                            : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122)))) 
                                                        << 0x1cU) 
                                                       | ((((0U 
                                                             == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                             ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122)
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123)
                                                              : 
                                                             ((2U 
                                                               == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                               ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122)
                                                               : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121)))) 
                                                           << 0x1bU) 
                                                          | ((((0U 
                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121)
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122)
                                                                 : 
                                                                ((2U 
                                                                  == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121)
                                                                  : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120)))) 
                                                              << 0x1aU) 
                                                             | ((((0U 
                                                                   == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                   ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120)
                                                                   : 
                                                                  ((1U 
                                                                    == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                    ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121)
                                                                    : 
                                                                   ((2U 
                                                                     == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120)
                                                                     : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119)))) 
                                                                 << 0x19U) 
                                                                | ((((0U 
                                                                      == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119)
                                                                      : 
                                                                     ((1U 
                                                                       == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                       ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120)
                                                                       : 
                                                                      ((2U 
                                                                        == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                        ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119)
                                                                        : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118)))) 
                                                                    << 0x18U) 
                                                                   | ((((0U 
                                                                         == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118)
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                          ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119)
                                                                          : 
                                                                         ((2U 
                                                                           == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                           ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118)
                                                                           : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117)))) 
                                                                       << 0x17U) 
                                                                      | ((((0U 
                                                                            == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                            ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117)
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                             ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118)
                                                                             : 
                                                                            ((2U 
                                                                              == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117)
                                                                              : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116)))) 
                                                                          << 0x16U) 
                                                                         | ((((0U 
                                                                               == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                               ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116)
                                                                               : 
                                                                              ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117)
                                                                                : 
                                                                               ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115)))) 
                                                                             << 0x15U) 
                                                                            | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114)))) 
                                                                                << 0x14U) 
                                                                               | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113)))) 
                                                                                << 0x13U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112)))) 
                                                                                << 0x12U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111)))) 
                                                                                << 0x11U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110)))) 
                                                                                << 0x10U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109)))) 
                                                                                << 0xfU) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108)))) 
                                                                                << 0xeU) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107)))) 
                                                                                << 0xdU) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106)))) 
                                                                                << 0xcU) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105)))) 
                                                                                << 0xbU) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104)))) 
                                                                                << 0xaU) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103)))) 
                                                                                << 9U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102)))) 
                                                                                << 8U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101)))) 
                                                                                << 7U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100)))) 
                                                                                << 6U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99)))) 
                                                                                << 5U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98)))) 
                                                                                << 4U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97)))) 
                                                                                << 3U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96)))) 
                                                                                << 2U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_95)))) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_95)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4)) 
                                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_95)))))))))))))))))))))))))))))))))))
                                : (1U & ((9U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel))
                                          ? ((IData)(
                                                     (vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__addsub__DOT___sum_T_1 
                                                      >> 0x1fU)) 
                                             ^ (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT___addsub_io_overflow))
                                          : ((0xaU 
                                              == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel))
                                              ? (IData)(ysyx_23060336__DOT__idu_exu__DOT__alu__DOT___out13_T_1)
                                              : ((0xbU 
                                                  == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel))
                                                  ? 
                                                 (((~ (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT___addsub_io_overflow)) 
                                                   ^ (IData)(
                                                             (vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__addsub__DOT___sum_T_1 
                                                              >> 0x1fU))) 
                                                  | (0U 
                                                     == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__addsub__DOT___sum_T_1)))
                                                  : 
                                                 ((0xcU 
                                                   == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel))
                                                   ? 
                                                  (~ (IData)(ysyx_23060336__DOT__idu_exu__DOT__alu__DOT___out13_T_1))
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__addsub__DOT___sum_T_1)) 
                                                   ^ 
                                                   (0xdU 
                                                    != (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel))))))))))))));
    vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__DataOut 
        = ((IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__prepare)
            ? vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__sdramdata
            : vlSelf->ysyx_23060336__DOT__idu_exu__DOT___alu_io_result);
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__PCMux 
        = (((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hc0dd1abe__0) 
            << 3U) | ((4U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT___alu_io_result 
                             << 2U)) | (((IData)(((7U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                                  & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hcfa7c5ac__0))) 
                                         << 1U) | ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hc0dd1abe__0) 
                                                   | (IData)(
                                                             ((0xfU 
                                                               == 
                                                               (0xfU 
                                                                & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                                              & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h03617c08__0)))))));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h99d72b5f__0 
        = ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__PCMux)) 
           | (6U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__PCMux)));
    vlSelf->io_dnpc = ((IData)(vlSelf->reset) ? 0x80000000U
                        : ((0xffffffffU == vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_ecall_andMatrixOutputs_T)
                            ? vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                           [0x305U] : ((IData)(((0x30200073U 
                                                 == 
                                                 (0x3fffffffU 
                                                  & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hd4808a30__0)))
                                        ? vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                                       [0x341U] : (
                                                   ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h99d72b5f__0)
                                                     ? vlSelf->ysyx_23060336__DOT___reg_io_rdata1
                                                     : vlSelf->ysyx_23060336__DOT__ifu__DOT__PC) 
                                                   + 
                                                   (((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h99d72b5f__0) 
                                                     | ((1U 
                                                         == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__PCMux)) 
                                                        | ((5U 
                                                            == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__PCMux)) 
                                                           | (0xdU 
                                                              == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__PCMux)))))
                                                     ? vlSelf->ysyx_23060336__DOT__idu_exu__DOT__imm
                                                     : 4U)))));
}

VL_INLINE_OPT void Vysyx_23060336___024root___nba_sequent__TOP__3(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->ysyx_23060336__DOT___sdram_ifu_rvalid = vlSelf->__Vdly__ysyx_23060336__DOT___sdram_ifu_rvalid;
}

void Vysyx_23060336___024root___nba_sequent__TOP__0(Vysyx_23060336___024root* vlSelf);
void Vysyx_23060336___024root___nba_sequent__TOP__1(Vysyx_23060336___024root* vlSelf);

void Vysyx_23060336___024root___eval_nba(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_23060336___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_23060336___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_23060336___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vysyx_23060336___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_23060336___024root___nba_sequent__TOP__3(vlSelf);
    }
}

void Vysyx_23060336___024root___eval_triggers__ico(Vysyx_23060336___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060336___024root___dump_triggers__ico(Vysyx_23060336___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_23060336___024root___eval_triggers__act(Vysyx_23060336___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060336___024root___dump_triggers__act(Vysyx_23060336___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060336___024root___dump_triggers__nba(Vysyx_23060336___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060336___024root___eval(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vysyx_23060336___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060336___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/romeo/ysyx-workbench/npc/vsrc/ysyx_23060336.sv", 3546, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vysyx_23060336___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vysyx_23060336___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_23060336___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/romeo/ysyx-workbench/npc/vsrc/ysyx_23060336.sv", 3546, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_23060336___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060336___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/romeo/ysyx-workbench/npc/vsrc/ysyx_23060336.sv", 3546, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_23060336___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_23060336___024root___eval_debug_assertions(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060336.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060336___024root.h"

extern const VlUnpacked<CData/*1:0*/, 512> Vysyx_23060336__ConstPool__TABLE_h74475ab3_0;

VL_INLINE_OPT void Vysyx_23060336___024root___ico_sequent__TOP__0(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___ico_sequent__TOP__0\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->io_dnpc = 0x80000000U;
        vlSelf->ysyx_23060336__DOT___ifu_io_axi_araddr = 0x80000000U;
    } else {
        vlSelf->io_dnpc = ((0xffffffffU == vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_ecall_andMatrixOutputs_T)
                            ? vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                           [0x305U] : ((IData)(((0x30200073U 
                                                 == 
                                                 (0x3fffffffU 
                                                  & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
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
                                                     : 4U))));
        vlSelf->ysyx_23060336__DOT___ifu_io_axi_araddr 
            = (((IData)(vlSelf->io_out_valid) & (IData)(vlSelf->ysyx_23060336__DOT__ifu__DOT__state))
                ? vlSelf->io_dnpc : vlSelf->ysyx_23060336__DOT__ifu__DOT__PC);
    }
    vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__io_axi_awvalid_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyx_23060336__DOT___arbiter_io_axi_wlast));
    vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__io_axi_arvalid_0 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__arvalid) 
                                         & (IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_MemtoReg)));
    vlSelf->ysyx_23060336__DOT__arbiter__DOT___GEN 
        = ((IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__io_axi_arvalid_0) 
           & (1U == (IData)(vlSelf->ysyx_23060336__DOT__arbiter__DOT__state)));
    vlSelf->ysyx_23060336__DOT___arbiter_io_axi_arvalid 
        = ((IData)(vlSelf->ysyx_23060336__DOT__arbiter__DOT___GEN)
            ? (IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__io_axi_arvalid_0)
            : ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyx_23060336__DOT__ifu__DOT___ifuarvalid_out_arvalid)));
    vlSelf->ysyx_23060336__DOT___arbiter_io_ifu_rvalid 
        = ((~ (IData)(vlSelf->ysyx_23060336__DOT__arbiter__DOT___GEN)) 
           & (IData)(vlSelf->ysyx_23060336__DOT___sram_rvalid));
    vlSelf->ysyx_23060336__DOT___arbiter_io_lsu_rvalid 
        = ((IData)(vlSelf->ysyx_23060336__DOT__arbiter__DOT___GEN) 
           & (IData)(vlSelf->ysyx_23060336__DOT___sram_rvalid));
    __Vtableidx1 = (((IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_RegWr) 
                     << 8U) | (((IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_CsrWr) 
                                << 7U) | (((IData)(vlSelf->ysyx_23060336__DOT___arbiter_io_axi_wlast) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_MemtoReg) 
                                            << 5U) 
                                           | ((((IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__io_axi_awvalid_0) 
                                                & (IData)(vlSelf->ysyx_23060336__DOT___sram_bvalid)) 
                                               << 4U) 
                                              | ((((IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__io_axi_arvalid_0) 
                                                   & (IData)(vlSelf->ysyx_23060336__DOT___arbiter_io_lsu_rvalid)) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->ysyx_23060336__DOT___arbiter_io_ifu_rvalid) 
                                                     << 2U) 
                                                    | (IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__state))))))));
    vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__casez_tmp 
        = Vysyx_23060336__ConstPool__TABLE_h74475ab3_0
        [__Vtableidx1];
}

void Vysyx_23060336___024root___eval_ico(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vysyx_23060336___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
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
    vlSelf->ysyx_23060336__DOT__ifu__DOT___ifuarvalid_out_arvalid 
        = (((IData)(vlSelf->io_out_valid) & (~ (IData)(vlSelf->ysyx_23060336__DOT___arbiter_io_ifu_rvalid))) 
           | (IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_empty));
}

VL_INLINE_OPT void Vysyx_23060336___024root___nba_sequent__TOP__3(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___nba_sequent__TOP__3\n"); );
    // Init
    CData/*3:0*/ ysyx_23060336__DOT__idu_exu__DOT___GEN_0;
    ysyx_23060336__DOT__idu_exu__DOT___GEN_0 = 0;
    CData/*5:0*/ ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_2;
    ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_2 = 0;
    CData/*6:0*/ ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_3;
    ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_3 = 0;
    CData/*5:0*/ ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_6;
    ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_6 = 0;
    CData/*5:0*/ ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_8;
    ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_8 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h6c886094__0;
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h6c886094__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h795fdc33__0;
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h795fdc33__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hc5ce86a9__0;
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hc5ce86a9__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h859083b2__0;
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h859083b2__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0f7b3c5e__0;
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0f7b3c5e__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0855c605__0;
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0855c605__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h14776bc0__0;
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h14776bc0__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h52335523__0;
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h52335523__0 = 0;
    CData/*4:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h22c3cfbd__0;
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h22c3cfbd__0 = 0;
    CData/*2:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hd8e30b4d__0;
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hd8e30b4d__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h76b56b94__0;
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h76b56b94__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hcfa7dcbc__0;
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hcfa7dcbc__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h7fc75f50__0;
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h7fc75f50__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h70585f8a__0;
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h70585f8a__0 = 0;
    CData/*1:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h171c6c87__0;
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h171c6c87__0 = 0;
    CData/*1:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0993e147__0;
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0993e147__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hc0dd1abe__0;
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hc0dd1abe__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hcfa7c5ac__0;
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hcfa7c5ac__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h03617c08__0;
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h03617c08__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h96c0b08d__0;
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h96c0b08d__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h9ecf676a__0;
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h9ecf676a__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h45879115__0;
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h45879115__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h1cfc0c30__0;
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h1cfc0c30__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_ha09dbe48__0;
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_ha09dbe48__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h62cc9b06__0;
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h62cc9b06__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h049281d3__0;
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h049281d3__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h036178c4__0;
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h036178c4__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT___out13_T_1;
    ysyx_23060336__DOT__idu_exu__DOT__alu__DOT___out13_T_1 = 0;
    // Body
    vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
        = vlSelf->__Vdly__ysyx_23060336__DOT__arbiter__DOT__ifuinst;
    vlSelf->io_out_valid = (3U == (IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__state));
    vlSelf->ysyx_23060336__DOT___idu_exu_io_empty = 
        (0U == vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst);
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hd4808a30__0 
        = (IData)((0U == (0xc0000000U & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_ecall_andMatrixOutputs_T 
        = ((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
            << 0x1fU) | ((0x40000000U & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                         << 0x1dU)) 
                         | ((0x20000000U & ((~ (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                >> 2U)) 
                                            << 0x1dU)) 
                            | ((0x10000000U & ((~ (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                   >> 3U)) 
                                               << 0x1cU)) 
                               | ((0x8000000U & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & ((~ (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                 >> 7U)) 
                                             << 0x18U)) 
                                         | ((0x800000U 
                                             & ((~ 
                                                 (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                  >> 8U)) 
                                                << 0x17U)) 
                                            | ((0x400000U 
                                                & ((~ 
                                                    (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                     >> 9U)) 
                                                   << 0x16U)) 
                                               | ((0x200000U 
                                                   & ((~ 
                                                       (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                        >> 0xaU)) 
                                                      << 0x15U)) 
                                                  | ((0x100000U 
                                                      & ((~ 
                                                          (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                           >> 0xbU)) 
                                                         << 0x14U)) 
                                                     | ((0x80000U 
                                                         & ((~ 
                                                             (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                              >> 0xcU)) 
                                                            << 0x13U)) 
                                                        | ((0x40000U 
                                                            & ((~ 
                                                                (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                 >> 0xdU)) 
                                                               << 0x12U)) 
                                                           | ((0x20000U 
                                                               & ((~ 
                                                                   (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                    >> 0xeU)) 
                                                                  << 0x11U)) 
                                                              | ((0x10000U 
                                                                  & ((~ 
                                                                      (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                       >> 0xfU)) 
                                                                     << 0x10U)) 
                                                                 | ((0x8000U 
                                                                     & ((~ 
                                                                         (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                          >> 0x10U)) 
                                                                        << 0xfU)) 
                                                                    | ((0x4000U 
                                                                        & ((~ 
                                                                            (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                             >> 0x11U)) 
                                                                           << 0xeU)) 
                                                                       | ((0x2000U 
                                                                           & ((~ 
                                                                               (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                                >> 0x12U)) 
                                                                              << 0xdU)) 
                                                                          | ((0x1000U 
                                                                              & ((~ 
                                                                                (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                                >> 0x13U)) 
                                                                                << 0xcU)) 
                                                                             | ((0x800U 
                                                                                & ((~ 
                                                                                (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((~ 
                                                                                (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                                >> 0x15U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((~ 
                                                                                (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                                >> 0x16U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                                >> 0x17U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((~ 
                                                                                (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                                >> 0x18U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ 
                                                                                (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                                >> 0x19U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))))));
    vlSelf->ysyx_23060336__DOT___csr_io_rdata = vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
        [(vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
          >> 0x14U)];
    vlSelf->ysyx_23060336__DOT___arbiter_io_axi_wdata 
        = ((0U != (0x1fU & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                            >> 0x14U))) ? vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory
           [(0x1fU & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                      >> 0x14U))] : 0U);
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__immNum_invInputs 
        = (0x7fU & (~ ((0x60U & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                 >> 7U)) | (0x1fU & 
                                            (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                             >> 2U)))));
    vlSelf->ysyx_23060336__DOT___reg_io_rdata1 = ((0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                       >> 0xfU)))
                                                   ? 
                                                  vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                      >> 0xfU))]
                                                   : 0U);
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h171c6c87__0 
        = ((2U & ((~ (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                      >> 5U)) << 1U)) | (1U & (~ (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                  >> 6U))));
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0993e147__0 
        = ((2U & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                  >> 4U)) | (1U & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                   >> 6U)));
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0855c605__0 
        = (IData)((0x20U == (0x60U & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)));
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0f7b3c5e__0 
        = (IData)((0x2070U == (0x2070U & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)));
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h14776bc0__0 
        = (IData)((0U == (0x60U & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)));
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h22c3cfbd__0 
        = ((0x10U & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst) 
           | ((8U & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                     >> 2U)) | ((4U & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                       >> 4U)) | ((2U 
                                                   & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                      >> 0xbU)) 
                                                  | (1U 
                                                     & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                        >> 0xdU))))));
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h049281d3__0 
        = (IData)((0x60U == (0x60U & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)));
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h7fc75f50__0 
        = (IData)((0x6000U == (0x6000U & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN 
        = ((0xe0U & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                     >> 7U)) | (0x1fU & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                         >> 2U)));
    vlSelf->ysyx_23060336__DOT___idu_exu_io_ebreak 
        = (IData)(((0x100073U == (0x3fffffffU & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                   & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hd4808a30__0)));
    vlSelf->ysyx_23060336__DOT____Vcellinp__csr__io_ecall 
        = ((0xffffffffU == vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_ecall_andMatrixOutputs_T) 
           & (IData)(vlSelf->io_out_valid));
    ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_2 
        = ((0x20U & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                     << 5U)) | ((0x10U & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                          << 3U)) | 
                                ((8U & ((~ (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                            >> 2U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & ((~ 
                                                        (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                         >> 3U)) 
                                                       << 2U)) 
                                                   | (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h171c6c87__0)))));
    ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_3 
        = ((0x40U & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                     << 6U)) | ((0x20U & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                          << 4U)) | 
                                ((0x10U & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                           << 2U)) 
                                 | ((8U & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst) 
                                    | ((4U & ((~ (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                  >> 4U)) 
                                              << 2U)) 
                                       | (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h171c6c87__0))))));
    ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_6 
        = ((0x20U & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                     << 5U)) | ((0x10U & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                          << 3U)) | 
                                ((8U & ((~ (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                            >> 2U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & ((~ 
                                                        (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                         >> 3U)) 
                                                       << 2U)) 
                                                   | (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0993e147__0)))));
    ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_8 
        = ((0x20U & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                     << 5U)) | ((0x10U & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                          << 3U)) | 
                                ((8U & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                        << 1U)) | (
                                                   (4U 
                                                    & ((~ 
                                                        (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                         >> 4U)) 
                                                       << 2U)) 
                                                   | (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0993e147__0)))));
    vlSelf->ysyx_23060336__DOT___arbiter_io_axi_wlast 
        = (IData)(((3U == (0x1fU & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                   & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0855c605__0)));
    vlSelf->ysyx_23060336__DOT___idu_exu_io_CsrWr = 
        (1U & (IData)(((3U == (0xfU & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                       & ((IData)((0x1070U == (0x1070U 
                                               & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst))) 
                          | (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0f7b3c5e__0)))));
    vlSelf->ysyx_23060336__DOT___idu_exu_io_MemtoReg 
        = (IData)(((3U == (0x1fU & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                   & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h14776bc0__0)));
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h03617c08__0 
        = ((~ (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
               >> 4U)) & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h049281d3__0));
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h036178c4__0 
        = ((~ (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
               >> 4U)) & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h049281d3__0));
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_ha09dbe48__0 
        = ((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
            >> 0xcU) & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h7fc75f50__0));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h6a9262f1__0 
        = ((2U & ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                      >> 6U)) << 1U)) | (1U & (~ ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                                                  >> 7U))));
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h6c886094__0 
        = (IData)((0U == (0x60U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))));
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hc5ce86a9__0 
        = ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
               >> 5U)) & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h7fc75f50__0));
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h70585f8a__0 
        = (1U & ((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                  >> 0xdU) & (~ ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                                 >> 7U))));
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h795fdc33__0 
        = (1U & ((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                  >> 0xcU) & (~ ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                                 >> 6U))));
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h62cc9b06__0 
        = (1U & ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                     >> 6U)) & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                >> 0xeU)));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs 
        = (0x7fffU & (~ ((0x7f00U & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                     >> 0x11U)) | (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__casez_tmp 
        = ((0U == (((IData)((3U == (0x5fU & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst))) 
                    << 5U) | (((IData)((0x3fU == (IData)(ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_2))) 
                               << 4U) | (((IData)((0x7fU 
                                                   == (IData)(ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_3))) 
                                          << 3U) | 
                                         (((IData)(
                                                   (0x17U 
                                                    == 
                                                    (0x5fU 
                                                     & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0x3fU 
                                                     == (IData)(ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_6))) 
                                            << 1U) 
                                           | (IData)(
                                                     (0x63U 
                                                      == 
                                                      (0x7bU 
                                                       & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)))))))))
            ? ((0U == (((IData)((3U == (0x4fU & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst))) 
                        << 3U) | (((IData)((0x7fU == (IData)(ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_3))) 
                                   << 2U) | (((IData)(
                                                      (0x33U 
                                                       == 
                                                       (0x3fU 
                                                        & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst))) 
                                              << 1U) 
                                             | (0x3fU 
                                                == (IData)(ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_8))))))
                ? 0U : ((0U == (((IData)((0x3fU == (IData)(ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_2))) 
                                 << 3U) | (((IData)(
                                                    (0x7fU 
                                                     == (IData)(ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_3))) 
                                            << 2U) 
                                           | (((IData)(
                                                       (0x3fU 
                                                        == (IData)(ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_6))) 
                                               << 1U) 
                                              | (0x3fU 
                                                 == (IData)(ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_8))))))
                         ? 0U : (((- (IData)((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst) 
                                               | ((0x800U 
                                                   & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                        >> 0x14U)))))))
            : ((0U == (((IData)((3U == (0x4fU & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst))) 
                        << 3U) | (((IData)((0x7fU == (IData)(ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_3))) 
                                   << 2U) | (((IData)(
                                                      (0x33U 
                                                       == 
                                                       (0x3fU 
                                                        & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst))) 
                                              << 1U) 
                                             | (0x3fU 
                                                == (IData)(ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_8))))))
                ? ((0U == (((IData)((0x3fU == (IData)(ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_2))) 
                            << 3U) | (((IData)((0x7fU 
                                                == (IData)(ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_3))) 
                                       << 2U) | (((IData)(
                                                          (0x3fU 
                                                           == (IData)(ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_6))) 
                                                  << 1U) 
                                                 | (0x3fU 
                                                    == (IData)(ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_8))))))
                    ? (0xfffff000U & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)
                    : (((- (IData)((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0x800U & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                     << 4U)) | ((0x7e0U 
                                                 & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                      >> 7U))))))
                : ((0U == (((IData)((0x3fU == (IData)(ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_2))) 
                            << 3U) | (((IData)((0x7fU 
                                                == (IData)(ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_3))) 
                                       << 2U) | (((IData)(
                                                          (0x3fU 
                                                           == (IData)(ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_6))) 
                                                  << 1U) 
                                                 | (0x3fU 
                                                    == (IData)(ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_8))))))
                    ? (((- (IData)((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                          >> 0x14U)))));
    vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__io_axi_awvalid_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyx_23060336__DOT___arbiter_io_axi_wlast));
    vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__io_axi_arvalid_0 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__arvalid) 
                                         & (IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_MemtoReg)));
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hcfa7c5ac__0 
        = ((~ (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
               >> 3U)) & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h03617c08__0));
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hcfa7dcbc__0 
        = ((~ (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
               >> 3U)) & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h036178c4__0));
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h52335523__0 
        = (IData)(((7U == (7U & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                   & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h036178c4__0)));
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hd8e30b4d__0 
        = ((4U & ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                      >> 4U)) << 2U)) | (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h6a9262f1__0));
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h76b56b94__0 
        = (IData)(((0x60U == (0x60U & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                   & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h795fdc33__0)));
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h859083b2__0 
        = ((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
            >> 0xcU) & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h62cc9b06__0));
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h1cfc0c30__0 
        = (IData)((0x7f00U == (0x7f00U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs))));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__imm = 
        ((1U & (IData)(((0x1013U == (0x1013U & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                        & (0x5bU == (0x5bU & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__immNum_invInputs))))))
          ? (((- (IData)((1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT__casez_tmp 
                                >> 4U)))) << 5U) | 
             (0x1fU & vlSelf->ysyx_23060336__DOT__idu_exu__DOT__casez_tmp))
          : vlSelf->ysyx_23060336__DOT__idu_exu__DOT__casez_tmp);
    vlSelf->ysyx_23060336__DOT__arbiter__DOT___GEN 
        = ((IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__io_axi_arvalid_0) 
           & (1U == (IData)(vlSelf->ysyx_23060336__DOT__arbiter__DOT__state)));
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hc0dd1abe__0 
        = (IData)(((3U == (7U & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                   & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hcfa7c5ac__0)));
    vlSelf->ysyx_23060336__DOT___idu_exu_io_RegWr = 
        (1U & ((IData)(((3U == (0xfU & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                        & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h14776bc0__0))) 
               | ((IData)((0x13U == (0x5bU & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst))) 
                  | ((IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h52335523__0) 
                     | (IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_CsrWr)))));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_MemNum_andMatrixOutputs_T_1 
        = ((0x100U & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                      << 8U)) | ((0x80U & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
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
                                              (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                               >> 2U)) 
                                             | (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hd8e30b4d__0)))))));
    vlSelf->ysyx_23060336__DOT___idu_exu_io_RegNum 
        = (((0U == ((0xfffffffcU & ((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                     << 2U) & ((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                << 1U) 
                                               & ((IData)(
                                                          ((0U 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                           & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h6c886094__0))) 
                                                  << 2U)))) 
                    | (((IData)(((3U == (3U & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                 & (0U == (0xbfU & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))))) 
                        << 1U) | (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                  & ((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                      >> 1U) & (IData)(
                                                       ((0U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                        & (7U 
                                                           == (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hd8e30b4d__0))))))))) 
            << 2U) | (((0U == ((0xfffffffcU & ((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                << 2U) 
                                               & ((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                   << 1U) 
                                                  & ((IData)(
                                                             ((0U 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                              & (7U 
                                                                 == (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hd8e30b4d__0)))) 
                                                     << 2U)))) 
                               | ((0xfffffffeU & ((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                   << 1U) 
                                                  & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                     & ((IData)(
                                                                ((0U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                                 & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h795fdc33__0))) 
                                                        << 1U)))) 
                                  | (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                     & ((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                         >> 1U) & (IData)(
                                                          ((0U 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                           & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hc5ce86a9__0)))))))) 
                       << 1U) | (0U == (((IData)(((3U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                                  & (0U 
                                                     == 
                                                     (0xbfU 
                                                      & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))))) 
                                         << 1U) | (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                   & ((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                       >> 1U) 
                                                      & (IData)(
                                                                ((0U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                                 & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h859083b2__0)))))))));
    ysyx_23060336__DOT__idu_exu__DOT___GEN_0 = (((IData)(
                                                         (((0x13U 
                                                            == 
                                                            (0x13U 
                                                             & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                                           & (0U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN)))) 
                                                          & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h76b56b94__0))) 
                                                 << 3U) 
                                                | ((0xfffffffcU 
                                                    & ((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                        << 2U) 
                                                       & ((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                           << 1U) 
                                                          & (((IData)(
                                                                      ((0x14U 
                                                                        == 
                                                                        (0x1cU 
                                                                         & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                                                       & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h14776bc0__0))) 
                                                              | ((IData)(
                                                                         ((0x10U 
                                                                           == 
                                                                           (0x1cU 
                                                                            & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                                                          & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0855c605__0))) 
                                                                 | (((~ 
                                                                      (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                       >> 2U)) 
                                                                     & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hcfa7dcbc__0)) 
                                                                    | (IData)(
                                                                              ((0U 
                                                                                == 
                                                                                (3U 
                                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                                               & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0f7b3c5e__0)))))) 
                                                             << 2U)))) 
                                                   | ((2U 
                                                       & (((IData)(
                                                                   (0x33U 
                                                                    == 
                                                                    (0x7bU 
                                                                     & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst))) 
                                                           << 1U) 
                                                          | ((0xfffffffeU 
                                                              & ((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                  << 1U) 
                                                                 & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                    & ((IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hcfa7dcbc__0) 
                                                                       << 1U)))) 
                                                             | (((IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h52335523__0) 
                                                                 | (IData)(
                                                                           (((0x73U 
                                                                              == 
                                                                              (0x73U 
                                                                               & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                                                             & (0U 
                                                                                == 
                                                                                (3U 
                                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN)))) 
                                                                            & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h7fc75f50__0)))) 
                                                                << 1U)))) 
                                                      | (1U 
                                                         & ((IData)(
                                                                    (3U 
                                                                     == 
                                                                     (0x4fU 
                                                                      & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst))) 
                                                            | ((IData)(
                                                                       (0x23U 
                                                                        == 
                                                                        (0x3fU 
                                                                         & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst))) 
                                                               | ((IData)(
                                                                          (0x33U 
                                                                           == 
                                                                           (0x7bU 
                                                                            & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst))) 
                                                                  | (IData)(
                                                                            (((0x73U 
                                                                               == 
                                                                               (0x73U 
                                                                                & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                                                              & (0U 
                                                                                == 
                                                                                (3U 
                                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN)))) 
                                                                             & ((IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h70585f8a__0) 
                                                                                | (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h859083b2__0)))))))))));
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h96c0b08d__0 
        = ((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
            >> 0xdU) & (((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs) 
                         >> 7U) & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h1cfc0c30__0)));
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h45879115__0 
        = ((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
            >> 0xeU) & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h1cfc0c30__0));
    vlSelf->ysyx_23060336__DOT__reg_0__DOT____Vcellinp__ysyx_23060336_regs_ext__W0_en 
        = (((IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_RegWr) 
            & (IData)(vlSelf->io_out_valid)) & (0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                    >> 7U))));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_MemNum_orMatrixOutputs_T_4 
        = ((2U & ((IData)(((0x23U == (0x23U & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                           & (0U == (0xb7U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))))) 
                  << 1U)) | (0x1ffU == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_MemNum_andMatrixOutputs_T_1)));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_inb 
        = ((7U == (IData)(ysyx_23060336__DOT__idu_exu__DOT___GEN_0))
            ? vlSelf->ysyx_23060336__DOT___arbiter_io_axi_wdata
            : ((1U == (IData)(ysyx_23060336__DOT__idu_exu__DOT___GEN_0))
                ? vlSelf->ysyx_23060336__DOT__idu_exu__DOT__imm
                : ((2U == (IData)(ysyx_23060336__DOT__idu_exu__DOT___GEN_0))
                    ? 4U : ((3U == (IData)(ysyx_23060336__DOT__idu_exu__DOT___GEN_0))
                             ? vlSelf->ysyx_23060336__DOT__idu_exu__DOT__imm
                             : (((5U == (IData)(ysyx_23060336__DOT__idu_exu__DOT___GEN_0)) 
                                 | (6U == (IData)(ysyx_23060336__DOT__idu_exu__DOT___GEN_0)))
                                 ? vlSelf->ysyx_23060336__DOT___csr_io_rdata
                                 : ((4U == (IData)(ysyx_23060336__DOT__idu_exu__DOT___GEN_0))
                                     ? vlSelf->ysyx_23060336__DOT__idu_exu__DOT__imm
                                     : 0U))))));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
        = (((7U == (IData)(ysyx_23060336__DOT__idu_exu__DOT___GEN_0)) 
            | (1U == (IData)(ysyx_23060336__DOT__idu_exu__DOT___GEN_0)))
            ? vlSelf->ysyx_23060336__DOT___reg_io_rdata1
            : ((2U == (IData)(ysyx_23060336__DOT__idu_exu__DOT___GEN_0))
                ? vlSelf->ysyx_23060336__DOT__ifu__DOT__PC
                : ((3U == (IData)(ysyx_23060336__DOT__idu_exu__DOT___GEN_0))
                    ? 0U : ((4U == (IData)(ysyx_23060336__DOT__idu_exu__DOT___GEN_0))
                             ? vlSelf->ysyx_23060336__DOT__ifu__DOT__PC
                             : (((5U == (IData)(ysyx_23060336__DOT__idu_exu__DOT___GEN_0)) 
                                 | (8U == (IData)(ysyx_23060336__DOT__idu_exu__DOT___GEN_0)))
                                 ? ((- (IData)((IData)(
                                                       ((3U 
                                                         == 
                                                         (0xfU 
                                                          & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                                        & (0x1fU 
                                                           == (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h22c3cfbd__0)))))) 
                                    ^ vlSelf->ysyx_23060336__DOT___reg_io_rdata1)
                                 : (((9U == (IData)(ysyx_23060336__DOT__idu_exu__DOT___GEN_0)) 
                                     | (6U == (IData)(ysyx_23060336__DOT__idu_exu__DOT___GEN_0)))
                                     ? ((IData)(((3U 
                                                  == 
                                                  (0xfU 
                                                   & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                                 & (0x1fU 
                                                    == (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h22c3cfbd__0))))
                                         ? (0xffffffe0U 
                                            | (0x1fU 
                                               & (~ 
                                                  (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                   >> 0xfU))))
                                         : (0x1fU & 
                                            (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                             >> 0xfU)))
                                     : 0U))))));
    ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h9ecf676a__0 
        = (((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs) 
            >> 6U) & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h45879115__0));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel 
        = ((((IData)((((0x13U == (0x13U & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                       & (3U == (3U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs)))) 
                      & (((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                           >> 5U) & (((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs) 
                                      >> 4U) & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h96c0b08d__0))) 
                         | (((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs) 
                             >> 4U) & ((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                        >> 0xcU) & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h9ecf676a__0)))))) 
             << 3U) | ((4U & (((IData)(((0x1013U == 
                                         (0x1013U & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                        & (0x7fd3U 
                                           == (0x7fd3U 
                                               & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs))))) 
                               | ((IData)((((0x33U 
                                             == (0x33U 
                                                 & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                            & (0x33U 
                                               == (0x33U 
                                                   & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs)))) 
                                           & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h45879115__0))) 
                                  | (IData)(((0x40005013U 
                                              == (0x40005013U 
                                                  & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                             & (0x5f53U 
                                                == 
                                                (0x5f53U 
                                                 & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs))))))) 
                              << 2U)) | ((2U & (((IData)(
                                                         ((0x1013U 
                                                           == 
                                                           (0x1013U 
                                                            & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                                          & (0x7fd3U 
                                                             == 
                                                             (0x7fd3U 
                                                              & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs))))) 
                                                 | ((IData)(
                                                            (((0x3033U 
                                                               == 
                                                               (0x3033U 
                                                                & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                                              & (0x13U 
                                                                 == 
                                                                 (0x13U 
                                                                  & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs)))) 
                                                             & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h1cfc0c30__0))) 
                                                    | (IData)(
                                                              ((0x40005013U 
                                                                == 
                                                                (0x40005013U 
                                                                 & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                                               & (0x5f53U 
                                                                  == 
                                                                  (0x5f53U 
                                                                   & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs))))))) 
                                                << 1U)) 
                                         | (1U & ((IData)(
                                                          ((0x1013U 
                                                            == 
                                                            (0x1013U 
                                                             & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                                           & (0x7fd3U 
                                                              == 
                                                              (0x7fd3U 
                                                               & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs))))) 
                                                  | (IData)(
                                                            (((0x33U 
                                                               == 
                                                               (0x33U 
                                                                & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                                              & (0x13U 
                                                                 == 
                                                                 (0x13U 
                                                                  & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs)))) 
                                                             & ((((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs) 
                                                                  >> 5U) 
                                                                 & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h96c0b08d__0)) 
                                                                | ((((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs) 
                                                                     >> 5U) 
                                                                    & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h9ecf676a__0)) 
                                                                   | ((IData)(
                                                                              ((0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                                                               & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h45879115__0))) 
                                                                      | (IData)(
                                                                                ((0x5fe0U 
                                                                                == 
                                                                                (0x5fe0U 
                                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs))) 
                                                                                & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                                >> 0x1eU))))))))))))) 
           | (((IData)((((3U == (3U & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                         & (0U == (3U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN)))) 
                        & (((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                                >> 2U)) & (IData)((
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                                   & (~ 
                                                      ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                                                       >> 6U))))) 
                           | (((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                >> 4U) & (IData)(((0U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                  & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h70585f8a__0)))) 
                              | ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                                     >> 2U)) & (IData)(
                                                       (0x4060U 
                                                        == 
                                                        (0x4060U 
                                                         & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)))))))) 
               << 3U) | (((IData)((((3U == (3U & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                    & (0U == (3U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN)))) 
                                   & ((IData)(((0U 
                                                == 
                                                (0xc4U 
                                                 & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                               & (0x60U 
                                                  == 
                                                  (0x60U 
                                                   & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)))) 
                                      | ((IData)(((0x2070U 
                                                   == 
                                                   (0x2070U 
                                                    & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                                  & (~ 
                                                     ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                                                      >> 5U)))) 
                                         | ((IData)(
                                                    ((0x4010U 
                                                      == 
                                                      (0x4010U 
                                                       & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
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
                                                            & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                                          & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_ha09dbe48__0))))))))) 
                          << 2U) | ((2U & ((0xfffffffeU 
                                            & ((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                << 1U) 
                                               & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                  & ((IData)(
                                                             ((0U 
                                                               == 
                                                               (7U 
                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                              & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h76b56b94__0))) 
                                                     << 1U)))) 
                                           | (((IData)(
                                                       ((0x3013U 
                                                         == 
                                                         (0x3013U 
                                                          & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                                        & (0U 
                                                           == 
                                                           (0x1bU 
                                                            & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))))) 
                                               << 1U) 
                                              | ((0xfffffffeU 
                                                  & ((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                      << 1U) 
                                                     & (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                        & ((IData)(
                                                                   ((0U 
                                                                     == 
                                                                     (3U 
                                                                      & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                                    & (0x1fU 
                                                                       == (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h22c3cfbd__0)))) 
                                                           << 1U)))) 
                                                 | ((IData)(
                                                            (((0x63U 
                                                               == 
                                                               (0x63U 
                                                                & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                                              & (0U 
                                                                 == 
                                                                 (7U 
                                                                  & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN)))) 
                                                             & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hc5ce86a9__0))) 
                                                    << 1U))))) 
                                    | ((IData)((((0x63U 
                                                  == 
                                                  (0x63U 
                                                   & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                                 & (0U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN)))) 
                                                & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h6c886094__0))) 
                                       | ((IData)((
                                                   ((0x13U 
                                                     == 
                                                     (0x13U 
                                                      & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                                    & (0U 
                                                       == 
                                                       (0x3bU 
                                                        & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN)))) 
                                                   & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h70585f8a__0))) 
                                          | (vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                             & (((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                  >> 1U) 
                                                 & (IData)(
                                                           ((0U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                            & (0x1fU 
                                                               == (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h22c3cfbd__0))))) 
                                                | ((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                    >> 1U) 
                                                   & (IData)(
                                                             ((0U 
                                                               == 
                                                               (3U 
                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                              & (((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                   >> 4U) 
                                                                  & (IData)(
                                                                            ((0U 
                                                                              == 
                                                                              (0x38U 
                                                                               & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                                             & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h62cc9b06__0)))) 
                                                                 | (((~ 
                                                                      ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN) 
                                                                       >> 2U)) 
                                                                     & (IData)(
                                                                               ((0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                                                                & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h62cc9b06__0)))) 
                                                                    | ((vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst 
                                                                        >> 4U) 
                                                                       & (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x18U 
                                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN))) 
                                                                                & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_ha09dbe48__0)))))))))))))))));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4 
        = ((2U & ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel) 
                  << 1U)) | (1U & vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_inb));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__cin 
        = (IData)((0U != (9U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel))));
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
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn 
        = (IData)((((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel) 
                    >> 1U) & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                              >> 0x1fU)));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel 
        = ((2U & ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel) 
                  << 1U)) | (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_inb 
                                   >> 4U)));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__addsub__DOT__t_no_cin 
        = ((- (IData)((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__cin))) 
           ^ vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_inb);
    if ((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel))) {
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp 
            = (1U & vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina);
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_1 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 1U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_29 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x1eU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_30 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x1fU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_3 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 2U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_5 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 3U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_27 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x1cU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_28 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x1dU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_7 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 4U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_9 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 5U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_25 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x1aU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_26 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x1bU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_11 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 6U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_13 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 7U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_23 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x18U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_24 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x19U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_0 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 8U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_2 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 9U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_21 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x16U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_22 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x17U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_4 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0xaU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_6 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0xbU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_19 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x14U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_20 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x15U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_8 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0xcU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_10 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0xdU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_17 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x12U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_18 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x13U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_12 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0xeU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_14 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0xfU));
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
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_29 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_30 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_3 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x12U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_5 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x13U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_27 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_28 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_7 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x14U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_9 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x15U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_25 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_26 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_11 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x16U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_13 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x17U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_23 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_24 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_0 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x18U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_2 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x19U));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_21 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_22 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_4 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x1aU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_6 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x1bU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_19 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_20 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_8 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x1cU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_10 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x1dU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_17 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_18 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_12 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x1eU));
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_14 
            = (1U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina 
                     >> 0x1fU));
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
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_61 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_29;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_62 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_30;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_35 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_3;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_37 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_5;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_59 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_27;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_60 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_28;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_32 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_7;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_43 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_8;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_51 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_19;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_34 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_9;
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
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_36 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_11;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_45 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_12;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_53 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_21;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_38 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_13;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_46 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_14;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_54 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_22;
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
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_61 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_62 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_35 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_4;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_37 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_6;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_59 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_60 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_32 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_8;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_43 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_19;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_51 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_27;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_34 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_10;
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
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_36 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_12;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_45 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_21;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_53 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_29;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_38 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_14;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_46 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_22;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_54 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_30;
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
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_61 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_29;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_62 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_30;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_59 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_27;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_60 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_28;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_43 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_8;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_51 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_19;
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
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_45 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_12;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_53 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_21;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_46 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_14;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_54 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_22;
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
    } else {
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_31 = 0U;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_33 = 0U;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_61 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_21;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_62 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_22;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_59 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_19;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_60 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_20;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_43 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_7;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_51 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_8;
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
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_45 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_11;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_53 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_12;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_46 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_13;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_54 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_14;
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
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_35 = 0U;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_37 = 0U;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_32 = 0U;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_34 = 0U;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_36 = 0U;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_38 = 0U;
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
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_93 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_61;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_94 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_62;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_64 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_35;
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
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_89 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_57;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_66 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_37;
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
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_90 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_58;
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
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_93 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_94 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_64 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_36;
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
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_89 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_61;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_66 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_38;
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
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_90 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_62;
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
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_93 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_61;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_94 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_62;
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
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_89 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_57;
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
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_90 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_58;
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
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_64 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_35;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_66 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_37;
    } else {
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_63 = 0U;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_65 = 0U;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_93 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_57;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_94 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_58;
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
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_89 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_53;
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
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_90 
            = vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_54;
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
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_64 = 0U;
        vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_66 = 0U;
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
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__PCMux 
        = (((IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hc0dd1abe__0) 
            << 3U) | ((4U & (vlSelf->ysyx_23060336__DOT__idu_exu__DOT___alu_io_result 
                             << 2U)) | (((IData)(((7U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                                  & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hcfa7c5ac__0))) 
                                         << 1U) | ((IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hc0dd1abe__0) 
                                                   | (IData)(
                                                             ((0xfU 
                                                               == 
                                                               (0xfU 
                                                                & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
                                                              & (IData)(ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h03617c08__0)))))));
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h99d72b5f__0 
        = ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__PCMux)) 
           | (6U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__PCMux)));
    if (vlSelf->reset) {
        vlSelf->io_dnpc = 0x80000000U;
        vlSelf->ysyx_23060336__DOT___ifu_io_axi_araddr = 0x80000000U;
    } else {
        vlSelf->io_dnpc = ((0xffffffffU == vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_ecall_andMatrixOutputs_T)
                            ? vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                           [0x305U] : ((IData)(((0x30200073U 
                                                 == 
                                                 (0x3fffffffU 
                                                  & vlSelf->ysyx_23060336__DOT__arbiter__DOT__ifuinst)) 
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
                                                     : 4U))));
        vlSelf->ysyx_23060336__DOT___ifu_io_axi_araddr 
            = (((IData)(vlSelf->io_out_valid) & (IData)(vlSelf->ysyx_23060336__DOT__ifu__DOT__state))
                ? vlSelf->io_dnpc : vlSelf->ysyx_23060336__DOT__ifu__DOT__PC);
    }
}

VL_INLINE_OPT void Vysyx_23060336___024root___nba_comb__TOP__0(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->ysyx_23060336__DOT___arbiter_io_axi_arvalid 
        = ((IData)(vlSelf->ysyx_23060336__DOT__arbiter__DOT___GEN)
            ? (IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__io_axi_arvalid_0)
            : ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyx_23060336__DOT__ifu__DOT___ifuarvalid_out_arvalid)));
}

VL_INLINE_OPT void Vysyx_23060336___024root___nba_comb__TOP__1(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___nba_comb__TOP__1\n"); );
    // Init
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->ysyx_23060336__DOT___arbiter_io_lsu_rvalid 
        = ((IData)(vlSelf->ysyx_23060336__DOT__arbiter__DOT___GEN) 
           & (IData)(vlSelf->ysyx_23060336__DOT___sram_rvalid));
    vlSelf->ysyx_23060336__DOT___arbiter_io_ifu_rvalid 
        = ((~ (IData)(vlSelf->ysyx_23060336__DOT__arbiter__DOT___GEN)) 
           & (IData)(vlSelf->ysyx_23060336__DOT___sram_rvalid));
    vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__DataOut 
        = (((IData)(vlSelf->io_out_valid) & (IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_MemtoReg))
            ? vlSelf->ysyx_23060336__DOT__sram__DOT__sramdata
            : vlSelf->ysyx_23060336__DOT__idu_exu__DOT___alu_io_result);
    __Vtableidx1 = (((IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_RegWr) 
                     << 8U) | (((IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_CsrWr) 
                                << 7U) | (((IData)(vlSelf->ysyx_23060336__DOT___arbiter_io_axi_wlast) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_MemtoReg) 
                                            << 5U) 
                                           | ((((IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__io_axi_awvalid_0) 
                                                & (IData)(vlSelf->ysyx_23060336__DOT___sram_bvalid)) 
                                               << 4U) 
                                              | ((((IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__io_axi_arvalid_0) 
                                                   & (IData)(vlSelf->ysyx_23060336__DOT___arbiter_io_lsu_rvalid)) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->ysyx_23060336__DOT___arbiter_io_ifu_rvalid) 
                                                     << 2U) 
                                                    | (IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__state))))))));
    vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__casez_tmp 
        = Vysyx_23060336__ConstPool__TABLE_h74475ab3_0
        [__Vtableidx1];
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
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vysyx_23060336___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_23060336___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_23060336___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vysyx_23060336___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(2U))) {
        Vysyx_23060336___024root___nba_comb__TOP__1(vlSelf);
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
    VlTriggerVec<3> __VpreTriggered;
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
                VL_FATAL_MT("/home/romeo/ysyx-workbench/npc/vsrc/ysyx_23060336.sv", 3653, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("/home/romeo/ysyx-workbench/npc/vsrc/ysyx_23060336.sv", 3653, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/romeo/ysyx-workbench/npc/vsrc/ysyx_23060336.sv", 3653, "", "NBA region did not converge.");
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

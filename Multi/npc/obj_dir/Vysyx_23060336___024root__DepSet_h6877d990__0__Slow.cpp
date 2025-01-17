// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060336.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060336___024root.h"

VL_ATTR_COLD void Vysyx_23060336___024root___eval_static(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_23060336___024root___eval_initial(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    vlSelf->__Vtrigrprev__TOP__reset = vlSelf->reset;
}

VL_ATTR_COLD void Vysyx_23060336___024root___eval_final(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_23060336___024root___eval_triggers__stl(Vysyx_23060336___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060336___024root___dump_triggers__stl(Vysyx_23060336___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_23060336___024root___eval_stl(Vysyx_23060336___024root* vlSelf);

VL_ATTR_COLD void Vysyx_23060336___024root___eval_settle(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_23060336___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060336___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/romeo/ysyx-workbench/npc/vsrc/ysyx_23060336.sv", 3546, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_23060336___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060336___024root___dump_triggers__stl(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_23060336___024root___stl_sequent__TOP__0(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT___out13_T_1;
    ysyx_23060336__DOT__idu_exu__DOT__alu__DOT___out13_T_1 = 0;
    // Body
    vlSelf->io_pc = vlSelf->ysyx_23060336__DOT__ifu__DOT__PC;
    vlSelf->io_out_valid = vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__state;
    vlSelf->ysyx_23060336__DOT___ifu_io_axi_arvalid 
        = ((0U == vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata) 
           | (IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__state));
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
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__immNum_invInputs 
        = (0x7fU & (~ ((0x60U & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                 >> 7U)) | (0x1fU & 
                                            (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                             >> 2U)))));
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

VL_ATTR_COLD void Vysyx_23060336___024root___eval_stl(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_23060336___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060336___024root___dump_triggers__ico(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060336___024root___dump_triggers__act(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clock or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060336___024root___dump_triggers__nba(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clock or posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_23060336___024root___ctor_var_reset(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = 0;
    vlSelf->reset = 0;
    vlSelf->io_dnpc = 0;
    vlSelf->io_pc = 0;
    vlSelf->io_out_valid = 0;
    vlSelf->ysyx_23060336__DOT___sdram_lsu_rvalid = 0;
    vlSelf->ysyx_23060336__DOT___sdram_ifu_rvalid = 0;
    vlSelf->ysyx_23060336__DOT___csr_io_rdata = 0;
    vlSelf->ysyx_23060336__DOT___reg_io_rdata1 = 0;
    vlSelf->ysyx_23060336__DOT___reg_io_rdata2 = 0;
    vlSelf->ysyx_23060336__DOT___lsu_wbu_io_CsrWr = 0;
    vlSelf->ysyx_23060336__DOT___lsu_wbu_io_axi_awvalid = 0;
    vlSelf->ysyx_23060336__DOT___lsu_wbu_io_axi_wlast = 0;
    vlSelf->ysyx_23060336__DOT___idu_exu_io_RegNum = 0;
    vlSelf->ysyx_23060336__DOT___idu_exu_io_MemtoReg = 0;
    vlSelf->ysyx_23060336__DOT___idu_exu_io_ebreak = 0;
    vlSelf->ysyx_23060336__DOT___ifu_io_axi_arvalid = 0;
    vlSelf->ysyx_23060336__DOT__ifu__DOT__PC = 0;
    vlSelf->ysyx_23060336__DOT__ifu__DOT__state = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT___alu_io_result = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__immNum_invInputs = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_ecall_andMatrixOutputs_T = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_MemNum_andMatrixOutputs_T_1 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_MemNum_orMatrixOutputs_T_4 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN_0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__casez_tmp = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_2 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_3 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_6 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_8 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__imm = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__PCMux = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_inb = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hd4808a30__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h99d72b5f__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h6a9262f1__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h6c886094__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h795fdc33__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hc5ce86a9__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h859083b2__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0f7b3c5e__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0855c605__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h14776bc0__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h52335523__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h22c3cfbd__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hd8e30b4d__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h76b56b94__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hcfa7dcbc__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h7fc75f50__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h70585f8a__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h171c6c87__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0993e147__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hc0dd1abe__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hcfa7c5ac__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h03617c08__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h96c0b08d__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h9ecf676a__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h45879115__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h1cfc0c30__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_ha09dbe48__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h62cc9b06__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h049281d3__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h036178c4__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT___addsub_io_overflow = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__cin = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__addsub__DOT__t_no_cin = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__addsub__DOT___sum_T_1 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_1 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_0 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_1 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_2 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_3 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_4 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_5 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_6 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_7 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_8 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_9 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_10 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_11 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_12 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_13 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_14 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_15 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_16 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_17 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_18 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_19 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_20 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_21 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_22 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_23 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_24 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_25 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_26 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_27 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_28 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_29 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_30 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_2 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_31 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_32 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_33 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_34 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_35 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_36 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_37 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_38 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_39 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_40 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_41 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_42 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_43 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_44 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_45 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_46 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_47 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_48 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_49 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_50 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_51 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_52 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_53 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_54 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_55 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_56 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_57 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_58 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_59 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_60 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_61 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_62 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_3 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_63 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_64 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_65 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_66 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_67 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_68 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_69 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_70 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_71 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_72 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_73 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_74 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_75 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_76 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_77 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_78 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_79 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_80 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_81 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_82 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_83 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_84 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_85 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_86 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_87 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_88 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_89 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_90 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_91 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_92 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_93 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_94 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_95 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125 = 0;
    vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126 = 0;
    vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__io_axi_arvalid_0 = 0;
    vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__state = 0;
    vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__prepare = 0;
    vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__DataOut = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[__Vi0] = 0;
    }
    vlSelf->ysyx_23060336__DOT__csr__DOT____Vcellinp__ysyx_23060336_csrs_ext__W2_data = 0;
    vlSelf->ysyx_23060336__DOT__csr__DOT____Vcellinp__ysyx_23060336_csrs_ext__W1_data = 0;
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory[__Vi0] = 0;
    }
    vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__bvalid = 0;
    vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__resp = 0;
    vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__RLFSR = 0;
    vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__WLFSR = 0;
    vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__Begin = 0;
    vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata = 0;
    vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__bvalid = 0;
    vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__resp = 0;
    vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__RLFSR = 0;
    vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__WLFSR = 0;
    vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__Begin = 0;
    vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__sdramdata = 0;
    vlSelf->__Vdly__ysyx_23060336__DOT__ifu__DOT__state = 0;
    vlSelf->__Vdly__ysyx_23060336__DOT__lsu_wbu__DOT__state = 0;
    vlSelf->__Vdly__ysyx_23060336__DOT___sdram_ifu_rvalid = 0;
    vlSelf->__Vtrigrprev__TOP__clock = 0;
    vlSelf->__Vtrigrprev__TOP__reset = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

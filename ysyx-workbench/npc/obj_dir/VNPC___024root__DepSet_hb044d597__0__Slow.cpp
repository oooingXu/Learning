// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNPC.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VNPC___024root.h"

VL_ATTR_COLD void VNPC___024root___eval_static(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___eval_static\n"); );
}

VL_ATTR_COLD void VNPC___024root___eval_initial(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VNPC___024root___eval_final(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___eval_final\n"); );
}

VL_ATTR_COLD void VNPC___024root___eval_triggers__stl(VNPC___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VNPC___024root___dump_triggers__stl(VNPC___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VNPC___024root___eval_stl(VNPC___024root* vlSelf);

VL_ATTR_COLD void VNPC___024root___eval_settle(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VNPC___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VNPC___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/romeo/ysyx-workbench/npc/vsrc/NPC.sv", 3445, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VNPC___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNPC___024root___dump_triggers__stl(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VNPC___024root___stl_sequent__TOP__0(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->io_halt_ret = vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory
        [0xaU];
    vlSelf->io_PC = vlSelf->NPC__DOT__pc;
    vlSelf->io_halt = (0x100073U == vlSelf->NPC__DOT___ifu_inst);
    vlSelf->io_inst = vlSelf->NPC__DOT___ifu_inst;
    vlSelf->io_mDataOut = vlSelf->NPC__DOT__wbu__DOT___lsu_DataOut;
    vlSelf->io_vaild = vlSelf->NPC__DOT___wbu_io_vaild;
    vlSelf->NPC__DOT___idu_io_halt = (0x100073U == vlSelf->NPC__DOT___ifu_inst);
    vlSelf->io_stop = vlSelf->NPC__DOT__stop;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hd4808a30__0 
        = (IData)((0U == (0xc0000000U & vlSelf->NPC__DOT___ifu_inst)));
    vlSelf->NPC__DOT__wbu__DOT___Csr_ext_R2_data = 
        vlSelf->NPC__DOT__wbu__DOT__Csr_ext__DOT__Memory
        [(vlSelf->NPC__DOT___ifu_inst >> 0x14U)];
    vlSelf->NPC__DOT__idu__DOT__immNum_invInputs = 
        (0x7fU & (~ ((0x60U & (vlSelf->NPC__DOT___ifu_inst 
                               >> 7U)) | (0x1fU & (vlSelf->NPC__DOT___ifu_inst 
                                                   >> 2U)))));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h0855c605__0 
        = (IData)((0x20U == (0x60U & vlSelf->NPC__DOT___ifu_inst)));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h0f7b3c5e__0 
        = (IData)((0x2070U == (0x2070U & vlSelf->NPC__DOT___ifu_inst)));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h14776bc0__0 
        = (IData)((0U == (0x60U & vlSelf->NPC__DOT___ifu_inst)));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h40c0d4db__0 
        = (IData)((0x3000U == (0x3000U & vlSelf->NPC__DOT___ifu_inst)));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hdf4b4597__0 
        = (IData)((0x10U == (0x58U & vlSelf->NPC__DOT___ifu_inst)));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h7fc75f50__0 
        = (IData)((0x6000U == (0x6000U & vlSelf->NPC__DOT___ifu_inst)));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h1038d363__0 
        = (IData)((3U == (0x4fU & vlSelf->NPC__DOT___ifu_inst)));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h171c6c87__0 
        = ((2U & ((~ (vlSelf->NPC__DOT___ifu_inst >> 5U)) 
                  << 1U)) | (1U & (~ (vlSelf->NPC__DOT___ifu_inst 
                                      >> 6U))));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h0993e147__0 
        = ((2U & (vlSelf->NPC__DOT___ifu_inst >> 4U)) 
           | (1U & (vlSelf->NPC__DOT___ifu_inst >> 6U)));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h049281d3__0 
        = (IData)((0x60U == (0x60U & vlSelf->NPC__DOT___ifu_inst)));
    vlSelf->NPC__DOT__idu__DOT___GEN = ((0xe0U & (vlSelf->NPC__DOT___ifu_inst 
                                                  >> 7U)) 
                                        | (0x1fU & 
                                           (vlSelf->NPC__DOT___ifu_inst 
                                            >> 2U)));
    vlSelf->NPC__DOT___idu_io_mret = (IData)(((0x30200073U 
                                               == (0x3fffffffU 
                                                   & vlSelf->NPC__DOT___ifu_inst)) 
                                              & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hd4808a30__0)));
    vlSelf->NPC__DOT___idu_io_ecall = (IData)(((0x73U 
                                                == 
                                                (0x3fffffffU 
                                                 & vlSelf->NPC__DOT___ifu_inst)) 
                                               & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hd4808a30__0)));
    vlSelf->io_MemWr = (IData)(((3U == (0x1fU & vlSelf->NPC__DOT___ifu_inst)) 
                                & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h0855c605__0)));
    vlSelf->NPC__DOT___idu_io_CsrWr = (1U & (IData)(
                                                    ((3U 
                                                      == 
                                                      (0xfU 
                                                       & vlSelf->NPC__DOT___ifu_inst)) 
                                                     & ((IData)(
                                                                (0x1070U 
                                                                 == 
                                                                 (0x1070U 
                                                                  & vlSelf->NPC__DOT___ifu_inst))) 
                                                        | (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h0f7b3c5e__0)))));
    vlSelf->io_MemtoReg = (IData)(((3U == (0x1fU & vlSelf->NPC__DOT___ifu_inst)) 
                                   & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h14776bc0__0)));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_ha09dbe48__0 
        = ((vlSelf->NPC__DOT___ifu_inst >> 0xcU) & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h7fc75f50__0));
    vlSelf->NPC__DOT__idu__DOT___instType_andMatrixOutputs_T_2 
        = ((0x20U & (vlSelf->NPC__DOT___ifu_inst << 5U)) 
           | ((0x10U & (vlSelf->NPC__DOT___ifu_inst 
                        << 3U)) | ((8U & ((~ (vlSelf->NPC__DOT___ifu_inst 
                                              >> 2U)) 
                                          << 3U)) | 
                                   ((4U & ((~ (vlSelf->NPC__DOT___ifu_inst 
                                               >> 3U)) 
                                           << 2U)) 
                                    | (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h171c6c87__0)))));
    vlSelf->NPC__DOT__idu__DOT___instType_andMatrixOutputs_T_3 
        = ((0x40U & (vlSelf->NPC__DOT___ifu_inst << 6U)) 
           | ((0x20U & (vlSelf->NPC__DOT___ifu_inst 
                        << 4U)) | ((0x10U & (vlSelf->NPC__DOT___ifu_inst 
                                             << 2U)) 
                                   | ((8U & vlSelf->NPC__DOT___ifu_inst) 
                                      | ((4U & ((~ 
                                                 (vlSelf->NPC__DOT___ifu_inst 
                                                  >> 4U)) 
                                                << 2U)) 
                                         | (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h171c6c87__0))))));
    vlSelf->NPC__DOT__idu__DOT___instType_andMatrixOutputs_T_6 
        = ((0x20U & (vlSelf->NPC__DOT___ifu_inst << 5U)) 
           | ((0x10U & (vlSelf->NPC__DOT___ifu_inst 
                        << 3U)) | ((8U & ((~ (vlSelf->NPC__DOT___ifu_inst 
                                              >> 2U)) 
                                          << 3U)) | 
                                   ((4U & ((~ (vlSelf->NPC__DOT___ifu_inst 
                                               >> 3U)) 
                                           << 2U)) 
                                    | (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h0993e147__0)))));
    vlSelf->NPC__DOT__idu__DOT___instType_andMatrixOutputs_T_8 
        = ((0x20U & (vlSelf->NPC__DOT___ifu_inst << 5U)) 
           | ((0x10U & (vlSelf->NPC__DOT___ifu_inst 
                        << 3U)) | ((8U & (vlSelf->NPC__DOT___ifu_inst 
                                          << 1U)) | 
                                   ((4U & ((~ (vlSelf->NPC__DOT___ifu_inst 
                                               >> 4U)) 
                                           << 2U)) 
                                    | (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h0993e147__0)))));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h03617c08__0 
        = ((~ (vlSelf->NPC__DOT___ifu_inst >> 4U)) 
           & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h049281d3__0));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h036178c4__0 
        = ((~ (vlSelf->NPC__DOT___ifu_inst >> 4U)) 
           & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h049281d3__0));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hd8e30b4d__0 
        = ((4U & ((~ ((IData)(vlSelf->NPC__DOT__idu__DOT___GEN) 
                      >> 4U)) << 2U)) | ((2U & ((~ 
                                                 ((IData)(vlSelf->NPC__DOT__idu__DOT___GEN) 
                                                  >> 6U)) 
                                                << 1U)) 
                                         | (1U & (~ 
                                                  ((IData)(vlSelf->NPC__DOT__idu__DOT___GEN) 
                                                   >> 7U)))));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hd7d880ef__0 
        = ((4U & ((~ ((IData)(vlSelf->NPC__DOT__idu__DOT___GEN) 
                      >> 4U)) << 2U)) | ((2U & ((~ 
                                                 ((IData)(vlSelf->NPC__DOT__idu__DOT___GEN) 
                                                  >> 5U)) 
                                                << 1U)) 
                                         | (1U & (~ 
                                                  ((IData)(vlSelf->NPC__DOT__idu__DOT___GEN) 
                                                   >> 7U)))));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h69bb9be0__0 
        = (IData)((0U == (0xc0U & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN))));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h6c886094__0 
        = (IData)((0U == (0x60U & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN))));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h795fdc33__0 
        = (1U & ((vlSelf->NPC__DOT___ifu_inst >> 0xcU) 
                 & (~ ((IData)(vlSelf->NPC__DOT__idu__DOT___GEN) 
                       >> 6U))));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hc5ce86a9__0 
        = ((~ ((IData)(vlSelf->NPC__DOT__idu__DOT___GEN) 
               >> 5U)) & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h7fc75f50__0));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h62cc9b06__0 
        = (1U & ((~ ((IData)(vlSelf->NPC__DOT__idu__DOT___GEN) 
                     >> 6U)) & (vlSelf->NPC__DOT___ifu_inst 
                                >> 0xeU)));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h70585f8a__0 
        = (1U & ((vlSelf->NPC__DOT___ifu_inst >> 0xdU) 
                 & (~ ((IData)(vlSelf->NPC__DOT__idu__DOT___GEN) 
                       >> 7U))));
    vlSelf->NPC__DOT__idu__DOT__AluSela_invInputs = 
        (0x7fffU & (~ ((0x7f00U & (vlSelf->NPC__DOT___ifu_inst 
                                   >> 0x11U)) | (IData)(vlSelf->NPC__DOT__idu__DOT___GEN))));
    vlSelf->NPC__DOT__wbu__DOT____Vcellinp__Csr_ext__W2_data 
        = ((IData)(vlSelf->NPC__DOT___idu_io_ecall)
            ? vlSelf->NPC__DOT__pc : vlSelf->NPC__DOT__wbu__DOT__Csr_ext__DOT__Memory
           [0x341U]);
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hcfa7c5ac__0 
        = ((~ (vlSelf->NPC__DOT___ifu_inst >> 3U)) 
           & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h03617c08__0));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h52335523__0 
        = (IData)(((7U == (7U & vlSelf->NPC__DOT___ifu_inst)) 
                   & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h036178c4__0)));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hcfa7dcbc__0 
        = ((~ (vlSelf->NPC__DOT___ifu_inst >> 3U)) 
           & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h036178c4__0));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h859083b2__0 
        = ((vlSelf->NPC__DOT___ifu_inst >> 0xcU) & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h62cc9b06__0));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h2376aa4a__0 
        = (IData)(((0U == (0x30U & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN))) 
                   & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h70585f8a__0)));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h1cfc0c30__0 
        = (IData)((0x7f00U == (0x7f00U & (IData)(vlSelf->NPC__DOT__idu__DOT__AluSela_invInputs))));
    vlSelf->NPC__DOT___idu_io_Branch = (IData)(((3U 
                                                 == 
                                                 (7U 
                                                  & vlSelf->NPC__DOT___ifu_inst)) 
                                                & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hcfa7c5ac__0)));
    vlSelf->io_RegWr = ((IData)(((3U == (0xfU & vlSelf->NPC__DOT___ifu_inst)) 
                                 & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h14776bc0__0))) 
                        | ((vlSelf->NPC__DOT___ifu_inst 
                            & ((vlSelf->NPC__DOT___ifu_inst 
                                >> 1U) & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hdf4b4597__0))) 
                           | (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h52335523__0)));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h33c2d558__0 
        = (vlSelf->NPC__DOT___ifu_inst & ((vlSelf->NPC__DOT___ifu_inst 
                                           >> 1U) & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hcfa7dcbc__0)));
    vlSelf->NPC__DOT___idu_io_RegNum = (((0U == ((0xfffffffcU 
                                                  & ((vlSelf->NPC__DOT___ifu_inst 
                                                      << 2U) 
                                                     & ((vlSelf->NPC__DOT___ifu_inst 
                                                         << 1U) 
                                                        & ((IData)(
                                                                   ((0U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN))) 
                                                                    & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h6c886094__0))) 
                                                           << 2U)))) 
                                                 | ((0xfffffffeU 
                                                     & ((vlSelf->NPC__DOT___ifu_inst 
                                                         << 1U) 
                                                        & (vlSelf->NPC__DOT___ifu_inst 
                                                           & ((IData)(
                                                                      ((0U 
                                                                        == 
                                                                        (0xfU 
                                                                         & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN))) 
                                                                       & (7U 
                                                                          == (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hd7d880ef__0)))) 
                                                              << 1U)))) 
                                                    | (vlSelf->NPC__DOT___ifu_inst 
                                                       & ((vlSelf->NPC__DOT___ifu_inst 
                                                           >> 1U) 
                                                          & (IData)(
                                                                    ((0U 
                                                                      == 
                                                                      (0xfU 
                                                                       & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN))) 
                                                                     & (7U 
                                                                        == (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hd8e30b4d__0))))))))) 
                                         << 2U) | (
                                                   ((0U 
                                                     == 
                                                     ((0xfffffffcU 
                                                       & ((vlSelf->NPC__DOT___ifu_inst 
                                                           << 2U) 
                                                          & ((vlSelf->NPC__DOT___ifu_inst 
                                                              << 1U) 
                                                             & ((IData)(
                                                                        ((0U 
                                                                          == 
                                                                          (0xfU 
                                                                           & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN))) 
                                                                         & (7U 
                                                                            == (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hd8e30b4d__0)))) 
                                                                << 2U)))) 
                                                      | ((0xfffffffeU 
                                                          & ((vlSelf->NPC__DOT___ifu_inst 
                                                              << 1U) 
                                                             & (vlSelf->NPC__DOT___ifu_inst 
                                                                & ((IData)(
                                                                           ((0U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN))) 
                                                                            & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h795fdc33__0))) 
                                                                   << 1U)))) 
                                                         | (vlSelf->NPC__DOT___ifu_inst 
                                                            & ((vlSelf->NPC__DOT___ifu_inst 
                                                                >> 1U) 
                                                               & (IData)(
                                                                         ((0U 
                                                                           == 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN))) 
                                                                          & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hc5ce86a9__0)))))))) 
                                                    << 1U) 
                                                   | (0U 
                                                      == 
                                                      ((0xfffffffeU 
                                                        & ((vlSelf->NPC__DOT___ifu_inst 
                                                            << 1U) 
                                                           & (vlSelf->NPC__DOT___ifu_inst 
                                                              & ((IData)(
                                                                         ((0U 
                                                                           == 
                                                                           (0xfU 
                                                                            & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN))) 
                                                                          & (7U 
                                                                             == (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hd7d880ef__0)))) 
                                                                 << 1U)))) 
                                                       | (vlSelf->NPC__DOT___ifu_inst 
                                                          & ((vlSelf->NPC__DOT___ifu_inst 
                                                              >> 1U) 
                                                             & (IData)(
                                                                       ((0U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN))) 
                                                                        & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h859083b2__0)))))))));
    vlSelf->io_MemNum = (((0x1ffU != ((0x100U & (vlSelf->NPC__DOT___ifu_inst 
                                                 << 8U)) 
                                      | ((0x80U & (vlSelf->NPC__DOT___ifu_inst 
                                                   << 6U)) 
                                         | ((0x40U 
                                             & ((~ (IData)(vlSelf->NPC__DOT__idu__DOT___GEN)) 
                                                << 6U)) 
                                            | ((0x20U 
                                                & ((~ 
                                                    ((IData)(vlSelf->NPC__DOT__idu__DOT___GEN) 
                                                     >> 1U)) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->NPC__DOT__idu__DOT___GEN) 
                                                        >> 2U)) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & (vlSelf->NPC__DOT___ifu_inst 
                                                         >> 2U)) 
                                                     | (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hd7d880ef__0)))))))) 
                          << 1U) | (0U == (((IData)(
                                                    ((((0x1023U 
                                                        == 
                                                        (0x1023U 
                                                         & vlSelf->NPC__DOT___ifu_inst)) 
                                                       & (0U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN)))) 
                                                      & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h69bb9be0__0)) 
                                                     & (~ 
                                                        ((IData)(vlSelf->NPC__DOT__idu__DOT___GEN) 
                                                         >> 4U)))) 
                                            << 1U) 
                                           | (IData)(
                                                     (((0x23U 
                                                        == 
                                                        (0x23U 
                                                         & vlSelf->NPC__DOT___ifu_inst)) 
                                                       & (0U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN)))) 
                                                      & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h2376aa4a__0))))));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h96c0b08d__0 
        = ((vlSelf->NPC__DOT___ifu_inst >> 0xdU) & 
           (((IData)(vlSelf->NPC__DOT__idu__DOT__AluSela_invInputs) 
             >> 7U) & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h1cfc0c30__0)));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h45879115__0 
        = ((vlSelf->NPC__DOT___ifu_inst >> 0xeU) & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h1cfc0c30__0));
    vlSelf->io_AluMux = (((0xfffffffcU & ((vlSelf->NPC__DOT___ifu_inst 
                                           << 2U) & 
                                          ((vlSelf->NPC__DOT___ifu_inst 
                                            << 1U) 
                                           & (((IData)(
                                                       ((0x14U 
                                                         == 
                                                         (0x1cU 
                                                          & vlSelf->NPC__DOT___ifu_inst)) 
                                                        & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h14776bc0__0))) 
                                               | ((~ 
                                                   (vlSelf->NPC__DOT___ifu_inst 
                                                    >> 2U)) 
                                                  & ((IData)(
                                                             ((0x10U 
                                                               == 
                                                               (0x18U 
                                                                & vlSelf->NPC__DOT___ifu_inst)) 
                                                              & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h0855c605__0))) 
                                                     | (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hcfa7dcbc__0)))) 
                                              << 2U)))) 
                          | (((((IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h33c2d558__0) 
                                | (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h52335523__0)) 
                               | (0x33U == (0x7bU & vlSelf->NPC__DOT___ifu_inst))) 
                              << 1U) | ((IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h1038d363__0) 
                                        | ((0x23U == 
                                            (0x3fU 
                                             & vlSelf->NPC__DOT___ifu_inst)) 
                                           | (0x33U 
                                              == (0x7bU 
                                                  & vlSelf->NPC__DOT___ifu_inst)))))) 
                         | ((0xfffffffcU & ((vlSelf->NPC__DOT___ifu_inst 
                                             << 2U) 
                                            & ((vlSelf->NPC__DOT___ifu_inst 
                                                << 1U) 
                                               & ((IData)(
                                                          ((0U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN))) 
                                                           & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h0f7b3c5e__0))) 
                                                  << 2U)))) 
                            | (((IData)((((0x73U == 
                                           (0x73U & vlSelf->NPC__DOT___ifu_inst)) 
                                          & (0U == 
                                             (3U & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN)))) 
                                         & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h7fc75f50__0))) 
                                << 1U) | (IData)(((
                                                   (0x73U 
                                                    == 
                                                    (0x73U 
                                                     & vlSelf->NPC__DOT___ifu_inst)) 
                                                   & (0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN)))) 
                                                  & ((IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h70585f8a__0) 
                                                     | (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h859083b2__0)))))));
    vlSelf->io_instType = (((0U == (((IData)((3U == 
                                              (0x5fU 
                                               & vlSelf->NPC__DOT___ifu_inst))) 
                                     << 5U) | (((IData)(
                                                        (0x3fU 
                                                         == (IData)(vlSelf->NPC__DOT__idu__DOT___instType_andMatrixOutputs_T_2))) 
                                                << 4U) 
                                               | (((IData)(
                                                           (0x7fU 
                                                            == (IData)(vlSelf->NPC__DOT__idu__DOT___instType_andMatrixOutputs_T_3))) 
                                                   << 3U) 
                                                  | (((IData)(
                                                              ((7U 
                                                                == 
                                                                (7U 
                                                                 & vlSelf->NPC__DOT___ifu_inst)) 
                                                               & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hdf4b4597__0))) 
                                                      << 2U) 
                                                     | (((IData)(
                                                                 (0x3fU 
                                                                  == (IData)(vlSelf->NPC__DOT__idu__DOT___instType_andMatrixOutputs_T_6))) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h33c2d558__0))))))) 
                            << 2U) | (((0U == (((IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h1038d363__0) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0x7fU 
                                                            == (IData)(vlSelf->NPC__DOT__idu__DOT___instType_andMatrixOutputs_T_3))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0x33U 
                                                               == 
                                                               (0x3fU 
                                                                & vlSelf->NPC__DOT___ifu_inst))) 
                                                      << 1U) 
                                                     | (0x3fU 
                                                        == (IData)(vlSelf->NPC__DOT__idu__DOT___instType_andMatrixOutputs_T_8)))))) 
                                       << 1U) | (0U 
                                                 == 
                                                 (((IData)(
                                                           (0x3fU 
                                                            == (IData)(vlSelf->NPC__DOT__idu__DOT___instType_andMatrixOutputs_T_2))) 
                                                   << 3U) 
                                                  | (((IData)(
                                                              (0x7fU 
                                                               == (IData)(vlSelf->NPC__DOT__idu__DOT___instType_andMatrixOutputs_T_3))) 
                                                      << 2U) 
                                                     | (((IData)(
                                                                 (0x3fU 
                                                                  == (IData)(vlSelf->NPC__DOT__idu__DOT___instType_andMatrixOutputs_T_6))) 
                                                         << 1U) 
                                                        | (0x3fU 
                                                           == (IData)(vlSelf->NPC__DOT__idu__DOT___instType_andMatrixOutputs_T_8))))))));
    vlSelf->io_DataOut = ((0U == (IData)(vlSelf->NPC__DOT___idu_io_RegNum))
                           ? (((- (IData)((1U & (vlSelf->NPC__DOT__wbu__DOT___lsu_DataOut 
                                                 >> 7U)))) 
                               << 8U) | (0xffU & vlSelf->NPC__DOT__wbu__DOT___lsu_DataOut))
                           : ((1U == (IData)(vlSelf->NPC__DOT___idu_io_RegNum))
                               ? (((- (IData)((1U & 
                                               (vlSelf->NPC__DOT__wbu__DOT___lsu_DataOut 
                                                >> 0xfU)))) 
                                   << 0x10U) | (0xffffU 
                                                & vlSelf->NPC__DOT__wbu__DOT___lsu_DataOut))
                               : ((3U == (IData)(vlSelf->NPC__DOT___idu_io_RegNum))
                                   ? (0xffU & vlSelf->NPC__DOT__wbu__DOT___lsu_DataOut)
                                   : ((4U == (IData)(vlSelf->NPC__DOT___idu_io_RegNum))
                                       ? (0xffffU & vlSelf->NPC__DOT__wbu__DOT___lsu_DataOut)
                                       : vlSelf->NPC__DOT__wbu__DOT___lsu_DataOut))));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h9ecf676a__0 
        = (((IData)(vlSelf->NPC__DOT__idu__DOT__AluSela_invInputs) 
            >> 6U) & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h45879115__0));
    vlSelf->io_rd = (((0U == (IData)(vlSelf->io_instType)) 
                      | ((3U == (IData)(vlSelf->io_instType)) 
                         | ((4U == (IData)(vlSelf->io_instType)) 
                            | (5U == (IData)(vlSelf->io_instType)))))
                      ? (0x1fU & (vlSelf->NPC__DOT___ifu_inst 
                                  >> 7U)) : 0U);
    vlSelf->NPC__DOT__idu__DOT__casez_tmp = ((4U & (IData)(vlSelf->io_instType))
                                              ? ((2U 
                                                  & (IData)(vlSelf->io_instType))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->io_instType))
                                                   ? 0U
                                                   : 
                                                  (((- (IData)(
                                                               (vlSelf->NPC__DOT___ifu_inst 
                                                                >> 0x1fU))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & vlSelf->NPC__DOT___ifu_inst) 
                                                      | ((0x800U 
                                                          & (vlSelf->NPC__DOT___ifu_inst 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->NPC__DOT___ifu_inst 
                                                               >> 0x14U)))))))
                                              : ((2U 
                                                  & (IData)(vlSelf->io_instType))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->io_instType))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelf->NPC__DOT___ifu_inst)
                                                   : 
                                                  (((- (IData)(
                                                               (vlSelf->NPC__DOT___ifu_inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0x800U 
                                                       & (vlSelf->NPC__DOT___ifu_inst 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlSelf->NPC__DOT___ifu_inst 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlSelf->NPC__DOT___ifu_inst 
                                                               >> 7U))))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->io_instType))
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->NPC__DOT___ifu_inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0xfe0U 
                                                       & (vlSelf->NPC__DOT___ifu_inst 
                                                          >> 0x14U)) 
                                                      | (0x1fU 
                                                         & (vlSelf->NPC__DOT___ifu_inst 
                                                            >> 7U))))
                                                   : 
                                                  (((- (IData)(
                                                               (vlSelf->NPC__DOT___ifu_inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->NPC__DOT___ifu_inst 
                                                      >> 0x14U)))));
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h6dd14589__0 
        = ((1U == (IData)(vlSelf->io_instType)) | (
                                                   (2U 
                                                    == (IData)(vlSelf->io_instType)) 
                                                   | (5U 
                                                      == (IData)(vlSelf->io_instType))));
    vlSelf->io_AluSel = ((((IData)((((0x13U == (0x13U 
                                                & vlSelf->NPC__DOT___ifu_inst)) 
                                     & (3U == (3U & (IData)(vlSelf->NPC__DOT__idu__DOT__AluSela_invInputs)))) 
                                    & (((vlSelf->NPC__DOT___ifu_inst 
                                         >> 5U) & (
                                                   ((IData)(vlSelf->NPC__DOT__idu__DOT__AluSela_invInputs) 
                                                    >> 4U) 
                                                   & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h96c0b08d__0))) 
                                       | (((IData)(vlSelf->NPC__DOT__idu__DOT__AluSela_invInputs) 
                                           >> 4U) & 
                                          ((vlSelf->NPC__DOT___ifu_inst 
                                            >> 0xcU) 
                                           & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h9ecf676a__0)))))) 
                           << 3U) | ((4U & (((IData)(
                                                     ((0x1013U 
                                                       == 
                                                       (0x1013U 
                                                        & vlSelf->NPC__DOT___ifu_inst)) 
                                                      & (0x7fd3U 
                                                         == 
                                                         (0x7fd3U 
                                                          & (IData)(vlSelf->NPC__DOT__idu__DOT__AluSela_invInputs))))) 
                                             | ((IData)(
                                                        (((0x33U 
                                                           == 
                                                           (0x33U 
                                                            & vlSelf->NPC__DOT___ifu_inst)) 
                                                          & (0x33U 
                                                             == 
                                                             (0x33U 
                                                              & (IData)(vlSelf->NPC__DOT__idu__DOT__AluSela_invInputs)))) 
                                                         & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h45879115__0))) 
                                                | (IData)(
                                                          ((0x40005013U 
                                                            == 
                                                            (0x40005013U 
                                                             & vlSelf->NPC__DOT___ifu_inst)) 
                                                           & (0x5f53U 
                                                              == 
                                                              (0x5f53U 
                                                               & (IData)(vlSelf->NPC__DOT__idu__DOT__AluSela_invInputs))))))) 
                                            << 2U)) 
                                     | ((2U & (((IData)(
                                                        ((0x1013U 
                                                          == 
                                                          (0x1013U 
                                                           & vlSelf->NPC__DOT___ifu_inst)) 
                                                         & (0x7fd3U 
                                                            == 
                                                            (0x7fd3U 
                                                             & (IData)(vlSelf->NPC__DOT__idu__DOT__AluSela_invInputs))))) 
                                                | ((IData)(
                                                           (((0x3033U 
                                                              == 
                                                              (0x3033U 
                                                               & vlSelf->NPC__DOT___ifu_inst)) 
                                                             & (0x13U 
                                                                == 
                                                                (0x13U 
                                                                 & (IData)(vlSelf->NPC__DOT__idu__DOT__AluSela_invInputs)))) 
                                                            & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h1cfc0c30__0))) 
                                                   | (IData)(
                                                             ((0x40005013U 
                                                               == 
                                                               (0x40005013U 
                                                                & vlSelf->NPC__DOT___ifu_inst)) 
                                                              & (0x5f53U 
                                                                 == 
                                                                 (0x5f53U 
                                                                  & (IData)(vlSelf->NPC__DOT__idu__DOT__AluSela_invInputs))))))) 
                                               << 1U)) 
                                        | (1U & ((IData)(
                                                         ((0x1013U 
                                                           == 
                                                           (0x1013U 
                                                            & vlSelf->NPC__DOT___ifu_inst)) 
                                                          & (0x7fd3U 
                                                             == 
                                                             (0x7fd3U 
                                                              & (IData)(vlSelf->NPC__DOT__idu__DOT__AluSela_invInputs))))) 
                                                 | (IData)(
                                                           (((0x33U 
                                                              == 
                                                              (0x33U 
                                                               & vlSelf->NPC__DOT___ifu_inst)) 
                                                             & (0x13U 
                                                                == 
                                                                (0x13U 
                                                                 & (IData)(vlSelf->NPC__DOT__idu__DOT__AluSela_invInputs)))) 
                                                            & ((((IData)(vlSelf->NPC__DOT__idu__DOT__AluSela_invInputs) 
                                                                 >> 5U) 
                                                                & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h96c0b08d__0)) 
                                                               | ((((IData)(vlSelf->NPC__DOT__idu__DOT__AluSela_invInputs) 
                                                                    >> 5U) 
                                                                   & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h9ecf676a__0)) 
                                                                  | ((IData)(
                                                                             ((0x3000U 
                                                                               == 
                                                                               (0x3000U 
                                                                                & vlSelf->NPC__DOT___ifu_inst)) 
                                                                              & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h45879115__0))) 
                                                                     | (IData)(
                                                                               ((0x5fe0U 
                                                                                == 
                                                                                (0x5fe0U 
                                                                                & (IData)(vlSelf->NPC__DOT__idu__DOT__AluSela_invInputs))) 
                                                                                & (vlSelf->NPC__DOT___ifu_inst 
                                                                                >> 0x1eU))))))))))))) 
                         | (((IData)((((3U == (3U & vlSelf->NPC__DOT___ifu_inst)) 
                                       & (0U == (3U 
                                                 & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN)))) 
                                      & (((~ ((IData)(vlSelf->NPC__DOT__idu__DOT___GEN) 
                                              >> 2U)) 
                                          & (IData)(
                                                    ((0x60U 
                                                      == 
                                                      (0x60U 
                                                       & vlSelf->NPC__DOT___ifu_inst)) 
                                                     & (~ 
                                                        ((IData)(vlSelf->NPC__DOT__idu__DOT___GEN) 
                                                         >> 6U))))) 
                                         | (((vlSelf->NPC__DOT___ifu_inst 
                                              >> 4U) 
                                             & (IData)(
                                                       ((0U 
                                                         == 
                                                         (0x18U 
                                                          & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN))) 
                                                        & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h70585f8a__0)))) 
                                            | ((~ ((IData)(vlSelf->NPC__DOT__idu__DOT___GEN) 
                                                   >> 2U)) 
                                               & (IData)(
                                                         (0x4060U 
                                                          == 
                                                          (0x4060U 
                                                           & vlSelf->NPC__DOT___ifu_inst)))))))) 
                             << 3U) | (((IData)((((3U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->NPC__DOT___ifu_inst)) 
                                                  & (0U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN)))) 
                                                 & (((~ 
                                                      ((IData)(vlSelf->NPC__DOT__idu__DOT___GEN) 
                                                       >> 2U)) 
                                                     & (IData)(
                                                               ((0x60U 
                                                                 == 
                                                                 (0x60U 
                                                                  & vlSelf->NPC__DOT___ifu_inst)) 
                                                                & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h69bb9be0__0)))) 
                                                    | ((IData)(
                                                               ((0x2070U 
                                                                 == 
                                                                 (0x2070U 
                                                                  & vlSelf->NPC__DOT___ifu_inst)) 
                                                                & (~ 
                                                                   ((IData)(vlSelf->NPC__DOT__idu__DOT___GEN) 
                                                                    >> 5U)))) 
                                                       | ((IData)(
                                                                  ((0x4010U 
                                                                    == 
                                                                    (0x4010U 
                                                                     & vlSelf->NPC__DOT___ifu_inst)) 
                                                                   & (0U 
                                                                      == 
                                                                      (0x38U 
                                                                       & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN))))) 
                                                          | ((~ 
                                                              ((IData)(vlSelf->NPC__DOT__idu__DOT___GEN) 
                                                               >> 2U)) 
                                                             & (IData)(
                                                                       ((0x60U 
                                                                         == 
                                                                         (0x60U 
                                                                          & vlSelf->NPC__DOT___ifu_inst)) 
                                                                        & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_ha09dbe48__0))))))))) 
                                        << 2U) | ((2U 
                                                   & (((IData)(
                                                               (((0x63U 
                                                                  == 
                                                                  (0x63U 
                                                                   & vlSelf->NPC__DOT___ifu_inst)) 
                                                                 & (0U 
                                                                    == 
                                                                    (7U 
                                                                     & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN)))) 
                                                                & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h795fdc33__0))) 
                                                       | ((IData)(
                                                                  (((0x13U 
                                                                     == 
                                                                     (0x13U 
                                                                      & vlSelf->NPC__DOT___ifu_inst)) 
                                                                    & (0U 
                                                                       == 
                                                                       (0x1bU 
                                                                        & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN)))) 
                                                                   & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h40c0d4db__0))) 
                                                          | ((IData)(
                                                                     ((0x3073U 
                                                                       == 
                                                                       (0x3073U 
                                                                        & vlSelf->NPC__DOT___ifu_inst)) 
                                                                      & (0U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN))))) 
                                                             | (IData)(
                                                                       (((0x63U 
                                                                          == 
                                                                          (0x63U 
                                                                           & vlSelf->NPC__DOT___ifu_inst)) 
                                                                         & (0U 
                                                                            == 
                                                                            (7U 
                                                                             & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN)))) 
                                                                        & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hc5ce86a9__0)))))) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & ((IData)(
                                                                (((0x63U 
                                                                   == 
                                                                   (0x63U 
                                                                    & vlSelf->NPC__DOT___ifu_inst)) 
                                                                  & (0U 
                                                                     == 
                                                                     (7U 
                                                                      & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN)))) 
                                                                 & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h6c886094__0))) 
                                                        | ((IData)(
                                                                   (((0x13U 
                                                                      == 
                                                                      (0x13U 
                                                                       & vlSelf->NPC__DOT___ifu_inst)) 
                                                                     & (0U 
                                                                        == 
                                                                        (0xbU 
                                                                         & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN)))) 
                                                                    & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h2376aa4a__0))) 
                                                           | ((IData)(
                                                                      ((0x3073U 
                                                                        == 
                                                                        (0x3073U 
                                                                         & vlSelf->NPC__DOT___ifu_inst)) 
                                                                       & (0U 
                                                                          == 
                                                                          (3U 
                                                                           & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN))))) 
                                                              | (vlSelf->NPC__DOT___ifu_inst 
                                                                 & ((vlSelf->NPC__DOT___ifu_inst 
                                                                     >> 1U) 
                                                                    & (IData)(
                                                                              ((0U 
                                                                                == 
                                                                                (3U 
                                                                                & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN))) 
                                                                               & (((vlSelf->NPC__DOT___ifu_inst 
                                                                                >> 4U) 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN))) 
                                                                                & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h62cc9b06__0)))) 
                                                                                | (((~ 
                                                                                ((IData)(vlSelf->NPC__DOT__idu__DOT___GEN) 
                                                                                >> 2U)) 
                                                                                & (IData)(
                                                                                ((0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSelf->NPC__DOT___ifu_inst)) 
                                                                                & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h62cc9b06__0)))) 
                                                                                | ((vlSelf->NPC__DOT___ifu_inst 
                                                                                >> 4U) 
                                                                                & (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x18U 
                                                                                & (IData)(vlSelf->NPC__DOT__idu__DOT___GEN))) 
                                                                                & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_ha09dbe48__0))))))))))))))))));
    vlSelf->io_Ref = vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory
        [vlSelf->io_rd];
    vlSelf->NPC__DOT___idu_io_imm = ((1U & (IData)(
                                                   ((0x1013U 
                                                     == 
                                                     (0x1013U 
                                                      & vlSelf->NPC__DOT___ifu_inst)) 
                                                    & (0x5bU 
                                                       == 
                                                       (0x5bU 
                                                        & (IData)(vlSelf->NPC__DOT__idu__DOT__immNum_invInputs))))))
                                      ? (((- (IData)(
                                                     (1U 
                                                      & (vlSelf->NPC__DOT__idu__DOT__casez_tmp 
                                                         >> 4U)))) 
                                          << 5U) | 
                                         (0x1fU & vlSelf->NPC__DOT__idu__DOT__casez_tmp))
                                      : vlSelf->NPC__DOT__idu__DOT__casez_tmp);
    vlSelf->NPC__DOT___idu_io_rs2 = ((IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h6dd14589__0)
                                      ? (0x1fU & (vlSelf->NPC__DOT___ifu_inst 
                                                  >> 0x14U))
                                      : 0U);
    vlSelf->NPC__DOT___idu_io_rs1 = (((0U == (IData)(vlSelf->io_instType)) 
                                      | (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h6dd14589__0))
                                      ? (0x1fU & (vlSelf->NPC__DOT___ifu_inst 
                                                  >> 0xfU))
                                      : 0U);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__cin = (IData)(
                                                        (0U 
                                                         != 
                                                         (9U 
                                                          & (IData)(vlSelf->io_AluSel))));
    vlSelf->io_src2 = ((0U == (IData)(vlSelf->NPC__DOT___idu_io_rs2))
                        ? 0U : vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory
                       [vlSelf->NPC__DOT___idu_io_rs2]);
    vlSelf->io_src1 = ((0U == (IData)(vlSelf->NPC__DOT___idu_io_rs1))
                        ? 0U : vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory
                       [vlSelf->NPC__DOT___idu_io_rs1]);
    vlSelf->NPC__DOT__exu__DOT__casez_tmp = ((4U & (IData)(vlSelf->io_AluMux))
                                              ? ((2U 
                                                  & (IData)(vlSelf->io_AluMux))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->io_AluMux))
                                                   ? vlSelf->io_src2
                                                   : vlSelf->NPC__DOT__wbu__DOT___Csr_ext_R2_data)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->io_AluMux))
                                                   ? vlSelf->NPC__DOT__wbu__DOT___Csr_ext_R2_data
                                                   : vlSelf->NPC__DOT___idu_io_imm))
                                              : ((2U 
                                                  & (IData)(vlSelf->io_AluMux))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->io_AluMux))
                                                   ? vlSelf->NPC__DOT___idu_io_imm
                                                   : 4U)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->io_AluMux))
                                                   ? vlSelf->NPC__DOT___idu_io_imm
                                                   : 0U)));
    vlSelf->io_ina = (((7U == (IData)(vlSelf->io_AluMux)) 
                       | (1U == (IData)(vlSelf->io_AluMux)))
                       ? vlSelf->io_src1 : ((2U == (IData)(vlSelf->io_AluMux))
                                             ? vlSelf->NPC__DOT__pc
                                             : ((3U 
                                                 == (IData)(vlSelf->io_AluMux))
                                                 ? 0U
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->io_AluMux))
                                                  ? vlSelf->NPC__DOT__pc
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelf->io_AluMux))
                                                   ? 
                                                  ((- (IData)((IData)(
                                                                      ((0x73U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->NPC__DOT___ifu_inst)) 
                                                                       & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h40c0d4db__0))))) 
                                                   ^ vlSelf->io_src1)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->io_AluMux))
                                                    ? 
                                                   ((- (IData)((IData)(
                                                                       ((0x73U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->NPC__DOT___ifu_inst)) 
                                                                        & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h40c0d4db__0))))) 
                                                    ^ 
                                                    (0x1fU 
                                                     & (vlSelf->NPC__DOT___ifu_inst 
                                                        >> 0xfU)))
                                                    : 0U))))));
    vlSelf->io_inb = vlSelf->NPC__DOT__exu__DOT__casez_tmp;
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4 
        = ((2U & ((IData)(vlSelf->io_AluSel) << 1U)) 
           | (1U & vlSelf->NPC__DOT__exu__DOT__casez_tmp));
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__AddSub__DOT__t_no_cin 
        = ((- (IData)((IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__cin))) 
           ^ vlSelf->NPC__DOT__exu__DOT__casez_tmp);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_3 
        = ((2U & ((IData)(vlSelf->io_AluSel) << 1U)) 
           | (1U & (vlSelf->NPC__DOT__exu__DOT__casez_tmp 
                    >> 1U)));
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_2 
        = ((2U & ((IData)(vlSelf->io_AluSel) << 1U)) 
           | (1U & (vlSelf->NPC__DOT__exu__DOT__casez_tmp 
                    >> 2U)));
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_1 
        = ((2U & ((IData)(vlSelf->io_AluSel) << 1U)) 
           | (1U & (vlSelf->NPC__DOT__exu__DOT__casez_tmp 
                    >> 3U)));
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel 
        = ((2U & ((IData)(vlSelf->io_AluSel) << 1U)) 
           | (1U & (vlSelf->NPC__DOT__exu__DOT__casez_tmp 
                    >> 4U)));
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn 
        = (IData)((((IData)(vlSelf->io_AluSel) >> 1U) 
                   & (vlSelf->io_ina >> 0x1fU)));
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__AddSub__DOT___sum_T_1 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->io_ina)) 
                             + ((QData)((IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__AddSub__DOT__t_no_cin)) 
                                + (QData)((IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__cin)))));
    if ((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel))) {
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp 
            = (1U & vlSelf->io_ina);
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_1 
            = (1U & (vlSelf->io_ina >> 1U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_3 
            = (1U & (vlSelf->io_ina >> 2U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_5 
            = (1U & (vlSelf->io_ina >> 3U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_7 
            = (1U & (vlSelf->io_ina >> 4U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_9 
            = (1U & (vlSelf->io_ina >> 5U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_11 
            = (1U & (vlSelf->io_ina >> 6U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_13 
            = (1U & (vlSelf->io_ina >> 7U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_0 
            = (1U & (vlSelf->io_ina >> 8U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_2 
            = (1U & (vlSelf->io_ina >> 9U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_4 
            = (1U & (vlSelf->io_ina >> 0xaU));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_6 
            = (1U & (vlSelf->io_ina >> 0xbU));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_8 
            = (1U & (vlSelf->io_ina >> 0xcU));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_10 
            = (1U & (vlSelf->io_ina >> 0xdU));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_12 
            = (1U & (vlSelf->io_ina >> 0xeU));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_14 
            = (1U & (vlSelf->io_ina >> 0xfU));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_29 
            = (1U & (vlSelf->io_ina >> 0x1eU));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_30 
            = (1U & (vlSelf->io_ina >> 0x1fU));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_27 
            = (1U & (vlSelf->io_ina >> 0x1cU));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_28 
            = (1U & (vlSelf->io_ina >> 0x1dU));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_25 
            = (1U & (vlSelf->io_ina >> 0x1aU));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_26 
            = (1U & (vlSelf->io_ina >> 0x1bU));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_23 
            = (1U & (vlSelf->io_ina >> 0x18U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_24 
            = (1U & (vlSelf->io_ina >> 0x19U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_21 
            = (1U & (vlSelf->io_ina >> 0x16U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_22 
            = (1U & (vlSelf->io_ina >> 0x17U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_19 
            = (1U & (vlSelf->io_ina >> 0x14U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_20 
            = (1U & (vlSelf->io_ina >> 0x15U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_17 
            = (1U & (vlSelf->io_ina >> 0x12U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_18 
            = (1U & (vlSelf->io_ina >> 0x13U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_15 
            = (1U & (vlSelf->io_ina >> 0x10U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_16 
            = (1U & (vlSelf->io_ina >> 0x11U));
    } else if ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel))) {
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp 
            = (1U & (vlSelf->io_ina >> 0x10U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_1 
            = (1U & (vlSelf->io_ina >> 0x11U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_3 
            = (1U & (vlSelf->io_ina >> 0x12U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_5 
            = (1U & (vlSelf->io_ina >> 0x13U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_7 
            = (1U & (vlSelf->io_ina >> 0x14U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_9 
            = (1U & (vlSelf->io_ina >> 0x15U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_11 
            = (1U & (vlSelf->io_ina >> 0x16U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_13 
            = (1U & (vlSelf->io_ina >> 0x17U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_0 
            = (1U & (vlSelf->io_ina >> 0x18U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_2 
            = (1U & (vlSelf->io_ina >> 0x19U));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_4 
            = (1U & (vlSelf->io_ina >> 0x1aU));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_6 
            = (1U & (vlSelf->io_ina >> 0x1bU));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_8 
            = (1U & (vlSelf->io_ina >> 0x1cU));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_10 
            = (1U & (vlSelf->io_ina >> 0x1dU));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_12 
            = (1U & (vlSelf->io_ina >> 0x1eU));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_14 
            = (1U & (vlSelf->io_ina >> 0x1fU));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_29 
            = (1U & (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_30 
            = (1U & (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_27 
            = (1U & (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_28 
            = (1U & (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_25 
            = (1U & (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_26 
            = (1U & (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_23 
            = (1U & (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_24 
            = (1U & (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_21 
            = (1U & (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_22 
            = (1U & (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_19 
            = (1U & (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_20 
            = (1U & (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_17 
            = (1U & (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_18 
            = (1U & (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_15 
            = (1U & (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_16 
            = (1U & (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn));
    } else {
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp 
            = (1U & ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel)) 
                     & vlSelf->io_ina));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_1 
            = (1U & ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 1U)));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_3 
            = (1U & ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 2U)));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_5 
            = (1U & ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 3U)));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_7 
            = (1U & ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 4U)));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_9 
            = (1U & ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 5U)));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_11 
            = (1U & ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 6U)));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_13 
            = (1U & ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 7U)));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_0 
            = (1U & ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 8U)));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_2 
            = (1U & ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 9U)));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_4 
            = (1U & ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 0xaU)));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_6 
            = (1U & ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 0xbU)));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_8 
            = (1U & ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 0xcU)));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_10 
            = (1U & ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 0xdU)));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_12 
            = (1U & ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 0xeU)));
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_14 
            = (1U & ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 0xfU)));
        if ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel))) {
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_29 
                = (1U & (vlSelf->io_ina >> 0x1eU));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_30 
                = (1U & (vlSelf->io_ina >> 0x1fU));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_27 
                = (1U & (vlSelf->io_ina >> 0x1cU));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_28 
                = (1U & (vlSelf->io_ina >> 0x1dU));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_25 
                = (1U & (vlSelf->io_ina >> 0x1aU));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_26 
                = (1U & (vlSelf->io_ina >> 0x1bU));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_23 
                = (1U & (vlSelf->io_ina >> 0x18U));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_24 
                = (1U & (vlSelf->io_ina >> 0x19U));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_21 
                = (1U & (vlSelf->io_ina >> 0x16U));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_22 
                = (1U & (vlSelf->io_ina >> 0x17U));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_19 
                = (1U & (vlSelf->io_ina >> 0x14U));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_20 
                = (1U & (vlSelf->io_ina >> 0x15U));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_17 
                = (1U & (vlSelf->io_ina >> 0x12U));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_18 
                = (1U & (vlSelf->io_ina >> 0x13U));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_15 
                = (1U & (vlSelf->io_ina >> 0x10U));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_16 
                = (1U & (vlSelf->io_ina >> 0x11U));
        } else {
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_29 
                = (1U & (vlSelf->io_ina >> 0xeU));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_30 
                = (1U & (vlSelf->io_ina >> 0xfU));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_27 
                = (1U & (vlSelf->io_ina >> 0xcU));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_28 
                = (1U & (vlSelf->io_ina >> 0xdU));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_25 
                = (1U & (vlSelf->io_ina >> 0xaU));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_26 
                = (1U & (vlSelf->io_ina >> 0xbU));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_23 
                = (1U & (vlSelf->io_ina >> 8U));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_24 
                = (1U & (vlSelf->io_ina >> 9U));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_21 
                = (1U & (vlSelf->io_ina >> 6U));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_22 
                = (1U & (vlSelf->io_ina >> 7U));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_19 
                = (1U & (vlSelf->io_ina >> 4U));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_20 
                = (1U & (vlSelf->io_ina >> 5U));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_17 
                = (1U & (vlSelf->io_ina >> 2U));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_18 
                = (1U & (vlSelf->io_ina >> 3U));
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_15 
                = (1U & vlSelf->io_ina);
            vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_16 
                = (1U & (vlSelf->io_ina >> 1U));
        }
    }
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT___out13_T_1 
        = ((IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__cin) 
           ^ (vlSelf->NPC__DOT__exu__DOT__Alu__DOT__AddSub__DOT___sum_T_1 
              >> 0x20U));
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT___AddSub_io_overflow 
        = (((vlSelf->io_ina >> 0x1fU) == (vlSelf->NPC__DOT__exu__DOT__Alu__DOT__AddSub__DOT__t_no_cin 
                                          >> 0x1fU)) 
           & ((1U & (IData)((vlSelf->NPC__DOT__exu__DOT__Alu__DOT__AddSub__DOT___sum_T_1 
                             >> 0x1fU))) != (vlSelf->io_ina 
                                             >> 0x1fU)));
    if ((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_1))) {
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_31 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_33 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_1;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_35 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_3;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_37 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_5;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_32 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_7;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_34 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_9;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_36 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_11;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_38 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_13;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_61 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_29;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_45 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_12;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_53 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_21;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_62 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_30;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_46 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_14;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_54 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_22;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_59 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_27;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_43 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_8;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_51 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_19;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_60 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_28;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_44 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_10;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_52 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_20;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_57 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_25;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_41 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_4;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_49 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_17;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_58 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_26;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_42 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_6;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_50 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_18;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_39 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_0;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_47 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_15;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_55 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_23;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_40 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_2;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_48 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_16;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_56 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_24;
    } else if ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_1))) {
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_31 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_0;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_33 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_2;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_35 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_4;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_37 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_6;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_32 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_8;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_34 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_10;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_36 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_12;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_38 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_14;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_61 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_45 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_21;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_53 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_29;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_62 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_46 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_22;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_54 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_30;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_59 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_43 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_19;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_51 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_27;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_60 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_44 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_20;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_52 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_28;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_57 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_41 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_17;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_49 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_25;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_58 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_42 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_18;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_50 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_26;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_39 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_15;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_47 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_23;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_55 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_40 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_16;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_48 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_24;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_56 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn;
    } else if ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_1))) {
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_31 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_33 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_1;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_35 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_3;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_37 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_5;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_32 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_7;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_34 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_9;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_36 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_11;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_38 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_13;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_61 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_29;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_45 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_12;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_53 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_21;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_62 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_30;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_46 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_14;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_54 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_22;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_59 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_27;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_43 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_8;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_51 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_19;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_60 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_28;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_44 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_10;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_52 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_20;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_57 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_25;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_41 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_4;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_49 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_17;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_58 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_26;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_42 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_6;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_50 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_18;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_39 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_0;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_47 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_15;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_55 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_23;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_40 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_2;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_48 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_16;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_56 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_24;
    } else {
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_31 = 0U;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_33 = 0U;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_35 = 0U;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_37 = 0U;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_32 = 0U;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_34 = 0U;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_36 = 0U;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_38 = 0U;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_61 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_21;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_45 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_11;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_53 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_12;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_62 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_22;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_46 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_13;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_54 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_14;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_59 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_19;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_43 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_7;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_51 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_8;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_60 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_20;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_44 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_9;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_52 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_10;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_57 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_17;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_41 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_3;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_49 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_4;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_58 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_18;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_42 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_5;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_50 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_6;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_39 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_47 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_0;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_55 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_15;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_40 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_1;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_48 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_2;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_56 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_16;
    }
    if ((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_2))) {
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_63 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_31;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_65 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_33;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_64 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_35;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_66 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_37;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_93 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_61;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_89 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_57;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_69 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_36;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_73 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_41;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_77 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_45;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_81 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_49;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_85 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_53;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_94 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_62;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_90 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_58;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_70 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_38;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_74 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_42;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_78 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_46;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_82 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_50;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_86 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_54;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_67 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_32;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_71 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_39;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_75 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_43;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_79 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_47;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_83 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_51;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_87 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_55;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_91 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_59;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_68 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_34;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_72 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_40;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_76 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_44;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_80 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_48;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_84 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_52;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_88 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_56;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_92 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_60;
    } else if ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_2))) {
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_63 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_32;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_65 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_34;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_64 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_36;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_66 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_38;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_93 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_89 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_61;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_69 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_41;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_73 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_45;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_77 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_49;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_81 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_53;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_85 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_57;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_94 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_90 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_62;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_70 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_42;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_74 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_46;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_78 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_50;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_82 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_54;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_86 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_58;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_67 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_39;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_71 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_43;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_75 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_47;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_79 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_51;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_83 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_55;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_87 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_59;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_91 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_68 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_40;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_72 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_44;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_76 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_48;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_80 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_52;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_84 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_56;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_88 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_60;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_92 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn;
    } else if ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_2))) {
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_63 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_31;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_65 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_33;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_64 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_35;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_66 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_37;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_93 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_61;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_89 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_57;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_69 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_36;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_73 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_41;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_77 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_45;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_81 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_49;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_85 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_53;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_94 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_62;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_90 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_58;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_70 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_38;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_74 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_42;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_78 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_46;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_82 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_50;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_86 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_54;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_67 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_32;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_71 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_39;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_75 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_43;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_79 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_47;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_83 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_51;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_87 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_55;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_91 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_59;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_68 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_34;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_72 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_40;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_76 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_44;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_80 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_48;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_84 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_52;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_88 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_56;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_92 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_60;
    } else {
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_63 = 0U;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_65 = 0U;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_64 = 0U;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_66 = 0U;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_93 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_57;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_89 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_53;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_69 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_35;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_73 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_36;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_77 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_41;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_81 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_45;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_85 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_49;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_94 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_58;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_90 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_54;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_70 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_37;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_74 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_38;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_78 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_42;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_82 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_46;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_86 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_50;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_67 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_31;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_71 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_32;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_75 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_39;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_79 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_43;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_83 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_47;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_87 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_51;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_91 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_55;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_68 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_33;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_72 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_34;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_76 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_40;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_80 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_44;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_84 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_48;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_88 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_52;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_92 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_56;
    }
    if ((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_3))) {
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_95 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_63;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_96 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_65;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_97 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_64;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_99 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_67;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_101 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_69;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_103 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_71;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_105 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_73;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_107 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_75;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_109 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_77;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_111 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_79;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_113 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_81;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_115 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_83;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_117 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_85;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_119 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_87;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_121 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_89;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_123 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_91;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_93;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_98 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_66;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_100 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_68;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_102 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_70;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_104 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_72;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_106 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_74;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_108 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_76;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_110 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_78;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_112 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_80;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_114 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_82;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_116 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_84;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_118 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_86;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_120 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_88;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_122 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_90;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_124 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_92;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_126 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_94;
    } else if ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_3))) {
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_95 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_64;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_96 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_66;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_97 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_67;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_99 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_69;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_101 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_71;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_103 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_73;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_105 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_75;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_107 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_77;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_109 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_79;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_111 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_81;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_113 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_83;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_115 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_85;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_117 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_87;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_119 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_89;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_121 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_91;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_123 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_93;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_98 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_68;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_100 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_70;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_102 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_72;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_104 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_74;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_106 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_76;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_108 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_78;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_110 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_80;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_112 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_82;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_114 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_84;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_116 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_86;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_118 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_88;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_120 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_90;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_122 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_92;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_124 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_94;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_126 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn;
    } else if ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_3))) {
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_95 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_63;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_96 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_65;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_97 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_64;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_99 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_67;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_101 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_69;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_103 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_71;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_105 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_73;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_107 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_75;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_109 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_77;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_111 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_79;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_113 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_81;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_115 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_83;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_117 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_85;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_119 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_87;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_121 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_89;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_123 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_91;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_93;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_98 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_66;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_100 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_68;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_102 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_70;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_104 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_72;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_106 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_74;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_108 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_76;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_110 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_78;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_112 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_80;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_114 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_82;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_116 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_84;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_118 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_86;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_120 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_88;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_122 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_90;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_124 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_92;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_126 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_94;
    } else {
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_95 = 0U;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_96 = 0U;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_97 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_63;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_99 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_64;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_101 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_67;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_103 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_69;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_105 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_71;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_107 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_73;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_109 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_75;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_111 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_77;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_113 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_79;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_115 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_81;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_117 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_83;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_119 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_85;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_121 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_87;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_123 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_89;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_91;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_98 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_65;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_100 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_66;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_102 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_68;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_104 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_70;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_106 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_72;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_108 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_74;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_110 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_76;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_112 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_78;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_114 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_80;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_116 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_82;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_118 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_84;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_120 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_86;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_122 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_88;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_124 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_90;
        vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_126 
            = vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_92;
    }
    vlSelf->io_result = (((0U == (IData)(vlSelf->io_AluSel)) 
                          | (1U == (IData)(vlSelf->io_AluSel)))
                          ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__AddSub__DOT___sum_T_1)
                          : ((2U == (IData)(vlSelf->io_AluSel))
                              ? (~ vlSelf->io_ina) : 
                             ((3U == (IData)(vlSelf->io_AluSel))
                               ? (vlSelf->io_ina & vlSelf->NPC__DOT__exu__DOT__casez_tmp)
                               : ((4U == (IData)(vlSelf->io_AluSel))
                                   ? (vlSelf->io_ina 
                                      | vlSelf->NPC__DOT__exu__DOT__casez_tmp)
                                   : ((5U == (IData)(vlSelf->io_AluSel))
                                       ? (vlSelf->io_ina 
                                          ^ vlSelf->NPC__DOT__exu__DOT__casez_tmp)
                                       : (((6U == (IData)(vlSelf->io_AluSel)) 
                                           | ((7U == (IData)(vlSelf->io_AluSel)) 
                                              | (8U 
                                                 == (IData)(vlSelf->io_AluSel))))
                                           ? ((((0U 
                                                 == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_126)
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn)
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                   ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_126)
                                                   : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125)))) 
                                               << 0x1fU) 
                                              | ((((0U 
                                                    == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                    ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_126)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125)
                                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_124)))) 
                                                  << 0x1eU) 
                                                 | ((((0U 
                                                       == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                       ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_124)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                        ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125)
                                                        : 
                                                       ((2U 
                                                         == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_124)
                                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_123)))) 
                                                     << 0x1dU) 
                                                    | ((((0U 
                                                          == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                          ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_123)
                                                          : 
                                                         ((1U 
                                                           == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                           ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_124)
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                            ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_123)
                                                            : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_122)))) 
                                                        << 0x1cU) 
                                                       | ((((0U 
                                                             == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                             ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_122)
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_123)
                                                              : 
                                                             ((2U 
                                                               == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                               ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_122)
                                                               : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_121)))) 
                                                           << 0x1bU) 
                                                          | ((((0U 
                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_121)
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_122)
                                                                 : 
                                                                ((2U 
                                                                  == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_121)
                                                                  : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_120)))) 
                                                              << 0x1aU) 
                                                             | ((((0U 
                                                                   == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                   ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_120)
                                                                   : 
                                                                  ((1U 
                                                                    == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                    ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_121)
                                                                    : 
                                                                   ((2U 
                                                                     == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_120)
                                                                     : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_119)))) 
                                                                 << 0x19U) 
                                                                | ((((0U 
                                                                      == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_119)
                                                                      : 
                                                                     ((1U 
                                                                       == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                       ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_120)
                                                                       : 
                                                                      ((2U 
                                                                        == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                        ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_119)
                                                                        : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_118)))) 
                                                                    << 0x18U) 
                                                                   | ((((0U 
                                                                         == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_118)
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                          ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_119)
                                                                          : 
                                                                         ((2U 
                                                                           == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                           ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_118)
                                                                           : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_117)))) 
                                                                       << 0x17U) 
                                                                      | ((((0U 
                                                                            == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                            ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_117)
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                             ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_118)
                                                                             : 
                                                                            ((2U 
                                                                              == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_117)
                                                                              : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_116)))) 
                                                                          << 0x16U) 
                                                                         | ((((0U 
                                                                               == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                               ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_116)
                                                                               : 
                                                                              ((1U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_117)
                                                                                : 
                                                                               ((2U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_116)
                                                                                 : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_115)))) 
                                                                             << 0x15U) 
                                                                            | ((((0U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_115)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_116)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_115)
                                                                                 : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_114)))) 
                                                                                << 0x14U) 
                                                                               | ((((0U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_114)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_115)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_114)
                                                                                 : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_113)))) 
                                                                                << 0x13U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_113)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_114)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_113)
                                                                                 : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_112)))) 
                                                                                << 0x12U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_112)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_113)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_112)
                                                                                 : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_111)))) 
                                                                                << 0x11U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_111)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_112)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_111)
                                                                                 : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_110)))) 
                                                                                << 0x10U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_110)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_111)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_110)
                                                                                 : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_109)))) 
                                                                                << 0xfU) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_109)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_110)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_109)
                                                                                 : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_108)))) 
                                                                                << 0xeU) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_108)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_109)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_108)
                                                                                 : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_107)))) 
                                                                                << 0xdU) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_107)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_108)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_107)
                                                                                 : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_106)))) 
                                                                                << 0xcU) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_106)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_107)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_106)
                                                                                 : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_105)))) 
                                                                                << 0xbU) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_105)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_106)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_105)
                                                                                 : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_104)))) 
                                                                                << 0xaU) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_104)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_105)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_104)
                                                                                 : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_103)))) 
                                                                                << 9U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_103)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_104)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_103)
                                                                                 : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_102)))) 
                                                                                << 8U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_102)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_103)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_102)
                                                                                 : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_101)))) 
                                                                                << 7U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_101)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_102)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_101)
                                                                                 : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_100)))) 
                                                                                << 6U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_100)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_101)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_100)
                                                                                 : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_99)))) 
                                                                                << 5U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_99)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_100)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_99)
                                                                                 : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_98)))) 
                                                                                << 4U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_98)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_99)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_98)
                                                                                 : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_97)))) 
                                                                                << 3U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_97)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_98)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_97)
                                                                                 : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_96)))) 
                                                                                << 2U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_96)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_97)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_96)
                                                                                 : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_95)))) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_95)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_96)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4)) 
                                                                                & (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_95)))))))))))))))))))))))))))))))))))
                                           : (1U & 
                                              ((9U 
                                                == (IData)(vlSelf->io_AluSel))
                                                ? ((IData)(
                                                           (vlSelf->NPC__DOT__exu__DOT__Alu__DOT__AddSub__DOT___sum_T_1 
                                                            >> 0x1fU)) 
                                                   ^ (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT___AddSub_io_overflow))
                                                : (
                                                   (0xaU 
                                                    == (IData)(vlSelf->io_AluSel))
                                                    ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT___out13_T_1)
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->io_AluSel))
                                                     ? 
                                                    (((~ (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT___AddSub_io_overflow)) 
                                                      ^ (IData)(
                                                                (vlSelf->NPC__DOT__exu__DOT__Alu__DOT__AddSub__DOT___sum_T_1 
                                                                 >> 0x1fU))) 
                                                     | (0U 
                                                        == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__AddSub__DOT___sum_T_1)))
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->io_AluSel))
                                                      ? 
                                                     (~ (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT___out13_T_1))
                                                      : 
                                                     ((0U 
                                                       == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__AddSub__DOT___sum_T_1)) 
                                                      ^ 
                                                      (0xdU 
                                                       != (IData)(vlSelf->io_AluSel))))))))))))));
    vlSelf->io_RegData = ((IData)(vlSelf->io_MemtoReg)
                           ? vlSelf->io_DataOut : vlSelf->io_result);
    vlSelf->NPC__DOT__exu__DOT__PCMux = (((IData)(vlSelf->NPC__DOT___idu_io_Branch) 
                                          << 3U) | 
                                         ((4U & (vlSelf->io_result 
                                                 << 2U)) 
                                          | (((IData)(
                                                      ((7U 
                                                        == 
                                                        (7U 
                                                         & vlSelf->NPC__DOT___ifu_inst)) 
                                                       & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hcfa7c5ac__0))) 
                                              << 1U) 
                                             | ((IData)(vlSelf->NPC__DOT___idu_io_Branch) 
                                                | (IData)(
                                                          ((0xfU 
                                                            == 
                                                            (0xfU 
                                                             & vlSelf->NPC__DOT___ifu_inst)) 
                                                           & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h03617c08__0)))))));
    vlSelf->NPC__DOT__exu__DOT____VdfgTmp_h64552ae9__0 
        = ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__PCMux)) 
           | (6U == (IData)(vlSelf->NPC__DOT__exu__DOT__PCMux)));
    vlSelf->NPC__DOT___exu_io_dnpc = ((1U & ((0x100073U 
                                              == vlSelf->NPC__DOT___ifu_inst) 
                                             | ((~ (IData)(vlSelf->io_MemtoReg)) 
                                                ^ (IData)(vlSelf->NPC__DOT___wbu_io_vaild))))
                                       ? vlSelf->NPC__DOT__pc
                                       : ((IData)(vlSelf->NPC__DOT___idu_io_ecall)
                                           ? vlSelf->NPC__DOT__wbu__DOT__Csr_ext__DOT__Memory
                                          [0x305U] : 
                                          ((IData)(vlSelf->NPC__DOT___idu_io_mret)
                                            ? vlSelf->NPC__DOT__wbu__DOT__Csr_ext__DOT__Memory
                                           [0x341U]
                                            : (((IData)(vlSelf->NPC__DOT__exu__DOT____VdfgTmp_h64552ae9__0)
                                                 ? vlSelf->io_src1
                                                 : vlSelf->NPC__DOT__pc) 
                                               + (((IData)(vlSelf->NPC__DOT__exu__DOT____VdfgTmp_h64552ae9__0) 
                                                   | ((1U 
                                                       == (IData)(vlSelf->NPC__DOT__exu__DOT__PCMux)) 
                                                      | ((5U 
                                                          == (IData)(vlSelf->NPC__DOT__exu__DOT__PCMux)) 
                                                         | (0xdU 
                                                            == (IData)(vlSelf->NPC__DOT__exu__DOT__PCMux)))))
                                                   ? vlSelf->NPC__DOT___idu_io_imm
                                                   : 4U)))));
    vlSelf->io_NPC = ((IData)(vlSelf->io_reset) ? 0x80000000U
                       : vlSelf->NPC__DOT___exu_io_dnpc);
}

VL_ATTR_COLD void VNPC___024root___eval_stl(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VNPC___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VNPC___024root___dump_triggers__ico(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VNPC___024root___dump_triggers__act(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VNPC___024root___dump_triggers__nba(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VNPC___024root___ctor_var_reset(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_reset = VL_RAND_RESET_I(1);
    vlSelf->io_rd = VL_RAND_RESET_I(5);
    vlSelf->io_src1 = VL_RAND_RESET_I(32);
    vlSelf->io_src2 = VL_RAND_RESET_I(32);
    vlSelf->io_halt_ret = VL_RAND_RESET_I(32);
    vlSelf->io_PC = VL_RAND_RESET_I(32);
    vlSelf->io_NPC = VL_RAND_RESET_I(32);
    vlSelf->io_halt = VL_RAND_RESET_I(32);
    vlSelf->io_Ref = VL_RAND_RESET_I(32);
    vlSelf->io_instType = VL_RAND_RESET_I(3);
    vlSelf->io_result = VL_RAND_RESET_I(32);
    vlSelf->io_ina = VL_RAND_RESET_I(32);
    vlSelf->io_inb = VL_RAND_RESET_I(32);
    vlSelf->io_inst = VL_RAND_RESET_I(32);
    vlSelf->io_DataOut = VL_RAND_RESET_I(32);
    vlSelf->io_mDataOut = VL_RAND_RESET_I(32);
    vlSelf->io_RegData = VL_RAND_RESET_I(32);
    vlSelf->io_AluMux = VL_RAND_RESET_I(3);
    vlSelf->io_AluSel = VL_RAND_RESET_I(4);
    vlSelf->io_MemNum = VL_RAND_RESET_I(2);
    vlSelf->io_RegWr = VL_RAND_RESET_I(1);
    vlSelf->io_MemWr = VL_RAND_RESET_I(1);
    vlSelf->io_vaild = VL_RAND_RESET_I(1);
    vlSelf->io_stop = VL_RAND_RESET_I(1);
    vlSelf->io_MemtoReg = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___wbu_io_vaild = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___exu_io_dnpc = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT___idu_io_rs1 = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT___idu_io_rs2 = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT___idu_io_imm = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT___idu_io_RegNum = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT___idu_io_CsrWr = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___idu_io_Branch = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___idu_io_halt = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___idu_io_mret = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___idu_io_ecall = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___ifu_inst = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__stop = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__idu__DOT__immNum_invInputs = VL_RAND_RESET_I(7);
    vlSelf->NPC__DOT__idu__DOT___instType_andMatrixOutputs_T_2 = VL_RAND_RESET_I(6);
    vlSelf->NPC__DOT__idu__DOT___instType_andMatrixOutputs_T_3 = VL_RAND_RESET_I(7);
    vlSelf->NPC__DOT__idu__DOT___instType_andMatrixOutputs_T_6 = VL_RAND_RESET_I(6);
    vlSelf->NPC__DOT__idu__DOT___instType_andMatrixOutputs_T_8 = VL_RAND_RESET_I(6);
    vlSelf->NPC__DOT__idu__DOT___GEN = VL_RAND_RESET_I(8);
    vlSelf->NPC__DOT__idu__DOT__AluSela_invInputs = VL_RAND_RESET_I(15);
    vlSelf->NPC__DOT__idu__DOT__casez_tmp = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h6dd14589__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hcfa7c5ac__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h03617c08__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h14776bc0__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h0855c605__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hcfa7dcbc__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h33c2d558__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h52335523__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h1038d363__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h0f7b3c5e__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h7fc75f50__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h70585f8a__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h859083b2__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h96c0b08d__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h9ecf676a__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h45879115__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h1cfc0c30__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h69bb9be0__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_ha09dbe48__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h795fdc33__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h40c0d4db__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hc5ce86a9__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h6c886094__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h2376aa4a__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h62cc9b06__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hd8e30b4d__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hd7d880ef__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hdf4b4597__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hd4808a30__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h171c6c87__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h0993e147__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h049281d3__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h036178c4__0 = 0;
    vlSelf->NPC__DOT__exu__DOT__casez_tmp = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__exu__DOT__PCMux = VL_RAND_RESET_I(4);
    vlSelf->NPC__DOT__exu__DOT____VdfgTmp_h64552ae9__0 = 0;
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT___AddSub_io_overflow = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__cin = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT___out13_T_1 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__AddSub__DOT__t_no_cin = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__AddSub__DOT___sum_T_1 = VL_RAND_RESET_Q(33);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_1 = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_0 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_1 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_2 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_3 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_4 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_5 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_6 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_7 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_8 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_9 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_10 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_11 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_12 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_13 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_14 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_15 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_16 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_17 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_18 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_19 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_20 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_21 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_22 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_23 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_24 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_25 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_26 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_27 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_28 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_29 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_30 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_2 = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_31 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_32 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_33 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_34 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_35 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_36 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_37 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_38 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_39 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_40 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_41 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_42 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_43 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_44 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_45 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_46 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_47 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_48 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_49 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_50 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_51 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_52 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_53 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_54 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_55 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_56 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_57 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_58 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_59 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_60 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_61 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_62 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_3 = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_63 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_64 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_65 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_66 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_67 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_68 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_69 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_70 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_71 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_72 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_73 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_74 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_75 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_76 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_77 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_78 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_79 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_80 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_81 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_82 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_83 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_84 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_85 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_86 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_87 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_88 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_89 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_90 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_91 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_92 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_93 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_94 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4 = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_95 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_96 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_97 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_98 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_99 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_100 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_101 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_102 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_103 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_104 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_105 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_106 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_107 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_108 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_109 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_110 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_111 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_112 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_113 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_114 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_115 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_116 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_117 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_118 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_119 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_120 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_121 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_122 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_123 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_124 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_126 = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__wbu__DOT___lsu_DataOut = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__wbu__DOT___Csr_ext_R2_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__wbu__DOT____Vcellinp__Csr_ext__W2_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->NPC__DOT__wbu__DOT__Csr_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

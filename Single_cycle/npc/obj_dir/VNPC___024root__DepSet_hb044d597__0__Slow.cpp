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
                VL_FATAL_MT("/home/romeo/ysyx-workbench/npc/build/NPC.sv", 3431, "", "Settle region did not converge.");
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

VL_ATTR_COLD void VNPC___024root___stl_sequent__TOP__0(VNPC___024root* vlSelf);

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
    vlSelf->io_instType = VL_RAND_RESET_I(3);
    vlSelf->io_result = VL_RAND_RESET_I(32);
    vlSelf->io_ina = VL_RAND_RESET_I(32);
    vlSelf->io_inb = VL_RAND_RESET_I(32);
    vlSelf->io_inst = VL_RAND_RESET_I(32);
    vlSelf->io_DataOut = VL_RAND_RESET_I(32);
    vlSelf->io_AluMux = VL_RAND_RESET_I(3);
    vlSelf->io_AluSel = VL_RAND_RESET_I(4);
    vlSelf->io_PCMux = VL_RAND_RESET_I(4);
    vlSelf->io_MemNum = VL_RAND_RESET_I(2);
    vlSelf->io_RegWr = VL_RAND_RESET_I(1);
    vlSelf->io_MemWr = VL_RAND_RESET_I(1);
    vlSelf->io_stop = VL_RAND_RESET_I(1);
    vlSelf->io_MemtoReg = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___idu_io_imm = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT___idu_io_RegNum = VL_RAND_RESET_I(3);
    vlSelf->NPC__DOT___idu_io_Branch = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___idu_io_halt = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___idu_io_mret = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT___ifu_inst = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__stop = VL_RAND_RESET_I(1);
    vlSelf->NPC__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT___DpiEbreak_io_isbreak_T = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__idu__DOT___Csr_ext_R2_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__idu__DOT__immNum_invInputs = VL_RAND_RESET_I(7);
    vlSelf->NPC__DOT__idu__DOT___instType_andMatrixOutputs_T_2 = VL_RAND_RESET_I(6);
    vlSelf->NPC__DOT__idu__DOT___instType_andMatrixOutputs_T_3 = VL_RAND_RESET_I(7);
    vlSelf->NPC__DOT__idu__DOT___instType_andMatrixOutputs_T_6 = VL_RAND_RESET_I(6);
    vlSelf->NPC__DOT__idu__DOT___instType_andMatrixOutputs_T_8 = VL_RAND_RESET_I(6);
    vlSelf->NPC__DOT__idu__DOT___io_ecall_andMatrixOutputs_T = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__idu__DOT___io_CsrWr_orMatrixOutputs_T = VL_RAND_RESET_I(2);
    vlSelf->NPC__DOT__idu__DOT___GEN = VL_RAND_RESET_I(8);
    vlSelf->NPC__DOT__idu__DOT__AluSela_invInputs = VL_RAND_RESET_I(15);
    vlSelf->NPC__DOT__idu__DOT__casez_tmp = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__idu__DOT__io_rs1 = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT__idu__DOT__io_rs2 = VL_RAND_RESET_I(5);
    vlSelf->NPC__DOT__idu__DOT____Vcellinp__Ref_ext__W0_data = VL_RAND_RESET_I(32);
    vlSelf->NPC__DOT__idu__DOT____Vcellinp__Csr_ext__W2_data = VL_RAND_RESET_I(32);
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
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h171c6c87__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h17a37d60__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h0993e147__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hdf4b4597__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h6dd14589__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h049281d3__0 = 0;
    vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h036178c4__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->NPC__DOT__idu__DOT__Csr_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->NPC__DOT__exu__DOT__casez_tmp = VL_RAND_RESET_I(32);
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
    vlSelf->__Vfunc_pmem_read__1__Vfuncout = 0;
    vlSelf->__Vtrigrprev__TOP__clock = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

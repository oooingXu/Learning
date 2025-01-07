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

VL_ATTR_COLD void Vysyx_23060336___024root___eval_initial__TOP(Vysyx_23060336___024root* vlSelf);

VL_ATTR_COLD void Vysyx_23060336___024root___eval_initial(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___eval_initial\n"); );
    // Body
    Vysyx_23060336___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void Vysyx_23060336___024root___eval_initial__TOP(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->io_iduvalid = 1U;
    vlSelf->io_iduready = 1U;
    vlSelf->io_exuvalid = 1U;
    vlSelf->io_exuready = 1U;
    vlSelf->io_wbuvalid = 1U;
    vlSelf->io_wbuready = 1U;
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
                VL_FATAL_MT("/home/romeo/ysyx-workbench/npc/vsrc/ysyx_23060336.sv", 3841, "", "Settle region did not converge.");
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
    // Body
    vlSelf->io_halt_ret = vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory
        [0xaU];
    vlSelf->io_PC = vlSelf->ysyx_23060336__DOT__ifu__DOT__PC;
    vlSelf->io_mcause = vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
        [0x342U];
    vlSelf->io_mstatus = vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
        [0x300U];
    vlSelf->io_iduopcode = (0x7fU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst);
    vlSelf->io_iduinst = vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst;
    vlSelf->io_exupcmux = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_PcMux;
    vlSelf->io_MemtoReg = vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemtoReg;
    vlSelf->io_lsuMemWr = vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemWr;
    vlSelf->io_exupc = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_pc;
    vlSelf->io_alumux = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux;
    vlSelf->io_regwaddr = vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_rd;
    vlSelf->ysyx_23060336__DOT__idu__DOT__immNum_invInputs 
        = (0x7fU & (~ ((0x60U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                 >> 7U)) | (0x1fU & 
                                            (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                             >> 2U)))));
    vlSelf->io_exuMemWr = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_MemWr;
    vlSelf->io_idupc = vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_pc;
    vlSelf->io_lsuwdata = vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_src2;
    vlSelf->io_wburesult = vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_result;
    vlSelf->io_lsuvalid = (1U & ((~ (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemtoReg)) 
                                 | (IData)(vlSelf->ysyx_23060336__DOT__lsu__DOT__delay2)));
    vlSelf->io_lsuready = (1U & (((~ (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemtoReg)) 
                                  & (~ (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemWr))) 
                                 | (IData)(vlSelf->ysyx_23060336__DOT__lsu__DOT__delay2)));
    vlSelf->io_lsuaraddr = vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result;
    vlSelf->io_regrd = ((IData)(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_CsrWr)
                         ? vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_Csr
                         : (((2U == (IData)(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegNum)) 
                             | (5U == (IData)(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegNum)))
                             ? vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_DataOut
                             : ((3U == (IData)(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegNum))
                                 ? (0xffU & vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_DataOut)
                                 : ((4U == (IData)(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegNum))
                                     ? (0xffffU & vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_DataOut)
                                     : ((0U == (IData)(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegNum))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_DataOut 
                                                            >> 7U)))) 
                                             << 8U) 
                                            | (0xffU 
                                               & vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_DataOut))
                                         : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegNum))
                                             ? (((- (IData)(
                                                            (1U 
                                                             & (vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_DataOut 
                                                                >> 0xfU)))) 
                                                 << 0x10U) 
                                                | (0xffffU 
                                                   & vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_DataOut))
                                             : vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_DataOut))))));
    vlSelf->io_lsuawvalid = ((~ (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_halt)) 
                             & (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemWr));
    vlSelf->io_regrs1 = (0x1fU & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                  >> 0xfU));
    vlSelf->io_regrs2 = (0x1fU & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                  >> 0x14U));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3460ce47__0 
        = (IData)((0U == (0xc0000000U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf34c4125__0 
        = (IData)((0U == (0x60U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hbfcac208__0 
        = (IData)((0x2070U == (0x2070U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3abbe375__0 
        = ((2U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                  >> 4U)) | (1U & (~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                      >> 6U))));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3c1cf46e__0 
        = (IData)((0x3000U == (0x3000U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)));
    vlSelf->ysyx_23060336__DOT___lsu_io_wen = ((IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemWr) 
                                               | (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemtoReg));
    vlSelf->io_halt = (1U & vlSelf->ysyx_23060336__DOT__ebreak__DOT__tmp_halt);
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_5 = 
        ((vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result 
          >> 0x1fU) & (0x81000000U > vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf3854a25__0 
        = ((2U & ((~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                      >> 5U)) << 1U)) | (1U & (~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                  >> 6U))));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3ef82d77__0 
        = ((2U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                  >> 4U)) | (1U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                   >> 6U)));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3d112f69__0 
        = (IData)((0x6000U == (0x6000U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hc580b573__0 
        = (IData)((0x60U == (0x60U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)));
    vlSelf->io_lsuarvalid = ((~ (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_halt)) 
                             & (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemtoReg));
    vlSelf->ysyx_23060336__DOT__idu__DOT___GEN = ((0xe0U 
                                                   & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                      >> 7U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                        >> 2U)));
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__cin 
        = (IData)((0U != (9U & (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel))));
    vlSelf->ysyx_23060336__DOT__exu__DOT__casez_tmp 
        = ((4U & (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux))
            ? ((2U & (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux))
                ? ((1U & (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux))
                    ? vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_src2
                    : vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Csr)
                : ((1U & (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux))
                    ? vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Csr
                    : vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_imm))
            : ((2U & (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux))
                ? ((1U & (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux))
                    ? vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_imm
                    : 4U) : ((1U & (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux))
                              ? vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_imm
                              : 0U)));
    vlSelf->io_ina = (((7U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux)) 
                       | (1U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux)))
                       ? vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_src1
                       : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux))
                           ? vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_pc
                           : ((3U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux))
                               ? 0U : ((4U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux))
                                        ? vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_pc
                                        : ((5U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux))
                                            ? ((- (IData)((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Recsr))) 
                                               ^ vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_src1)
                                            : ((6U 
                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux))
                                                ? (
                                                   (- (IData)((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Recsr))) 
                                                   ^ vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_zimm)
                                                : 0U))))));
    vlSelf->io_lsuawaddr = vlSelf->io_lsuaraddr;
    vlSelf->io_lsuwvalid = vlSelf->io_lsuawvalid;
    vlSelf->io_regsrc1 = ((0U != (IData)(vlSelf->io_regrs1))
                           ? vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory
                          [vlSelf->io_regrs1] : 0U);
    vlSelf->io_regsrc2 = ((0U != (IData)(vlSelf->io_regrs2))
                           ? vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory
                          [vlSelf->io_regrs2] : 0U);
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_mret 
        = (IData)(((0x30200073U == (0x3fffffffU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                   & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3460ce47__0)));
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_ecall 
        = (IData)(((0x73U == (0x3fffffffU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                   & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3460ce47__0)));
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_CsrWr 
        = (1U & (IData)(((3U == (0xfU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                         & ((IData)((0x1070U == (0x1070U 
                                                 & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst))) 
                            | (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hbfcac208__0)))));
    vlSelf->io_iduMemWr = (IData)(((3U == (0x1fU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                   & (3U == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3abbe375__0))));
    vlSelf->io_ifuready = (1U & (~ (IData)(vlSelf->io_halt)));
    vlSelf->io_lsuawready = vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_5;
    vlSelf->io_lsuwready = (((~ ((0xa0000047U < vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result) 
                                 & (0xa0000089U > vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result))) 
                             | (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_5)) 
                            & (IData)(vlSelf->ysyx_23060336__DOT___sdram_wready));
    vlSelf->ysyx_23060336__DOT__idu__DOT___instType_andMatrixOutputs_T_2 
        = ((0x20U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                     << 5U)) | ((0x10U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                          << 3U)) | 
                                ((8U & ((~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                            >> 2U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & ((~ 
                                                        (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                         >> 3U)) 
                                                       << 2U)) 
                                                   | (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf3854a25__0)))));
    vlSelf->ysyx_23060336__DOT__idu__DOT___instType_andMatrixOutputs_T_3 
        = ((0x40U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                     << 6U)) | ((0x20U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                          << 4U)) | 
                                ((0x10U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                           << 2U)) 
                                 | ((8U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst) 
                                    | ((4U & ((~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                  >> 4U)) 
                                              << 2U)) 
                                       | (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf3854a25__0))))));
    vlSelf->ysyx_23060336__DOT__idu__DOT___instType_andMatrixOutputs_T_6 
        = ((0x20U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                     << 5U)) | ((0x10U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                          << 3U)) | 
                                ((8U & ((~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                            >> 2U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & ((~ 
                                                        (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                         >> 3U)) 
                                                       << 2U)) 
                                                   | (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3ef82d77__0)))));
    vlSelf->ysyx_23060336__DOT__idu__DOT___instType_andMatrixOutputs_T_8 
        = ((0x20U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                     << 5U)) | ((0x10U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                          << 3U)) | 
                                ((8U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                        << 1U)) | (
                                                   (4U 
                                                    & ((~ 
                                                        (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                         >> 4U)) 
                                                       << 2U)) 
                                                   | (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3ef82d77__0)))));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hb80b8518__0 
        = ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
            >> 0xcU) & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3d112f69__0));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hec6b80fc__0 
        = ((~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
               >> 4U)) & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hc580b573__0));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hec690571__0 
        = ((~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
               >> 4U)) & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hc580b573__0));
    vlSelf->io_lsurready = vlSelf->io_lsuarvalid;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hd237b447__0 
        = ((4U & ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                      >> 4U)) << 2U)) | ((2U & ((~ 
                                                 ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                                  >> 6U)) 
                                                << 1U)) 
                                         | (1U & (~ 
                                                  ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                                   >> 7U)))));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h9dd17daa__0 
        = ((4U & ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                      >> 4U)) << 2U)) | ((2U & ((~ 
                                                 ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                                  >> 5U)) 
                                                << 1U)) 
                                         | (1U & (~ 
                                                  ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                                   >> 7U)))));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h5aced193__0 
        = (IData)((0U == (0xc0U & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h599a574f__0 
        = (IData)((0U == (0x60U & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h666d1c0e__0 
        = (1U & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                  >> 0xcU) & (~ ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                 >> 6U))));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h7ff03fbd__0 
        = ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
               >> 5U)) & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3d112f69__0));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h055e0551__0 
        = (1U & ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                     >> 6U)) & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                >> 0xeU)));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h67611bab__0 
        = (1U & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                  >> 0xdU) & (~ ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                 >> 7U))));
    vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs 
        = (0x7fffU & (~ ((0x7f00U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                     >> 0x11U)) | (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))));
    vlSelf->io_inb = vlSelf->ysyx_23060336__DOT__exu__DOT__casez_tmp;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4 
        = ((2U & ((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel) 
                  << 1U)) | (1U & vlSelf->ysyx_23060336__DOT__exu__DOT__casez_tmp));
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__addsub__DOT__t_no_cin 
        = ((- (IData)((IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__cin))) 
           ^ vlSelf->ysyx_23060336__DOT__exu__DOT__casez_tmp);
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_3 
        = ((2U & ((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel) 
                  << 1U)) | (1U & (vlSelf->ysyx_23060336__DOT__exu__DOT__casez_tmp 
                                   >> 1U)));
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_2 
        = ((2U & ((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel) 
                  << 1U)) | (1U & (vlSelf->ysyx_23060336__DOT__exu__DOT__casez_tmp 
                                   >> 2U)));
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_1 
        = ((2U & ((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel) 
                  << 1U)) | (1U & (vlSelf->ysyx_23060336__DOT__exu__DOT__casez_tmp 
                                   >> 3U)));
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel 
        = ((2U & ((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel) 
                  << 1U)) | (1U & (vlSelf->ysyx_23060336__DOT__exu__DOT__casez_tmp 
                                   >> 4U)));
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn 
        = (IData)((((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel) 
                    >> 1U) & (vlSelf->io_ina >> 0x1fU)));
    vlSelf->ysyx_23060336__DOT__idu__DOT__casez_tmp 
        = ((0U == (((IData)((3U == (0x5fU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst))) 
                    << 5U) | (((IData)((0x3fU == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___instType_andMatrixOutputs_T_2))) 
                               << 4U) | (((IData)((0x7fU 
                                                   == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___instType_andMatrixOutputs_T_3))) 
                                          << 3U) | 
                                         (((IData)(
                                                   (0x17U 
                                                    == 
                                                    (0x5fU 
                                                     & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst))) 
                                           << 2U) | 
                                          (((IData)(
                                                    (0x3fU 
                                                     == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___instType_andMatrixOutputs_T_6))) 
                                            << 1U) 
                                           | (IData)(
                                                     (0x63U 
                                                      == 
                                                      (0x7bU 
                                                       & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)))))))))
            ? ((0U == (((IData)((3U == (0x4fU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst))) 
                        << 3U) | (((IData)((0x7fU == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___instType_andMatrixOutputs_T_3))) 
                                   << 2U) | (((IData)(
                                                      (0x33U 
                                                       == 
                                                       (0x3fU 
                                                        & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst))) 
                                              << 1U) 
                                             | (0x3fU 
                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___instType_andMatrixOutputs_T_8))))))
                ? 0U : ((0U == (((IData)((0x3fU == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___instType_andMatrixOutputs_T_2))) 
                                 << 3U) | (((IData)(
                                                    (0x7fU 
                                                     == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___instType_andMatrixOutputs_T_3))) 
                                            << 2U) 
                                           | (((IData)(
                                                       (0x3fU 
                                                        == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___instType_andMatrixOutputs_T_6))) 
                                               << 1U) 
                                              | (0x3fU 
                                                 == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___instType_andMatrixOutputs_T_8))))))
                         ? 0U : (((- (IData)((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst) 
                                               | ((0x800U 
                                                   & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                        >> 0x14U)))))))
            : ((0U == (((IData)((3U == (0x4fU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst))) 
                        << 3U) | (((IData)((0x7fU == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___instType_andMatrixOutputs_T_3))) 
                                   << 2U) | (((IData)(
                                                      (0x33U 
                                                       == 
                                                       (0x3fU 
                                                        & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst))) 
                                              << 1U) 
                                             | (0x3fU 
                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___instType_andMatrixOutputs_T_8))))))
                ? ((0U == (((IData)((0x3fU == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___instType_andMatrixOutputs_T_2))) 
                            << 3U) | (((IData)((0x7fU 
                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___instType_andMatrixOutputs_T_3))) 
                                       << 2U) | (((IData)(
                                                          (0x3fU 
                                                           == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___instType_andMatrixOutputs_T_6))) 
                                                  << 1U) 
                                                 | (0x3fU 
                                                    == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___instType_andMatrixOutputs_T_8))))))
                    ? (0xfffff000U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)
                    : (((- (IData)((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0x800U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                     << 4U)) | ((0x7e0U 
                                                 & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                      >> 7U))))))
                : ((0U == (((IData)((0x3fU == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___instType_andMatrixOutputs_T_2))) 
                            << 3U) | (((IData)((0x7fU 
                                                == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___instType_andMatrixOutputs_T_3))) 
                                       << 2U) | (((IData)(
                                                          (0x3fU 
                                                           == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___instType_andMatrixOutputs_T_6))) 
                                                  << 1U) 
                                                 | (0x3fU 
                                                    == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___instType_andMatrixOutputs_T_8))))))
                    ? (((- (IData)((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                          >> 0x14U)))));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h212147f6__0 
        = ((~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
               >> 3U)) & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hec6b80fc__0));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h21204722__0 
        = ((~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
               >> 3U)) & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hec690571__0));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3804dd5e__0 
        = (IData)(((7U == (7U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                   & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hec690571__0)));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h70d45b70__0 
        = ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
            >> 0xcU) & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h055e0551__0));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf05e5a41__0 
        = (IData)(((0U == (0x30U & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))) 
                   & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h67611bab__0)));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hefa2e071__0 
        = (IData)((0x7f00U == (0x7f00U & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs))));
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__addsub__DOT___sum_T_1 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->io_ina)) 
                             + ((QData)((IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__addsub__DOT__t_no_cin)) 
                                + (QData)((IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__cin)))));
    if ((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel))) {
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp 
            = (1U & vlSelf->io_ina);
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_1 
            = (1U & (vlSelf->io_ina >> 1U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_3 
            = (1U & (vlSelf->io_ina >> 2U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_5 
            = (1U & (vlSelf->io_ina >> 3U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_7 
            = (1U & (vlSelf->io_ina >> 4U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_9 
            = (1U & (vlSelf->io_ina >> 5U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_11 
            = (1U & (vlSelf->io_ina >> 6U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_13 
            = (1U & (vlSelf->io_ina >> 7U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_0 
            = (1U & (vlSelf->io_ina >> 8U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_2 
            = (1U & (vlSelf->io_ina >> 9U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_4 
            = (1U & (vlSelf->io_ina >> 0xaU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_6 
            = (1U & (vlSelf->io_ina >> 0xbU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_8 
            = (1U & (vlSelf->io_ina >> 0xcU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_10 
            = (1U & (vlSelf->io_ina >> 0xdU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_12 
            = (1U & (vlSelf->io_ina >> 0xeU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_14 
            = (1U & (vlSelf->io_ina >> 0xfU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_29 
            = (1U & (vlSelf->io_ina >> 0x1eU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_30 
            = (1U & (vlSelf->io_ina >> 0x1fU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_27 
            = (1U & (vlSelf->io_ina >> 0x1cU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_28 
            = (1U & (vlSelf->io_ina >> 0x1dU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_25 
            = (1U & (vlSelf->io_ina >> 0x1aU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_26 
            = (1U & (vlSelf->io_ina >> 0x1bU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_23 
            = (1U & (vlSelf->io_ina >> 0x18U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_24 
            = (1U & (vlSelf->io_ina >> 0x19U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_21 
            = (1U & (vlSelf->io_ina >> 0x16U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_22 
            = (1U & (vlSelf->io_ina >> 0x17U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_19 
            = (1U & (vlSelf->io_ina >> 0x14U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_20 
            = (1U & (vlSelf->io_ina >> 0x15U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_17 
            = (1U & (vlSelf->io_ina >> 0x12U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_18 
            = (1U & (vlSelf->io_ina >> 0x13U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_15 
            = (1U & (vlSelf->io_ina >> 0x10U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_16 
            = (1U & (vlSelf->io_ina >> 0x11U));
    } else if ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel))) {
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp 
            = (1U & (vlSelf->io_ina >> 0x10U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_1 
            = (1U & (vlSelf->io_ina >> 0x11U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_3 
            = (1U & (vlSelf->io_ina >> 0x12U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_5 
            = (1U & (vlSelf->io_ina >> 0x13U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_7 
            = (1U & (vlSelf->io_ina >> 0x14U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_9 
            = (1U & (vlSelf->io_ina >> 0x15U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_11 
            = (1U & (vlSelf->io_ina >> 0x16U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_13 
            = (1U & (vlSelf->io_ina >> 0x17U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_0 
            = (1U & (vlSelf->io_ina >> 0x18U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_2 
            = (1U & (vlSelf->io_ina >> 0x19U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_4 
            = (1U & (vlSelf->io_ina >> 0x1aU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_6 
            = (1U & (vlSelf->io_ina >> 0x1bU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_8 
            = (1U & (vlSelf->io_ina >> 0x1cU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_10 
            = (1U & (vlSelf->io_ina >> 0x1dU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_12 
            = (1U & (vlSelf->io_ina >> 0x1eU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_14 
            = (1U & (vlSelf->io_ina >> 0x1fU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_29 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_30 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_27 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_28 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_25 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_26 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_23 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_24 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_21 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_22 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_19 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_20 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_17 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_18 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_15 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_16 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
    } else {
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & vlSelf->io_ina));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_1 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 1U)));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_3 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 2U)));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_5 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 3U)));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_7 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 4U)));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_9 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 5U)));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_11 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 6U)));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_13 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 7U)));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_0 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 8U)));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_2 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 9U)));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_4 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 0xaU)));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_6 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 0xbU)));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_8 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 0xcU)));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_10 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 0xdU)));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_12 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 0xeU)));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_14 
            = (1U & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel)) 
                     & (vlSelf->io_ina >> 0xfU)));
        if ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel))) {
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_29 
                = (1U & (vlSelf->io_ina >> 0x1eU));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_30 
                = (1U & (vlSelf->io_ina >> 0x1fU));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_27 
                = (1U & (vlSelf->io_ina >> 0x1cU));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_28 
                = (1U & (vlSelf->io_ina >> 0x1dU));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_25 
                = (1U & (vlSelf->io_ina >> 0x1aU));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_26 
                = (1U & (vlSelf->io_ina >> 0x1bU));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_23 
                = (1U & (vlSelf->io_ina >> 0x18U));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_24 
                = (1U & (vlSelf->io_ina >> 0x19U));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_21 
                = (1U & (vlSelf->io_ina >> 0x16U));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_22 
                = (1U & (vlSelf->io_ina >> 0x17U));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_19 
                = (1U & (vlSelf->io_ina >> 0x14U));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_20 
                = (1U & (vlSelf->io_ina >> 0x15U));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_17 
                = (1U & (vlSelf->io_ina >> 0x12U));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_18 
                = (1U & (vlSelf->io_ina >> 0x13U));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_15 
                = (1U & (vlSelf->io_ina >> 0x10U));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_16 
                = (1U & (vlSelf->io_ina >> 0x11U));
        } else {
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_29 
                = (1U & (vlSelf->io_ina >> 0xeU));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_30 
                = (1U & (vlSelf->io_ina >> 0xfU));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_27 
                = (1U & (vlSelf->io_ina >> 0xcU));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_28 
                = (1U & (vlSelf->io_ina >> 0xdU));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_25 
                = (1U & (vlSelf->io_ina >> 0xaU));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_26 
                = (1U & (vlSelf->io_ina >> 0xbU));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_23 
                = (1U & (vlSelf->io_ina >> 8U));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_24 
                = (1U & (vlSelf->io_ina >> 9U));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_21 
                = (1U & (vlSelf->io_ina >> 6U));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_22 
                = (1U & (vlSelf->io_ina >> 7U));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_19 
                = (1U & (vlSelf->io_ina >> 4U));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_20 
                = (1U & (vlSelf->io_ina >> 5U));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_17 
                = (1U & (vlSelf->io_ina >> 2U));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_18 
                = (1U & (vlSelf->io_ina >> 3U));
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_15 
                = (1U & vlSelf->io_ina);
            vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_16 
                = (1U & (vlSelf->io_ina >> 1U));
        }
    }
    vlSelf->io_imm = vlSelf->ysyx_23060336__DOT__idu__DOT__casez_tmp;
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_Branch 
        = (IData)(((3U == (7U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                   & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h212147f6__0)));
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_RegNum 
        = (((0U == ((0xfffffffcU & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                     << 2U) & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                << 1U) 
                                               & ((IData)(
                                                          ((0U 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))) 
                                                           & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h599a574f__0))) 
                                                  << 2U)))) 
                    | ((0xfffffffeU & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                        << 1U) & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                  & ((IData)(
                                                             ((0U 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))) 
                                                              & (7U 
                                                                 == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h9dd17daa__0)))) 
                                                     << 1U)))) 
                       | (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                          & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                              >> 1U) & (IData)(((0U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))) 
                                                & (7U 
                                                   == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hd237b447__0))))))))) 
            << 2U) | (((0U == ((0xfffffffcU & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                << 2U) 
                                               & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                   << 1U) 
                                                  & ((IData)(
                                                             ((0U 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))) 
                                                              & (7U 
                                                                 == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hd237b447__0)))) 
                                                     << 2U)))) 
                               | ((0xfffffffeU & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                   << 1U) 
                                                  & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                     & ((IData)(
                                                                ((0U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))) 
                                                                 & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h666d1c0e__0))) 
                                                        << 1U)))) 
                                  | (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                     & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                         >> 1U) & (IData)(
                                                          ((0U 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))) 
                                                           & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h7ff03fbd__0)))))))) 
                       << 1U) | (0U == ((0xfffffffeU 
                                         & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                             << 1U) 
                                            & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                               & ((IData)(
                                                          ((0U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))) 
                                                           & (7U 
                                                              == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h9dd17daa__0)))) 
                                                  << 1U)))) 
                                        | (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                           & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                               >> 1U) 
                                              & (IData)(
                                                        ((0U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))) 
                                                         & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h70d45b70__0)))))))));
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_AluMux 
        = ((((IData)(((3U == (3U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                      & ((IData)(((0x14U == (0x1cU 
                                             & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                  & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf34c4125__0))) 
                         | ((~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                >> 2U)) & ((IData)(
                                                   (0x30U 
                                                    == 
                                                    (0x78U 
                                                     & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst))) 
                                           | (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h21204722__0)))))) 
             << 2U) | ((((IData)(((0x13U == (0x1bU 
                                             & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                  & (3U == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3abbe375__0)))) 
                         << 1U) | ((0xfffffffeU & (
                                                   (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                    << 1U) 
                                                   & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                      & ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h21204722__0) 
                                                         << 1U)))) 
                                   | ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3804dd5e__0) 
                                      << 1U))) | (1U 
                                                  & ((IData)(
                                                             (3U 
                                                              == 
                                                              (0x4fU 
                                                               & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst))) 
                                                     | ((IData)(
                                                                (0x23U 
                                                                 == 
                                                                 (0x3fU 
                                                                  & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst))) 
                                                        | (IData)(
                                                                  ((0x13U 
                                                                    == 
                                                                    (0x1bU 
                                                                     & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                                   & (3U 
                                                                      == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3abbe375__0))))))))) 
           | ((0xfffffffcU & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                               << 2U) & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                          << 1U) & 
                                         ((IData)((
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))) 
                                                   & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hbfcac208__0))) 
                                          << 2U)))) 
              | (((IData)((((0x73U == (0x73U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                            & (0U == (3U & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN)))) 
                           & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3d112f69__0))) 
                  << 1U) | (IData)((((0x73U == (0x73U 
                                                & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                     & (0U == (3U & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN)))) 
                                    & ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h67611bab__0) 
                                       | (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h70d45b70__0)))))));
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_MemNum 
        = (((0x1ffU != ((0x100U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                   << 8U)) | ((0x80U 
                                               & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                  << 6U)) 
                                              | ((0x40U 
                                                  & ((~ (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN)) 
                                                     << 6U)) 
                                                 | ((0x20U 
                                                     & ((~ 
                                                         ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                                          >> 1U)) 
                                                        << 5U)) 
                                                    | ((0x10U 
                                                        & ((~ 
                                                            ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                                             >> 2U)) 
                                                           << 4U)) 
                                                       | ((8U 
                                                           & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                              >> 2U)) 
                                                          | (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hd237b447__0)))))))) 
            << 2U) | (((0x1ffU != ((0x100U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                              << 8U)) 
                                   | ((0x80U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                << 6U)) 
                                      | ((0x40U & (
                                                   (~ (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & ((~ 
                                                 ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                                  >> 1U)) 
                                                << 5U)) 
                                            | ((0x10U 
                                                & ((~ 
                                                    ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                                     >> 2U)) 
                                                   << 4U)) 
                                               | ((8U 
                                                   & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                      >> 2U)) 
                                                  | (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h9dd17daa__0)))))))) 
                       << 1U) | (0U == (((IData)(((
                                                   ((0x1023U 
                                                     == 
                                                     (0x1023U 
                                                      & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                    & (0U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN)))) 
                                                   & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h5aced193__0)) 
                                                  & (~ 
                                                     ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                                      >> 4U)))) 
                                         << 1U) | (IData)(
                                                          (((0x23U 
                                                             == 
                                                             (0x23U 
                                                              & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                            & (0U 
                                                               == 
                                                               (7U 
                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN)))) 
                                                           & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf05e5a41__0)))))));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hd59316c1__0 
        = ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
            >> 0xdU) & (((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs) 
                         >> 7U) & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hefa2e071__0)));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h0153a42f__0 
        = ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
            >> 0xeU) & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hefa2e071__0));
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT___out13_T_1 
        = ((IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__cin) 
           ^ (vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__addsub__DOT___sum_T_1 
              >> 0x20U));
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT___addsub_io_overflow 
        = (((vlSelf->io_ina >> 0x1fU) == (vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__addsub__DOT__t_no_cin 
                                          >> 0x1fU)) 
           & ((1U & (IData)((vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__addsub__DOT___sum_T_1 
                             >> 0x1fU))) != (vlSelf->io_ina 
                                             >> 0x1fU)));
    if ((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_1))) {
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_31 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_33 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_1;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_35 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_3;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_37 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_5;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_32 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_7;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_34 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_9;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_36 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_11;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_38 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_13;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_61 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_29;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_45 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_12;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_53 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_21;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_62 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_30;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_46 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_14;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_54 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_22;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_59 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_27;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_43 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_8;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_51 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_19;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_60 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_28;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_44 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_10;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_52 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_20;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_57 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_25;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_41 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_4;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_49 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_17;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_58 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_26;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_42 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_6;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_50 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_18;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_39 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_0;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_47 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_15;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_55 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_23;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_40 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_2;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_48 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_16;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_56 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_24;
    } else if ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_1))) {
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_31 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_0;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_33 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_2;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_35 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_4;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_37 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_6;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_32 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_8;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_34 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_10;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_36 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_12;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_38 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_14;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_61 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_45 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_21;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_53 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_29;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_62 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_46 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_22;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_54 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_30;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_59 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_43 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_19;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_51 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_27;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_60 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_44 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_20;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_52 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_28;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_57 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_41 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_17;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_49 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_25;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_58 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_42 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_18;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_50 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_26;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_39 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_15;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_47 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_23;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_55 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_40 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_16;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_48 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_24;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_56 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn;
    } else if ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_1))) {
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_31 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_33 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_1;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_35 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_3;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_37 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_5;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_32 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_7;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_34 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_9;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_36 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_11;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_38 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_13;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_61 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_29;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_45 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_12;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_53 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_21;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_62 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_30;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_46 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_14;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_54 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_22;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_59 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_27;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_43 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_8;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_51 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_19;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_60 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_28;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_44 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_10;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_52 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_20;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_57 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_25;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_41 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_4;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_49 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_17;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_58 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_26;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_42 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_6;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_50 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_18;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_39 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_0;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_47 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_15;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_55 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_23;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_40 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_2;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_48 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_16;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_56 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_24;
    } else {
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_31 = 0U;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_33 = 0U;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_35 = 0U;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_37 = 0U;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_32 = 0U;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_34 = 0U;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_36 = 0U;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_38 = 0U;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_61 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_21;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_45 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_11;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_53 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_12;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_62 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_22;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_46 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_13;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_54 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_14;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_59 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_19;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_43 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_7;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_51 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_8;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_60 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_20;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_44 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_9;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_52 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_10;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_57 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_17;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_41 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_3;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_49 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_4;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_58 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_18;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_42 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_5;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_50 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_6;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_39 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_47 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_0;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_55 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_15;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_40 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_1;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_48 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_2;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_56 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_16;
    }
    vlSelf->io_idupcmux = (((IData)(((7U == (7U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                     & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h212147f6__0))) 
                            << 1U) | ((IData)(vlSelf->ysyx_23060336__DOT___idu_io_out_bits_Branch) 
                                      | (IData)(((0xfU 
                                                  == 
                                                  (0xfU 
                                                   & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                 & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hec6b80fc__0)))));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hc336bed0__0 
        = (((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs) 
            >> 6U) & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h0153a42f__0));
    if ((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_2))) {
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_63 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_31;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_65 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_33;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_64 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_35;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_66 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_37;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_93 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_61;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_89 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_57;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_69 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_36;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_73 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_41;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_77 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_45;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_81 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_49;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_85 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_53;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_94 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_62;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_90 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_58;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_70 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_38;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_74 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_42;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_78 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_46;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_82 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_50;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_86 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_54;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_67 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_32;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_71 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_39;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_75 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_43;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_79 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_47;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_83 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_51;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_87 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_55;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_91 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_59;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_68 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_34;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_72 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_40;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_76 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_44;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_80 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_48;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_84 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_52;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_88 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_56;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_92 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_60;
    } else if ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_2))) {
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_63 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_32;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_65 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_34;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_64 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_36;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_66 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_38;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_93 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_89 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_61;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_69 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_41;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_73 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_45;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_77 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_49;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_81 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_53;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_85 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_57;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_94 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_90 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_62;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_70 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_42;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_74 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_46;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_78 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_50;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_82 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_54;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_86 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_58;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_67 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_39;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_71 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_43;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_75 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_47;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_79 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_51;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_83 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_55;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_87 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_59;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_91 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_68 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_40;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_72 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_44;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_76 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_48;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_80 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_52;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_84 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_56;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_88 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_60;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_92 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn;
    } else if ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_2))) {
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_63 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_31;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_65 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_33;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_64 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_35;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_66 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_37;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_93 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_61;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_89 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_57;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_69 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_36;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_73 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_41;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_77 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_45;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_81 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_49;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_85 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_53;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_94 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_62;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_90 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_58;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_70 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_38;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_74 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_42;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_78 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_46;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_82 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_50;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_86 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_54;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_67 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_32;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_71 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_39;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_75 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_43;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_79 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_47;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_83 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_51;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_87 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_55;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_91 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_59;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_68 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_34;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_72 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_40;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_76 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_44;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_80 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_48;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_84 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_52;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_88 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_56;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_92 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_60;
    } else {
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_63 = 0U;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_65 = 0U;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_64 = 0U;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_66 = 0U;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_93 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_57;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_89 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_53;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_69 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_35;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_73 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_36;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_77 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_41;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_81 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_45;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_85 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_49;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_94 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_58;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_90 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_54;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_70 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_37;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_74 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_38;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_78 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_42;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_82 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_46;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_86 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_50;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_67 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_31;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_71 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_32;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_75 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_39;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_79 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_43;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_83 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_47;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_87 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_51;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_91 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_55;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_68 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_33;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_72 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_34;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_76 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_40;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_80 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_44;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_84 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_48;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_88 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_52;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_92 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_56;
    }
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_AluSel 
        = ((((IData)((((0x13U == (0x13U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                       & (3U == (3U & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs)))) 
                      & (((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                           >> 5U) & (((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs) 
                                      >> 4U) & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hd59316c1__0))) 
                         | (((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs) 
                             >> 4U) & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                        >> 0xcU) & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hc336bed0__0)))))) 
             << 3U) | ((4U & (((IData)(((0x1013U == 
                                         (0x1013U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                        & (0x7fd3U 
                                           == (0x7fd3U 
                                               & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs))))) 
                               | ((IData)((((0x33U 
                                             == (0x33U 
                                                 & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                            & (0x33U 
                                               == (0x33U 
                                                   & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs)))) 
                                           & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h0153a42f__0))) 
                                  | (IData)(((0x40005013U 
                                              == (0x40005013U 
                                                  & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                             & (0x5f53U 
                                                == 
                                                (0x5f53U 
                                                 & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs))))))) 
                              << 2U)) | ((2U & (((IData)(
                                                         ((0x1013U 
                                                           == 
                                                           (0x1013U 
                                                            & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                          & (0x7fd3U 
                                                             == 
                                                             (0x7fd3U 
                                                              & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs))))) 
                                                 | ((IData)(
                                                            (((0x3033U 
                                                               == 
                                                               (0x3033U 
                                                                & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                              & (0x13U 
                                                                 == 
                                                                 (0x13U 
                                                                  & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs)))) 
                                                             & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hefa2e071__0))) 
                                                    | (IData)(
                                                              ((0x40005013U 
                                                                == 
                                                                (0x40005013U 
                                                                 & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                               & (0x5f53U 
                                                                  == 
                                                                  (0x5f53U 
                                                                   & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs))))))) 
                                                << 1U)) 
                                         | (1U & ((IData)(
                                                          ((0x1013U 
                                                            == 
                                                            (0x1013U 
                                                             & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                           & (0x7fd3U 
                                                              == 
                                                              (0x7fd3U 
                                                               & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs))))) 
                                                  | (IData)(
                                                            (((0x33U 
                                                               == 
                                                               (0x33U 
                                                                & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                              & (0x13U 
                                                                 == 
                                                                 (0x13U 
                                                                  & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs)))) 
                                                             & ((((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs) 
                                                                  >> 5U) 
                                                                 & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hd59316c1__0)) 
                                                                | ((((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs) 
                                                                     >> 5U) 
                                                                    & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hc336bed0__0)) 
                                                                   | ((IData)(
                                                                              ((0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                                               & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h0153a42f__0))) 
                                                                      | (IData)(
                                                                                ((0x5fe0U 
                                                                                == 
                                                                                (0x5fe0U 
                                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs))) 
                                                                                & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                                                >> 0x1eU))))))))))))) 
           | (((IData)((((3U == (3U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                         & (0U == (3U & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN)))) 
                        & (((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                >> 2U)) & (IData)((
                                                   (0x60U 
                                                    == 
                                                    (0x60U 
                                                     & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                   & (~ 
                                                      ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                                       >> 6U))))) 
                           | (((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                >> 4U) & (IData)(((0U 
                                                   == 
                                                   (0x18U 
                                                    & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))) 
                                                  & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h67611bab__0)))) 
                              | ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                     >> 2U)) & (IData)(
                                                       (0x4060U 
                                                        == 
                                                        (0x4060U 
                                                         & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)))))))) 
               << 3U) | (((IData)((((3U == (3U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                    & (0U == (3U & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN)))) 
                                   & (((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                           >> 2U)) 
                                       & (IData)(((0x60U 
                                                   == 
                                                   (0x60U 
                                                    & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                  & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h5aced193__0)))) 
                                      | ((IData)(((0x2070U 
                                                   == 
                                                   (0x2070U 
                                                    & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                  & (~ 
                                                     ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                                      >> 5U)))) 
                                         | ((IData)(
                                                    ((0x4010U 
                                                      == 
                                                      (0x4010U 
                                                       & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                     & (0U 
                                                        == 
                                                        (0x38U 
                                                         & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))))) 
                                            | ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                                   >> 2U)) 
                                               & (IData)(
                                                         ((0x60U 
                                                           == 
                                                           (0x60U 
                                                            & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                          & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hb80b8518__0))))))))) 
                          << 2U) | ((2U & (((IData)(
                                                    (((0x63U 
                                                       == 
                                                       (0x63U 
                                                        & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                      & (0U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN)))) 
                                                     & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h666d1c0e__0))) 
                                            | ((IData)(
                                                       (((0x13U 
                                                          == 
                                                          (0x13U 
                                                           & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                         & (0U 
                                                            == 
                                                            (0x1bU 
                                                             & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN)))) 
                                                        & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3c1cf46e__0))) 
                                               | ((IData)(
                                                          ((0x3073U 
                                                            == 
                                                            (0x3073U 
                                                             & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                           & (0U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))))) 
                                                  | (IData)(
                                                            (((0x63U 
                                                               == 
                                                               (0x63U 
                                                                & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                              & (0U 
                                                                 == 
                                                                 (7U 
                                                                  & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN)))) 
                                                             & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h7ff03fbd__0)))))) 
                                           << 1U)) 
                                    | (1U & ((IData)(
                                                     (((0x63U 
                                                        == 
                                                        (0x63U 
                                                         & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                       & (0U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN)))) 
                                                      & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h599a574f__0))) 
                                             | ((IData)(
                                                        (((0x13U 
                                                           == 
                                                           (0x13U 
                                                            & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                          & (0U 
                                                             == 
                                                             (0xbU 
                                                              & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN)))) 
                                                         & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf05e5a41__0))) 
                                                | ((IData)(
                                                           ((0x3073U 
                                                             == 
                                                             (0x3073U 
                                                              & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                            & (0U 
                                                               == 
                                                               (3U 
                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))))) 
                                                   | (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                      & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                          >> 1U) 
                                                         & (IData)(
                                                                   ((0U 
                                                                     == 
                                                                     (3U 
                                                                      & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))) 
                                                                    & (((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                                         >> 4U) 
                                                                        & (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))) 
                                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h055e0551__0)))) 
                                                                       | (((~ 
                                                                            ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                                                             >> 2U)) 
                                                                           & (IData)(
                                                                                ((0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h055e0551__0)))) 
                                                                          | ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                                              >> 4U) 
                                                                             & (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x18U 
                                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))) 
                                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hb80b8518__0))))))))))))))))));
    if ((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_3))) {
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_95 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_63;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_96 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_65;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_97 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_64;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_99 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_67;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_101 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_69;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_103 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_71;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_105 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_73;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_107 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_75;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_109 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_77;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_111 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_79;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_113 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_81;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_115 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_83;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_117 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_85;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_119 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_87;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_121 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_89;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_123 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_91;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_125 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_93;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_98 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_66;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_100 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_68;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_102 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_70;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_104 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_72;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_106 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_74;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_108 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_76;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_110 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_78;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_112 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_80;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_114 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_82;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_116 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_84;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_118 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_86;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_120 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_88;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_122 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_90;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_124 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_92;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_126 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_94;
    } else if ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_3))) {
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_95 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_64;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_96 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_66;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_97 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_67;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_99 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_69;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_101 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_71;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_103 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_73;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_105 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_75;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_107 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_77;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_109 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_79;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_111 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_81;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_113 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_83;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_115 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_85;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_117 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_87;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_119 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_89;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_121 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_91;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_123 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_93;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_125 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_98 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_68;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_100 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_70;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_102 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_72;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_104 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_74;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_106 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_76;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_108 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_78;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_110 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_80;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_112 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_82;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_114 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_84;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_116 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_86;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_118 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_88;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_120 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_90;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_122 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_92;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_124 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_94;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_126 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn;
    } else if ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_3))) {
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_95 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_63;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_96 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_65;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_97 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_64;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_99 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_67;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_101 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_69;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_103 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_71;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_105 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_73;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_107 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_75;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_109 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_77;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_111 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_79;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_113 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_81;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_115 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_83;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_117 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_85;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_119 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_87;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_121 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_89;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_123 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_91;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_125 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_93;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_98 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_66;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_100 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_68;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_102 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_70;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_104 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_72;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_106 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_74;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_108 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_76;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_110 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_78;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_112 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_80;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_114 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_82;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_116 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_84;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_118 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_86;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_120 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_88;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_122 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_90;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_124 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_92;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_126 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_94;
    } else {
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_95 = 0U;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_96 = 0U;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_97 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_63;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_99 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_64;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_101 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_67;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_103 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_69;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_105 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_71;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_107 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_73;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_109 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_75;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_111 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_77;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_113 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_79;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_115 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_81;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_117 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_83;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_119 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_85;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_121 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_87;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_123 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_89;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_125 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_91;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_98 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_65;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_100 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_66;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_102 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_68;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_104 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_70;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_106 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_72;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_108 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_74;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_110 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_76;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_112 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_78;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_114 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_80;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_116 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_82;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_118 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_84;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_120 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_86;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_122 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_88;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_124 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_90;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_126 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_92;
    }
    vlSelf->ysyx_23060336__DOT__exu__DOT___alu_io_result 
        = (((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel)) 
            | (1U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel)))
            ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__addsub__DOT___sum_T_1)
            : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel))
                ? (~ vlSelf->io_ina) : ((3U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel))
                                         ? (vlSelf->io_ina 
                                            & vlSelf->ysyx_23060336__DOT__exu__DOT__casez_tmp)
                                         : ((4U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel))
                                             ? (vlSelf->io_ina 
                                                | vlSelf->ysyx_23060336__DOT__exu__DOT__casez_tmp)
                                             : ((5U 
                                                 == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel))
                                                 ? 
                                                (vlSelf->io_ina 
                                                 ^ vlSelf->ysyx_23060336__DOT__exu__DOT__casez_tmp)
                                                 : 
                                                (((6U 
                                                   == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel)) 
                                                  | ((7U 
                                                      == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel)) 
                                                     | (8U 
                                                        == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel))))
                                                  ? 
                                                 ((((0U 
                                                     == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn)
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                       ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                                       : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)))) 
                                                   << 0x1fU) 
                                                  | ((((0U 
                                                        == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                        ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                                         : 
                                                        ((2U 
                                                          == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                          ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)
                                                          : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_124)))) 
                                                      << 0x1eU) 
                                                     | ((((0U 
                                                           == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                           ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_124)
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                            ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                             ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_124)
                                                             : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_123)))) 
                                                         << 0x1dU) 
                                                        | ((((0U 
                                                              == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_123)
                                                              : 
                                                             ((1U 
                                                               == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                               ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_124)
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_123)
                                                                : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_122)))) 
                                                            << 0x1cU) 
                                                           | ((((0U 
                                                                 == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_122)
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_123)
                                                                  : 
                                                                 ((2U 
                                                                   == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                   ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_122)
                                                                   : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_121)))) 
                                                               << 0x1bU) 
                                                              | ((((0U 
                                                                    == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                    ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_121)
                                                                    : 
                                                                   ((1U 
                                                                     == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_122)
                                                                     : 
                                                                    ((2U 
                                                                      == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_121)
                                                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_120)))) 
                                                                  << 0x1aU) 
                                                                 | ((((0U 
                                                                       == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                       ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_120)
                                                                       : 
                                                                      ((1U 
                                                                        == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                        ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_121)
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_120)
                                                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_119)))) 
                                                                     << 0x19U) 
                                                                    | ((((0U 
                                                                          == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                          ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_119)
                                                                          : 
                                                                         ((1U 
                                                                           == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                           ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_120)
                                                                           : 
                                                                          ((2U 
                                                                            == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                            ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_119)
                                                                            : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_118)))) 
                                                                        << 0x18U) 
                                                                       | ((((0U 
                                                                             == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                             ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_118)
                                                                             : 
                                                                            ((1U 
                                                                              == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_119)
                                                                              : 
                                                                             ((2U 
                                                                               == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                               ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_118)
                                                                               : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_117)))) 
                                                                           << 0x17U) 
                                                                          | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_117)
                                                                                : 
                                                                               ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_118)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_117)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_116)))) 
                                                                              << 0x16U) 
                                                                             | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_116)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_117)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_116)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_115)))) 
                                                                                << 0x15U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_115)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_116)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_115)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_114)))) 
                                                                                << 0x14U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_114)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_115)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_114)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_113)))) 
                                                                                << 0x13U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_113)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_114)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_113)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_112)))) 
                                                                                << 0x12U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_112)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_113)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_112)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_111)))) 
                                                                                << 0x11U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_111)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_112)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_111)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_110)))) 
                                                                                << 0x10U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_110)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_111)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_110)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_109)))) 
                                                                                << 0xfU) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_109)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_110)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_109)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_108)))) 
                                                                                << 0xeU) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_108)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_109)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_108)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_107)))) 
                                                                                << 0xdU) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_107)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_108)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_107)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_106)))) 
                                                                                << 0xcU) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_106)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_107)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_106)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_105)))) 
                                                                                << 0xbU) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_105)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_106)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_105)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_104)))) 
                                                                                << 0xaU) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_104)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_105)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_104)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_103)))) 
                                                                                << 9U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_103)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_104)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_103)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_102)))) 
                                                                                << 8U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_102)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_103)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_102)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_101)))) 
                                                                                << 7U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_101)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_102)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_101)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_100)))) 
                                                                                << 6U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_100)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_101)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_100)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_99)))) 
                                                                                << 5U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_99)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_100)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_99)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_98)))) 
                                                                                << 4U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_98)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_99)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_98)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_97)))) 
                                                                                << 3U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_97)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_98)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_97)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_96)))) 
                                                                                << 2U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_96)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_97)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_96)
                                                                                 : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_95)))) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_95)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_96)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4)) 
                                                                                & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_95)))))))))))))))))))))))))))))))))))
                                                  : 
                                                 (1U 
                                                  & ((9U 
                                                      == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel))
                                                      ? 
                                                     ((IData)(
                                                              (vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__addsub__DOT___sum_T_1 
                                                               >> 0x1fU)) 
                                                      ^ (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT___addsub_io_overflow))
                                                      : 
                                                     ((0xaU 
                                                       == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel))
                                                       ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT___out13_T_1)
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel))
                                                        ? 
                                                       (((~ (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT___addsub_io_overflow)) 
                                                         ^ (IData)(
                                                                   (vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__addsub__DOT___sum_T_1 
                                                                    >> 0x1fU))) 
                                                        | (0U 
                                                           == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__addsub__DOT___sum_T_1)))
                                                        : 
                                                       ((0xcU 
                                                         == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel))
                                                         ? 
                                                        (~ (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT___out13_T_1))
                                                         : 
                                                        ((0U 
                                                          == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__addsub__DOT___sum_T_1)) 
                                                         ^ 
                                                         (0xdU 
                                                          != (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel))))))))))))));
    vlSelf->ysyx_23060336__DOT__exu__DOT__PCMux = (
                                                   ((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Branch) 
                                                    << 3U) 
                                                   | ((4U 
                                                       & (vlSelf->ysyx_23060336__DOT__exu__DOT___alu_io_result 
                                                          << 2U)) 
                                                      | (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_PcMux)));
    vlSelf->ysyx_23060336__DOT__exu__DOT____VdfgTmp_h2220bc55__0 
        = ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__PCMux)) 
           | (6U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__PCMux)));
    vlSelf->io_pca = ((IData)(vlSelf->ysyx_23060336__DOT__exu__DOT____VdfgTmp_h2220bc55__0)
                       ? vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_src1
                       : vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_pc);
    vlSelf->io_pcb = (((IData)(vlSelf->ysyx_23060336__DOT__exu__DOT____VdfgTmp_h2220bc55__0) 
                       | ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__PCMux)) 
                          | ((5U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__PCMux)) 
                             | (0xdU == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__PCMux)))))
                       ? vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_imm
                       : 4U);
    vlSelf->io_pcadd = (vlSelf->io_pca + vlSelf->io_pcb);
    vlSelf->io_NPC = ((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_halt)
                       ? vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_pc
                       : ((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_ecall)
                           ? vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                          [0x305U] : ((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_mret)
                                       ? vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                                      [0x341U] : vlSelf->io_pcadd)));
    vlSelf->ysyx_23060336__DOT___ifu_io_out_bits_pc 
        = ((IData)(vlSelf->reset) ? 0x80000000U : (
                                                   (4U 
                                                    == vlSelf->io_NPC)
                                                    ? vlSelf->ysyx_23060336__DOT__ifu__DOT__PC
                                                    : vlSelf->io_NPC));
    vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr = 
        ((1U & ((~ (IData)(vlSelf->io_lsuarvalid)) 
                | (1U == (0xfU & vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt))))
          ? vlSelf->ysyx_23060336__DOT___ifu_io_out_bits_pc
          : vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result);
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_4 = 
        ((0xa0000047U < vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr) 
         & (0xa0000089U > vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr));
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_3 = 
        ((vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr 
          >> 0x1fU) & (0x81000000U > vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr));
    vlSelf->io_lsuarready = ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_3) 
                             | (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_4));
    vlSelf->ysyx_23060336__DOT__xbar__DOT__rdata = 
        ((1U & ((~ (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_4)) 
                | (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_3)))
          ? vlSelf->ysyx_23060336__DOT___sdram_rdata
          : ((0xa0000048U == vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr)
              ? vlSelf->ysyx_23060336__DOT__clint__DOT__mtimel
              : vlSelf->ysyx_23060336__DOT__clint__DOT__mtimeh));
    vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid = 
        ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_3)
          ? (IData)(vlSelf->ysyx_23060336__DOT___sdram_rvalid)
          : (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_4));
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_1 = 
        ((1U == vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt) 
         & ((IData)(vlSelf->io_ifuready) & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid)));
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_2 = 
        ((2U == vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt) 
         & ((IData)(vlSelf->io_lsuarvalid) & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid)));
    if (vlSelf->io_lsuarvalid) {
        vlSelf->io_lsurvalid = ((1U != (0xfU & vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt)) 
                                & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid));
        vlSelf->ysyx_23060336__DOT___xbar_io_ifu_rvalid 
            = ((1U == (0xfU & vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt)) 
               & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid));
        vlSelf->ysyx_23060336__DOT__lsu__DOT___io_rdata_T 
            = vlSelf->io_lsurvalid;
    } else {
        vlSelf->io_lsurvalid = 0U;
        vlSelf->ysyx_23060336__DOT___xbar_io_ifu_rvalid 
            = ((~ (IData)(vlSelf->io_lsuarvalid)) & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid));
        vlSelf->ysyx_23060336__DOT__lsu__DOT___io_rdata_T = 0U;
    }
    vlSelf->io_ifuvalid = ((IData)(vlSelf->io_ifuready) 
                           & (((~ (IData)(vlSelf->ysyx_23060336__DOT___lsu_io_wen)) 
                               & (IData)(vlSelf->ysyx_23060336__DOT___xbar_io_ifu_rvalid)) 
                              | ((IData)(vlSelf->ysyx_23060336__DOT___lsu_io_wen) 
                                 & ((IData)(vlSelf->ysyx_23060336__DOT__ifu__DOT__delay3) 
                                    & ((IData)(vlSelf->io_lsuwready) 
                                       | (IData)(vlSelf->ysyx_23060336__DOT___xbar_io_ifu_rvalid))))));
    vlSelf->io_lsurdata = ((IData)(vlSelf->ysyx_23060336__DOT__lsu__DOT___io_rdata_T)
                            ? vlSelf->ysyx_23060336__DOT__xbar__DOT__rdata
                            : 0U);
    if (vlSelf->io_ifuvalid) {
        vlSelf->io_inst = vlSelf->ysyx_23060336__DOT__xbar__DOT__rdata;
        vlSelf->ysyx_23060336__DOT___reg_io_wen_T = vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegWr;
    } else {
        vlSelf->io_inst = 0U;
        vlSelf->ysyx_23060336__DOT___reg_io_wen_T = 0U;
    }
    vlSelf->io_regwen = vlSelf->ysyx_23060336__DOT___reg_io_wen_T;
}

VL_ATTR_COLD void Vysyx_23060336___024root___eval_stl(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_23060336___024root___stl_sequent__TOP__0(vlSelf);
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
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_23060336___024root___ctor_var_reset(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = 0;
    vlSelf->reset = 0;
    vlSelf->io_halt = 0;
    vlSelf->io_halt_ret = 0;
    vlSelf->io_NPC = 0;
    vlSelf->io_PC = 0;
    vlSelf->io_inst = 0;
    vlSelf->io_mcause = 0;
    vlSelf->io_mstatus = 0;
    vlSelf->io_iduopcode = 0;
    vlSelf->io_idupcmux = 0;
    vlSelf->io_iduinst = 0;
    vlSelf->io_exupcmux = 0;
    vlSelf->io_ifuvalid = 0;
    vlSelf->io_ifuready = 0;
    vlSelf->io_iduvalid = 0;
    vlSelf->io_iduready = 0;
    vlSelf->io_exuvalid = 0;
    vlSelf->io_exuready = 0;
    vlSelf->io_lsuvalid = 0;
    vlSelf->io_lsuready = 0;
    vlSelf->io_lsuarvalid = 0;
    vlSelf->io_lsuarready = 0;
    vlSelf->io_lsuawvalid = 0;
    vlSelf->io_lsuawready = 0;
    vlSelf->io_lsurready = 0;
    vlSelf->io_lsurvalid = 0;
    vlSelf->io_lsuwready = 0;
    vlSelf->io_lsuwvalid = 0;
    vlSelf->io_wbuvalid = 0;
    vlSelf->io_wbuready = 0;
    vlSelf->io_MemtoReg = 0;
    vlSelf->io_iduMemWr = 0;
    vlSelf->io_exuMemWr = 0;
    vlSelf->io_lsuMemWr = 0;
    vlSelf->io_idupc = 0;
    vlSelf->io_exupc = 0;
    vlSelf->io_alumux = 0;
    vlSelf->io_pcadd = 0;
    vlSelf->io_pca = 0;
    vlSelf->io_pcb = 0;
    vlSelf->io_ina = 0;
    vlSelf->io_inb = 0;
    vlSelf->io_lsuaraddr = 0;
    vlSelf->io_lsurdata = 0;
    vlSelf->io_lsuawaddr = 0;
    vlSelf->io_lsuwdata = 0;
    vlSelf->io_wburesult = 0;
    vlSelf->io_regrs1 = 0;
    vlSelf->io_regrs2 = 0;
    vlSelf->io_regsrc1 = 0;
    vlSelf->io_regsrc2 = 0;
    vlSelf->io_regrd = 0;
    vlSelf->io_regwen = 0;
    vlSelf->io_regwaddr = 0;
    vlSelf->io_imm = 0;
    vlSelf->ysyx_23060336__DOT___reg_io_wen_T = 0;
    vlSelf->ysyx_23060336__DOT___sdram_wready = 0;
    vlSelf->ysyx_23060336__DOT___sdram_rvalid = 0;
    vlSelf->ysyx_23060336__DOT___sdram_rdata = 0;
    vlSelf->ysyx_23060336__DOT___xbar_io_ifu_rvalid = 0;
    vlSelf->ysyx_23060336__DOT___lsu_io_wen = 0;
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_AluMux = 0;
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_AluSel = 0;
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_MemNum = 0;
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_RegNum = 0;
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_CsrWr = 0;
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_Branch = 0;
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_mret = 0;
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_ecall = 0;
    vlSelf->ysyx_23060336__DOT___ifu_io_out_bits_pc = 0;
    vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst = 0;
    vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_pc = 0;
    vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_halt = 0;
    vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_rd = 0;
    vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_pc = 0;
    vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_imm = 0;
    vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_zimm = 0;
    vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_src1 = 0;
    vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_src2 = 0;
    vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_csr = 0;
    vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Csr = 0;
    vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_PcMux = 0;
    vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux = 0;
    vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel = 0;
    vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_MemNum = 0;
    vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_RegNum = 0;
    vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_CsrWr = 0;
    vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_MemWr = 0;
    vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_RegWr = 0;
    vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_MemtoReg = 0;
    vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Branch = 0;
    vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_mret = 0;
    vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_ecall = 0;
    vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Recsr = 0;
    vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_halt = 0;
    vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result = 0;
    vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_src2 = 0;
    vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_Csr = 0;
    vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_csr = 0;
    vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemNum = 0;
    vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_RegNum = 0;
    vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_rd = 0;
    vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemtoReg = 0;
    vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemWr = 0;
    vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_RegWr = 0;
    vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_CsrWr = 0;
    vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_halt = 0;
    vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_DataOut = 0;
    vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_result = 0;
    vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_csr = 0;
    vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_Csr = 0;
    vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_rd = 0;
    vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegNum = 0;
    vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_CsrWr = 0;
    vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegWr = 0;
    vlSelf->ysyx_23060336__DOT__ifu__DOT__delay1 = 0;
    vlSelf->ysyx_23060336__DOT__ifu__DOT__delay2 = 0;
    vlSelf->ysyx_23060336__DOT__ifu__DOT__delay3 = 0;
    vlSelf->ysyx_23060336__DOT__ifu__DOT__PC = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT__immNum_invInputs = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT___GEN = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT__casez_tmp = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT___instType_andMatrixOutputs_T_2 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT___instType_andMatrixOutputs_T_3 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT___instType_andMatrixOutputs_T_6 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT___instType_andMatrixOutputs_T_8 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h212147f6__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hec6b80fc__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf34c4125__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h21204722__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3804dd5e__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hbfcac208__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3d112f69__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h67611bab__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h70d45b70__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hd59316c1__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hc336bed0__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h0153a42f__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hefa2e071__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h5aced193__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hb80b8518__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h666d1c0e__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3c1cf46e__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h7ff03fbd__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h599a574f__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf05e5a41__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h055e0551__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hd237b447__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h9dd17daa__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3460ce47__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3abbe375__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf3854a25__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3ef82d77__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hc580b573__0 = 0;
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hec690571__0 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT___alu_io_result = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__casez_tmp = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__PCMux = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT____VdfgTmp_h2220bc55__0 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT___addsub_io_overflow = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__cin = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT___out13_T_1 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__addsub__DOT__t_no_cin = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__addsub__DOT___sum_T_1 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_1 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_0 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_1 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_2 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_3 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_4 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_5 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_6 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_7 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_8 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_9 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_10 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_11 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_12 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_13 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_14 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_15 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_16 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_17 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_18 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_19 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_20 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_21 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_22 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_23 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_24 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_25 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_26 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_27 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_28 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_29 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_30 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_2 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_31 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_32 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_33 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_34 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_35 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_36 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_37 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_38 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_39 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_40 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_41 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_42 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_43 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_44 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_45 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_46 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_47 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_48 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_49 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_50 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_51 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_52 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_53 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_54 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_55 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_56 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_57 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_58 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_59 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_60 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_61 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_62 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_3 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_63 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_64 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_65 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_66 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_67 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_68 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_69 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_70 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_71 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_72 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_73 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_74 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_75 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_76 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_77 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_78 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_79 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_80 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_81 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_82 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_83 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_84 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_85 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_86 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_87 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_88 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_89 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_90 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_91 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_92 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_93 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_94 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_95 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_96 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_97 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_98 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_99 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_100 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_101 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_102 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_103 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_104 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_105 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_106 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_107 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_108 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_109 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_110 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_111 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_112 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_113 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_114 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_115 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_116 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_117 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_118 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_119 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_120 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_121 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_122 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_123 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_124 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_125 = 0;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_126 = 0;
    vlSelf->ysyx_23060336__DOT__lsu__DOT__delay1 = 0;
    vlSelf->ysyx_23060336__DOT__lsu__DOT__delay2 = 0;
    vlSelf->ysyx_23060336__DOT__lsu__DOT__rdatadelay1 = 0;
    vlSelf->ysyx_23060336__DOT__lsu__DOT__rdatadelay2 = 0;
    vlSelf->ysyx_23060336__DOT__lsu__DOT__rdatadelay = 0;
    vlSelf->ysyx_23060336__DOT__lsu__DOT___io_rdata_T = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory[__Vi0] = 0;
    }
    vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid = 0;
    vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt = 0;
    vlSelf->ysyx_23060336__DOT__xbar__DOT__awid_halt = 0;
    vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr = 0;
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_1 = 0;
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_2 = 0;
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_3 = 0;
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_4 = 0;
    vlSelf->ysyx_23060336__DOT__xbar__DOT__rdata = 0;
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_5 = 0;
    vlSelf->ysyx_23060336__DOT__sdram__DOT__bvalid = 0;
    vlSelf->ysyx_23060336__DOT__sdram__DOT__resp = 0;
    vlSelf->ysyx_23060336__DOT__sdram__DOT__RLFSR = 0;
    vlSelf->ysyx_23060336__DOT__sdram__DOT__WLFSR = 0;
    vlSelf->ysyx_23060336__DOT__clint__DOT__mtimel = 0;
    vlSelf->ysyx_23060336__DOT__clint__DOT__mtimeh = 0;
    vlSelf->ysyx_23060336__DOT__ebreak__DOT__tmp_halt = 0;
    vlSelf->__Vtrigrprev__TOP__clock = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

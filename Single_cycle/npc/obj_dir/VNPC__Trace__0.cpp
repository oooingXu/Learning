// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VNPC__Syms.h"


void VNPC___024root__trace_chg_sub_0(VNPC___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VNPC___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root__trace_chg_top_0\n"); );
    // Init
    VNPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VNPC___024root*>(voidSelf);
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VNPC___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VNPC___024root__trace_chg_sub_0(VNPC___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->NPC__DOT__stop));
        bufp->chgIData(oldp+1,(vlSelf->NPC__DOT__pc),32);
        bufp->chgBit(oldp+2,((0x100073U == vlSelf->NPC__DOT___ifu_inst)));
        bufp->chgBit(oldp+3,(vlSelf->NPC__DOT___idu_io_Branch));
        bufp->chgBit(oldp+4,((IData)(((0x73U == (0x7fU 
                                                 & vlSelf->NPC__DOT___ifu_inst)) 
                                      & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h40c0d4db__0)))));
        bufp->chgBit(oldp+5,(vlSelf->NPC__DOT___idu_io_mret));
        bufp->chgBit(oldp+6,((0xffffffffU == vlSelf->NPC__DOT__idu__DOT___io_ecall_andMatrixOutputs_T)));
        bufp->chgIData(oldp+7,(vlSelf->NPC__DOT___idu_io_imm),32);
        bufp->chgIData(oldp+8,((0x1fU & (vlSelf->NPC__DOT___ifu_inst 
                                         >> 0xfU))),32);
        bufp->chgIData(oldp+9,(vlSelf->NPC__DOT__idu__DOT___Csr_ext_R2_data),32);
        bufp->chgIData(oldp+10,(vlSelf->NPC__DOT__idu__DOT__Csr_ext__DOT__Memory
                                [0x305U]),32);
        bufp->chgIData(oldp+11,(vlSelf->NPC__DOT__idu__DOT__Csr_ext__DOT__Memory
                                [0x341U]),32);
        bufp->chgCData(oldp+12,((((IData)(((7U == (7U 
                                                   & vlSelf->NPC__DOT___ifu_inst)) 
                                           & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hcfa7c5ac__0))) 
                                  << 1U) | ((IData)(vlSelf->NPC__DOT___idu_io_Branch) 
                                            | (IData)(
                                                      ((0xfU 
                                                        == 
                                                        (0xfU 
                                                         & vlSelf->NPC__DOT___ifu_inst)) 
                                                       & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h03617c08__0)))))),2);
        bufp->chgIData(oldp+13,(vlSelf->NPC__DOT__exu__DOT__casez_tmp),32);
        bufp->chgBit(oldp+14,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__cin));
        bufp->chgIData(oldp+15,((IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__AddSub__DOT___sum_T_1)),32);
        bufp->chgBit(oldp+16,((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__AddSub__DOT___sum_T_1))));
        bufp->chgBit(oldp+17,((1U & (IData)((vlSelf->NPC__DOT__exu__DOT__Alu__DOT__AddSub__DOT___sum_T_1 
                                             >> 0x20U)))));
        bufp->chgBit(oldp+18,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT___AddSub_io_overflow));
        bufp->chgIData(oldp+19,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__AddSub__DOT__t_no_cin),32);
        bufp->chgCData(oldp+20,((0x1fU & vlSelf->NPC__DOT__exu__DOT__casez_tmp)),5);
        bufp->chgIData(oldp+21,(((((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                    ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_126)
                                    : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                        ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn)
                                        : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                            ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_126)
                                            : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125)))) 
                                  << 0x1fU) | ((((0U 
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
                                                                                & (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_95)))))))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+22,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn));
        bufp->chgCData(oldp+23,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel),2);
        bufp->chgCData(oldp+24,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_1),2);
        bufp->chgBit(oldp+25,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp));
        bufp->chgBit(oldp+26,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_0));
        bufp->chgBit(oldp+27,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_1));
        bufp->chgBit(oldp+28,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_2));
        bufp->chgBit(oldp+29,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_3));
        bufp->chgBit(oldp+30,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_4));
        bufp->chgBit(oldp+31,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_5));
        bufp->chgBit(oldp+32,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_6));
        bufp->chgBit(oldp+33,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_7));
        bufp->chgBit(oldp+34,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_8));
        bufp->chgBit(oldp+35,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_9));
        bufp->chgBit(oldp+36,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_10));
        bufp->chgBit(oldp+37,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_11));
        bufp->chgBit(oldp+38,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_12));
        bufp->chgBit(oldp+39,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_13));
        bufp->chgBit(oldp+40,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_14));
        bufp->chgBit(oldp+41,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_15));
        bufp->chgBit(oldp+42,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_16));
        bufp->chgBit(oldp+43,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_17));
        bufp->chgBit(oldp+44,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_18));
        bufp->chgBit(oldp+45,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_19));
        bufp->chgBit(oldp+46,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_20));
        bufp->chgBit(oldp+47,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_21));
        bufp->chgBit(oldp+48,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_22));
        bufp->chgBit(oldp+49,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_23));
        bufp->chgBit(oldp+50,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_24));
        bufp->chgBit(oldp+51,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_25));
        bufp->chgBit(oldp+52,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_26));
        bufp->chgBit(oldp+53,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_27));
        bufp->chgBit(oldp+54,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_28));
        bufp->chgBit(oldp+55,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_29));
        bufp->chgBit(oldp+56,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_30));
        bufp->chgCData(oldp+57,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_2),2);
        bufp->chgBit(oldp+58,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_31));
        bufp->chgBit(oldp+59,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_32));
        bufp->chgBit(oldp+60,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_33));
        bufp->chgBit(oldp+61,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_34));
        bufp->chgBit(oldp+62,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_35));
        bufp->chgBit(oldp+63,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_36));
        bufp->chgBit(oldp+64,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_37));
        bufp->chgBit(oldp+65,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_38));
        bufp->chgBit(oldp+66,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_39));
        bufp->chgBit(oldp+67,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_40));
        bufp->chgBit(oldp+68,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_41));
        bufp->chgBit(oldp+69,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_42));
        bufp->chgBit(oldp+70,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_43));
        bufp->chgBit(oldp+71,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_44));
        bufp->chgBit(oldp+72,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_45));
        bufp->chgBit(oldp+73,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_46));
        bufp->chgBit(oldp+74,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_47));
        bufp->chgBit(oldp+75,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_48));
        bufp->chgBit(oldp+76,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_49));
        bufp->chgBit(oldp+77,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_50));
        bufp->chgBit(oldp+78,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_51));
        bufp->chgBit(oldp+79,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_52));
        bufp->chgBit(oldp+80,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_53));
        bufp->chgBit(oldp+81,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_54));
        bufp->chgBit(oldp+82,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_55));
        bufp->chgBit(oldp+83,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_56));
        bufp->chgBit(oldp+84,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_57));
        bufp->chgBit(oldp+85,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_58));
        bufp->chgBit(oldp+86,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_59));
        bufp->chgBit(oldp+87,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_60));
        bufp->chgBit(oldp+88,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_61));
        bufp->chgBit(oldp+89,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_62));
        bufp->chgCData(oldp+90,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_3),2);
        bufp->chgBit(oldp+91,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_63));
        bufp->chgBit(oldp+92,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_64));
        bufp->chgBit(oldp+93,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_65));
        bufp->chgBit(oldp+94,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_66));
        bufp->chgBit(oldp+95,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_67));
        bufp->chgBit(oldp+96,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_68));
        bufp->chgBit(oldp+97,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_69));
        bufp->chgBit(oldp+98,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_70));
        bufp->chgBit(oldp+99,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_71));
        bufp->chgBit(oldp+100,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_72));
        bufp->chgBit(oldp+101,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_73));
        bufp->chgBit(oldp+102,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_74));
        bufp->chgBit(oldp+103,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_75));
        bufp->chgBit(oldp+104,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_76));
        bufp->chgBit(oldp+105,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_77));
        bufp->chgBit(oldp+106,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_78));
        bufp->chgBit(oldp+107,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_79));
        bufp->chgBit(oldp+108,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_80));
        bufp->chgBit(oldp+109,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_81));
        bufp->chgBit(oldp+110,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_82));
        bufp->chgBit(oldp+111,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_83));
        bufp->chgBit(oldp+112,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_84));
        bufp->chgBit(oldp+113,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_85));
        bufp->chgBit(oldp+114,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_86));
        bufp->chgBit(oldp+115,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_87));
        bufp->chgBit(oldp+116,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_88));
        bufp->chgBit(oldp+117,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_89));
        bufp->chgBit(oldp+118,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_90));
        bufp->chgBit(oldp+119,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_91));
        bufp->chgBit(oldp+120,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_92));
        bufp->chgBit(oldp+121,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_93));
        bufp->chgBit(oldp+122,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_94));
        bufp->chgCData(oldp+123,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4),2);
        bufp->chgBit(oldp+124,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_95));
        bufp->chgBit(oldp+125,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_96));
        bufp->chgBit(oldp+126,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_97));
        bufp->chgBit(oldp+127,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_98));
        bufp->chgBit(oldp+128,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_99));
        bufp->chgBit(oldp+129,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_100));
        bufp->chgBit(oldp+130,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_101));
        bufp->chgBit(oldp+131,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_102));
        bufp->chgBit(oldp+132,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_103));
        bufp->chgBit(oldp+133,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_104));
        bufp->chgBit(oldp+134,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_105));
        bufp->chgBit(oldp+135,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_106));
        bufp->chgBit(oldp+136,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_107));
        bufp->chgBit(oldp+137,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_108));
        bufp->chgBit(oldp+138,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_109));
        bufp->chgBit(oldp+139,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_110));
        bufp->chgBit(oldp+140,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_111));
        bufp->chgBit(oldp+141,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_112));
        bufp->chgBit(oldp+142,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_113));
        bufp->chgBit(oldp+143,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_114));
        bufp->chgBit(oldp+144,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_115));
        bufp->chgBit(oldp+145,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_116));
        bufp->chgBit(oldp+146,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_117));
        bufp->chgBit(oldp+147,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_118));
        bufp->chgBit(oldp+148,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_119));
        bufp->chgBit(oldp+149,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_120));
        bufp->chgBit(oldp+150,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_121));
        bufp->chgBit(oldp+151,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_122));
        bufp->chgBit(oldp+152,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_123));
        bufp->chgBit(oldp+153,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_124));
        bufp->chgBit(oldp+154,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125));
        bufp->chgBit(oldp+155,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_126));
        bufp->chgBit(oldp+156,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_96)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_97)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_96)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_95))))));
        bufp->chgBit(oldp+157,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_95)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_96)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4)) 
                                        & (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_95))))));
        bufp->chgBit(oldp+158,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_98)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_99)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_98)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_97))))));
        bufp->chgBit(oldp+159,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_97)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_98)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_97)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_96))))));
        bufp->chgBit(oldp+160,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_100)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_101)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_100)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_99))))));
        bufp->chgBit(oldp+161,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_99)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_100)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_99)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_98))))));
        bufp->chgBit(oldp+162,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_102)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_103)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_102)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_101))))));
        bufp->chgBit(oldp+163,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_101)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_102)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_101)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_100))))));
        bufp->chgBit(oldp+164,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_104)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_105)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_104)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_103))))));
        bufp->chgBit(oldp+165,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_103)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_104)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_103)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_102))))));
        bufp->chgBit(oldp+166,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_106)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_107)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_106)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_105))))));
        bufp->chgBit(oldp+167,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_105)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_106)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_105)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_104))))));
        bufp->chgBit(oldp+168,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_108)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_109)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_108)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_107))))));
        bufp->chgBit(oldp+169,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_107)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_108)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_107)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_106))))));
        bufp->chgBit(oldp+170,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_110)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_111)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_110)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_109))))));
        bufp->chgBit(oldp+171,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_109)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_110)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_109)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_108))))));
        bufp->chgBit(oldp+172,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_112)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_113)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_112)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_111))))));
        bufp->chgBit(oldp+173,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_111)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_112)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_111)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_110))))));
        bufp->chgBit(oldp+174,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_114)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_115)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_114)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_113))))));
        bufp->chgBit(oldp+175,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_113)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_114)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_113)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_112))))));
        bufp->chgBit(oldp+176,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_116)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_117)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_116)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_115))))));
        bufp->chgBit(oldp+177,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_115)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_116)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_115)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_114))))));
        bufp->chgBit(oldp+178,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_118)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_119)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_118)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_117))))));
        bufp->chgBit(oldp+179,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_117)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_118)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_117)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_116))))));
        bufp->chgBit(oldp+180,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_120)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_121)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_120)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_119))))));
        bufp->chgBit(oldp+181,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_119)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_120)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_119)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_118))))));
        bufp->chgBit(oldp+182,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_122)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_123)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_122)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_121))))));
        bufp->chgBit(oldp+183,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_121)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_122)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_121)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_120))))));
        bufp->chgBit(oldp+184,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_124)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_124)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_123))))));
        bufp->chgBit(oldp+185,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_123)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_124)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_123)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_122))))));
        bufp->chgBit(oldp+186,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_126)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_126)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125))))));
        bufp->chgBit(oldp+187,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_126)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_124))))));
        bufp->chgIData(oldp+188,(vlSelf->NPC__DOT___ifu_inst),32);
        bufp->chgCData(oldp+189,(vlSelf->NPC__DOT___idu_io_RegNum),3);
        bufp->chgBit(oldp+190,((1U & vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory
                                [0xaU])));
        bufp->chgCData(oldp+191,(vlSelf->NPC__DOT__idu__DOT__immNum_invInputs),7);
        bufp->chgCData(oldp+192,((7U & (~ (vlSelf->NPC__DOT___ifu_inst 
                                           >> 2U)))),3);
        bufp->chgCData(oldp+193,((0x1fU & (~ (vlSelf->NPC__DOT___ifu_inst 
                                              >> 2U)))),5);
        bufp->chgIData(oldp+194,((0x3fffffffU & (~ 
                                                 (vlSelf->NPC__DOT___ifu_inst 
                                                  >> 2U)))),30);
        bufp->chgCData(oldp+195,((3U & (~ (vlSelf->NPC__DOT___ifu_inst 
                                           >> 2U)))),2);
        bufp->chgCData(oldp+196,((0xffU & (~ (IData)(vlSelf->NPC__DOT__idu__DOT___GEN)))),8);
        bufp->chgSData(oldp+197,(vlSelf->NPC__DOT__idu__DOT__AluSela_invInputs),15);
        bufp->chgIData(oldp+198,(vlSelf->NPC__DOT__idu__DOT__casez_tmp),32);
        bufp->chgCData(oldp+199,(vlSelf->NPC__DOT__idu__DOT__io_rs1),5);
        bufp->chgCData(oldp+200,(vlSelf->NPC__DOT__idu__DOT__io_rs2),5);
        bufp->chgSData(oldp+201,((vlSelf->NPC__DOT___ifu_inst 
                                  >> 0x14U)),12);
        bufp->chgIData(oldp+202,(((0xffffffffU == vlSelf->NPC__DOT__idu__DOT___io_ecall_andMatrixOutputs_T)
                                   ? vlSelf->NPC__DOT__pc
                                   : vlSelf->NPC__DOT__idu__DOT__Csr_ext__DOT__Memory
                                  [0x341U])),32);
        bufp->chgIData(oldp+203,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory
                                 [vlSelf->NPC__DOT__idu__DOT__io_rs2]),32);
        bufp->chgIData(oldp+204,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory
                                 [vlSelf->NPC__DOT__idu__DOT__io_rs1]),32);
        bufp->chgIData(oldp+205,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory
                                 [0xaU]),32);
        bufp->chgIData(oldp+206,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[0]),32);
        bufp->chgIData(oldp+207,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[1]),32);
        bufp->chgIData(oldp+208,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[2]),32);
        bufp->chgIData(oldp+209,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[3]),32);
        bufp->chgIData(oldp+210,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[4]),32);
        bufp->chgIData(oldp+211,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[5]),32);
        bufp->chgIData(oldp+212,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[6]),32);
        bufp->chgIData(oldp+213,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[7]),32);
        bufp->chgIData(oldp+214,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[8]),32);
        bufp->chgIData(oldp+215,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[9]),32);
        bufp->chgIData(oldp+216,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[10]),32);
        bufp->chgIData(oldp+217,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[11]),32);
        bufp->chgIData(oldp+218,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[12]),32);
        bufp->chgIData(oldp+219,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[13]),32);
        bufp->chgIData(oldp+220,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[14]),32);
        bufp->chgIData(oldp+221,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[15]),32);
        bufp->chgIData(oldp+222,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[16]),32);
        bufp->chgIData(oldp+223,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[17]),32);
        bufp->chgIData(oldp+224,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[18]),32);
        bufp->chgIData(oldp+225,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[19]),32);
        bufp->chgIData(oldp+226,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[20]),32);
        bufp->chgIData(oldp+227,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[21]),32);
        bufp->chgIData(oldp+228,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[22]),32);
        bufp->chgIData(oldp+229,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[23]),32);
        bufp->chgIData(oldp+230,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[24]),32);
        bufp->chgIData(oldp+231,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[25]),32);
        bufp->chgIData(oldp+232,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[26]),32);
        bufp->chgIData(oldp+233,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[27]),32);
        bufp->chgIData(oldp+234,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[28]),32);
        bufp->chgIData(oldp+235,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[29]),32);
        bufp->chgIData(oldp+236,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[30]),32);
        bufp->chgIData(oldp+237,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[31]),32);
        bufp->chgIData(oldp+238,(vlSelf->NPC__DOT__wbu__DOT___lsu_DataOut),32);
    }
    bufp->chgBit(oldp+239,(vlSelf->clock));
    bufp->chgBit(oldp+240,(vlSelf->reset));
    bufp->chgBit(oldp+241,(vlSelf->io_reset));
    bufp->chgCData(oldp+242,(vlSelf->io_rd),5);
    bufp->chgIData(oldp+243,(vlSelf->io_src1),32);
    bufp->chgIData(oldp+244,(vlSelf->io_src2),32);
    bufp->chgIData(oldp+245,(vlSelf->io_halt_ret),32);
    bufp->chgIData(oldp+246,(vlSelf->io_PC),32);
    bufp->chgIData(oldp+247,(vlSelf->io_NPC),32);
    bufp->chgIData(oldp+248,(vlSelf->io_halt),32);
    bufp->chgCData(oldp+249,(vlSelf->io_instType),3);
    bufp->chgIData(oldp+250,(vlSelf->io_result),32);
    bufp->chgIData(oldp+251,(vlSelf->io_ina),32);
    bufp->chgIData(oldp+252,(vlSelf->io_inb),32);
    bufp->chgIData(oldp+253,(vlSelf->io_inst),32);
    bufp->chgIData(oldp+254,(vlSelf->io_DataOut),32);
    bufp->chgCData(oldp+255,(vlSelf->io_AluMux),3);
    bufp->chgCData(oldp+256,(vlSelf->io_AluSel),4);
    bufp->chgCData(oldp+257,(vlSelf->io_PCMux),4);
    bufp->chgCData(oldp+258,(vlSelf->io_MemNum),2);
    bufp->chgBit(oldp+259,(vlSelf->io_RegWr));
    bufp->chgBit(oldp+260,(vlSelf->io_MemWr));
    bufp->chgBit(oldp+261,(vlSelf->io_stop));
    bufp->chgBit(oldp+262,(vlSelf->io_MemtoReg));
    bufp->chgIData(oldp+263,(vlSelf->NPC__DOT___DpiEbreak_io_isbreak_T),32);
    bufp->chgBit(oldp+264,((1U & (IData)(vlSelf->io_AluSel))));
    bufp->chgBit(oldp+265,((1U & ((IData)(vlSelf->io_AluSel) 
                                  >> 1U))));
    bufp->chgCData(oldp+266,((((0x1ffU != ((0x100U 
                                            & (vlSelf->NPC__DOT___ifu_inst 
                                               << 8U)) 
                                           | ((0x80U 
                                               & (vlSelf->NPC__DOT___ifu_inst 
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
                                                          | (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hd8e30b4d__0)))))))) 
                               << 2U) | (IData)(vlSelf->io_MemNum))),3);
    bufp->chgCData(oldp+267,(vlSelf->io_instType),4);
    bufp->chgIData(oldp+268,(((0U != (IData)(vlSelf->NPC__DOT__idu__DOT___io_CsrWr_orMatrixOutputs_T))
                               ? vlSelf->io_result : vlSelf->NPC__DOT__idu__DOT___Csr_ext_R2_data)),32);
    bufp->chgIData(oldp+269,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory
                             [vlSelf->io_rd]),32);
    bufp->chgIData(oldp+270,(((0U == (IData)(vlSelf->io_rd))
                               ? 0U : ((IData)(vlSelf->io_RegWr)
                                        ? ((IData)(vlSelf->io_MemtoReg)
                                            ? vlSelf->io_DataOut
                                            : vlSelf->io_result)
                                        : ((0U != (IData)(vlSelf->NPC__DOT__idu__DOT___io_CsrWr_orMatrixOutputs_T))
                                            ? vlSelf->NPC__DOT__idu__DOT___Csr_ext_R2_data
                                            : vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory
                                           [vlSelf->io_rd])))),32);
    bufp->chgIData(oldp+271,((((0x1ffU != ((0x100U 
                                            & (vlSelf->NPC__DOT___ifu_inst 
                                               << 8U)) 
                                           | ((0x80U 
                                               & (vlSelf->NPC__DOT___ifu_inst 
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
                                                          | (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hd8e30b4d__0)))))))) 
                               << 2U) | (IData)(vlSelf->io_MemNum))),32);
}

void VNPC___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root__trace_cleanup\n"); );
    // Init
    VNPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VNPC___024root*>(voidSelf);
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}

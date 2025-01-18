// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_23060336__Syms.h"


void Vysyx_23060336___024root__trace_chg_sub_0(Vysyx_23060336___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vysyx_23060336___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_23060336___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060336___024root*>(voidSelf);
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_23060336___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_23060336___024root__trace_chg_sub_0(Vysyx_23060336___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                               [0x341U]),32);
        bufp->chgIData(oldp+1,(vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                               [0x305U]),32);
        bufp->chgIData(oldp+2,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[0]),32);
        bufp->chgIData(oldp+3,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[1]),32);
        bufp->chgIData(oldp+4,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[2]),32);
        bufp->chgIData(oldp+5,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[3]),32);
        bufp->chgIData(oldp+6,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[4]),32);
        bufp->chgIData(oldp+7,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[5]),32);
        bufp->chgIData(oldp+8,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[6]),32);
        bufp->chgIData(oldp+9,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[7]),32);
        bufp->chgIData(oldp+10,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[8]),32);
        bufp->chgIData(oldp+11,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[9]),32);
        bufp->chgIData(oldp+12,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[10]),32);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[11]),32);
        bufp->chgIData(oldp+14,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[12]),32);
        bufp->chgIData(oldp+15,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[13]),32);
        bufp->chgIData(oldp+16,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[14]),32);
        bufp->chgIData(oldp+17,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[15]),32);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[16]),32);
        bufp->chgIData(oldp+19,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[17]),32);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[18]),32);
        bufp->chgIData(oldp+21,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[19]),32);
        bufp->chgIData(oldp+22,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[20]),32);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[21]),32);
        bufp->chgIData(oldp+24,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[22]),32);
        bufp->chgIData(oldp+25,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[23]),32);
        bufp->chgIData(oldp+26,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[24]),32);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[25]),32);
        bufp->chgIData(oldp+28,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[26]),32);
        bufp->chgIData(oldp+29,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[27]),32);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[28]),32);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[29]),32);
        bufp->chgIData(oldp+32,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[30]),32);
        bufp->chgIData(oldp+33,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgSData(oldp+34,((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                 >> 0x14U)),12);
        bufp->chgIData(oldp+35,(vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata),32);
        bufp->chgCData(oldp+36,((0x1fU & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                          >> 7U))),5);
        bufp->chgCData(oldp+37,((0x1fU & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+38,((0x1fU & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+39,((((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_MemNum_orMatrixOutputs_T_4)) 
                                  << 3U) | (((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_MemNum_orMatrixOutputs_T_4)) 
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
                                                                        | (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h6a9262f1__0)))))))))))))),4);
        bufp->chgCData(oldp+40,(vlSelf->ysyx_23060336__DOT___idu_exu_io_RegNum),3);
        bufp->chgBit(oldp+41,((0xffffffffU == vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_ecall_andMatrixOutputs_T)));
        bufp->chgBit(oldp+42,(vlSelf->ysyx_23060336__DOT___lsu_wbu_io_CsrWr));
        bufp->chgBit(oldp+43,(vlSelf->ysyx_23060336__DOT___lsu_wbu_io_axi_wlast));
        bufp->chgBit(oldp+44,((1U & ((IData)(((3U == 
                                               (0xfU 
                                                & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                              & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h14776bc0__0))) 
                                     | ((IData)((0x13U 
                                                 == 
                                                 (0x5bU 
                                                  & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata))) 
                                        | ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h52335523__0) 
                                           | (IData)(vlSelf->ysyx_23060336__DOT___lsu_wbu_io_CsrWr)))))));
        bufp->chgBit(oldp+45,(vlSelf->ysyx_23060336__DOT___idu_exu_io_MemtoReg));
        bufp->chgBit(oldp+46,((0U == vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)));
        bufp->chgBit(oldp+47,(vlSelf->ysyx_23060336__DOT___idu_exu_io_ebreak));
        bufp->chgCData(oldp+48,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__immNum_invInputs),7);
        bufp->chgCData(oldp+49,((0x1fU & (~ (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                             >> 2U)))),5);
        bufp->chgCData(oldp+50,((0xffU & (~ (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN)))),8);
        bufp->chgSData(oldp+51,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs),15);
        bufp->chgCData(oldp+52,((3U & (~ (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                          >> 2U)))),2);
        bufp->chgCData(oldp+53,((7U & (~ (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                          >> 2U)))),3);
        bufp->chgIData(oldp+54,((0x3fffffffU & (~ (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                   >> 2U)))),30);
        bufp->chgIData(oldp+55,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__casez_tmp),32);
        bufp->chgIData(oldp+56,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__imm),32);
        bufp->chgCData(oldp+57,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel),4);
        bufp->chgBit(oldp+58,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__cin));
        bufp->chgBit(oldp+59,((1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel))));
        bufp->chgBit(oldp+60,((1U & ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel) 
                                     >> 1U))));
        bufp->chgBit(oldp+61,(vlSelf->ysyx_23060336__DOT___sdram_lsu_rvalid));
        bufp->chgIData(oldp+62,(vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__sdramdata),32);
        bufp->chgBit(oldp+63,(vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__bvalid));
        bufp->chgCData(oldp+64,((3U & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__resp)),2);
        bufp->chgIData(oldp+65,(vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__resp),32);
        bufp->chgIData(oldp+66,(vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__Begin),32);
        bufp->chgBit(oldp+67,(vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__bvalid));
        bufp->chgCData(oldp+68,((3U & vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__resp)),2);
        bufp->chgIData(oldp+69,(vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__resp),32);
        bufp->chgIData(oldp+70,(vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__Begin),32);
        bufp->chgIData(oldp+71,((((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_MemNum_orMatrixOutputs_T_4)) 
                                  << 3U) | (((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_MemNum_orMatrixOutputs_T_4)) 
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
                                                                        | (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h6a9262f1__0)))))))))))))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+72,(vlSelf->ysyx_23060336__DOT__ifu__DOT__PC),32);
        bufp->chgBit(oldp+73,(vlSelf->ysyx_23060336__DOT__ifu__DOT__state));
        bufp->chgBit(oldp+74,(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__state));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+75,(vlSelf->ysyx_23060336__DOT___csr_io_rdata),32);
        bufp->chgIData(oldp+76,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___alu_io_result),32);
        bufp->chgBit(oldp+77,(vlSelf->ysyx_23060336__DOT____Vcellinp__csr__io_ecall));
        bufp->chgIData(oldp+78,(vlSelf->ysyx_23060336__DOT___reg_io_rdata1),32);
        bufp->chgIData(oldp+79,(vlSelf->ysyx_23060336__DOT___reg_io_rdata2),32);
        bufp->chgCData(oldp+80,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__PCMux),4);
        bufp->chgIData(oldp+81,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina),32);
        bufp->chgIData(oldp+82,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_inb),32);
        bufp->chgIData(oldp+83,((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__addsub__DOT___sum_T_1)),32);
        bufp->chgBit(oldp+84,((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__addsub__DOT___sum_T_1))));
        bufp->chgBit(oldp+85,((1U & (IData)((vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__addsub__DOT___sum_T_1 
                                             >> 0x20U)))));
        bufp->chgBit(oldp+86,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT___addsub_io_overflow));
        bufp->chgIData(oldp+87,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__addsub__DOT__t_no_cin),32);
        bufp->chgCData(oldp+88,((0x1fU & vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_inb)),5);
        bufp->chgIData(oldp+89,(((((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                    ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                    : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                        ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn)
                                        : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                            ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                            : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)))) 
                                  << 0x1fU) | ((((0U 
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
                                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_95)))))))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+90,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
        bufp->chgCData(oldp+91,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel),2);
        bufp->chgCData(oldp+92,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_1),2);
        bufp->chgBit(oldp+93,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp));
        bufp->chgBit(oldp+94,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_0));
        bufp->chgBit(oldp+95,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_1));
        bufp->chgBit(oldp+96,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_2));
        bufp->chgBit(oldp+97,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_3));
        bufp->chgBit(oldp+98,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_4));
        bufp->chgBit(oldp+99,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_5));
        bufp->chgBit(oldp+100,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_6));
        bufp->chgBit(oldp+101,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_7));
        bufp->chgBit(oldp+102,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_8));
        bufp->chgBit(oldp+103,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_9));
        bufp->chgBit(oldp+104,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_10));
        bufp->chgBit(oldp+105,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_11));
        bufp->chgBit(oldp+106,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_12));
        bufp->chgBit(oldp+107,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_13));
        bufp->chgBit(oldp+108,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_14));
        bufp->chgBit(oldp+109,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_15));
        bufp->chgBit(oldp+110,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_16));
        bufp->chgBit(oldp+111,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_17));
        bufp->chgBit(oldp+112,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_18));
        bufp->chgBit(oldp+113,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_19));
        bufp->chgBit(oldp+114,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_20));
        bufp->chgBit(oldp+115,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_21));
        bufp->chgBit(oldp+116,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_22));
        bufp->chgBit(oldp+117,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_23));
        bufp->chgBit(oldp+118,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_24));
        bufp->chgBit(oldp+119,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_25));
        bufp->chgBit(oldp+120,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_26));
        bufp->chgBit(oldp+121,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_27));
        bufp->chgBit(oldp+122,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_28));
        bufp->chgBit(oldp+123,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_29));
        bufp->chgBit(oldp+124,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_30));
        bufp->chgCData(oldp+125,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_2),2);
        bufp->chgBit(oldp+126,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_31));
        bufp->chgBit(oldp+127,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_32));
        bufp->chgBit(oldp+128,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_33));
        bufp->chgBit(oldp+129,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_34));
        bufp->chgBit(oldp+130,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_35));
        bufp->chgBit(oldp+131,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_36));
        bufp->chgBit(oldp+132,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_37));
        bufp->chgBit(oldp+133,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_38));
        bufp->chgBit(oldp+134,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_39));
        bufp->chgBit(oldp+135,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_40));
        bufp->chgBit(oldp+136,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_41));
        bufp->chgBit(oldp+137,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_42));
        bufp->chgBit(oldp+138,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_43));
        bufp->chgBit(oldp+139,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_44));
        bufp->chgBit(oldp+140,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_45));
        bufp->chgBit(oldp+141,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_46));
        bufp->chgBit(oldp+142,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_47));
        bufp->chgBit(oldp+143,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_48));
        bufp->chgBit(oldp+144,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_49));
        bufp->chgBit(oldp+145,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_50));
        bufp->chgBit(oldp+146,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_51));
        bufp->chgBit(oldp+147,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_52));
        bufp->chgBit(oldp+148,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_53));
        bufp->chgBit(oldp+149,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_54));
        bufp->chgBit(oldp+150,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_55));
        bufp->chgBit(oldp+151,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_56));
        bufp->chgBit(oldp+152,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_57));
        bufp->chgBit(oldp+153,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_58));
        bufp->chgBit(oldp+154,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_59));
        bufp->chgBit(oldp+155,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_60));
        bufp->chgBit(oldp+156,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_61));
        bufp->chgBit(oldp+157,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_62));
        bufp->chgCData(oldp+158,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_3),2);
        bufp->chgBit(oldp+159,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_63));
        bufp->chgBit(oldp+160,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_64));
        bufp->chgBit(oldp+161,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_65));
        bufp->chgBit(oldp+162,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_66));
        bufp->chgBit(oldp+163,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_67));
        bufp->chgBit(oldp+164,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_68));
        bufp->chgBit(oldp+165,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_69));
        bufp->chgBit(oldp+166,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_70));
        bufp->chgBit(oldp+167,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_71));
        bufp->chgBit(oldp+168,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_72));
        bufp->chgBit(oldp+169,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_73));
        bufp->chgBit(oldp+170,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_74));
        bufp->chgBit(oldp+171,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_75));
        bufp->chgBit(oldp+172,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_76));
        bufp->chgBit(oldp+173,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_77));
        bufp->chgBit(oldp+174,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_78));
        bufp->chgBit(oldp+175,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_79));
        bufp->chgBit(oldp+176,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_80));
        bufp->chgBit(oldp+177,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_81));
        bufp->chgBit(oldp+178,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_82));
        bufp->chgBit(oldp+179,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_83));
        bufp->chgBit(oldp+180,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_84));
        bufp->chgBit(oldp+181,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_85));
        bufp->chgBit(oldp+182,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_86));
        bufp->chgBit(oldp+183,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_87));
        bufp->chgBit(oldp+184,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_88));
        bufp->chgBit(oldp+185,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_89));
        bufp->chgBit(oldp+186,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_90));
        bufp->chgBit(oldp+187,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_91));
        bufp->chgBit(oldp+188,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_92));
        bufp->chgBit(oldp+189,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_93));
        bufp->chgBit(oldp+190,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_94));
        bufp->chgCData(oldp+191,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4),2);
        bufp->chgBit(oldp+192,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_95));
        bufp->chgBit(oldp+193,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96));
        bufp->chgBit(oldp+194,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97));
        bufp->chgBit(oldp+195,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98));
        bufp->chgBit(oldp+196,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99));
        bufp->chgBit(oldp+197,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100));
        bufp->chgBit(oldp+198,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101));
        bufp->chgBit(oldp+199,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102));
        bufp->chgBit(oldp+200,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103));
        bufp->chgBit(oldp+201,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104));
        bufp->chgBit(oldp+202,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105));
        bufp->chgBit(oldp+203,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106));
        bufp->chgBit(oldp+204,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107));
        bufp->chgBit(oldp+205,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108));
        bufp->chgBit(oldp+206,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109));
        bufp->chgBit(oldp+207,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110));
        bufp->chgBit(oldp+208,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111));
        bufp->chgBit(oldp+209,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112));
        bufp->chgBit(oldp+210,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113));
        bufp->chgBit(oldp+211,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114));
        bufp->chgBit(oldp+212,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115));
        bufp->chgBit(oldp+213,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116));
        bufp->chgBit(oldp+214,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117));
        bufp->chgBit(oldp+215,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118));
        bufp->chgBit(oldp+216,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119));
        bufp->chgBit(oldp+217,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120));
        bufp->chgBit(oldp+218,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121));
        bufp->chgBit(oldp+219,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122));
        bufp->chgBit(oldp+220,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123));
        bufp->chgBit(oldp+221,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124));
        bufp->chgBit(oldp+222,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125));
        bufp->chgBit(oldp+223,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126));
        bufp->chgBit(oldp+224,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_95))))));
        bufp->chgBit(oldp+225,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_95)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4)) 
                                        & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_95))))));
        bufp->chgBit(oldp+226,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97))))));
        bufp->chgBit(oldp+227,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96))))));
        bufp->chgBit(oldp+228,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99))))));
        bufp->chgBit(oldp+229,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98))))));
        bufp->chgBit(oldp+230,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101))))));
        bufp->chgBit(oldp+231,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100))))));
        bufp->chgBit(oldp+232,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103))))));
        bufp->chgBit(oldp+233,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102))))));
        bufp->chgBit(oldp+234,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105))))));
        bufp->chgBit(oldp+235,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104))))));
        bufp->chgBit(oldp+236,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107))))));
        bufp->chgBit(oldp+237,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106))))));
        bufp->chgBit(oldp+238,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109))))));
        bufp->chgBit(oldp+239,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108))))));
        bufp->chgBit(oldp+240,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111))))));
        bufp->chgBit(oldp+241,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110))))));
        bufp->chgBit(oldp+242,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113))))));
        bufp->chgBit(oldp+243,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112))))));
        bufp->chgBit(oldp+244,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115))))));
        bufp->chgBit(oldp+245,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114))))));
        bufp->chgBit(oldp+246,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117))))));
        bufp->chgBit(oldp+247,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116))))));
        bufp->chgBit(oldp+248,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119))))));
        bufp->chgBit(oldp+249,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118))))));
        bufp->chgBit(oldp+250,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121))))));
        bufp->chgBit(oldp+251,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120))))));
        bufp->chgBit(oldp+252,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123))))));
        bufp->chgBit(oldp+253,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122))))));
        bufp->chgBit(oldp+254,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125))))));
        bufp->chgBit(oldp+255,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124))))));
    }
    bufp->chgBit(oldp+256,(vlSelf->clock));
    bufp->chgBit(oldp+257,(vlSelf->reset));
    bufp->chgIData(oldp+258,(vlSelf->io_dnpc),32);
    bufp->chgIData(oldp+259,(vlSelf->io_pc),32);
    bufp->chgBit(oldp+260,(vlSelf->io_out_valid));
    bufp->chgBit(oldp+261,(((IData)(vlSelf->ysyx_23060336__DOT___sdram_ifu_rvalid) 
                            & (IData)(vlSelf->ysyx_23060336__DOT___lsu_wbu_io_CsrWr))));
    bufp->chgBit(oldp+262,(vlSelf->ysyx_23060336__DOT___sdram_ifu_rvalid));
    bufp->chgBit(oldp+263,(((0U == vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata) 
                            | (IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__state))));
    bufp->chgIData(oldp+264,(((IData)(vlSelf->reset)
                               ? 0x80000000U : (((IData)(vlSelf->ysyx_23060336__DOT__ifu__DOT__state) 
                                                 & (IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__state))
                                                 ? vlSelf->io_dnpc
                                                 : vlSelf->ysyx_23060336__DOT__ifu__DOT__PC))),32);
    bufp->chgIData(oldp+265,(((IData)(vlSelf->ysyx_23060336__DOT___lsu_wbu_io_CsrWr)
                               ? vlSelf->ysyx_23060336__DOT___csr_io_rdata
                               : (((2U == (IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_RegNum)) 
                                   | (5U == (IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_RegNum)))
                                   ? vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__DataOut
                                   : ((3U == (IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_RegNum))
                                       ? (0xffU & vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__DataOut)
                                       : ((4U == (IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_RegNum))
                                           ? (0xffffU 
                                              & vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__DataOut)
                                           : ((0U == (IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_RegNum))
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__DataOut 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__DataOut))
                                               : ((1U 
                                                   == (IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_RegNum))
                                                   ? 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__DataOut 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__DataOut))
                                                   : vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__DataOut))))))),32);
    bufp->chgBit(oldp+266,(vlSelf->ysyx_23060336__DOT___lsu_wbu_io_axi_awvalid));
    bufp->chgBit(oldp+267,(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__io_axi_arvalid_0));
    bufp->chgBit(oldp+268,(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__prepare));
    bufp->chgIData(oldp+269,(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__DataOut),32);
    bufp->chgBit(oldp+270,((((IData)(((3U == (0xfU 
                                              & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                      & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h14776bc0__0))) 
                             | ((IData)((0x13U == (0x5bU 
                                                   & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata))) 
                                | ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h52335523__0) 
                                   | (IData)(vlSelf->ysyx_23060336__DOT___lsu_wbu_io_CsrWr)))) 
                            & (IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__state))));
    bufp->chgIData(oldp+271,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory
                             [(0x1fU & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                        >> 0x14U))]),32);
    bufp->chgIData(oldp+272,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory
                             [(0x1fU & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                        >> 0xfU))]),32);
    bufp->chgBit(oldp+273,(((((IData)(((3U == (0xfU 
                                               & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                       & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h14776bc0__0))) 
                              | ((IData)((0x13U == 
                                          (0x5bU & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata))) 
                                 | ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h52335523__0) 
                                    | (IData)(vlSelf->ysyx_23060336__DOT___lsu_wbu_io_CsrWr)))) 
                             & (IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__state)) 
                            & (0U != (0x1fU & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                               >> 7U))))));
}

void Vysyx_23060336___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root__trace_cleanup\n"); );
    // Init
    Vysyx_23060336___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060336___024root*>(voidSelf);
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}

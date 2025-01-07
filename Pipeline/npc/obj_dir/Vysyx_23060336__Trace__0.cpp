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
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr),32);
        bufp->chgIData(oldp+1,(((0xa0000048U == vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr)
                                 ? vlSelf->ysyx_23060336__DOT__clint__DOT__mtimel
                                 : vlSelf->ysyx_23060336__DOT__clint__DOT__mtimeh)),32);
        bufp->chgIData(oldp+2,(vlSelf->ysyx_23060336__DOT___ifu_io_out_bits_pc),32);
        bufp->chgBit(oldp+3,(vlSelf->ysyx_23060336__DOT___xbar_io_ifu_rvalid));
        bufp->chgIData(oldp+4,(vlSelf->ysyx_23060336__DOT__xbar__DOT__rdata),32);
        bufp->chgBit(oldp+5,(vlSelf->ysyx_23060336__DOT___reg_io_wen_T));
        bufp->chgBit(oldp+6,(((IData)(vlSelf->ysyx_23060336__DOT___reg_io_wen_T) 
                              & (0U != (IData)(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_rd)))));
        bufp->chgBit(oldp+7,(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+8,(vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst),32);
        bufp->chgIData(oldp+9,(vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_pc),32);
        bufp->chgBit(oldp+10,(vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_halt));
        bufp->chgCData(oldp+11,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_rd),5);
        bufp->chgIData(oldp+12,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_pc),32);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_imm),32);
        bufp->chgIData(oldp+14,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_zimm),32);
        bufp->chgIData(oldp+15,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_src1),32);
        bufp->chgIData(oldp+16,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_src2),32);
        bufp->chgSData(oldp+17,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_csr),12);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Csr),32);
        bufp->chgCData(oldp+19,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_PcMux),2);
        bufp->chgCData(oldp+20,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux),3);
        bufp->chgCData(oldp+21,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel),4);
        bufp->chgCData(oldp+22,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_MemNum),3);
        bufp->chgCData(oldp+23,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_RegNum),3);
        bufp->chgBit(oldp+24,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_CsrWr));
        bufp->chgBit(oldp+25,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_MemWr));
        bufp->chgBit(oldp+26,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_RegWr));
        bufp->chgBit(oldp+27,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_MemtoReg));
        bufp->chgBit(oldp+28,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Branch));
        bufp->chgBit(oldp+29,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_mret));
        bufp->chgBit(oldp+30,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_ecall));
        bufp->chgBit(oldp+31,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Recsr));
        bufp->chgBit(oldp+32,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_halt));
        bufp->chgIData(oldp+33,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result),32);
        bufp->chgIData(oldp+34,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_src2),32);
        bufp->chgIData(oldp+35,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_Csr),32);
        bufp->chgSData(oldp+36,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_csr),12);
        bufp->chgCData(oldp+37,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemNum),3);
        bufp->chgCData(oldp+38,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_RegNum),3);
        bufp->chgCData(oldp+39,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_rd),5);
        bufp->chgBit(oldp+40,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemtoReg));
        bufp->chgBit(oldp+41,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemWr));
        bufp->chgBit(oldp+42,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_RegWr));
        bufp->chgBit(oldp+43,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_CsrWr));
        bufp->chgBit(oldp+44,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_halt));
        bufp->chgIData(oldp+45,(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_DataOut),32);
        bufp->chgIData(oldp+46,(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_result),32);
        bufp->chgSData(oldp+47,(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_csr),12);
        bufp->chgIData(oldp+48,(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_Csr),32);
        bufp->chgCData(oldp+49,(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_rd),5);
        bufp->chgCData(oldp+50,(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegNum),3);
        bufp->chgBit(oldp+51,(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_CsrWr));
        bufp->chgBit(oldp+52,(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegWr));
        bufp->chgIData(oldp+53,(vlSelf->ysyx_23060336__DOT__clint__DOT__mtimel),32);
        bufp->chgIData(oldp+54,(vlSelf->ysyx_23060336__DOT__clint__DOT__mtimeh),32);
        bufp->chgSData(oldp+55,((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                 >> 0x14U)),12);
        bufp->chgIData(oldp+56,(vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                                [(vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                  >> 0x14U)]),32);
        bufp->chgIData(oldp+57,(vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                                [0x341U]),32);
        bufp->chgIData(oldp+58,(vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                                [0x305U]),32);
        bufp->chgIData(oldp+59,(vlSelf->ysyx_23060336__DOT__ebreak__DOT__tmp_halt),32);
        bufp->chgIData(oldp+60,(vlSelf->ysyx_23060336__DOT__exu__DOT___alu_io_result),32);
        bufp->chgIData(oldp+61,(vlSelf->ysyx_23060336__DOT__exu__DOT__casez_tmp),32);
        bufp->chgCData(oldp+62,(vlSelf->ysyx_23060336__DOT__exu__DOT__PCMux),4);
        bufp->chgBit(oldp+63,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__cin));
        bufp->chgIData(oldp+64,((IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__addsub__DOT___sum_T_1)),32);
        bufp->chgBit(oldp+65,((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__addsub__DOT___sum_T_1))));
        bufp->chgBit(oldp+66,((1U & (IData)((vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__addsub__DOT___sum_T_1 
                                             >> 0x20U)))));
        bufp->chgBit(oldp+67,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT___addsub_io_overflow));
        bufp->chgIData(oldp+68,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__addsub__DOT__t_no_cin),32);
        bufp->chgCData(oldp+69,((0x1fU & vlSelf->ysyx_23060336__DOT__exu__DOT__casez_tmp)),5);
        bufp->chgBit(oldp+70,((1U & (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel))));
        bufp->chgBit(oldp+71,((1U & ((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel) 
                                     >> 1U))));
        bufp->chgIData(oldp+72,(((((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                    ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                    : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                        ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn)
                                        : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                            ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                            : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)))) 
                                  << 0x1fU) | ((((0U 
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
                                                                                & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_95)))))))))))))))))))))))))))))))))))),32);
        bufp->chgBit(oldp+73,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        bufp->chgCData(oldp+74,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel),2);
        bufp->chgCData(oldp+75,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_1),2);
        bufp->chgBit(oldp+76,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp));
        bufp->chgBit(oldp+77,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_0));
        bufp->chgBit(oldp+78,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_1));
        bufp->chgBit(oldp+79,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_2));
        bufp->chgBit(oldp+80,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_3));
        bufp->chgBit(oldp+81,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_4));
        bufp->chgBit(oldp+82,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_5));
        bufp->chgBit(oldp+83,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_6));
        bufp->chgBit(oldp+84,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_7));
        bufp->chgBit(oldp+85,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_8));
        bufp->chgBit(oldp+86,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_9));
        bufp->chgBit(oldp+87,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_10));
        bufp->chgBit(oldp+88,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_11));
        bufp->chgBit(oldp+89,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_12));
        bufp->chgBit(oldp+90,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_13));
        bufp->chgBit(oldp+91,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_14));
        bufp->chgBit(oldp+92,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_15));
        bufp->chgBit(oldp+93,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_16));
        bufp->chgBit(oldp+94,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_17));
        bufp->chgBit(oldp+95,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_18));
        bufp->chgBit(oldp+96,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_19));
        bufp->chgBit(oldp+97,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_20));
        bufp->chgBit(oldp+98,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_21));
        bufp->chgBit(oldp+99,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_22));
        bufp->chgBit(oldp+100,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_23));
        bufp->chgBit(oldp+101,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_24));
        bufp->chgBit(oldp+102,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_25));
        bufp->chgBit(oldp+103,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_26));
        bufp->chgBit(oldp+104,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_27));
        bufp->chgBit(oldp+105,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_28));
        bufp->chgBit(oldp+106,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_29));
        bufp->chgBit(oldp+107,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_30));
        bufp->chgCData(oldp+108,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_2),2);
        bufp->chgBit(oldp+109,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_31));
        bufp->chgBit(oldp+110,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_32));
        bufp->chgBit(oldp+111,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_33));
        bufp->chgBit(oldp+112,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_34));
        bufp->chgBit(oldp+113,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_35));
        bufp->chgBit(oldp+114,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_36));
        bufp->chgBit(oldp+115,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_37));
        bufp->chgBit(oldp+116,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_38));
        bufp->chgBit(oldp+117,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_39));
        bufp->chgBit(oldp+118,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_40));
        bufp->chgBit(oldp+119,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_41));
        bufp->chgBit(oldp+120,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_42));
        bufp->chgBit(oldp+121,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_43));
        bufp->chgBit(oldp+122,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_44));
        bufp->chgBit(oldp+123,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_45));
        bufp->chgBit(oldp+124,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_46));
        bufp->chgBit(oldp+125,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_47));
        bufp->chgBit(oldp+126,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_48));
        bufp->chgBit(oldp+127,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_49));
        bufp->chgBit(oldp+128,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_50));
        bufp->chgBit(oldp+129,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_51));
        bufp->chgBit(oldp+130,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_52));
        bufp->chgBit(oldp+131,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_53));
        bufp->chgBit(oldp+132,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_54));
        bufp->chgBit(oldp+133,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_55));
        bufp->chgBit(oldp+134,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_56));
        bufp->chgBit(oldp+135,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_57));
        bufp->chgBit(oldp+136,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_58));
        bufp->chgBit(oldp+137,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_59));
        bufp->chgBit(oldp+138,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_60));
        bufp->chgBit(oldp+139,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_61));
        bufp->chgBit(oldp+140,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_62));
        bufp->chgCData(oldp+141,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_3),2);
        bufp->chgBit(oldp+142,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_63));
        bufp->chgBit(oldp+143,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_64));
        bufp->chgBit(oldp+144,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_65));
        bufp->chgBit(oldp+145,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_66));
        bufp->chgBit(oldp+146,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_67));
        bufp->chgBit(oldp+147,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_68));
        bufp->chgBit(oldp+148,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_69));
        bufp->chgBit(oldp+149,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_70));
        bufp->chgBit(oldp+150,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_71));
        bufp->chgBit(oldp+151,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_72));
        bufp->chgBit(oldp+152,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_73));
        bufp->chgBit(oldp+153,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_74));
        bufp->chgBit(oldp+154,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_75));
        bufp->chgBit(oldp+155,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_76));
        bufp->chgBit(oldp+156,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_77));
        bufp->chgBit(oldp+157,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_78));
        bufp->chgBit(oldp+158,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_79));
        bufp->chgBit(oldp+159,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_80));
        bufp->chgBit(oldp+160,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_81));
        bufp->chgBit(oldp+161,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_82));
        bufp->chgBit(oldp+162,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_83));
        bufp->chgBit(oldp+163,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_84));
        bufp->chgBit(oldp+164,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_85));
        bufp->chgBit(oldp+165,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_86));
        bufp->chgBit(oldp+166,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_87));
        bufp->chgBit(oldp+167,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_88));
        bufp->chgBit(oldp+168,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_89));
        bufp->chgBit(oldp+169,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_90));
        bufp->chgBit(oldp+170,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_91));
        bufp->chgBit(oldp+171,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_92));
        bufp->chgBit(oldp+172,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_93));
        bufp->chgBit(oldp+173,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_94));
        bufp->chgCData(oldp+174,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4),2);
        bufp->chgBit(oldp+175,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_95));
        bufp->chgBit(oldp+176,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_96));
        bufp->chgBit(oldp+177,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_97));
        bufp->chgBit(oldp+178,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_98));
        bufp->chgBit(oldp+179,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_99));
        bufp->chgBit(oldp+180,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_100));
        bufp->chgBit(oldp+181,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_101));
        bufp->chgBit(oldp+182,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_102));
        bufp->chgBit(oldp+183,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_103));
        bufp->chgBit(oldp+184,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_104));
        bufp->chgBit(oldp+185,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_105));
        bufp->chgBit(oldp+186,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_106));
        bufp->chgBit(oldp+187,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_107));
        bufp->chgBit(oldp+188,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_108));
        bufp->chgBit(oldp+189,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_109));
        bufp->chgBit(oldp+190,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_110));
        bufp->chgBit(oldp+191,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_111));
        bufp->chgBit(oldp+192,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_112));
        bufp->chgBit(oldp+193,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_113));
        bufp->chgBit(oldp+194,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_114));
        bufp->chgBit(oldp+195,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_115));
        bufp->chgBit(oldp+196,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_116));
        bufp->chgBit(oldp+197,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_117));
        bufp->chgBit(oldp+198,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_118));
        bufp->chgBit(oldp+199,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_119));
        bufp->chgBit(oldp+200,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_120));
        bufp->chgBit(oldp+201,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_121));
        bufp->chgBit(oldp+202,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_122));
        bufp->chgBit(oldp+203,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_123));
        bufp->chgBit(oldp+204,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_124));
        bufp->chgBit(oldp+205,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_125));
        bufp->chgBit(oldp+206,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_126));
        bufp->chgBit(oldp+207,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_96)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_97)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_96)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_95))))));
        bufp->chgBit(oldp+208,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_95)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_96)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4)) 
                                        & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_95))))));
        bufp->chgBit(oldp+209,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_98)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_99)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_98)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_97))))));
        bufp->chgBit(oldp+210,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_97)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_98)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_97)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_96))))));
        bufp->chgBit(oldp+211,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_100)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_101)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_100)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_99))))));
        bufp->chgBit(oldp+212,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_99)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_100)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_99)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_98))))));
        bufp->chgBit(oldp+213,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_102)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_103)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_102)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_101))))));
        bufp->chgBit(oldp+214,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_101)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_102)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_101)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_100))))));
        bufp->chgBit(oldp+215,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_104)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_105)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_104)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_103))))));
        bufp->chgBit(oldp+216,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_103)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_104)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_103)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_102))))));
        bufp->chgBit(oldp+217,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_106)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_107)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_106)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_105))))));
        bufp->chgBit(oldp+218,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_105)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_106)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_105)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_104))))));
        bufp->chgBit(oldp+219,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_108)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_109)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_108)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_107))))));
        bufp->chgBit(oldp+220,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_107)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_108)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_107)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_106))))));
        bufp->chgBit(oldp+221,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_110)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_111)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_110)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_109))))));
        bufp->chgBit(oldp+222,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_109)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_110)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_109)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_108))))));
        bufp->chgBit(oldp+223,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_112)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_113)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_112)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_111))))));
        bufp->chgBit(oldp+224,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_111)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_112)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_111)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_110))))));
        bufp->chgBit(oldp+225,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_114)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_115)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_114)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_113))))));
        bufp->chgBit(oldp+226,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_113)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_114)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_113)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_112))))));
        bufp->chgBit(oldp+227,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_116)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_117)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_116)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_115))))));
        bufp->chgBit(oldp+228,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_115)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_116)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_115)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_114))))));
        bufp->chgBit(oldp+229,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_118)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_119)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_118)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_117))))));
        bufp->chgBit(oldp+230,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_117)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_118)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_117)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_116))))));
        bufp->chgBit(oldp+231,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_120)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_121)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_120)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_119))))));
        bufp->chgBit(oldp+232,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_119)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_120)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_119)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_118))))));
        bufp->chgBit(oldp+233,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_122)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_123)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_122)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_121))))));
        bufp->chgBit(oldp+234,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_121)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_122)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_121)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_120))))));
        bufp->chgBit(oldp+235,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_124)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_124)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_123))))));
        bufp->chgBit(oldp+236,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_123)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_124)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_123)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_122))))));
        bufp->chgBit(oldp+237,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_125))))));
        bufp->chgBit(oldp+238,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_124))))));
        bufp->chgCData(oldp+239,((0x1fU & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                           >> 7U))),5);
        bufp->chgIData(oldp+240,(((1U & (IData)(((0x1013U 
                                                  == 
                                                  (0x1013U 
                                                   & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                 & (0x5bU 
                                                    == 
                                                    (0x5bU 
                                                     & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__immNum_invInputs))))))
                                   ? (((- (IData)((1U 
                                                   & (vlSelf->ysyx_23060336__DOT__idu__DOT__casez_tmp 
                                                      >> 4U)))) 
                                       << 5U) | (0x1fU 
                                                 & vlSelf->ysyx_23060336__DOT__idu__DOT__casez_tmp))
                                   : vlSelf->ysyx_23060336__DOT__idu__DOT__casez_tmp)),32);
        bufp->chgCData(oldp+241,(vlSelf->ysyx_23060336__DOT___idu_io_out_bits_AluMux),3);
        bufp->chgCData(oldp+242,(vlSelf->ysyx_23060336__DOT___idu_io_out_bits_AluSel),4);
        bufp->chgCData(oldp+243,(vlSelf->ysyx_23060336__DOT___idu_io_out_bits_MemNum),3);
        bufp->chgCData(oldp+244,(vlSelf->ysyx_23060336__DOT___idu_io_out_bits_RegNum),3);
        bufp->chgBit(oldp+245,(vlSelf->ysyx_23060336__DOT___idu_io_out_bits_CsrWr));
        bufp->chgBit(oldp+246,((1U & ((IData)(((3U 
                                                == 
                                                (0xfU 
                                                 & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                               & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf34c4125__0))) 
                                      | ((IData)((0x13U 
                                                  == 
                                                  (0x5bU 
                                                   & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst))) 
                                         | ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3804dd5e__0) 
                                            | (IData)(vlSelf->ysyx_23060336__DOT___idu_io_out_bits_CsrWr)))))));
        bufp->chgBit(oldp+247,((IData)(((3U == (0x1fU 
                                                & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                        & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf34c4125__0)))));
        bufp->chgBit(oldp+248,(vlSelf->ysyx_23060336__DOT___idu_io_out_bits_Branch));
        bufp->chgBit(oldp+249,(vlSelf->ysyx_23060336__DOT___idu_io_out_bits_mret));
        bufp->chgBit(oldp+250,(vlSelf->ysyx_23060336__DOT___idu_io_out_bits_ecall));
        bufp->chgBit(oldp+251,((IData)(((0x73U == (0x7fU 
                                                   & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                        & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3c1cf46e__0)))));
        bufp->chgCData(oldp+252,(vlSelf->ysyx_23060336__DOT__idu__DOT__immNum_invInputs),7);
        bufp->chgIData(oldp+253,((0x3fffffffU & (~ 
                                                 (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                  >> 2U)))),30);
        bufp->chgCData(oldp+254,((7U & (~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                           >> 2U)))),3);
        bufp->chgCData(oldp+255,((0x1fU & (~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                              >> 2U)))),5);
        bufp->chgCData(oldp+256,((3U & (~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                           >> 2U)))),2);
        bufp->chgCData(oldp+257,((0xffU & (~ (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN)))),8);
        bufp->chgSData(oldp+258,(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs),15);
        bufp->chgIData(oldp+259,(vlSelf->ysyx_23060336__DOT__idu__DOT__casez_tmp),32);
        bufp->chgBit(oldp+260,(vlSelf->ysyx_23060336__DOT___lsu_io_wen));
        bufp->chgBit(oldp+261,(vlSelf->ysyx_23060336__DOT__ifu__DOT__delay1));
        bufp->chgBit(oldp+262,(vlSelf->ysyx_23060336__DOT__ifu__DOT__delay2));
        bufp->chgBit(oldp+263,(vlSelf->ysyx_23060336__DOT__ifu__DOT__delay3));
        bufp->chgIData(oldp+264,(vlSelf->ysyx_23060336__DOT__ifu__DOT__PC),32);
        bufp->chgIData(oldp+265,(((IData)(vlSelf->ysyx_23060336__DOT__lsu__DOT__delay2)
                                   ? vlSelf->ysyx_23060336__DOT__lsu__DOT__rdatadelay
                                   : vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result)),32);
        bufp->chgCData(oldp+266,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemNum),4);
        bufp->chgBit(oldp+267,(vlSelf->ysyx_23060336__DOT__lsu__DOT__delay1));
        bufp->chgBit(oldp+268,(vlSelf->ysyx_23060336__DOT__lsu__DOT__delay2));
        bufp->chgIData(oldp+269,(vlSelf->ysyx_23060336__DOT__lsu__DOT__rdatadelay1),32);
        bufp->chgIData(oldp+270,(vlSelf->ysyx_23060336__DOT__lsu__DOT__rdatadelay2),32);
        bufp->chgIData(oldp+271,(vlSelf->ysyx_23060336__DOT__lsu__DOT__rdatadelay),32);
        bufp->chgIData(oldp+272,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[0]),32);
        bufp->chgIData(oldp+273,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[1]),32);
        bufp->chgIData(oldp+274,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[2]),32);
        bufp->chgIData(oldp+275,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[3]),32);
        bufp->chgIData(oldp+276,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[4]),32);
        bufp->chgIData(oldp+277,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[5]),32);
        bufp->chgIData(oldp+278,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[6]),32);
        bufp->chgIData(oldp+279,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[7]),32);
        bufp->chgIData(oldp+280,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[8]),32);
        bufp->chgIData(oldp+281,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[9]),32);
        bufp->chgIData(oldp+282,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[10]),32);
        bufp->chgIData(oldp+283,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[11]),32);
        bufp->chgIData(oldp+284,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[12]),32);
        bufp->chgIData(oldp+285,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[13]),32);
        bufp->chgIData(oldp+286,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[14]),32);
        bufp->chgIData(oldp+287,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[15]),32);
        bufp->chgIData(oldp+288,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[16]),32);
        bufp->chgIData(oldp+289,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[17]),32);
        bufp->chgIData(oldp+290,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[18]),32);
        bufp->chgIData(oldp+291,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[19]),32);
        bufp->chgIData(oldp+292,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[20]),32);
        bufp->chgIData(oldp+293,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[21]),32);
        bufp->chgIData(oldp+294,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[22]),32);
        bufp->chgIData(oldp+295,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[23]),32);
        bufp->chgIData(oldp+296,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[24]),32);
        bufp->chgIData(oldp+297,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[25]),32);
        bufp->chgIData(oldp+298,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[26]),32);
        bufp->chgIData(oldp+299,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[27]),32);
        bufp->chgIData(oldp+300,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[28]),32);
        bufp->chgIData(oldp+301,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[29]),32);
        bufp->chgIData(oldp+302,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[30]),32);
        bufp->chgIData(oldp+303,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[31]),32);
        bufp->chgBit(oldp+304,(vlSelf->ysyx_23060336__DOT___sdram_wready));
        bufp->chgBit(oldp+305,(((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_5) 
                                & (2U == vlSelf->ysyx_23060336__DOT__xbar__DOT__awid_halt))));
        bufp->chgBit(oldp+306,(vlSelf->ysyx_23060336__DOT__sdram__DOT__bvalid));
        bufp->chgCData(oldp+307,((3U & vlSelf->ysyx_23060336__DOT__sdram__DOT__resp)),2);
        bufp->chgBit(oldp+308,(vlSelf->ysyx_23060336__DOT___sdram_rvalid));
        bufp->chgIData(oldp+309,(vlSelf->ysyx_23060336__DOT___sdram_rdata),32);
        bufp->chgIData(oldp+310,(vlSelf->ysyx_23060336__DOT__sdram__DOT__resp),32);
        bufp->chgCData(oldp+311,(vlSelf->ysyx_23060336__DOT__sdram__DOT__RLFSR),5);
        bufp->chgCData(oldp+312,(vlSelf->ysyx_23060336__DOT__sdram__DOT__WLFSR),5);
        bufp->chgIData(oldp+313,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemNum),32);
        bufp->chgIData(oldp+314,(vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt),32);
        bufp->chgIData(oldp+315,(vlSelf->ysyx_23060336__DOT__xbar__DOT__awid_halt),32);
    }
    bufp->chgBit(oldp+316,(vlSelf->clock));
    bufp->chgBit(oldp+317,(vlSelf->reset));
    bufp->chgBit(oldp+318,(vlSelf->io_halt));
    bufp->chgIData(oldp+319,(vlSelf->io_halt_ret),32);
    bufp->chgIData(oldp+320,(vlSelf->io_NPC),32);
    bufp->chgIData(oldp+321,(vlSelf->io_PC),32);
    bufp->chgIData(oldp+322,(vlSelf->io_inst),32);
    bufp->chgIData(oldp+323,(vlSelf->io_mcause),32);
    bufp->chgIData(oldp+324,(vlSelf->io_mstatus),32);
    bufp->chgCData(oldp+325,(vlSelf->io_iduopcode),7);
    bufp->chgCData(oldp+326,(vlSelf->io_idupcmux),2);
    bufp->chgIData(oldp+327,(vlSelf->io_iduinst),32);
    bufp->chgCData(oldp+328,(vlSelf->io_exupcmux),2);
    bufp->chgBit(oldp+329,(vlSelf->io_ifuvalid));
    bufp->chgBit(oldp+330,(vlSelf->io_ifuready));
    bufp->chgBit(oldp+331,(vlSelf->io_iduvalid));
    bufp->chgBit(oldp+332,(vlSelf->io_iduready));
    bufp->chgBit(oldp+333,(vlSelf->io_exuvalid));
    bufp->chgBit(oldp+334,(vlSelf->io_exuready));
    bufp->chgBit(oldp+335,(vlSelf->io_lsuvalid));
    bufp->chgBit(oldp+336,(vlSelf->io_lsuready));
    bufp->chgBit(oldp+337,(vlSelf->io_lsuarvalid));
    bufp->chgBit(oldp+338,(vlSelf->io_lsuarready));
    bufp->chgBit(oldp+339,(vlSelf->io_lsuawvalid));
    bufp->chgBit(oldp+340,(vlSelf->io_lsuawready));
    bufp->chgBit(oldp+341,(vlSelf->io_lsurready));
    bufp->chgBit(oldp+342,(vlSelf->io_lsurvalid));
    bufp->chgBit(oldp+343,(vlSelf->io_lsuwready));
    bufp->chgBit(oldp+344,(vlSelf->io_lsuwvalid));
    bufp->chgBit(oldp+345,(vlSelf->io_wbuvalid));
    bufp->chgBit(oldp+346,(vlSelf->io_wbuready));
    bufp->chgBit(oldp+347,(vlSelf->io_MemtoReg));
    bufp->chgBit(oldp+348,(vlSelf->io_iduMemWr));
    bufp->chgBit(oldp+349,(vlSelf->io_exuMemWr));
    bufp->chgBit(oldp+350,(vlSelf->io_lsuMemWr));
    bufp->chgIData(oldp+351,(vlSelf->io_idupc),32);
    bufp->chgIData(oldp+352,(vlSelf->io_exupc),32);
    bufp->chgCData(oldp+353,(vlSelf->io_alumux),4);
    bufp->chgIData(oldp+354,(vlSelf->io_pcadd),32);
    bufp->chgIData(oldp+355,(vlSelf->io_pca),32);
    bufp->chgIData(oldp+356,(vlSelf->io_pcb),32);
    bufp->chgIData(oldp+357,(vlSelf->io_ina),32);
    bufp->chgIData(oldp+358,(vlSelf->io_inb),32);
    bufp->chgIData(oldp+359,(vlSelf->io_lsuaraddr),32);
    bufp->chgIData(oldp+360,(vlSelf->io_lsurdata),32);
    bufp->chgIData(oldp+361,(vlSelf->io_lsuawaddr),32);
    bufp->chgIData(oldp+362,(vlSelf->io_lsuwdata),32);
    bufp->chgIData(oldp+363,(vlSelf->io_wburesult),32);
    bufp->chgCData(oldp+364,(vlSelf->io_regrs1),5);
    bufp->chgCData(oldp+365,(vlSelf->io_regrs2),5);
    bufp->chgIData(oldp+366,(vlSelf->io_regsrc1),32);
    bufp->chgIData(oldp+367,(vlSelf->io_regsrc2),32);
    bufp->chgIData(oldp+368,(vlSelf->io_regrd),32);
    bufp->chgIData(oldp+369,(vlSelf->io_regwen),32);
    bufp->chgIData(oldp+370,(vlSelf->io_regwaddr),32);
    bufp->chgIData(oldp+371,(vlSelf->io_imm),32);
    bufp->chgIData(oldp+372,(vlSelf->io_regrs1),32);
    bufp->chgIData(oldp+373,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory
                             [vlSelf->io_regrs2]),32);
    bufp->chgIData(oldp+374,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory
                             [vlSelf->io_regrs1]),32);
    bufp->chgBit(oldp+375,(((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_5) 
                            & (IData)(vlSelf->io_lsuawvalid))));
    bufp->chgBit(oldp+376,(((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_3) 
                            & ((IData)(vlSelf->io_lsuarvalid)
                                ? ((1U == (0xfU & vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt)) 
                                   | (IData)(vlSelf->io_lsuarvalid))
                                : (~ (IData)(vlSelf->io_lsuarvalid))))));
    bufp->chgCData(oldp+377,(((1U & ((~ (IData)(vlSelf->io_lsuarvalid)) 
                                     | (1U == (0xfU 
                                               & vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt))))
                               ? 1U : 2U)),4);
    bufp->chgBit(oldp+378,(((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_3) 
                            & (((1U == vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt) 
                                & ((IData)(vlSelf->io_ifuready) 
                                   & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid)))
                                ? (IData)(vlSelf->io_ifuready)
                                : (IData)((((2U == vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt) 
                                            & (IData)(vlSelf->io_lsuarvalid)) 
                                           & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid)))))));
    bufp->chgBit(oldp+379,(((IData)(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegWr) 
                            & (IData)(vlSelf->io_ifuvalid))));
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
}

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
    // Init
    CData/*0:0*/ __VdfgTmp_hfa8e024f__0;
    __VdfgTmp_hfa8e024f__0 = 0;
    CData/*0:0*/ __VdfgTmp_h51ff62fa__0;
    __VdfgTmp_h51ff62fa__0 = 0;
    CData/*0:0*/ __VdfgTmp_hb22192c0__0;
    __VdfgTmp_hb22192c0__0 = 0;
    // Body
    vlSelf->io_lsuawvalid = ((~ (IData)(vlSelf->reset)) 
                             & ((~ (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_ebreak)) 
                                & (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemWr)));
    vlSelf->io_ifuaraddr = ((IData)(vlSelf->reset) ? 0x80000000U
                             : ((((~ (IData)(vlSelf->io_checkright)) 
                                  & (IData)(vlSelf->io_checkfail)) 
                                 | (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_ebreak))
                                 ? vlSelf->io_NPC : 
                                ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__isRAW)
                                  ? vlSelf->ysyx_23060336__DOT__ifu__DOT__PC
                                  : ((IData)(4U) + vlSelf->ysyx_23060336__DOT__ifu__DOT__PC))));
    vlSelf->io_lsuarvalid = ((~ (IData)(vlSelf->reset)) 
                             & (IData)(vlSelf->io_lsurready));
    __VdfgTmp_h51ff62fa__0 = ((IData)(vlSelf->io_isRAW) 
                              | (IData)(vlSelf->reset));
    vlSelf->io_lsuwvalid = vlSelf->io_lsuawvalid;
    vlSelf->ysyx_23060336__DOT___xbar_io_sdram_awvalid 
        = ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_7) 
           & (IData)(vlSelf->io_lsuawvalid));
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_2 = 
        ((IData)(__VdfgTmp_h51ff62fa__0) & (IData)(vlSelf->io_lsuarvalid));
    vlSelf->io_ifuarvalid = (1U & (~ (IData)(__VdfgTmp_h51ff62fa__0)));
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN = ((IData)(vlSelf->io_ifuarvalid) 
                                                   & (IData)(vlSelf->io_lsuarvalid));
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_1 = 
        ((~ (IData)(vlSelf->io_lsuarvalid)) & (IData)(vlSelf->io_ifuarvalid));
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_3 = 
        (1U & ((~ (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_2)) 
               | (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_1)));
    vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr = 
        ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN)
          ? ((2U == (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt))
              ? vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result
              : vlSelf->io_ifuaraddr) : ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_3)
                                          ? vlSelf->io_ifuaraddr
                                          : vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result));
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_5 = 
        ((vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr 
          >> 0x1fU) & (0x81000000U > vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr));
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_6 = 
        ((0xa0000047U < vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr) 
         & (0xa0000089U > vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr));
    vlSelf->io_lsuarready = ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_5) 
                             | (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_6));
    vlSelf->ysyx_23060336__DOT__xbar__DOT__rdata = 
        ((1U & ((~ (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_6)) 
                | (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_5)))
          ? ((1U == vlSelf->ysyx_23060336__DOT__sdram__DOT__Begin)
              ? 0x413U : vlSelf->ysyx_23060336__DOT__sdram__DOT__sdramdata)
          : ((0xa0000048U == vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr)
              ? vlSelf->ysyx_23060336__DOT__clint__DOT__mtimel
              : vlSelf->ysyx_23060336__DOT__clint__DOT__mtimeh));
    vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid = 
        ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_5)
          ? (IData)(vlSelf->ysyx_23060336__DOT___sdram_rvalid)
          : ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_6)));
    if (vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN) {
        vlSelf->io_ifurvalid = ((2U != (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt)) 
                                & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid));
        vlSelf->io_lsurvalid = ((2U == (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt)) 
                                & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid));
    } else {
        vlSelf->io_ifurvalid = ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_1) 
                                & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid));
        vlSelf->io_lsurvalid = ((~ (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_1)) 
                                & ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_2) 
                                   & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid)));
    }
    vlSelf->io_ifuvalid = (((~ (IData)(vlSelf->io_checkfail)) 
                            | (IData)(vlSelf->io_checkright)) 
                           & ((IData)(vlSelf->io_exuready) 
                              & (IData)(vlSelf->io_ifurvalid)));
    __VdfgTmp_hfa8e024f__0 = ((IData)(vlSelf->io_ifuready) 
                              & (IData)(vlSelf->io_ifurvalid));
    __VdfgTmp_hb22192c0__0 = ((IData)(vlSelf->io_lsurready) 
                              & (IData)(vlSelf->io_lsurvalid));
    if (__VdfgTmp_hfa8e024f__0) {
        vlSelf->io_ifurdata = vlSelf->ysyx_23060336__DOT__xbar__DOT__rdata;
        vlSelf->io_inst = vlSelf->io_ifurdata;
    } else {
        vlSelf->io_ifurdata = 0U;
        vlSelf->io_inst = 0U;
    }
    vlSelf->io_lsurdata = ((IData)(__VdfgTmp_hb22192c0__0)
                            ? vlSelf->ysyx_23060336__DOT__xbar__DOT__rdata
                            : 0U);
    vlSelf->ysyx_23060336__DOT__lsu__DOT__prepare = 
        ((IData)(__VdfgTmp_hb22192c0__0) | ((IData)(vlSelf->io_lsuawvalid) 
                                            & (IData)(vlSelf->io_lsuwready)));
    vlSelf->io_lsuvalid = (1U & ((~ (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemtoReg)) 
                                 | (IData)(vlSelf->ysyx_23060336__DOT__lsu__DOT__prepare)));
    vlSelf->io_lsuready = (1U & ((~ ((IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemWr) 
                                     | (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemtoReg))) 
                                 | (IData)(vlSelf->ysyx_23060336__DOT__lsu__DOT__prepare)));
    vlSelf->io_regdata = ((IData)(vlSelf->ysyx_23060336__DOT__lsu__DOT__prepare)
                           ? vlSelf->io_lsurdata : vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result);
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
    // Init
    CData/*0:0*/ ysyx_23060336__DOT__idu__DOT___io_isRAW_T;
    ysyx_23060336__DOT__idu__DOT___io_isRAW_T = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_h212147f6__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h212147f6__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_hec6b80fc__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_hec6b80fc__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf5581457__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf5581457__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_h21204722__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h21204722__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_hbfcac208__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_hbfcac208__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_h10b643de__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h10b643de__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3d112f69__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3d112f69__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_h7b4c8c17__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h7b4c8c17__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_h67611bab__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h67611bab__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_h70d45b70__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h70d45b70__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_hd59316c1__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_hd59316c1__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_hc336bed0__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_hc336bed0__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_h0153a42f__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h0153a42f__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_hefa2e071__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_hefa2e071__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_hb80b8518__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_hb80b8518__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_h7ff03fbd__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h7ff03fbd__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_h599a574f__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h599a574f__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_h055e0551__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h055e0551__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_h666d1c0e__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h666d1c0e__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3460ce47__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3460ce47__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_hb68bb68a__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_hb68bb68a__0 = 0;
    CData/*1:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf3854a25__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf3854a25__0 = 0;
    CData/*1:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3ef82d77__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3ef82d77__0 = 0;
    CData/*1:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3abbe375__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3abbe375__0 = 0;
    CData/*2:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_hd237b447__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_hd237b447__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_h08436509__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h08436509__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_h59afddce__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h59afddce__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_h268bbb67__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h268bbb67__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_hc580b573__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_hc580b573__0 = 0;
    CData/*0:0*/ ysyx_23060336__DOT__idu__DOT____VdfgTmp_hec690571__0;
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_hec690571__0 = 0;
    CData/*0:0*/ __VdfgTmp_h51ff62fa__0;
    __VdfgTmp_h51ff62fa__0 = 0;
    // Body
    vlSelf->io_lsuwdata = vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_src2;
    vlSelf->ysyx_23060336__DOT___xbar_io_sdram_awvalid 
        = ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_7) 
           & (IData)(vlSelf->io_lsuawvalid));
    vlSelf->io_csrdata = vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result;
    vlSelf->io_lsuarvalid = ((~ (IData)(vlSelf->reset)) 
                             & (IData)(vlSelf->io_lsurready));
    vlSelf->io_lsuaraddr = vlSelf->io_csrdata;
    vlSelf->io_lsuawaddr = vlSelf->io_csrdata;
    if (vlSelf->io_lsuready) {
        vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemNum 
            = (7U & (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_MemNum));
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt = 1U;
    } else if ((1U & (~ (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN)))) {
        vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt 
            = ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_3)
                ? 1U : 2U);
    }
    vlSelf->io_arid_halt = vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt;
    if (((IData)(vlSelf->io_iduvalid) & (IData)(vlSelf->io_exuready))) {
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_MemNum 
            = (((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___io_out_bits_MemNum_orMatrixOutputs_T_4)) 
                << 3U) | (((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___io_out_bits_MemNum_orMatrixOutputs_T_4)) 
                           << 2U) | ((2U & ((~ (IData)(
                                                       (0x1ffU 
                                                        == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___io_out_bits_MemNum_andMatrixOutputs_T_1)))) 
                                            << 1U)) 
                                     | (0x3ffU != (
                                                   (0x200U 
                                                    & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                          << 7U)) 
                                                      | ((0x80U 
                                                          & ((~ (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN)) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((~ 
                                                                 ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                                                  >> 1U)) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((~ 
                                                                    ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                                                     >> 2U)) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                                      >> 1U)) 
                                                                  | ((8U 
                                                                      & ((~ 
                                                                          ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                                                           >> 4U)) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((~ 
                                                                             ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                                                              >> 5U)) 
                                                                            << 2U)) 
                                                                        | (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h8f0d9fc5__0)))))))))))));
    }
    vlSelf->io_exuready = (1U & (~ (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_ebreak)));
    if (((IData)(vlSelf->io_ifuvalid) & (IData)(vlSelf->io_ifuready))) {
        vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
            = vlSelf->io_inst;
    }
    vlSelf->io_iduopcode = (0x7fU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst);
    vlSelf->io_iduinst = vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst;
    vlSelf->ysyx_23060336__DOT__idu__DOT__immNum_invInputs 
        = (0x7fU & (~ ((0x60U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                 >> 7U)) | (0x1fU & 
                                            (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                             >> 2U)))));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf34c4125__0 
        = (IData)((0U == (0x60U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3c1cf46e__0 
        = (IData)((0x3000U == (0x3000U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)));
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3460ce47__0 
        = (IData)((0U == (0xc0000000U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)));
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_hbfcac208__0 
        = (IData)((0x2070U == (0x2070U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)));
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3abbe375__0 
        = ((2U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                  >> 4U)) | (1U & (~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                      >> 6U))));
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3d112f69__0 
        = (IData)((0x6000U == (0x6000U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)));
    vlSelf->ysyx_23060336__DOT__idu__DOT___GEN = ((0xe0U 
                                                   & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                      >> 7U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                        >> 2U)));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hcd64561c__0 
        = (IData)((0x10U == (0x58U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)));
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf3854a25__0 
        = ((2U & ((~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                      >> 5U)) << 1U)) | (1U & (~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                  >> 6U))));
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3ef82d77__0 
        = ((2U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                  >> 4U)) | (1U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                   >> 6U)));
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h7b4c8c17__0 
        = (IData)((3U == (0x4fU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)));
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_hc580b573__0 
        = (IData)((0x60U == (0x60U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)));
    vlSelf->io_idurs1 = (0x1fU & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                  >> 0xfU));
    vlSelf->io_idurs2 = (0x1fU & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                  >> 0x14U));
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_mret 
        = (IData)(((0x30200073U == (0x3fffffffU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                   & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3460ce47__0)));
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_hb68bb68a__0 
        = (IData)(((0U == (0x3fe00000U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                   & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3460ce47__0)));
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_CsrWr 
        = (1U & (IData)(((3U == (0xfU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                         & ((IData)((0x1070U == (0x1070U 
                                                 & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst))) 
                            | (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hbfcac208__0)))));
    vlSelf->io_iduMemWr = (IData)(((3U == (0x1fU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                   & (3U == (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3abbe375__0))));
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_hb80b8518__0 
        = ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
            >> 0xcU) & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3d112f69__0));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h8f0d9fc5__0 
        = ((2U & ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                      >> 6U)) << 1U)) | (1U & (~ ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                                  >> 7U))));
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h599a574f__0 
        = (IData)((0U == (0x60U & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))));
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h7ff03fbd__0 
        = ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
               >> 5U)) & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3d112f69__0));
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h67611bab__0 
        = (1U & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                  >> 0xdU) & (~ ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                 >> 7U))));
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h055e0551__0 
        = (1U & ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                     >> 6U)) & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                >> 0xeU)));
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h666d1c0e__0 
        = (1U & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                  >> 0xcU) & (~ ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                 >> 6U))));
    vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs 
        = (0x7fffU & (~ ((0x7f00U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                     >> 0x11U)) | (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))));
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_hec6b80fc__0 
        = ((~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
               >> 4U)) & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hc580b573__0));
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_hec690571__0 
        = ((~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
               >> 4U)) & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hc580b573__0));
    vlSelf->io_regrs1 = vlSelf->io_idurs1;
    if ((0U != (IData)(vlSelf->io_idurs1))) {
        vlSelf->io_regsrc1 = vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory
            [vlSelf->io_idurs1];
        ysyx_23060336__DOT__idu__DOT____VdfgTmp_h59afddce__0 
            = ((IData)(vlSelf->io_idurs1) == (IData)(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_rd));
    } else {
        vlSelf->io_regsrc1 = 0U;
        ysyx_23060336__DOT__idu__DOT____VdfgTmp_h59afddce__0 = 0U;
    }
    vlSelf->io_regrs2 = vlSelf->io_idurs2;
    if ((0U != (IData)(vlSelf->io_idurs2))) {
        vlSelf->io_regsrc2 = vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory
            [vlSelf->io_idurs2];
        ysyx_23060336__DOT__idu__DOT____VdfgTmp_h08436509__0 
            = ((IData)(vlSelf->io_idurs2) == (IData)(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_rd));
    } else {
        vlSelf->io_regsrc2 = 0U;
        ysyx_23060336__DOT__idu__DOT____VdfgTmp_h08436509__0 = 0U;
    }
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_ecall 
        = (IData)(((0x73U == (0x1fffffU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                   & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hb68bb68a__0)));
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_ebreak 
        = (IData)(((0x100073U == (0x1fffffU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                   & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hb68bb68a__0)));
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_hd237b447__0 
        = ((4U & ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                      >> 4U)) << 2U)) | (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h8f0d9fc5__0));
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h70d45b70__0 
        = ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
            >> 0xcU) & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h055e0551__0));
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf5581457__0 
        = (IData)(((0x60U == (0x60U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                   & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h666d1c0e__0)));
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_hefa2e071__0 
        = (IData)((0x7f00U == (0x7f00U & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs))));
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h212147f6__0 
        = ((~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
               >> 3U)) & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hec6b80fc__0));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3804dd5e__0 
        = (IData)(((7U == (7U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                   & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hec690571__0)));
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h21204722__0 
        = ((~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
               >> 3U)) & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hec690571__0));
    vlSelf->ysyx_23060336__DOT__idu__DOT__israwn = 
        ((IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h08436509__0) 
         | (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h59afddce__0));
    vlSelf->ysyx_23060336__DOT__idu__DOT___io_out_bits_MemNum_andMatrixOutputs_T_1 
        = ((0x100U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                      << 8U)) | ((0x80U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                           << 6U)) 
                                 | ((0x40U & ((~ (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN)) 
                                              << 6U)) 
                                    | ((0x20U & ((~ 
                                                  ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                                   >> 1U)) 
                                                 << 5U)) 
                                       | ((0x10U & 
                                           ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                                >> 2U)) 
                                            << 4U)) 
                                          | ((8U & 
                                              (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                               >> 2U)) 
                                             | (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hd237b447__0)))))));
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_RegNum 
        = (((0U == ((0xfffffffcU & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                     << 2U) & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                << 1U) 
                                               & ((IData)(
                                                          ((0U 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))) 
                                                           & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h599a574f__0))) 
                                                  << 2U)))) 
                    | (((IData)(((3U == (3U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                 & (0U == (0xbfU & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))))) 
                        << 1U) | (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                  & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                      >> 1U) & (IData)(
                                                       ((0U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))) 
                                                        & (7U 
                                                           == (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hd237b447__0))))))))) 
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
                                                                 == (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hd237b447__0)))) 
                                                     << 2U)))) 
                               | ((0xfffffffeU & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                   << 1U) 
                                                  & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                     & ((IData)(
                                                                ((0U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))) 
                                                                 & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h666d1c0e__0))) 
                                                        << 1U)))) 
                                  | (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                     & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                         >> 1U) & (IData)(
                                                          ((0U 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))) 
                                                           & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h7ff03fbd__0)))))))) 
                       << 1U) | (0U == (((IData)(((3U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                  & (0U 
                                                     == 
                                                     (0xbfU 
                                                      & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))))) 
                                         << 1U) | (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                   & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                       >> 1U) 
                                                      & (IData)(
                                                                ((0U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))) 
                                                                 & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h70d45b70__0)))))))));
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_hd59316c1__0 
        = ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
            >> 0xdU) & (((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs) 
                         >> 7U) & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hefa2e071__0)));
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h0153a42f__0 
        = ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
            >> 0xeU) & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hefa2e071__0));
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_Branch 
        = (IData)(((3U == (7U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                   & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h212147f6__0)));
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h10b643de__0 
        = (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
           & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
               >> 1U) & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h21204722__0)));
    vlSelf->ysyx_23060336__DOT__idu__DOT___io_out_bits_MemNum_orMatrixOutputs_T_4 
        = ((2U & ((IData)(((0x23U == (0x23U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                           & (0U == (0xb7U & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))))) 
                  << 1U)) | (0x1ffU == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___io_out_bits_MemNum_andMatrixOutputs_T_1)));
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_hc336bed0__0 
        = (((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs) 
            >> 6U) & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h0153a42f__0));
    vlSelf->io_idupcmux = (((IData)(((7U == (7U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                     & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h212147f6__0))) 
                            << 1U) | ((IData)(vlSelf->ysyx_23060336__DOT___idu_io_out_bits_Branch) 
                                      | (IData)(((0xfU 
                                                  == 
                                                  (0xfU 
                                                   & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                 & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hec6b80fc__0)))));
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_AluMux 
        = (((IData)((((0x13U == (0x13U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                      & (0U == (3U & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN)))) 
                     & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf5581457__0))) 
            << 3U) | (((IData)(((3U == (3U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                & ((IData)(((0x14U 
                                             == (0x1cU 
                                                 & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                            & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf34c4125__0))) 
                                   | ((IData)((0x30U 
                                               == (0x7cU 
                                                   & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst))) 
                                      | (((~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                              >> 2U)) 
                                          & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h21204722__0)) 
                                         | (IData)(
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))) 
                                                    & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hbfcac208__0)))))))) 
                       << 2U) | ((((IData)(((0x13U 
                                             == (0x1bU 
                                                 & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                            & (3U == (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3abbe375__0)))) 
                                   | ((IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h10b643de__0) 
                                      | ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3804dd5e__0) 
                                         | (IData)(
                                                   (((0x73U 
                                                      == 
                                                      (0x73U 
                                                       & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                     & (0U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN)))) 
                                                    & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3d112f69__0)))))) 
                                  << 1U) | (1U & ((IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h7b4c8c17__0) 
                                                  | ((IData)(
                                                             (0x23U 
                                                              == 
                                                              (0x3fU 
                                                               & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst))) 
                                                     | ((IData)(
                                                                ((0x13U 
                                                                  == 
                                                                  (0x1bU 
                                                                   & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                                 & (3U 
                                                                    == (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3abbe375__0)))) 
                                                        | (IData)(
                                                                  (((0x73U 
                                                                     == 
                                                                     (0x73U 
                                                                      & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                                    & (0U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN)))) 
                                                                   & ((IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h67611bab__0) 
                                                                      | (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h70d45b70__0)))))))))));
    vlSelf->ysyx_23060336__DOT__idu__DOT___GEN_0 = 
        (((0U == (((IData)((3U == (0x5fU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst))) 
                   << 5U) | (((IData)(((3U == (0xfU 
                                               & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                       & (3U == (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf3854a25__0)))) 
                              << 4U) | (((IData)(((0xfU 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                  & (3U 
                                                     == (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf3854a25__0)))) 
                                         << 3U) | (
                                                   ((IData)(
                                                            ((7U 
                                                              == 
                                                              (7U 
                                                               & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                             & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hcd64561c__0))) 
                                                    << 2U) 
                                                   | (((IData)(
                                                               ((3U 
                                                                 == 
                                                                 (0xfU 
                                                                  & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                                & (3U 
                                                                   == (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3ef82d77__0)))) 
                                                       << 1U) 
                                                      | (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h10b643de__0))))))) 
          << 2U) | (((0U == (((IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h7b4c8c17__0) 
                              << 3U) | (((IData)(((0xfU 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                  & (3U 
                                                     == (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf3854a25__0)))) 
                                         << 2U) | (
                                                   ((IData)(
                                                            (0x33U 
                                                             == 
                                                             (0x3fU 
                                                              & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst))) 
                                                    << 1U) 
                                                   | (IData)(
                                                             ((7U 
                                                               == 
                                                               (0x17U 
                                                                & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                              & (3U 
                                                                 == (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3ef82d77__0)))))))) 
                     << 1U) | (0U == (((IData)(((3U 
                                                 == 
                                                 (0xfU 
                                                  & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                & (3U 
                                                   == (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf3854a25__0)))) 
                                       << 3U) | (((IData)(
                                                          ((0xfU 
                                                            == 
                                                            (0x1fU 
                                                             & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                           & (3U 
                                                              == (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf3854a25__0)))) 
                                                  << 2U) 
                                                 | (((IData)(
                                                             ((3U 
                                                               == 
                                                               (0xfU 
                                                                & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                              & (3U 
                                                                 == (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3ef82d77__0)))) 
                                                     << 1U) 
                                                    | (IData)(
                                                              ((7U 
                                                                == 
                                                                (0x17U 
                                                                 & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                               & (3U 
                                                                  == (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3ef82d77__0))))))))));
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_AluSel 
        = ((((IData)((((0x13U == (0x13U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                       & (3U == (3U & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs)))) 
                      & (((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                           >> 5U) & (((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs) 
                                      >> 4U) & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hd59316c1__0))) 
                         | (((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs) 
                             >> 4U) & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                        >> 0xcU) & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hc336bed0__0)))))) 
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
                                           & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h0153a42f__0))) 
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
                                                             & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hefa2e071__0))) 
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
                                                                 & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hd59316c1__0)) 
                                                                | ((((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs) 
                                                                     >> 5U) 
                                                                    & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hc336bed0__0)) 
                                                                   | ((IData)(
                                                                              ((0x3000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                                               & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h0153a42f__0))) 
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
                                                  & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h67611bab__0)))) 
                              | ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                     >> 2U)) & (IData)(
                                                       (0x4060U 
                                                        == 
                                                        (0x4060U 
                                                         & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)))))))) 
               << 3U) | (((IData)((((3U == (3U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                    & (0U == (3U & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN)))) 
                                   & ((IData)(((0U 
                                                == 
                                                (0xc4U 
                                                 & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))) 
                                               & (0x60U 
                                                  == 
                                                  (0x60U 
                                                   & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)))) 
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
                                                          & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hb80b8518__0))))))))) 
                          << 2U) | ((2U & ((0xfffffffeU 
                                            & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                << 1U) 
                                               & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                  & ((IData)(
                                                             ((0U 
                                                               == 
                                                               (7U 
                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))) 
                                                              & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf5581457__0))) 
                                                     << 1U)))) 
                                           | (((IData)(
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
                                                             & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h7ff03fbd__0))))) 
                                              << 1U))) 
                                    | (1U & ((IData)(
                                                     (((0x63U 
                                                        == 
                                                        (0x63U 
                                                         & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                       & (0U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN)))) 
                                                      & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h599a574f__0))) 
                                             | ((IData)(
                                                        (((0x13U 
                                                           == 
                                                           (0x13U 
                                                            & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                          & (0U 
                                                             == 
                                                             (0x3bU 
                                                              & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN)))) 
                                                         & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h67611bab__0))) 
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
                                                                                & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h055e0551__0)))) 
                                                                       | (((~ 
                                                                            ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                                                             >> 2U)) 
                                                                           & (IData)(
                                                                                ((0x60U 
                                                                                == 
                                                                                (0x60U 
                                                                                & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                                                & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h055e0551__0)))) 
                                                                          | ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                                              >> 4U) 
                                                                             & (IData)(
                                                                                ((0U 
                                                                                == 
                                                                                (0x18U 
                                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))) 
                                                                                & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_hb80b8518__0))))))))))))))))));
    vlSelf->ysyx_23060336__DOT__idu__DOT__casez_tmp 
        = ((4U & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN_0))
            ? ((2U & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN_0))
                ? 0U : ((1U & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN_0))
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
            : ((2U & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN_0))
                ? ((1U & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN_0))
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
                : ((1U & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN_0))
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
    ysyx_23060336__DOT__idu__DOT____VdfgTmp_h268bbb67__0 
        = ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN_0)) 
           | ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN_0)) 
              | (5U == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN_0))));
    vlSelf->io_imm = vlSelf->ysyx_23060336__DOT__idu__DOT__casez_tmp;
    ysyx_23060336__DOT__idu__DOT___io_isRAW_T = (((
                                                   (((IData)(vlSelf->io_idurs1) 
                                                     == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_rd)) 
                                                    & (0U 
                                                       != (IData)(vlSelf->io_idurs1))) 
                                                   | ((((IData)(vlSelf->io_idurs1) 
                                                        == (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_rd)) 
                                                       & (0U 
                                                          != (IData)(vlSelf->io_idurs1))) 
                                                      | (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h59afddce__0))) 
                                                  & ((0U 
                                                      == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN_0)) 
                                                     | (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h268bbb67__0))) 
                                                 | (((((IData)(vlSelf->io_idurs2) 
                                                       == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_rd)) 
                                                      & (0U 
                                                         != (IData)(vlSelf->io_idurs2))) 
                                                     | ((((IData)(vlSelf->io_idurs2) 
                                                          == (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_rd)) 
                                                         & (0U 
                                                            != (IData)(vlSelf->io_idurs2))) 
                                                        | (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h08436509__0))) 
                                                    & (IData)(ysyx_23060336__DOT__idu__DOT____VdfgTmp_h268bbb67__0)));
    vlSelf->ysyx_23060336__DOT__idu__DOT__isRAW = ((IData)(ysyx_23060336__DOT__idu__DOT___io_isRAW_T) 
                                                   & ((~ (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__isRAWn)) 
                                                      & (~ (IData)(vlSelf->io_checkfail))));
    vlSelf->io_ifuaraddr = ((IData)(vlSelf->reset) ? 0x80000000U
                             : ((((~ (IData)(vlSelf->io_checkright)) 
                                  & (IData)(vlSelf->io_checkfail)) 
                                 | (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_ebreak))
                                 ? vlSelf->io_NPC : 
                                ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__isRAW)
                                  ? vlSelf->ysyx_23060336__DOT__ifu__DOT__PC
                                  : ((IData)(4U) + vlSelf->ysyx_23060336__DOT__ifu__DOT__PC))));
    vlSelf->io_isRAW = ((IData)(ysyx_23060336__DOT__idu__DOT___io_isRAW_T) 
                        & ((~ (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__israwn)) 
                           & (~ (IData)(vlSelf->io_checkfail))));
    vlSelf->io_ifuready = (1U & (~ (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__isRAW)));
    __VdfgTmp_h51ff62fa__0 = ((IData)(vlSelf->io_isRAW) 
                              | (IData)(vlSelf->reset));
    vlSelf->io_iduready = vlSelf->io_ifuready;
    vlSelf->io_iduvalid = (((IData)(vlSelf->io_ifuready) 
                            & (~ (IData)(vlSelf->io_checkfail))) 
                           | ((IData)(vlSelf->io_exuready) 
                              & (IData)(vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_checkright)));
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_2 = 
        ((IData)(__VdfgTmp_h51ff62fa__0) & (IData)(vlSelf->io_lsuarvalid));
    vlSelf->io_ifuarvalid = (1U & (~ (IData)(__VdfgTmp_h51ff62fa__0)));
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN = ((IData)(vlSelf->io_ifuarvalid) 
                                                   & (IData)(vlSelf->io_lsuarvalid));
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_1 = 
        ((~ (IData)(vlSelf->io_lsuarvalid)) & (IData)(vlSelf->io_ifuarvalid));
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_3 = 
        (1U & ((~ (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_2)) 
               | (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_1)));
    vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr = 
        ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN)
          ? ((2U == (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt))
              ? vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result
              : vlSelf->io_ifuaraddr) : ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_3)
                                          ? vlSelf->io_ifuaraddr
                                          : vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result));
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_5 = 
        ((vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr 
          >> 0x1fU) & (0x81000000U > vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr));
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_6 = 
        ((0xa0000047U < vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr) 
         & (0xa0000089U > vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr));
    vlSelf->io_lsuarready = ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_5) 
                             | (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_6));
}

VL_INLINE_OPT void Vysyx_23060336___024root___nba_comb__TOP__0(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ __VdfgTmp_hfa8e024f__0;
    __VdfgTmp_hfa8e024f__0 = 0;
    CData/*0:0*/ __VdfgTmp_hb22192c0__0;
    __VdfgTmp_hb22192c0__0 = 0;
    // Body
    vlSelf->ysyx_23060336__DOT__xbar__DOT__rdata = 
        ((1U & ((~ (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_6)) 
                | (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_5)))
          ? ((1U == vlSelf->ysyx_23060336__DOT__sdram__DOT__Begin)
              ? 0x413U : vlSelf->ysyx_23060336__DOT__sdram__DOT__sdramdata)
          : ((0xa0000048U == vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr)
              ? vlSelf->ysyx_23060336__DOT__clint__DOT__mtimel
              : vlSelf->ysyx_23060336__DOT__clint__DOT__mtimeh));
    vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid = 
        ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_5)
          ? (IData)(vlSelf->ysyx_23060336__DOT___sdram_rvalid)
          : ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_6)));
    if (vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN) {
        vlSelf->io_ifurvalid = ((2U != (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt)) 
                                & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid));
        vlSelf->io_lsurvalid = ((2U == (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt)) 
                                & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid));
    } else {
        vlSelf->io_ifurvalid = ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_1) 
                                & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid));
        vlSelf->io_lsurvalid = ((~ (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_1)) 
                                & ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_2) 
                                   & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid)));
    }
    vlSelf->io_ifuvalid = (((~ (IData)(vlSelf->io_checkfail)) 
                            | (IData)(vlSelf->io_checkright)) 
                           & ((IData)(vlSelf->io_exuready) 
                              & (IData)(vlSelf->io_ifurvalid)));
    __VdfgTmp_hfa8e024f__0 = ((IData)(vlSelf->io_ifuready) 
                              & (IData)(vlSelf->io_ifurvalid));
    __VdfgTmp_hb22192c0__0 = ((IData)(vlSelf->io_lsurready) 
                              & (IData)(vlSelf->io_lsurvalid));
    if (__VdfgTmp_hfa8e024f__0) {
        vlSelf->io_ifurdata = vlSelf->ysyx_23060336__DOT__xbar__DOT__rdata;
        vlSelf->io_inst = vlSelf->io_ifurdata;
    } else {
        vlSelf->io_ifurdata = 0U;
        vlSelf->io_inst = 0U;
    }
    vlSelf->io_lsurdata = ((IData)(__VdfgTmp_hb22192c0__0)
                            ? vlSelf->ysyx_23060336__DOT__xbar__DOT__rdata
                            : 0U);
    vlSelf->ysyx_23060336__DOT__lsu__DOT__prepare = 
        ((IData)(__VdfgTmp_hb22192c0__0) | ((IData)(vlSelf->io_lsuawvalid) 
                                            & (IData)(vlSelf->io_lsuwready)));
    vlSelf->io_lsuvalid = (1U & ((~ (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemtoReg)) 
                                 | (IData)(vlSelf->ysyx_23060336__DOT__lsu__DOT__prepare)));
    vlSelf->io_lsuready = (1U & ((~ ((IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemWr) 
                                     | (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemtoReg))) 
                                 | (IData)(vlSelf->ysyx_23060336__DOT__lsu__DOT__prepare)));
    vlSelf->io_regdata = ((IData)(vlSelf->ysyx_23060336__DOT__lsu__DOT__prepare)
                           ? vlSelf->io_lsurdata : vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result);
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
                VL_FATAL_MT("/home/romeo/ysyx-workbench/npc/vsrc/ysyx_23060336.sv", 4001, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("/home/romeo/ysyx-workbench/npc/vsrc/ysyx_23060336.sv", 4001, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/romeo/ysyx-workbench/npc/vsrc/ysyx_23060336.sv", 4001, "", "NBA region did not converge.");
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

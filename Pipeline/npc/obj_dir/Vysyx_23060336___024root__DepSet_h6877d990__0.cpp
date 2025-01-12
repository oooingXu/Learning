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
    vlSelf->io_lsuawvalid = ((~ (IData)(vlSelf->reset)) 
                             & ((~ (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_ebreak)) 
                                & (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemWr)));
    vlSelf->io_ifuaraddr = ((IData)(vlSelf->reset) ? 0x80000000U
                             : ((IData)(vlSelf->ysyx_23060336__DOT__ifu__DOT___GEN)
                                 ? vlSelf->io_NPC : 
                                ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__isRAW)
                                  ? vlSelf->ysyx_23060336__DOT__ifu__DOT__PC
                                  : ((IData)(4U) + vlSelf->ysyx_23060336__DOT__ifu__DOT__PC))));
    vlSelf->io_lsuarvalid = ((~ (IData)(vlSelf->reset)) 
                             & (IData)(vlSelf->io_lsurready));
    vlSelf->__VdfgTmp_h51ff62fa__0 = ((IData)(vlSelf->io_isRAW) 
                                      | (IData)(vlSelf->reset));
    vlSelf->io_lsuwvalid = vlSelf->io_lsuawvalid;
    vlSelf->ysyx_23060336__DOT___xbar_io_sdram_awvalid 
        = ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_8) 
           & (IData)(vlSelf->io_lsuawvalid));
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_2 = 
        ((IData)(vlSelf->__VdfgTmp_h51ff62fa__0) & (IData)(vlSelf->io_lsuarvalid));
    vlSelf->io_ifuarvalid = (1U & (~ (IData)(vlSelf->__VdfgTmp_h51ff62fa__0)));
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN = ((IData)(vlSelf->io_ifuarvalid) 
                                                   & (IData)(vlSelf->io_lsuarvalid));
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_1 = 
        ((~ (IData)(vlSelf->io_lsuarvalid)) & (IData)(vlSelf->io_ifuarvalid));
    vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr = 
        ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN)
          ? ((2U == (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt))
              ? vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result
              : vlSelf->io_ifuaraddr) : ((1U & ((~ (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_2)) 
                                                | (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_1)))
                                          ? vlSelf->io_ifuaraddr
                                          : vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result));
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_7 = 
        ((0xa0000047U < vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr) 
         & (0xa0000089U > vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr));
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_6 = 
        ((vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr 
          >> 0x1fU) & (0x81000000U > vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr));
    vlSelf->io_lsuarready = ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_6) 
                             | (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_7));
    vlSelf->io_lsurdata = ((1U & ((~ (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_7)) 
                                  | (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_6)))
                            ? vlSelf->ysyx_23060336__DOT___sdram_rdata
                            : ((0xa0000048U == vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr)
                                ? vlSelf->ysyx_23060336__DOT__clint__DOT__mtimel
                                : vlSelf->ysyx_23060336__DOT__clint__DOT__mtimeh));
    vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid = 
        ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_6)
          ? (IData)(vlSelf->ysyx_23060336__DOT___sdram_rvalid)
          : ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_7)));
    if (vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN) {
        vlSelf->io_lsurvalid = ((2U == (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt)) 
                                & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid));
        vlSelf->io_ifurvalid = ((2U != (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt)) 
                                & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid));
    } else {
        vlSelf->io_lsurvalid = ((~ (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_1)) 
                                & ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_2) 
                                   & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid)));
        vlSelf->io_ifurvalid = ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_1) 
                                & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid));
    }
    vlSelf->io_ifurdata = vlSelf->io_lsurdata;
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_4 = 
        ((1U == (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt)) 
         & ((IData)(vlSelf->io_ifuready) & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid)));
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_5 = 
        ((2U == (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt)) 
         & ((IData)(vlSelf->io_lsurready) & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid)));
    vlSelf->ysyx_23060336__DOT__lsu__DOT__prepare = 
        (((IData)(vlSelf->io_lsurready) & (IData)(vlSelf->io_lsurvalid)) 
         | ((IData)(vlSelf->io_lsuawvalid) & (IData)(vlSelf->io_lsuwready)));
    vlSelf->io_inst = (((IData)(vlSelf->io_ifuready) 
                        & (IData)(vlSelf->io_ifurvalid))
                        ? vlSelf->io_lsurdata : 0U);
    vlSelf->io_checkright = ((0U != vlSelf->ysyx_23060336__DOT__ifu__DOT__Checkright) 
                             & (IData)(vlSelf->io_ifurvalid));
    vlSelf->io_lsuvalid = (1U & ((~ (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemtoReg)) 
                                 | (IData)(vlSelf->ysyx_23060336__DOT__lsu__DOT__prepare)));
    vlSelf->io_lsuready = (1U & ((~ ((IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemWr) 
                                     | (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemtoReg))) 
                                 | (IData)(vlSelf->ysyx_23060336__DOT__lsu__DOT__prepare)));
    vlSelf->io_ifuvalid = (((~ (IData)(vlSelf->io_checkfail)) 
                            | (IData)(vlSelf->io_checkright)) 
                           & ((IData)(vlSelf->io_exuready) 
                              & (IData)(vlSelf->io_ifurvalid)));
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

void Vysyx_23060336___024root___nba_sequent__TOP__0(Vysyx_23060336___024root* vlSelf);

void Vysyx_23060336___024root___eval_nba(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vysyx_23060336___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
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
    VlTriggerVec<1> __VpreTriggered;
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
                VL_FATAL_MT("/home/romeo/ysyx-workbench/npc/vsrc/ysyx_23060336.sv", 3987, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("/home/romeo/ysyx-workbench/npc/vsrc/ysyx_23060336.sv", 3987, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/romeo/ysyx-workbench/npc/vsrc/ysyx_23060336.sv", 3987, "", "NBA region did not converge.");
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

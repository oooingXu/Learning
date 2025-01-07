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
        vlSelf->ysyx_23060336__DOT___xbar_io_ifu_rvalid 
            = ((1U == (0xfU & vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt)) 
               & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid));
        vlSelf->io_lsurvalid = ((1U != (0xfU & vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt)) 
                                & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid));
    } else {
        vlSelf->ysyx_23060336__DOT___xbar_io_ifu_rvalid 
            = ((~ (IData)(vlSelf->io_lsuarvalid)) & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid));
        vlSelf->io_lsurvalid = 0U;
    }
    vlSelf->io_ifuvalid = ((IData)(vlSelf->io_ifuready) 
                           & (((~ (IData)(vlSelf->ysyx_23060336__DOT___lsu_io_wen)) 
                               & (IData)(vlSelf->ysyx_23060336__DOT___xbar_io_ifu_rvalid)) 
                              | ((IData)(vlSelf->ysyx_23060336__DOT___lsu_io_wen) 
                                 & ((IData)(vlSelf->ysyx_23060336__DOT__ifu__DOT__delay3) 
                                    & ((IData)(vlSelf->io_lsuwready) 
                                       | (IData)(vlSelf->ysyx_23060336__DOT___xbar_io_ifu_rvalid))))));
    vlSelf->ysyx_23060336__DOT__lsu__DOT___io_rdata_T 
        = ((IData)(vlSelf->io_lsuarvalid) & (IData)(vlSelf->io_lsurvalid));
    if (vlSelf->io_ifuvalid) {
        vlSelf->io_inst = vlSelf->ysyx_23060336__DOT__xbar__DOT__rdata;
        vlSelf->ysyx_23060336__DOT___reg_io_wen_T = vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegWr;
    } else {
        vlSelf->io_inst = 0U;
        vlSelf->ysyx_23060336__DOT___reg_io_wen_T = 0U;
    }
    vlSelf->io_lsurdata = ((IData)(vlSelf->ysyx_23060336__DOT__lsu__DOT___io_rdata_T)
                            ? vlSelf->ysyx_23060336__DOT__xbar__DOT__rdata
                            : 0U);
    vlSelf->ysyx_23060336__DOT__lsu__DOT__delay = (
                                                   ((IData)(vlSelf->ysyx_23060336__DOT__lsu__DOT___io_rdata_T) 
                                                    & (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemtoReg)) 
                                                   | ((IData)(vlSelf->io_lsuawvalid) 
                                                      & ((IData)(vlSelf->io_lsuwready) 
                                                         & (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemWr))));
    vlSelf->io_regwen = vlSelf->ysyx_23060336__DOT___reg_io_wen_T;
    vlSelf->io_lsuvalid = (1U & ((~ (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemtoReg)) 
                                 | (IData)(vlSelf->ysyx_23060336__DOT__lsu__DOT__delay)));
    vlSelf->io_lsuready = (1U & (((~ (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemtoReg)) 
                                  & (~ (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemWr))) 
                                 | (IData)(vlSelf->ysyx_23060336__DOT__lsu__DOT__delay)));
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
                VL_FATAL_MT("/home/romeo/ysyx-workbench/npc/vsrc/ysyx_23060336.sv", 3924, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("/home/romeo/ysyx-workbench/npc/vsrc/ysyx_23060336.sv", 3924, "", "Active region did not converge.");
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
                VL_FATAL_MT("/home/romeo/ysyx-workbench/npc/vsrc/ysyx_23060336.sv", 3924, "", "NBA region did not converge.");
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

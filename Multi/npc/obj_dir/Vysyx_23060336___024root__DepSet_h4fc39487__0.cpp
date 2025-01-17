// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060336.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060336__Syms.h"
#include "Vysyx_23060336___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060336___024root___dump_triggers__ico(Vysyx_23060336___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060336___024root___eval_triggers__ico(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_23060336___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060336___024root___dump_triggers__act(Vysyx_23060336___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060336___024root___eval_triggers__act(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock)));
    vlSelf->__VactTriggered.at(1U) = (((IData)(vlSelf->io_checkright) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__io_checkright))) 
                                      | ((IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__check__DOT__CheckFail) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_23060336__DOT__exu__DOT__check__DOT__CheckFail))));
    vlSelf->__VactTriggered.at(2U) = (((IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__check__DOT__CheckFail) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_23060336__DOT__exu__DOT__check__DOT__CheckFail))) 
                                      | ((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_checkright) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__ysyx_23060336__DOT__exu_io_in_bits_r_checkright))));
    vlSelf->__VactTriggered.at(3U) = (((IData)(vlSelf->clock) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clock))) 
                                      | ((IData)(vlSelf->reset) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__reset))));
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
    vlSelf->__Vtrigrprev__TOP__io_checkright = vlSelf->io_checkright;
    vlSelf->__Vtrigrprev__TOP__ysyx_23060336__DOT__exu__DOT__check__DOT__CheckFail 
        = vlSelf->ysyx_23060336__DOT__exu__DOT__check__DOT__CheckFail;
    vlSelf->__Vtrigrprev__TOP__ysyx_23060336__DOT__exu_io_in_bits_r_checkright 
        = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_checkright;
    vlSelf->__Vtrigrprev__TOP__reset = vlSelf->reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_23060336___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vysyx_23060336___024unit____Vdpiimwrap_set_npc_state_TOP____024unit(IData/*31:0*/ ebreak);

VL_INLINE_OPT void Vysyx_23060336___024root___nba_sequent__TOP__0(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0;
    __Vdlyvval__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0;
    __Vdlyvset__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0 = 0;
    SData/*11:0*/ __Vdlyvdim0__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0;
    __Vdlyvdim0__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0;
    __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0;
    __Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v1;
    __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v1 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v2;
    __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v2 = 0;
    IData/*31:0*/ __Vdly__ysyx_23060336__DOT__clint__DOT__mtimel;
    __Vdly__ysyx_23060336__DOT__clint__DOT__mtimel = 0;
    IData/*31:0*/ __Vdly__ysyx_23060336__DOT__clint__DOT__mtimeh;
    __Vdly__ysyx_23060336__DOT__clint__DOT__mtimeh = 0;
    // Body
    __Vdly__ysyx_23060336__DOT__clint__DOT__mtimeh 
        = vlSelf->ysyx_23060336__DOT__clint__DOT__mtimeh;
    __Vdly__ysyx_23060336__DOT__clint__DOT__mtimel 
        = vlSelf->ysyx_23060336__DOT__clint__DOT__mtimel;
    vlSelf->__Vdly__ysyx_23060336__DOT__xbar__DOT__arid_halt 
        = vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt;
    Vysyx_23060336___024unit____Vdpiimwrap_set_npc_state_TOP____024unit(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_ebreak);
    __Vdlyvset__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0 = 0U;
    if (((IData)(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegWr) 
         & (0U != (IData)(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_rd)))) {
        __Vdlyvval__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0 
            = vlSelf->io_regwdata;
        __Vdlyvset__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0 
            = vlSelf->io_wburd;
    }
    __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v1 
        = vlSelf->ysyx_23060336__DOT__csr__DOT____Vcellinp__ysyx_23060336_csrs_ext__W1_data;
    __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v2 
        = vlSelf->ysyx_23060336__DOT__csr__DOT____Vcellinp__ysyx_23060336_csrs_ext__W2_data;
    if (vlSelf->io_lsuvalid) {
        vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_pc 
            = vlSelf->io_lsupc;
        vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_DataOut 
            = vlSelf->io_regdata;
        vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_result 
            = vlSelf->io_csrdata;
        vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegNum 
            = vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_RegNum;
        vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_Csr 
            = vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_Csr;
        vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_ebreak 
            = vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_ebreak;
        vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_rd 
            = vlSelf->io_lsurd;
        vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegWr 
            = vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_RegWr;
    }
    if (vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_CsrWr) {
        __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0 
            = vlSelf->io_wburesult;
        __Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0 
            = vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_csr;
    }
    if (vlSelf->io_lsuvalid) {
        vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_CsrWr 
            = vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_CsrWr;
    }
    vlSelf->io_regwdata = ((IData)(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_CsrWr)
                            ? vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_Csr
                            : (((2U == (IData)(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegNum)) 
                                | (5U == (IData)(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegNum)))
                                ? vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_DataOut
                                : ((3U == (IData)(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegNum))
                                    ? (0xffU & vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_DataOut)
                                    : ((4U == (IData)(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegNum))
                                        ? (0xffffU 
                                           & vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_DataOut)
                                        : ((0U == (IData)(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegNum))
                                            ? (((- (IData)(
                                                           (1U 
                                                            & (vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_DataOut 
                                                               >> 7U)))) 
                                                << 8U) 
                                               | (0xffU 
                                                  & vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_DataOut))
                                            : ((1U 
                                                == (IData)(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegNum))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_DataOut 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_DataOut))
                                                : vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_DataOut))))));
    if (vlSelf->io_lsuvalid) {
        vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_csr 
            = vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_csr;
    }
    if (((IData)(vlSelf->io_exuvalid) & (IData)(vlSelf->io_lsuready))) {
        vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_pc 
            = vlSelf->io_exupc;
        vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemWr 
            = vlSelf->io_exuMemWr;
        vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_rd 
            = vlSelf->io_exurd;
        vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result 
            = vlSelf->io_aluresult;
        vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemtoReg 
            = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_MemtoReg;
        vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_src2 
            = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_src2;
        vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_RegNum 
            = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_RegNum;
        vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_Csr 
            = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Csr;
        vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_ebreak 
            = vlSelf->io_ebreak;
        vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_RegWr 
            = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_RegWr;
        vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_CsrWr 
            = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_CsrWr;
        vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_csr 
            = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_csr;
    }
    vlSelf->ysyx_23060336__DOT__ifu__DOT__Checkright 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyx_23060336__DOT___exu_io_checkfail));
    if (((IData)(vlSelf->io_ifuvalid) & (IData)(vlSelf->io_ifuready))) {
        vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_pc 
            = ((IData)(vlSelf->ysyx_23060336__DOT___exu_io_checkfail)
                ? vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_pc
                : vlSelf->ysyx_23060336__DOT__ifu__DOT__PC);
    }
    if (vlSelf->io_ifuvalid) {
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_MemWr 
            = vlSelf->io_iduMemWr;
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_mret 
            = vlSelf->ysyx_23060336__DOT___idu_io_out_bits_mret;
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_ecall 
            = vlSelf->ysyx_23060336__DOT___idu_io_out_bits_ecall;
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Check 
            = ((~ (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h782dc640__0)) 
               & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN_0)) 
                  | ((4U == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN_0)) 
                     | ((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN_0)) 
                        & (0x67U == (IData)(vlSelf->io_iduopcode))))));
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_ebreak 
            = vlSelf->ysyx_23060336__DOT___idu_io_out_bits_ebreak;
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Branch 
            = vlSelf->ysyx_23060336__DOT___idu_io_out_bits_Branch;
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_PcMux 
            = vlSelf->io_idupcmux;
        if (vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h782dc640__0) {
            vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_rd = 0U;
            vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_imm = 0U;
            vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_src1 = 0U;
            vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel = 0U;
        } else {
            vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_rd 
                = (0x1fU & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                            >> 7U));
            vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_imm 
                = ((1U & (IData)(((0x1013U == (0x1013U 
                                               & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                  & (0x5bU == (0x5bU 
                                               & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__immNum_invInputs))))))
                    ? (((- (IData)((1U & (vlSelf->ysyx_23060336__DOT__idu__DOT__casez_tmp 
                                          >> 4U)))) 
                        << 5U) | (0x1fU & vlSelf->ysyx_23060336__DOT__idu__DOT__casez_tmp))
                    : vlSelf->ysyx_23060336__DOT__idu__DOT__casez_tmp);
            vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_src1 
                = vlSelf->io_regsrc1;
            vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel 
                = vlSelf->ysyx_23060336__DOT__idu__DOT___io_out_bits_AluSel_T_3;
        }
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_zimm 
            = (0x1fU & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                        >> 0xfU));
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Recsr 
            = (IData)(((0x73U == (0x7fU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                       & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3c1cf46e__0)));
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux 
            = vlSelf->ysyx_23060336__DOT___idu_io_out_bits_AluMux;
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_MemtoReg 
            = ((~ (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h782dc640__0)) 
               & (IData)(((3U == (0x1fU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                          & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf34c4125__0))));
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_src2 
            = vlSelf->io_regsrc2;
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_pc 
            = vlSelf->ysyx_23060336__DOT___idu_io_out_bits_pc;
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_RegNum 
            = vlSelf->ysyx_23060336__DOT___idu_io_out_bits_RegNum;
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Csr 
            = vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
            [(vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
              >> 0x14U)];
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_RegWr 
            = ((~ (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h782dc640__0)) 
               & ((IData)(((3U == (0xfU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                           & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf34c4125__0))) 
                  | ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                      & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                          >> 1U) & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hcd64561c__0))) 
                     | ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3804dd5e__0) 
                        | (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h18adaeaa__0)))));
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_CsrWr 
            = ((~ (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h782dc640__0)) 
               & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h18adaeaa__0));
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_csr 
            = (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
               >> 0x14U);
    }
    if (vlSelf->reset) {
        __Vdly__ysyx_23060336__DOT__clint__DOT__mtimel = 0U;
        __Vdly__ysyx_23060336__DOT__clint__DOT__mtimeh = 0U;
        vlSelf->__Vdly__ysyx_23060336__DOT__xbar__DOT__arid_halt = 1U;
        vlSelf->ysyx_23060336__DOT__xbar__DOT__awid_halt = 1U;
        vlSelf->ysyx_23060336__DOT__ifu__DOT__PC = 0x80000000U;
    } else {
        if ((0xffffffffU == vlSelf->ysyx_23060336__DOT__clint__DOT__mtimel)) {
            __Vdly__ysyx_23060336__DOT__clint__DOT__mtimeh 
                = ((IData)(1U) + vlSelf->ysyx_23060336__DOT__clint__DOT__mtimeh);
            __Vdly__ysyx_23060336__DOT__clint__DOT__mtimel = 0U;
        } else {
            __Vdly__ysyx_23060336__DOT__clint__DOT__mtimel 
                = ((IData)(1U) + vlSelf->ysyx_23060336__DOT__clint__DOT__mtimel);
        }
        if ((((1U == (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt)) 
              & (IData)(vlSelf->io_ifuready)) & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid))) {
            vlSelf->__Vdly__ysyx_23060336__DOT__xbar__DOT__arid_halt = 2U;
        } else if ((((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_0) 
                     & (IData)(vlSelf->io_lsurready)) 
                    & (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid))) {
            vlSelf->__Vdly__ysyx_23060336__DOT__xbar__DOT__arid_halt = 1U;
        }
        vlSelf->ysyx_23060336__DOT__xbar__DOT__awid_halt = 2U;
        if (vlSelf->reset) {
            vlSelf->ysyx_23060336__DOT__ifu__DOT__PC = 0x80000000U;
        } else if (vlSelf->ysyx_23060336__DOT__ifu__DOT___GEN) {
            vlSelf->ysyx_23060336__DOT__ifu__DOT__PC 
                = vlSelf->io_NPC;
        } else if (vlSelf->io_ifuvalid) {
            vlSelf->ysyx_23060336__DOT__ifu__DOT__PC 
                = vlSelf->ysyx_23060336__DOT__ifu__DOT___PC_T_2;
        }
    }
    vlSelf->ysyx_23060336__DOT__clint__DOT__mtimel 
        = __Vdly__ysyx_23060336__DOT__clint__DOT__mtimel;
    vlSelf->ysyx_23060336__DOT__clint__DOT__mtimeh 
        = __Vdly__ysyx_23060336__DOT__clint__DOT__mtimeh;
    if (__Vdlyvset__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0) {
        vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[__Vdlyvdim0__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0] 
            = __Vdlyvval__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0;
    }
    vlSelf->io_awid_halt = vlSelf->ysyx_23060336__DOT__xbar__DOT__awid_halt;
    vlSelf->io_wbupc = vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_pc;
    vlSelf->io_wburesult = vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_result;
    vlSelf->io_lsupc = vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_pc;
    vlSelf->io_exuMemWr = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_MemWr;
    vlSelf->io_lsuMemWr = vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemWr;
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_6 = 
        ((vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result 
          >> 0x1fU) & (0x81000000U > vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result));
    vlSelf->io_exupcmux = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_PcMux;
    vlSelf->io_exurd = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_rd;
    vlSelf->io_MemtoReg = vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemtoReg;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__cin 
        = (IData)((0U != (9U & (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel))));
    vlSelf->io_idupc = vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_pc;
    vlSelf->io_alumux = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux;
    vlSelf->io_lsurd = vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_rd;
    vlSelf->io_lsuawready = vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_6;
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_7 = 
        (1U & ((~ ((0xa0000047U < vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result) 
                   & (0xa0000089U > vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result))) 
               | (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_6)));
    vlSelf->io_ebreak = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_ebreak;
    vlSelf->io_wburd = vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_rd;
    vlSelf->io_regwen = vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegWr;
    vlSelf->io_lsuwready = vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_7;
    vlSelf->io_PC = vlSelf->ysyx_23060336__DOT__ifu__DOT__PC;
    vlSelf->ysyx_23060336__DOT__ifu__DOT___PC_T_2 = 
        ((IData)(4U) + vlSelf->ysyx_23060336__DOT__ifu__DOT__PC);
    vlSelf->io_exupc = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_pc;
    vlSelf->io_ina = (((7U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux)) 
                       | (1U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux)))
                       ? vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_src1
                       : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux))
                           ? vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_pc
                           : ((3U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux))
                               ? 0U : ((4U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux))
                                        ? vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_pc
                                        : (((5U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux)) 
                                            | (8U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux)))
                                            ? ((- (IData)((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Recsr))) 
                                               ^ vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_src1)
                                            : (((9U 
                                                 == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux)) 
                                                | (6U 
                                                   == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux)))
                                                ? (
                                                   (- (IData)((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Recsr))) 
                                                   ^ vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_zimm)
                                                : 0U))))));
    vlSelf->io_lsuawvalid = ((IData)(vlSelf->io_ifuarvalid) 
                             & ((~ (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_ebreak)) 
                                & (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemWr)));
    vlSelf->io_lsurready = ((~ (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_ebreak)) 
                            & (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemtoReg));
    vlSelf->io_regwaddr = vlSelf->io_wburd;
    if (__Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0) {
        vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory[__Vdlyvdim0__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0] 
            = __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0;
    }
    vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory[0x341U] 
        = __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v1;
    vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory[0x342U] 
        = __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v2;
    vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory[0x300U] = 0x1800U;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn 
        = (IData)((((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel) 
                    >> 1U) & (vlSelf->io_ina >> 0x1fU)));
    vlSelf->io_lsuwvalid = vlSelf->io_lsuawvalid;
    vlSelf->io_mcause = vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
        [0x342U];
    vlSelf->io_mstatus = vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
        [0x300U];
    if (vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_ecall) {
        vlSelf->ysyx_23060336__DOT__csr__DOT____Vcellinp__ysyx_23060336_csrs_ext__W2_data = 0xbU;
        vlSelf->ysyx_23060336__DOT__csr__DOT____Vcellinp__ysyx_23060336_csrs_ext__W1_data 
            = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_pc;
    } else {
        vlSelf->ysyx_23060336__DOT__csr__DOT____Vcellinp__ysyx_23060336_csrs_ext__W2_data 
            = vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
            [0x342U];
        vlSelf->ysyx_23060336__DOT__csr__DOT____Vcellinp__ysyx_23060336_csrs_ext__W1_data 
            = vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
            [0x341U];
    }
    vlSelf->io_inb = ((7U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux))
                       ? vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_src2
                       : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux))
                           ? vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_imm
                           : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux))
                               ? 4U : ((3U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux))
                                        ? vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_imm
                                        : (((5U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux)) 
                                            | (6U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux)))
                                            ? vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Csr
                                            : ((4U 
                                                == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux))
                                                ? vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_imm
                                                : 0U))))));
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4 
        = ((2U & ((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel) 
                  << 1U)) | (1U & vlSelf->io_inb));
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__addsub__DOT__t_no_cin 
        = ((- (IData)((IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__cin))) 
           ^ vlSelf->io_inb);
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_3 
        = ((2U & ((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel) 
                  << 1U)) | (1U & (vlSelf->io_inb >> 1U)));
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_2 
        = ((2U & ((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel) 
                  << 1U)) | (1U & (vlSelf->io_inb >> 2U)));
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_1 
        = ((2U & ((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel) 
                  << 1U)) | (1U & (vlSelf->io_inb >> 3U)));
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel 
        = ((2U & ((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel) 
                  << 1U)) | (1U & (vlSelf->io_inb >> 4U)));
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__addsub__DOT___sum_T_1 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->io_ina)) 
                             + ((QData)((IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__addsub__DOT__t_no_cin)) 
                                + (QData)((IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__cin)))));
    if ((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel))) {
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp 
            = (1U & vlSelf->io_ina);
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_1 
            = (1U & (vlSelf->io_ina >> 1U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_29 
            = (1U & (vlSelf->io_ina >> 0x1eU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_30 
            = (1U & (vlSelf->io_ina >> 0x1fU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_3 
            = (1U & (vlSelf->io_ina >> 2U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_5 
            = (1U & (vlSelf->io_ina >> 3U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_27 
            = (1U & (vlSelf->io_ina >> 0x1cU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_28 
            = (1U & (vlSelf->io_ina >> 0x1dU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_7 
            = (1U & (vlSelf->io_ina >> 4U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_9 
            = (1U & (vlSelf->io_ina >> 5U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_25 
            = (1U & (vlSelf->io_ina >> 0x1aU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_26 
            = (1U & (vlSelf->io_ina >> 0x1bU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_11 
            = (1U & (vlSelf->io_ina >> 6U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_13 
            = (1U & (vlSelf->io_ina >> 7U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_23 
            = (1U & (vlSelf->io_ina >> 0x18U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_24 
            = (1U & (vlSelf->io_ina >> 0x19U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_0 
            = (1U & (vlSelf->io_ina >> 8U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_2 
            = (1U & (vlSelf->io_ina >> 9U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_21 
            = (1U & (vlSelf->io_ina >> 0x16U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_22 
            = (1U & (vlSelf->io_ina >> 0x17U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_4 
            = (1U & (vlSelf->io_ina >> 0xaU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_6 
            = (1U & (vlSelf->io_ina >> 0xbU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_19 
            = (1U & (vlSelf->io_ina >> 0x14U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_20 
            = (1U & (vlSelf->io_ina >> 0x15U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_8 
            = (1U & (vlSelf->io_ina >> 0xcU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_10 
            = (1U & (vlSelf->io_ina >> 0xdU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_17 
            = (1U & (vlSelf->io_ina >> 0x12U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_18 
            = (1U & (vlSelf->io_ina >> 0x13U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_12 
            = (1U & (vlSelf->io_ina >> 0xeU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_14 
            = (1U & (vlSelf->io_ina >> 0xfU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_15 
            = (1U & (vlSelf->io_ina >> 0x10U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_16 
            = (1U & (vlSelf->io_ina >> 0x11U));
    } else if ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel))) {
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp 
            = (1U & (vlSelf->io_ina >> 0x10U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_1 
            = (1U & (vlSelf->io_ina >> 0x11U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_29 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_30 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_3 
            = (1U & (vlSelf->io_ina >> 0x12U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_5 
            = (1U & (vlSelf->io_ina >> 0x13U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_27 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_28 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_7 
            = (1U & (vlSelf->io_ina >> 0x14U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_9 
            = (1U & (vlSelf->io_ina >> 0x15U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_25 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_26 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_11 
            = (1U & (vlSelf->io_ina >> 0x16U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_13 
            = (1U & (vlSelf->io_ina >> 0x17U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_23 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_24 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_0 
            = (1U & (vlSelf->io_ina >> 0x18U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_2 
            = (1U & (vlSelf->io_ina >> 0x19U));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_21 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_22 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_4 
            = (1U & (vlSelf->io_ina >> 0x1aU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_6 
            = (1U & (vlSelf->io_ina >> 0x1bU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_19 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_20 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_8 
            = (1U & (vlSelf->io_ina >> 0x1cU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_10 
            = (1U & (vlSelf->io_ina >> 0x1dU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_17 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_18 
            = (1U & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_12 
            = (1U & (vlSelf->io_ina >> 0x1eU));
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_14 
            = (1U & (vlSelf->io_ina >> 0x1fU));
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
    }
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
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_61 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_29;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_62 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_30;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_35 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_3;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_37 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_5;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_59 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_27;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_60 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_28;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_32 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_7;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_43 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_8;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_51 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_19;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_34 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_9;
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
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_36 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_11;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_45 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_12;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_53 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_21;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_38 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_13;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_46 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_14;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_54 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_22;
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
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_61 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_62 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_35 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_4;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_37 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_6;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_59 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_60 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_32 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_8;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_43 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_19;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_51 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_27;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_34 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_10;
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
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_36 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_12;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_45 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_21;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_53 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_29;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_38 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_14;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_46 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_22;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_54 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_30;
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
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_61 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_29;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_62 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_30;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_59 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_27;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_60 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_28;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_43 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_8;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_51 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_19;
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
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_45 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_12;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_53 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_21;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_46 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_14;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_54 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_22;
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
    } else {
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_31 = 0U;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_33 = 0U;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_61 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_21;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_62 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_22;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_59 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_19;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_60 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_20;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_43 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_7;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_51 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_8;
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
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_45 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_11;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_53 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_12;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_46 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_13;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_54 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_14;
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
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_35 = 0U;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_37 = 0U;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_32 = 0U;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_34 = 0U;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_36 = 0U;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_38 = 0U;
    }
    if ((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_2))) {
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_63 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_31;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_65 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_33;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_93 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_61;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_94 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_62;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_64 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_35;
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
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_89 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_57;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_66 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_37;
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
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_90 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_58;
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
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_93 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_94 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_64 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_36;
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
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_89 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_61;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_66 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_38;
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
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_90 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_62;
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
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_93 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_61;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_94 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_62;
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
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_89 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_57;
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
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_90 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_58;
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
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_64 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_35;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_66 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_37;
    } else {
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_63 = 0U;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_65 = 0U;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_93 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_57;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_94 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_58;
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
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_89 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_53;
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
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_90 
            = vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_54;
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
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_64 = 0U;
        vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_66 = 0U;
    }
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
    vlSelf->io_aluresult = (((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel)) 
                             | (1U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel)))
                             ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__addsub__DOT___sum_T_1)
                             : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel))
                                 ? (~ vlSelf->io_ina)
                                 : ((3U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel))
                                     ? (vlSelf->io_ina 
                                        & vlSelf->io_inb)
                                     : ((4U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel))
                                         ? (vlSelf->io_ina 
                                            | vlSelf->io_inb)
                                         : ((5U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel))
                                             ? (vlSelf->io_ina 
                                                ^ vlSelf->io_inb)
                                             : (((6U 
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
                                                       & (vlSelf->io_aluresult 
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
    vlSelf->io_NPC = ((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_ebreak)
                       ? vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_pc
                       : ((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_ecall)
                           ? vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                          [0x305U] : ((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_mret)
                                       ? vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                                      [0x341U] : vlSelf->io_pcadd)));
}

void Vysyx_23060336___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ araddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vysyx_23060336___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ awaddr, IData/*31:0*/ wdata, IData/*31:0*/ wstrb, IData/*31:0*/ &pmem_write__Vfuncrtn);

VL_INLINE_OPT void Vysyx_23060336___024root___nba_sequent__TOP__1(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vfunc_pmem_read__1__Vfuncout;
    __Vfunc_pmem_read__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_pmem_write__2__Vfuncout;
    __Vfunc_pmem_write__2__Vfuncout = 0;
    IData/*31:0*/ __Vdly__ysyx_23060336__DOT__sdram__DOT__Begin;
    __Vdly__ysyx_23060336__DOT__sdram__DOT__Begin = 0;
    IData/*31:0*/ __Vdly__ysyx_23060336__DOT__sdram__DOT__resp;
    __Vdly__ysyx_23060336__DOT__sdram__DOT__resp = 0;
    // Body
    __Vdly__ysyx_23060336__DOT__sdram__DOT__resp = vlSelf->ysyx_23060336__DOT__sdram__DOT__resp;
    __Vdly__ysyx_23060336__DOT__sdram__DOT__Begin = vlSelf->ysyx_23060336__DOT__sdram__DOT__Begin;
    if (vlSelf->reset) {
        vlSelf->ysyx_23060336__DOT___sdram_bvalid = 0U;
        vlSelf->ysyx_23060336__DOT___sdram_rvalid = 0U;
        __Vdly__ysyx_23060336__DOT__sdram__DOT__Begin = 0U;
    } else {
        __Vdly__ysyx_23060336__DOT__sdram__DOT__Begin 
            = ((IData)(1U) + vlSelf->ysyx_23060336__DOT__sdram__DOT__Begin);
        if (((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_4) 
             & ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN)
                 ? ((2U == (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt))
                     ? (IData)(vlSelf->io_lsuarvalid)
                     : (IData)(vlSelf->io_ifuarvalid))
                 : ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_1)
                     ? (IData)(vlSelf->io_ifuarvalid)
                     : ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_2) 
                        & (IData)(vlSelf->io_lsuarvalid)))))) {
            Vysyx_23060336___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr, __Vfunc_pmem_read__1__Vfuncout);
            vlSelf->ysyx_23060336__DOT___sdram_rvalid = 1U;
            vlSelf->ysyx_23060336__DOT__sdram__DOT__sdramdata 
                = __Vfunc_pmem_read__1__Vfuncout;
        } else {
            vlSelf->ysyx_23060336__DOT___sdram_rvalid = 0U;
        }
        vlSelf->ysyx_23060336__DOT___sdram_bvalid = vlSelf->ysyx_23060336__DOT___xbar_io_sdram_awvalid;
        if (vlSelf->ysyx_23060336__DOT___xbar_io_sdram_awvalid) {
            Vysyx_23060336___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->io_csrdata, vlSelf->io_lsuwdata, (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemNum), __Vfunc_pmem_write__2__Vfuncout);
            __Vdly__ysyx_23060336__DOT__sdram__DOT__resp 
                = __Vfunc_pmem_write__2__Vfuncout;
        } else {
            __Vdly__ysyx_23060336__DOT__sdram__DOT__resp 
                = vlSelf->ysyx_23060336__DOT__sdram__DOT__resp;
        }
    }
    vlSelf->ysyx_23060336__DOT__sdram__DOT__resp = __Vdly__ysyx_23060336__DOT__sdram__DOT__resp;
    vlSelf->ysyx_23060336__DOT__sdram__DOT__Begin = __Vdly__ysyx_23060336__DOT__sdram__DOT__Begin;
}

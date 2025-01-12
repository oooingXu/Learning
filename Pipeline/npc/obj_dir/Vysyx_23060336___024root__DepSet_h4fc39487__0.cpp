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
    vlSelf->__Vtrigrprev__TOP__clock = vlSelf->clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_23060336___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vysyx_23060336___024unit____Vdpiimwrap_set_npc_state_TOP____024unit(IData/*31:0*/ ebreak);
void Vysyx_23060336___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ araddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vysyx_23060336___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ awaddr, IData/*31:0*/ wdata, IData/*31:0*/ wstrb, IData/*31:0*/ &pmem_write__Vfuncrtn);

VL_INLINE_OPT void Vysyx_23060336___024root___nba_sequent__TOP__0(Vysyx_23060336___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_pmem_read__1__Vfuncout;
    __Vfunc_pmem_read__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_pmem_write__2__Vfuncout;
    __Vfunc_pmem_write__2__Vfuncout = 0;
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
    IData/*31:0*/ __Vdly__ysyx_23060336__DOT___sdram_rdata;
    __Vdly__ysyx_23060336__DOT___sdram_rdata = 0;
    IData/*31:0*/ __Vdly__ysyx_23060336__DOT__sdram__DOT__resp;
    __Vdly__ysyx_23060336__DOT__sdram__DOT__resp = 0;
    IData/*31:0*/ __Vdly__ysyx_23060336__DOT__clint__DOT__mtimel;
    __Vdly__ysyx_23060336__DOT__clint__DOT__mtimel = 0;
    IData/*31:0*/ __Vdly__ysyx_23060336__DOT__clint__DOT__mtimeh;
    __Vdly__ysyx_23060336__DOT__clint__DOT__mtimeh = 0;
    // Body
    __Vdly__ysyx_23060336__DOT__clint__DOT__mtimeh 
        = vlSelf->ysyx_23060336__DOT__clint__DOT__mtimeh;
    __Vdly__ysyx_23060336__DOT__clint__DOT__mtimel 
        = vlSelf->ysyx_23060336__DOT__clint__DOT__mtimel;
    Vysyx_23060336___024unit____Vdpiimwrap_set_npc_state_TOP____024unit(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_ebreak);
    __Vdly__ysyx_23060336__DOT__sdram__DOT__resp = vlSelf->ysyx_23060336__DOT__sdram__DOT__resp;
    __Vdly__ysyx_23060336__DOT___sdram_rdata = vlSelf->ysyx_23060336__DOT___sdram_rdata;
    __Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0 = 0U;
    __Vdlyvset__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0 = 0U;
    __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v1 
        = vlSelf->ysyx_23060336__DOT__csr__DOT____Vcellinp__ysyx_23060336_csrs_ext__W1_data;
    __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v2 
        = vlSelf->ysyx_23060336__DOT__csr__DOT____Vcellinp__ysyx_23060336_csrs_ext__W2_data;
    if (((IData)(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegWr) 
         & (0U != (IData)(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_rd)))) {
        __Vdlyvval__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0 
            = vlSelf->io_regwdata;
        __Vdlyvset__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0 
            = vlSelf->io_wburd;
    }
    vlSelf->ysyx_23060336__DOT__idu__DOT__isRAWn = 
        ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__israwn));
    if (vlSelf->io_lsuready) {
        vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_pc 
            = vlSelf->io_exupc;
        vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemWr 
            = vlSelf->io_exuMemWr;
        vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_rd 
            = vlSelf->io_exurd;
        vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemtoReg 
            = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_MemtoReg;
    }
    if (vlSelf->io_lsuvalid) {
        vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_pc 
            = vlSelf->io_lsupc;
        vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_result 
            = vlSelf->io_lsuaraddr;
        vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegNum 
            = vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_RegNum;
        vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_DataOut 
            = ((IData)(vlSelf->ysyx_23060336__DOT__lsu__DOT__prepare)
                ? vlSelf->io_lsurdata : vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result);
    }
    if (((IData)(vlSelf->io_iduvalid) & (IData)(vlSelf->io_exuready))) {
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_MemWr 
            = vlSelf->io_iduMemWr;
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_mret 
            = vlSelf->ysyx_23060336__DOT___idu_io_out_bits_mret;
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_ecall 
            = vlSelf->ysyx_23060336__DOT___idu_io_out_bits_ecall;
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_ebreak 
            = vlSelf->ysyx_23060336__DOT___idu_io_out_bits_ebreak;
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Check 
            = ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN_0)) 
               | ((4U == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN_0)) 
                  | ((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN_0)) 
                     & (0x67U == (IData)(vlSelf->io_iduopcode)))));
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Branch 
            = vlSelf->ysyx_23060336__DOT___idu_io_out_bits_Branch;
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_PcMux 
            = vlSelf->io_idupcmux;
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_rd 
            = (0x1fU & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                        >> 7U));
    }
    if (vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_CsrWr) {
        __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0 
            = vlSelf->io_wburesult;
        __Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0 = 1U;
        __Vdlyvdim0__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0 
            = vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_csr;
    }
    if (((IData)(vlSelf->io_ifuvalid) & (IData)(vlSelf->io_ifuready))) {
        vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_pc 
            = vlSelf->io_PC;
        vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_checkright 
            = vlSelf->io_checkright;
    }
    if (vlSelf->reset) {
        __Vdly__ysyx_23060336__DOT__clint__DOT__mtimel = 0U;
        __Vdly__ysyx_23060336__DOT__clint__DOT__mtimeh = 0U;
        vlSelf->ysyx_23060336__DOT__ifu__DOT__Checkright = 0U;
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
        vlSelf->ysyx_23060336__DOT__ifu__DOT__Checkright 
            = ((IData)(vlSelf->io_checkfail) ? ((IData)(1U) 
                                                + vlSelf->ysyx_23060336__DOT__ifu__DOT__Checkright)
                : 0U);
        vlSelf->ysyx_23060336__DOT__xbar__DOT__awid_halt = 2U;
        if (vlSelf->reset) {
            vlSelf->ysyx_23060336__DOT__ifu__DOT__PC = 0x80000000U;
        } else if (vlSelf->ysyx_23060336__DOT__ifu__DOT___GEN) {
            vlSelf->ysyx_23060336__DOT__ifu__DOT__PC 
                = vlSelf->io_NPC;
        } else if (((IData)(vlSelf->io_ifuvalid) & (IData)(vlSelf->io_ifuready))) {
            vlSelf->ysyx_23060336__DOT__ifu__DOT__PC 
                = vlSelf->ysyx_23060336__DOT__ifu__DOT___io_axi_araddr_T_2;
        }
    }
    if (vlSelf->reset) {
        vlSelf->ysyx_23060336__DOT__sdram__DOT__bvalid = 0U;
        vlSelf->ysyx_23060336__DOT___sdram_rvalid = 0U;
    } else {
        if (((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_6) 
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
            __Vdly__ysyx_23060336__DOT___sdram_rdata 
                = __Vfunc_pmem_read__1__Vfuncout;
        } else {
            __Vdly__ysyx_23060336__DOT___sdram_rdata 
                = vlSelf->ysyx_23060336__DOT___sdram_rdata;
            vlSelf->ysyx_23060336__DOT___sdram_rvalid = 0U;
        }
        vlSelf->ysyx_23060336__DOT__sdram__DOT__bvalid 
            = vlSelf->ysyx_23060336__DOT___xbar_io_sdram_awvalid;
        if (vlSelf->ysyx_23060336__DOT___xbar_io_sdram_awvalid) {
            Vysyx_23060336___024unit____Vdpiimwrap_pmem_write_TOP____024unit(vlSelf->io_lsuaraddr, vlSelf->io_lsuwdata, (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemNum), __Vfunc_pmem_write__2__Vfuncout);
            __Vdly__ysyx_23060336__DOT__sdram__DOT__resp 
                = __Vfunc_pmem_write__2__Vfuncout;
        } else {
            __Vdly__ysyx_23060336__DOT__sdram__DOT__resp 
                = vlSelf->ysyx_23060336__DOT__sdram__DOT__resp;
        }
    }
    if (vlSelf->io_lsuvalid) {
        vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_Csr 
            = vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_Csr;
        vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_ebreak 
            = vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_ebreak;
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
        vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_rd 
            = vlSelf->io_lsurd;
        vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegWr 
            = vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_RegWr;
    }
    if (vlSelf->io_lsuready) {
        vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_src2 
            = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_src2;
        vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_RegNum 
            = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_RegNum;
        vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result 
            = vlSelf->ysyx_23060336__DOT__exu__DOT___alu_io_result;
        vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemNum 
            = (7U & (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_MemNum));
        vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_Csr 
            = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Csr;
        vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_ebreak 
            = vlSelf->io_ebreak;
        vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_CsrWr 
            = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_CsrWr;
        vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_csr 
            = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_csr;
        vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_RegWr 
            = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_RegWr;
    }
    if (((IData)(vlSelf->io_iduvalid) & (IData)(vlSelf->io_exuready))) {
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_imm 
            = ((1U & (IData)(((0x1013U == (0x1013U 
                                           & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                              & (0x5bU == (0x5bU & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__immNum_invInputs))))))
                ? (((- (IData)((1U & (vlSelf->ysyx_23060336__DOT__idu__DOT__casez_tmp 
                                      >> 4U)))) << 5U) 
                   | (0x1fU & vlSelf->ysyx_23060336__DOT__idu__DOT__casez_tmp))
                : vlSelf->ysyx_23060336__DOT__idu__DOT__casez_tmp);
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_zimm 
            = vlSelf->io_idurs1;
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_src1 
            = vlSelf->io_regsrc1;
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_pc 
            = vlSelf->io_idupc;
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Recsr 
            = (IData)(((0x73U == (0x7fU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                       & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3c1cf46e__0)));
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel 
            = vlSelf->ysyx_23060336__DOT___idu_io_out_bits_AluSel;
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux 
            = vlSelf->ysyx_23060336__DOT___idu_io_out_bits_AluMux;
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_MemtoReg 
            = (IData)(((3U == (0x1fU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                       & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf34c4125__0)));
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_src2 
            = vlSelf->io_regsrc2;
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_RegNum 
            = vlSelf->ysyx_23060336__DOT___idu_io_out_bits_RegNum;
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
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Csr 
            = vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
            [(vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
              >> 0x14U)];
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_CsrWr 
            = vlSelf->ysyx_23060336__DOT___idu_io_out_bits_CsrWr;
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_csr 
            = (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
               >> 0x14U);
        vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_RegWr 
            = ((IData)(((3U == (0xfU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                        & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf34c4125__0))) 
               | ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                   & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                       >> 1U) & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hcd64561c__0))) 
                  | ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3804dd5e__0) 
                     | (IData)(vlSelf->ysyx_23060336__DOT___idu_io_out_bits_CsrWr))));
    }
    if (((IData)(vlSelf->io_ifuvalid) & (IData)(vlSelf->io_ifuready))) {
        vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
            = vlSelf->io_inst;
    }
    vlSelf->ysyx_23060336__DOT__clint__DOT__mtimel 
        = __Vdly__ysyx_23060336__DOT__clint__DOT__mtimel;
    vlSelf->ysyx_23060336__DOT__clint__DOT__mtimeh 
        = __Vdly__ysyx_23060336__DOT__clint__DOT__mtimeh;
    if (__Vdlyvset__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0) {
        vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[__Vdlyvdim0__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0] 
            = __Vdlyvval__ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory__v0;
    }
    vlSelf->ysyx_23060336__DOT__sdram__DOT__resp = __Vdly__ysyx_23060336__DOT__sdram__DOT__resp;
    vlSelf->ysyx_23060336__DOT___sdram_rdata = __Vdly__ysyx_23060336__DOT___sdram_rdata;
    vlSelf->io_awid_halt = vlSelf->ysyx_23060336__DOT__xbar__DOT__awid_halt;
    vlSelf->io_wbupc = vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_pc;
    vlSelf->io_wburesult = vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_result;
    vlSelf->io_lsupc = vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_pc;
    vlSelf->io_idupc = vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_pc;
    vlSelf->io_lsuMemWr = vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemWr;
    vlSelf->io_exuMemWr = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_MemWr;
    vlSelf->io_PC = vlSelf->ysyx_23060336__DOT__ifu__DOT__PC;
    vlSelf->ysyx_23060336__DOT__ifu__DOT___io_axi_araddr_T_2 
        = ((IData)(4U) + vlSelf->ysyx_23060336__DOT__ifu__DOT__PC);
    vlSelf->io_exupcmux = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_PcMux;
    vlSelf->io_MemtoReg = vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemtoReg;
    vlSelf->io_exurd = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_rd;
    vlSelf->io_exupc = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_pc;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__cin 
        = (IData)((0U != (9U & (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel))));
    vlSelf->io_lsuwdata = vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_src2;
    vlSelf->io_alumux = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux;
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
    vlSelf->io_lsurd = vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_rd;
    vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn 
        = (IData)((((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel) 
                    >> 1U) & (vlSelf->io_ina >> 0x1fU)));
    vlSelf->io_ebreak = vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_ebreak;
    vlSelf->io_wburd = vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_rd;
    vlSelf->io_regwen = vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegWr;
    vlSelf->io_lsuaraddr = vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result;
    vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_8 = 
        ((vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result 
          >> 0x1fU) & (0x81000000U > vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result));
    if (vlSelf->reset) {
        vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt = 1U;
    } else if (vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_4) {
        vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt = 2U;
    } else if (vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_5) {
        vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt = 1U;
    }
    vlSelf->io_arid_halt = vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt;
    vlSelf->io_lsuawvalid = ((~ (IData)(vlSelf->reset)) 
                             & ((~ (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_ebreak)) 
                                & (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemWr)));
    vlSelf->io_lsurready = ((~ (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_ebreak)) 
                            & (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemtoReg));
    vlSelf->io_regwaddr = vlSelf->io_wburd;
    vlSelf->io_lsuawaddr = vlSelf->io_lsuaraddr;
    vlSelf->io_lsuawready = vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_8;
    vlSelf->io_lsuwready = (1U & ((~ ((0xa0000047U 
                                       < vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result) 
                                      & (0xa0000089U 
                                         > vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result))) 
                                  | (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_8)));
    if (__Vdlyvset__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0) {
        vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory[__Vdlyvdim0__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0] 
            = __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v0;
    }
    vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory[0x341U] 
        = __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v1;
    vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory[0x342U] 
        = __Vdlyvval__ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory__v2;
    vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory[0x300U] = 0x1800U;
    vlSelf->io_lsuwvalid = vlSelf->io_lsuawvalid;
    vlSelf->ysyx_23060336__DOT___xbar_io_sdram_awvalid 
        = ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_8) 
           & (IData)(vlSelf->io_lsuawvalid));
    vlSelf->io_lsuarvalid = ((~ (IData)(vlSelf->reset)) 
                             & (IData)(vlSelf->io_lsurready));
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
    vlSelf->io_exuready = (1U & (~ (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_ebreak)));
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
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3460ce47__0 
        = (IData)((0U == (0xc0000000U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hbfcac208__0 
        = (IData)((0x2070U == (0x2070U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3abbe375__0 
        = ((2U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                  >> 4U)) | (1U & (~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                      >> 6U))));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3d112f69__0 
        = (IData)((0x6000U == (0x6000U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)));
    vlSelf->ysyx_23060336__DOT__idu__DOT___GEN = ((0xe0U 
                                                   & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                      >> 7U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                        >> 2U)));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hcd64561c__0 
        = (IData)((0x10U == (0x58U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf3854a25__0 
        = ((2U & ((~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                      >> 5U)) << 1U)) | (1U & (~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                  >> 6U))));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3ef82d77__0 
        = ((2U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                  >> 4U)) | (1U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                   >> 6U)));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h7b4c8c17__0 
        = (IData)((3U == (0x4fU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hc580b573__0 
        = (IData)((0x60U == (0x60U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)));
    vlSelf->io_idurs1 = (0x1fU & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                  >> 0xfU));
    vlSelf->io_idurs2 = (0x1fU & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                  >> 0x14U));
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
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_mret 
        = (IData)(((0x30200073U == (0x3fffffffU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                   & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3460ce47__0)));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hb68bb68a__0 
        = (IData)(((0U == (0x3fe00000U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                   & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3460ce47__0)));
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_CsrWr 
        = (1U & (IData)(((3U == (0xfU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                         & ((IData)((0x1070U == (0x1070U 
                                                 & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst))) 
                            | (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hbfcac208__0)))));
    vlSelf->io_iduMemWr = (IData)(((3U == (0x1fU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                   & (3U == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3abbe375__0))));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hb80b8518__0 
        = ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
            >> 0xcU) & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3d112f69__0));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h8f0d9fc5__0 
        = ((2U & ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                      >> 6U)) << 1U)) | (1U & (~ ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                                  >> 7U))));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h599a574f__0 
        = (IData)((0U == (0x60U & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h7ff03fbd__0 
        = ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
               >> 5U)) & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3d112f69__0));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h67611bab__0 
        = (1U & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                  >> 0xdU) & (~ ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                 >> 7U))));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h055e0551__0 
        = (1U & ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                     >> 6U)) & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                >> 0xeU)));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h666d1c0e__0 
        = (1U & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                  >> 0xcU) & (~ ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                                 >> 6U))));
    vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs 
        = (0x7fffU & (~ ((0x7f00U & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                     >> 0x11U)) | (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hec6b80fc__0 
        = ((~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
               >> 4U)) & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hc580b573__0));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hec690571__0 
        = ((~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
               >> 4U)) & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hc580b573__0));
    vlSelf->io_regrs1 = vlSelf->io_idurs1;
    if ((0U != (IData)(vlSelf->io_idurs1))) {
        vlSelf->io_regsrc1 = vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory
            [vlSelf->io_idurs1];
        vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h59afddce__0 
            = ((IData)(vlSelf->io_idurs1) == (IData)(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_rd));
    } else {
        vlSelf->io_regsrc1 = 0U;
        vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h59afddce__0 = 0U;
    }
    vlSelf->io_regrs2 = vlSelf->io_idurs2;
    if ((0U != (IData)(vlSelf->io_idurs2))) {
        vlSelf->io_regsrc2 = vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory
            [vlSelf->io_idurs2];
        vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h08436509__0 
            = ((IData)(vlSelf->io_idurs2) == (IData)(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_rd));
    } else {
        vlSelf->io_regsrc2 = 0U;
        vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h08436509__0 = 0U;
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
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_ecall 
        = (IData)(((0x73U == (0x1fffffU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                   & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hb68bb68a__0)));
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_ebreak 
        = (IData)(((0x100073U == (0x1fffffU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                   & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hb68bb68a__0)));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hd237b447__0 
        = ((4U & ((~ ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN) 
                      >> 4U)) << 2U)) | (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h8f0d9fc5__0));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h70d45b70__0 
        = ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
            >> 0xcU) & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h055e0551__0));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf5581457__0 
        = (IData)(((0x60U == (0x60U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                   & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h666d1c0e__0)));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hefa2e071__0 
        = (IData)((0x7f00U == (0x7f00U & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs))));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h212147f6__0 
        = ((~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
               >> 3U)) & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hec6b80fc__0));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3804dd5e__0 
        = (IData)(((7U == (7U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                   & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hec690571__0)));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h21204722__0 
        = ((~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
               >> 3U)) & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hec690571__0));
    vlSelf->ysyx_23060336__DOT__idu__DOT__israwn = 
        ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h08436509__0) 
         | (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h59afddce__0));
    vlSelf->ysyx_23060336__DOT__exu__DOT___alu_io_result 
        = (((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel)) 
            | (1U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel)))
            ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__addsub__DOT___sum_T_1)
            : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel))
                ? (~ vlSelf->io_ina) : ((3U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel))
                                         ? (vlSelf->io_ina 
                                            & vlSelf->io_inb)
                                         : ((4U == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel))
                                             ? (vlSelf->io_ina 
                                                | vlSelf->io_inb)
                                             : ((5U 
                                                 == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel))
                                                 ? 
                                                (vlSelf->io_ina 
                                                 ^ vlSelf->io_inb)
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
                                             | (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hd237b447__0)))))));
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
                                                                 & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h70d45b70__0)))))))));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hd59316c1__0 
        = ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
            >> 0xdU) & (((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs) 
                         >> 7U) & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hefa2e071__0)));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h0153a42f__0 
        = ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
            >> 0xeU) & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hefa2e071__0));
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_Branch 
        = (IData)(((3U == (7U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                   & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h212147f6__0)));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h10b643de__0 
        = (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
           & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
               >> 1U) & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h21204722__0)));
    vlSelf->ysyx_23060336__DOT__exu__DOT__PCMux = (
                                                   ((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Branch) 
                                                    << 3U) 
                                                   | ((4U 
                                                       & (vlSelf->ysyx_23060336__DOT__exu__DOT___alu_io_result 
                                                          << 2U)) 
                                                      | (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_PcMux)));
    vlSelf->ysyx_23060336__DOT__idu__DOT___io_out_bits_MemNum_orMatrixOutputs_T_4 
        = ((2U & ((IData)(((0x23U == (0x23U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                           & (0U == (0xb7U & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))))) 
                  << 1U)) | (0x1ffU == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___io_out_bits_MemNum_andMatrixOutputs_T_1)));
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hc336bed0__0 
        = (((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs) 
            >> 6U) & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h0153a42f__0));
    vlSelf->io_idupcmux = (((IData)(((7U == (7U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                     & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h212147f6__0))) 
                            << 1U) | ((IData)(vlSelf->ysyx_23060336__DOT___idu_io_out_bits_Branch) 
                                      | (IData)(((0xfU 
                                                  == 
                                                  (0xfU 
                                                   & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                 & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hec6b80fc__0)))));
    vlSelf->ysyx_23060336__DOT___idu_io_out_bits_AluMux 
        = (((IData)((((0x13U == (0x13U & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                      & (0U == (3U & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN)))) 
                     & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf5581457__0))) 
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
                                          & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h21204722__0)) 
                                         | (IData)(
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))) 
                                                    & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hbfcac208__0)))))))) 
                       << 2U) | ((((IData)(((0x13U 
                                             == (0x1bU 
                                                 & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                            & (3U == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3abbe375__0)))) 
                                   | ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h10b643de__0) 
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
                                                    & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3d112f69__0)))))) 
                                  << 1U) | (1U & ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h7b4c8c17__0) 
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
                                                                    == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3abbe375__0)))) 
                                                        | (IData)(
                                                                  (((0x73U 
                                                                     == 
                                                                     (0x73U 
                                                                      & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                                    & (0U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN)))) 
                                                                   & ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h67611bab__0) 
                                                                      | (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h70d45b70__0)))))))))));
    vlSelf->ysyx_23060336__DOT__idu__DOT___GEN_0 = 
        (((0U == (((IData)((3U == (0x5fU & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst))) 
                   << 5U) | (((IData)(((3U == (0xfU 
                                               & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                       & (3U == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf3854a25__0)))) 
                              << 4U) | (((IData)(((0xfU 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                  & (3U 
                                                     == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf3854a25__0)))) 
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
                                                                   == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3ef82d77__0)))) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h10b643de__0))))))) 
          << 2U) | (((0U == (((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h7b4c8c17__0) 
                              << 3U) | (((IData)(((0xfU 
                                                   == 
                                                   (0x1fU 
                                                    & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                  & (3U 
                                                     == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf3854a25__0)))) 
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
                                                                 == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3ef82d77__0)))))))) 
                     << 1U) | (0U == (((IData)(((3U 
                                                 == 
                                                 (0xfU 
                                                  & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                & (3U 
                                                   == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf3854a25__0)))) 
                                       << 3U) | (((IData)(
                                                          ((0xfU 
                                                            == 
                                                            (0x1fU 
                                                             & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                           & (3U 
                                                              == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf3854a25__0)))) 
                                                  << 2U) 
                                                 | (((IData)(
                                                             ((3U 
                                                               == 
                                                               (0xfU 
                                                                & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                              & (3U 
                                                                 == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3ef82d77__0)))) 
                                                     << 1U) 
                                                    | (IData)(
                                                              ((7U 
                                                                == 
                                                                (0x17U 
                                                                 & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                               & (3U 
                                                                  == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3ef82d77__0))))))))));
    vlSelf->ysyx_23060336__DOT__exu__DOT____VdfgTmp_h2220bc55__0 
        = ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__PCMux)) 
           | (6U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__PCMux)));
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
                                                          & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hb80b8518__0))))))))) 
                          << 2U) | ((2U & ((0xfffffffeU 
                                            & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                << 1U) 
                                               & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                  & ((IData)(
                                                             ((0U 
                                                               == 
                                                               (7U 
                                                                & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN))) 
                                                              & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf5581457__0))) 
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
                                                             & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h7ff03fbd__0))))) 
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
                                                      & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h599a574f__0))) 
                                             | ((IData)(
                                                        (((0x13U 
                                                           == 
                                                           (0x13U 
                                                            & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                          & (0U 
                                                             == 
                                                             (0x3bU 
                                                              & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN)))) 
                                                         & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h67611bab__0))) 
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
    vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h268bbb67__0 
        = ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN_0)) 
           | ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN_0)) 
              | (5U == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN_0))));
    vlSelf->io_pca = ((IData)(vlSelf->ysyx_23060336__DOT__exu__DOT____VdfgTmp_h2220bc55__0)
                       ? vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_src1
                       : vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_pc);
    vlSelf->io_pcb = (((IData)(vlSelf->ysyx_23060336__DOT__exu__DOT____VdfgTmp_h2220bc55__0) 
                       | ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__PCMux)) 
                          | ((5U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__PCMux)) 
                             | (0xdU == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__PCMux)))))
                       ? vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_imm
                       : 4U);
    vlSelf->io_imm = vlSelf->ysyx_23060336__DOT__idu__DOT__casez_tmp;
    vlSelf->ysyx_23060336__DOT__idu__DOT___io_isRAW_T 
        = ((((((IData)(vlSelf->io_idurs1) == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_rd)) 
              & (0U != (IData)(vlSelf->io_idurs1))) 
             | ((((IData)(vlSelf->io_idurs1) == (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_rd)) 
                 & (0U != (IData)(vlSelf->io_idurs1))) 
                | (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h59afddce__0))) 
            & ((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN_0)) 
               | (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h268bbb67__0))) 
           | (((((IData)(vlSelf->io_idurs2) == (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_rd)) 
                & (0U != (IData)(vlSelf->io_idurs2))) 
               | ((((IData)(vlSelf->io_idurs2) == (IData)(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_rd)) 
                   & (0U != (IData)(vlSelf->io_idurs2))) 
                  | (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h08436509__0))) 
              & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h268bbb67__0)));
    vlSelf->io_pcadd = (vlSelf->io_pca + vlSelf->io_pcb);
    vlSelf->io_NPC = ((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_ebreak)
                       ? vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_pc
                       : ((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_ecall)
                           ? vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                          [0x305U] : ((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_mret)
                                       ? vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                                      [0x341U] : vlSelf->io_pcadd)));
    vlSelf->io_checkfail = ((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Check) 
                            & (vlSelf->io_NPC != ((IData)(4U) 
                                                  + vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_pc)));
    vlSelf->ysyx_23060336__DOT__ifu__DOT___GEN = ((IData)(vlSelf->io_checkfail) 
                                                  | (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_ebreak));
    vlSelf->ysyx_23060336__DOT__idu__DOT__isRAW = ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___io_isRAW_T) 
                                                   & ((~ (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__isRAWn)) 
                                                      & (~ (IData)(vlSelf->io_checkfail))));
    vlSelf->io_ifuaraddr = ((IData)(vlSelf->reset) ? 0x80000000U
                             : ((IData)(vlSelf->ysyx_23060336__DOT__ifu__DOT___GEN)
                                 ? vlSelf->io_NPC : 
                                ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__isRAW)
                                  ? vlSelf->ysyx_23060336__DOT__ifu__DOT__PC
                                  : ((IData)(4U) + vlSelf->ysyx_23060336__DOT__ifu__DOT__PC))));
    vlSelf->io_isRAW = ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___io_isRAW_T) 
                        & ((~ (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__israwn)) 
                           & (~ (IData)(vlSelf->io_checkfail))));
    vlSelf->io_ifuready = (1U & (~ (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__isRAW)));
    vlSelf->__VdfgTmp_h51ff62fa__0 = ((IData)(vlSelf->io_isRAW) 
                                      | (IData)(vlSelf->reset));
    vlSelf->io_iduready = vlSelf->io_ifuready;
    vlSelf->io_iduvalid = (((IData)(vlSelf->io_ifuready) 
                            & (~ (IData)(vlSelf->io_checkfail))) 
                           | ((IData)(vlSelf->io_exuready) 
                              & (IData)(vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_checkright)));
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

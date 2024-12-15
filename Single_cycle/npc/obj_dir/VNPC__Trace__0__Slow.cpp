// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VNPC__Syms.h"


VL_ATTR_COLD void VNPC___024root__trace_init_sub__TOP__0(VNPC___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+239,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"io_reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+242,"io_rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+243,"io_src1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+244,"io_src2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+245,"io_halt_ret",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+246,"io_PC",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+247,"io_NPC",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+248,"io_halt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+249,"io_instType",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+250,"io_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+251,"io_rs1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+252,"io_ina",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+253,"io_inb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+254,"io_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+255,"io_mtvec",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+256,"io_CsrWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+257,"io_Recsr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+258,"io_Csr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+259,"io_csr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+260,"io_DataOut",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+261,"io_AluMux",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+262,"io_AluMuxa",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+263,"io_AluMuxb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+264,"io_AluSel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+265,"io_AluSela",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+266,"io_AluSelb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+267,"io_PCMux",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+268,"io_MemNum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+269,"io_RegWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+270,"io_MemWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+271,"io_stop",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+272,"io_MemtoReg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("NPC ");
    tracep->declBit(c+239,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"io_reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+242,"io_rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+243,"io_src1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+244,"io_src2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+245,"io_halt_ret",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+246,"io_PC",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+247,"io_NPC",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+248,"io_halt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+249,"io_instType",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+250,"io_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+251,"io_rs1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+252,"io_ina",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+253,"io_inb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+254,"io_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+255,"io_mtvec",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+256,"io_CsrWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+257,"io_Recsr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+258,"io_Csr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+259,"io_csr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+260,"io_DataOut",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+261,"io_AluMux",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+262,"io_AluMuxa",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+263,"io_AluMuxb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+264,"io_AluSel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+265,"io_AluSela",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+266,"io_AluSelb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+267,"io_PCMux",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+268,"io_MemNum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+269,"io_RegWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+270,"io_MemWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+271,"io_stop",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+272,"io_MemtoReg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"stop",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("DpiEbreak ");
    tracep->declBit(c+239,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"halt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"stop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+273,"isbreak",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+4,"io_Branch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"io_Recsr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"io_mret",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"io_ecall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"io_halt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"io_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+8,"io_imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+9,"io_zimm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+243,"io_src1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+244,"io_src2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+258,"io_Csr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+255,"io_mtvec",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"io_mepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+11,"io_PcMux",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+261,"io_AluMux",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+264,"io_AluSel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+250,"io_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+247,"io_dnpc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+252,"io_ina",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+253,"io_inb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+251,"io_rs1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+267,"io_PCMux",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+251,"rs1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+252,"io_ina_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+253,"io_inb_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+267,"PCMux",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->pushNamePrefix("Alu ");
    tracep->declBus(c+264,"io_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+252,"io_ina",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+253,"io_inb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+250,"io_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+12,"cin",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("AddSub ");
    tracep->declBit(c+12,"io_cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+252,"io_ina",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+253,"io_inb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+13,"io_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+14,"io_zero",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"io_carry",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"io_overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+17,"t_no_cin",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Shift ");
    tracep->declBus(c+252,"io_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+274,"io_shamt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+275,"io_isLeft",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+276,"io_izArith",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+18,"io_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+19,"leftIn",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+20,"io_out_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+21,"io_out_sel_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+22,"casez_tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+23,"casez_tmp_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+24,"casez_tmp_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+25,"casez_tmp_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+26,"casez_tmp_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+27,"casez_tmp_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+28,"casez_tmp_5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+29,"casez_tmp_6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+30,"casez_tmp_7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+31,"casez_tmp_8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+32,"casez_tmp_9",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+33,"casez_tmp_10",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+34,"casez_tmp_11",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+35,"casez_tmp_12",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+36,"casez_tmp_13",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+37,"casez_tmp_14",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+38,"casez_tmp_15",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+39,"casez_tmp_16",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+40,"casez_tmp_17",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+41,"casez_tmp_18",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+42,"casez_tmp_19",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+43,"casez_tmp_20",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+44,"casez_tmp_21",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+45,"casez_tmp_22",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+46,"casez_tmp_23",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+47,"casez_tmp_24",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+48,"casez_tmp_25",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+49,"casez_tmp_26",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+50,"casez_tmp_27",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+51,"casez_tmp_28",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+52,"casez_tmp_29",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+53,"casez_tmp_30",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+54,"io_out_sel_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+55,"casez_tmp_31",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+56,"casez_tmp_32",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+57,"casez_tmp_33",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+58,"casez_tmp_34",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+59,"casez_tmp_35",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+60,"casez_tmp_36",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+61,"casez_tmp_37",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+62,"casez_tmp_38",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+63,"casez_tmp_39",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+64,"casez_tmp_40",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+65,"casez_tmp_41",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+66,"casez_tmp_42",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+67,"casez_tmp_43",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+68,"casez_tmp_44",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+69,"casez_tmp_45",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+70,"casez_tmp_46",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+71,"casez_tmp_47",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+72,"casez_tmp_48",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+73,"casez_tmp_49",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+74,"casez_tmp_50",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+75,"casez_tmp_51",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+76,"casez_tmp_52",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+77,"casez_tmp_53",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+78,"casez_tmp_54",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+79,"casez_tmp_55",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+80,"casez_tmp_56",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+81,"casez_tmp_57",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+82,"casez_tmp_58",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+83,"casez_tmp_59",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+84,"casez_tmp_60",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+85,"casez_tmp_61",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+86,"casez_tmp_62",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+87,"io_out_sel_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+88,"casez_tmp_63",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+89,"casez_tmp_64",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+90,"casez_tmp_65",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+91,"casez_tmp_66",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+92,"casez_tmp_67",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+93,"casez_tmp_68",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+94,"casez_tmp_69",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+95,"casez_tmp_70",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+96,"casez_tmp_71",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+97,"casez_tmp_72",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+98,"casez_tmp_73",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+99,"casez_tmp_74",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+100,"casez_tmp_75",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+101,"casez_tmp_76",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+102,"casez_tmp_77",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+103,"casez_tmp_78",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+104,"casez_tmp_79",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+105,"casez_tmp_80",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+106,"casez_tmp_81",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+107,"casez_tmp_82",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+108,"casez_tmp_83",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+109,"casez_tmp_84",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+110,"casez_tmp_85",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+111,"casez_tmp_86",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+112,"casez_tmp_87",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+113,"casez_tmp_88",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+114,"casez_tmp_89",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+115,"casez_tmp_90",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+116,"casez_tmp_91",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+117,"casez_tmp_92",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+118,"casez_tmp_93",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+119,"casez_tmp_94",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+120,"io_out_sel_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+121,"casez_tmp_95",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+122,"casez_tmp_96",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+123,"casez_tmp_97",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+124,"casez_tmp_98",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+125,"casez_tmp_99",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+126,"casez_tmp_100",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+127,"casez_tmp_101",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+128,"casez_tmp_102",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+129,"casez_tmp_103",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+130,"casez_tmp_104",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+131,"casez_tmp_105",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+132,"casez_tmp_106",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+133,"casez_tmp_107",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+134,"casez_tmp_108",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+135,"casez_tmp_109",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+136,"casez_tmp_110",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+137,"casez_tmp_111",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+138,"casez_tmp_112",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+139,"casez_tmp_113",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+140,"casez_tmp_114",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+141,"casez_tmp_115",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+142,"casez_tmp_116",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+143,"casez_tmp_117",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+144,"casez_tmp_118",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+145,"casez_tmp_119",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+146,"casez_tmp_120",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+147,"casez_tmp_121",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+148,"casez_tmp_122",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+149,"casez_tmp_123",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+150,"casez_tmp_124",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+151,"casez_tmp_125",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+152,"casez_tmp_126",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+153,"casez_tmp_127",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+154,"casez_tmp_128",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+155,"casez_tmp_129",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+156,"casez_tmp_130",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+157,"casez_tmp_131",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+158,"casez_tmp_132",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+159,"casez_tmp_133",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+160,"casez_tmp_134",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+161,"casez_tmp_135",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+162,"casez_tmp_136",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+163,"casez_tmp_137",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+164,"casez_tmp_138",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+165,"casez_tmp_139",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+166,"casez_tmp_140",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+167,"casez_tmp_141",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+168,"casez_tmp_142",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+169,"casez_tmp_143",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+170,"casez_tmp_144",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+171,"casez_tmp_145",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+172,"casez_tmp_146",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+173,"casez_tmp_147",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+174,"casez_tmp_148",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+175,"casez_tmp_149",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+176,"casez_tmp_150",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+177,"casez_tmp_151",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+178,"casez_tmp_152",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+179,"casez_tmp_153",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+180,"casez_tmp_154",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+181,"casez_tmp_155",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+182,"casez_tmp_156",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+183,"casez_tmp_157",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+184,"casez_tmp_158",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+239,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+185,"io_inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2,"io_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+250,"io_result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+260,"io_DataOut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+242,"io_rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+9,"io_zimm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+8,"io_imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+243,"io_src1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+244,"io_src2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"io_mepc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+255,"io_mtvec",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+258,"io_Csr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+259,"io_csr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+11,"io_PcMux",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+261,"io_AluMux",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+262,"io_AluMuxa",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+263,"io_AluMuxb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+264,"io_AluSel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+265,"io_AluSela",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+266,"io_AluSelb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+277,"io_MemNum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+278,"io_instType",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+186,"io_RegNum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+270,"io_MemWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+269,"io_RegWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+187,"io_CsrWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+272,"io_MemtoReg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"io_Branch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"io_halt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+6,"io_mret",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+7,"io_ecall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"io_Recsr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+188,"io_halt_ret",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+189,"immNum_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+190,"io_Branch_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+191,"instType_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+190,"io_PcMux_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+191,"io_MemWr_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+191,"io_RegWr_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+192,"io_ecall_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 29,0);
    tracep->declBus(c+192,"io_mret_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 29,0);
    tracep->declBus(c+191,"io_MemtoReg_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+193,"io_CsrWr_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+193,"io_Recsr_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+194,"io_MemNum_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+194,"io_RegNum_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+191,"AluMuxa_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+194,"AluMuxb_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+195,"AluSela_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 14,0);
    tracep->declBus(c+265,"AluSela_plaOutput",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+194,"AluSelb_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+266,"AluSelb_plaOutput",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+196,"casez_tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,"io_rd_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+197,"io_rs1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+198,"io_rs2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->pushNamePrefix("Csr_ext ");
    tracep->declBus(c+283,"R0_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+284,"R0_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"R0_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+255,"R0_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+285,"R1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+284,"R1_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"R1_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+10,"R1_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+199,"R2_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+284,"R2_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"R2_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+258,"R2_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+285,"R3_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+284,"R3_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"R3_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+10,"R3_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+199,"R4_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+284,"R4_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"R4_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+258,"R4_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+286,"R5_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+284,"R5_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"R5_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+200,"R5_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+286,"W0_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+284,"W0_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"W0_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+201,"W0_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+287,"W1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+284,"W1_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"W1_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+288,"W1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+286,"W2_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+284,"W2_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"W2_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+289,"W2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+285,"W3_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+284,"W3_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"W3_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+202,"W3_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+199,"W4_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+284,"W4_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"W4_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+279,"W4_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Ref_ext ");
    tracep->declBus(c+198,"R0_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+284,"R0_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"R0_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+203,"R0_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+197,"R1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+284,"R1_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"R1_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+204,"R1_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+290,"R2_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+284,"R2_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"R2_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+205,"R2_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+242,"R3_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+284,"R3_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"R3_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+280,"R3_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+242,"W0_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+284,"W0_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"W0_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+281,"W0_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+291,"W1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+284,"W1_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"W1_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+292,"W1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+206+i*1,"Memory",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+239,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"halt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+273,"Maddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+185,"inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+239,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+277,"io_MemNum",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+186,"io_RegNum",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+250,"io_result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+244,"io_src2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+272,"io_MemtoReg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+270,"io_MemWr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+260,"io_DataOut",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("lsu ");
    tracep->declBus(c+250,"Maddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+244,"DataIn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+282,"wmask",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+270,"MemWr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+272,"MemtoReg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+238,"DataOut",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VNPC___024root__trace_init_top(VNPC___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root__trace_init_top\n"); );
    // Body
    VNPC___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VNPC___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VNPC___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VNPC___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void VNPC___024root__trace_register(VNPC___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VNPC___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VNPC___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VNPC___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VNPC___024root__trace_full_sub_0(VNPC___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void VNPC___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root__trace_full_top_0\n"); );
    // Init
    VNPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VNPC___024root*>(voidSelf);
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VNPC___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VNPC___024root__trace_full_sub_0(VNPC___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->NPC__DOT__stop));
    bufp->fullIData(oldp+2,(vlSelf->NPC__DOT__pc),32);
    bufp->fullBit(oldp+3,((0x100073U == vlSelf->NPC__DOT___ifu_inst)));
    bufp->fullBit(oldp+4,(vlSelf->NPC__DOT___idu_io_Branch));
    bufp->fullBit(oldp+5,(vlSelf->NPC__DOT___idu_io_Recsr));
    bufp->fullBit(oldp+6,(vlSelf->NPC__DOT___idu_io_mret));
    bufp->fullBit(oldp+7,((0xffffffffU == vlSelf->NPC__DOT__idu__DOT___io_ecall_andMatrixOutputs_T)));
    bufp->fullIData(oldp+8,(vlSelf->NPC__DOT___idu_io_imm),32);
    bufp->fullIData(oldp+9,((0x1fU & (vlSelf->NPC__DOT___ifu_inst 
                                      >> 0xfU))),32);
    bufp->fullIData(oldp+10,(vlSelf->NPC__DOT__idu__DOT__Csr_ext__DOT__Memory
                             [0x341U]),32);
    bufp->fullCData(oldp+11,((((IData)(((7U == (7U 
                                                & vlSelf->NPC__DOT___ifu_inst)) 
                                        & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hcfa7c5ac__0))) 
                               << 1U) | ((IData)(vlSelf->NPC__DOT___idu_io_Branch) 
                                         | (IData)(
                                                   ((0xfU 
                                                     == 
                                                     (0xfU 
                                                      & vlSelf->NPC__DOT___ifu_inst)) 
                                                    & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h03617c08__0)))))),2);
    bufp->fullBit(oldp+12,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__cin));
    bufp->fullIData(oldp+13,((IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__AddSub__DOT___sum_T_1)),32);
    bufp->fullBit(oldp+14,((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__AddSub__DOT___sum_T_1))));
    bufp->fullBit(oldp+15,((1U & (IData)((vlSelf->NPC__DOT__exu__DOT__Alu__DOT__AddSub__DOT___sum_T_1 
                                          >> 0x20U)))));
    bufp->fullBit(oldp+16,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT___AddSub_io_overflow));
    bufp->fullIData(oldp+17,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__AddSub__DOT__t_no_cin),32);
    bufp->fullIData(oldp+18,(((((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_126)
                                 : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn)
                                     : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_126)
                                         : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125)))) 
                               << 0x1fU) | ((((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                               ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125)
                                               : ((1U 
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
    bufp->fullBit(oldp+19,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn));
    bufp->fullCData(oldp+20,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel),2);
    bufp->fullCData(oldp+21,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_1),2);
    bufp->fullBit(oldp+22,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp));
    bufp->fullBit(oldp+23,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_0));
    bufp->fullBit(oldp+24,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_1));
    bufp->fullBit(oldp+25,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_2));
    bufp->fullBit(oldp+26,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_3));
    bufp->fullBit(oldp+27,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_4));
    bufp->fullBit(oldp+28,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_5));
    bufp->fullBit(oldp+29,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_6));
    bufp->fullBit(oldp+30,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_7));
    bufp->fullBit(oldp+31,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_8));
    bufp->fullBit(oldp+32,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_9));
    bufp->fullBit(oldp+33,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_10));
    bufp->fullBit(oldp+34,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_11));
    bufp->fullBit(oldp+35,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_12));
    bufp->fullBit(oldp+36,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_13));
    bufp->fullBit(oldp+37,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_14));
    bufp->fullBit(oldp+38,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_15));
    bufp->fullBit(oldp+39,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_16));
    bufp->fullBit(oldp+40,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_17));
    bufp->fullBit(oldp+41,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_18));
    bufp->fullBit(oldp+42,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_19));
    bufp->fullBit(oldp+43,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_20));
    bufp->fullBit(oldp+44,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_21));
    bufp->fullBit(oldp+45,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_22));
    bufp->fullBit(oldp+46,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_23));
    bufp->fullBit(oldp+47,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_24));
    bufp->fullBit(oldp+48,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_25));
    bufp->fullBit(oldp+49,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_26));
    bufp->fullBit(oldp+50,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_27));
    bufp->fullBit(oldp+51,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_28));
    bufp->fullBit(oldp+52,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_29));
    bufp->fullBit(oldp+53,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_30));
    bufp->fullCData(oldp+54,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_2),2);
    bufp->fullBit(oldp+55,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_31));
    bufp->fullBit(oldp+56,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_32));
    bufp->fullBit(oldp+57,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_33));
    bufp->fullBit(oldp+58,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_34));
    bufp->fullBit(oldp+59,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_35));
    bufp->fullBit(oldp+60,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_36));
    bufp->fullBit(oldp+61,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_37));
    bufp->fullBit(oldp+62,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_38));
    bufp->fullBit(oldp+63,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_39));
    bufp->fullBit(oldp+64,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_40));
    bufp->fullBit(oldp+65,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_41));
    bufp->fullBit(oldp+66,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_42));
    bufp->fullBit(oldp+67,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_43));
    bufp->fullBit(oldp+68,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_44));
    bufp->fullBit(oldp+69,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_45));
    bufp->fullBit(oldp+70,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_46));
    bufp->fullBit(oldp+71,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_47));
    bufp->fullBit(oldp+72,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_48));
    bufp->fullBit(oldp+73,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_49));
    bufp->fullBit(oldp+74,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_50));
    bufp->fullBit(oldp+75,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_51));
    bufp->fullBit(oldp+76,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_52));
    bufp->fullBit(oldp+77,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_53));
    bufp->fullBit(oldp+78,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_54));
    bufp->fullBit(oldp+79,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_55));
    bufp->fullBit(oldp+80,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_56));
    bufp->fullBit(oldp+81,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_57));
    bufp->fullBit(oldp+82,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_58));
    bufp->fullBit(oldp+83,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_59));
    bufp->fullBit(oldp+84,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_60));
    bufp->fullBit(oldp+85,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_61));
    bufp->fullBit(oldp+86,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_62));
    bufp->fullCData(oldp+87,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_3),2);
    bufp->fullBit(oldp+88,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_63));
    bufp->fullBit(oldp+89,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_64));
    bufp->fullBit(oldp+90,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_65));
    bufp->fullBit(oldp+91,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_66));
    bufp->fullBit(oldp+92,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_67));
    bufp->fullBit(oldp+93,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_68));
    bufp->fullBit(oldp+94,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_69));
    bufp->fullBit(oldp+95,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_70));
    bufp->fullBit(oldp+96,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_71));
    bufp->fullBit(oldp+97,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_72));
    bufp->fullBit(oldp+98,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_73));
    bufp->fullBit(oldp+99,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_74));
    bufp->fullBit(oldp+100,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_75));
    bufp->fullBit(oldp+101,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_76));
    bufp->fullBit(oldp+102,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_77));
    bufp->fullBit(oldp+103,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_78));
    bufp->fullBit(oldp+104,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_79));
    bufp->fullBit(oldp+105,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_80));
    bufp->fullBit(oldp+106,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_81));
    bufp->fullBit(oldp+107,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_82));
    bufp->fullBit(oldp+108,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_83));
    bufp->fullBit(oldp+109,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_84));
    bufp->fullBit(oldp+110,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_85));
    bufp->fullBit(oldp+111,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_86));
    bufp->fullBit(oldp+112,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_87));
    bufp->fullBit(oldp+113,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_88));
    bufp->fullBit(oldp+114,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_89));
    bufp->fullBit(oldp+115,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_90));
    bufp->fullBit(oldp+116,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_91));
    bufp->fullBit(oldp+117,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_92));
    bufp->fullBit(oldp+118,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_93));
    bufp->fullBit(oldp+119,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_94));
    bufp->fullCData(oldp+120,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4),2);
    bufp->fullBit(oldp+121,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_95));
    bufp->fullBit(oldp+122,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_96));
    bufp->fullBit(oldp+123,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_97));
    bufp->fullBit(oldp+124,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_98));
    bufp->fullBit(oldp+125,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_99));
    bufp->fullBit(oldp+126,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_100));
    bufp->fullBit(oldp+127,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_101));
    bufp->fullBit(oldp+128,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_102));
    bufp->fullBit(oldp+129,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_103));
    bufp->fullBit(oldp+130,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_104));
    bufp->fullBit(oldp+131,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_105));
    bufp->fullBit(oldp+132,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_106));
    bufp->fullBit(oldp+133,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_107));
    bufp->fullBit(oldp+134,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_108));
    bufp->fullBit(oldp+135,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_109));
    bufp->fullBit(oldp+136,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_110));
    bufp->fullBit(oldp+137,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_111));
    bufp->fullBit(oldp+138,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_112));
    bufp->fullBit(oldp+139,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_113));
    bufp->fullBit(oldp+140,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_114));
    bufp->fullBit(oldp+141,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_115));
    bufp->fullBit(oldp+142,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_116));
    bufp->fullBit(oldp+143,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_117));
    bufp->fullBit(oldp+144,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_118));
    bufp->fullBit(oldp+145,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_119));
    bufp->fullBit(oldp+146,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_120));
    bufp->fullBit(oldp+147,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_121));
    bufp->fullBit(oldp+148,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_122));
    bufp->fullBit(oldp+149,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_123));
    bufp->fullBit(oldp+150,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_124));
    bufp->fullBit(oldp+151,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125));
    bufp->fullBit(oldp+152,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_126));
    bufp->fullBit(oldp+153,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_96)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_97)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_96)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_95))))));
    bufp->fullBit(oldp+154,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_95)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_96)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4)) 
                                     & (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_95))))));
    bufp->fullBit(oldp+155,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_98)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_99)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_98)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_97))))));
    bufp->fullBit(oldp+156,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_97)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_98)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_97)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_96))))));
    bufp->fullBit(oldp+157,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_100)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_101)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_100)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_99))))));
    bufp->fullBit(oldp+158,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_99)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_100)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_99)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_98))))));
    bufp->fullBit(oldp+159,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_102)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_103)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_102)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_101))))));
    bufp->fullBit(oldp+160,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_101)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_102)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_101)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_100))))));
    bufp->fullBit(oldp+161,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_104)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_105)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_104)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_103))))));
    bufp->fullBit(oldp+162,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_103)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_104)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_103)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_102))))));
    bufp->fullBit(oldp+163,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_106)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_107)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_106)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_105))))));
    bufp->fullBit(oldp+164,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_105)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_106)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_105)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_104))))));
    bufp->fullBit(oldp+165,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_108)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_109)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_108)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_107))))));
    bufp->fullBit(oldp+166,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_107)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_108)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_107)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_106))))));
    bufp->fullBit(oldp+167,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_110)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_111)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_110)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_109))))));
    bufp->fullBit(oldp+168,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_109)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_110)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_109)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_108))))));
    bufp->fullBit(oldp+169,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_112)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_113)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_112)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_111))))));
    bufp->fullBit(oldp+170,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_111)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_112)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_111)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_110))))));
    bufp->fullBit(oldp+171,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_114)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_115)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_114)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_113))))));
    bufp->fullBit(oldp+172,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_113)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_114)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_113)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_112))))));
    bufp->fullBit(oldp+173,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_116)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_117)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_116)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_115))))));
    bufp->fullBit(oldp+174,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_115)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_116)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_115)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_114))))));
    bufp->fullBit(oldp+175,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_118)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_119)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_118)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_117))))));
    bufp->fullBit(oldp+176,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_117)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_118)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_117)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_116))))));
    bufp->fullBit(oldp+177,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_120)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_121)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_120)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_119))))));
    bufp->fullBit(oldp+178,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_119)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_120)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_119)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_118))))));
    bufp->fullBit(oldp+179,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_122)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_123)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_122)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_121))))));
    bufp->fullBit(oldp+180,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_121)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_122)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_121)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_120))))));
    bufp->fullBit(oldp+181,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_124)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_124)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_123))))));
    bufp->fullBit(oldp+182,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_123)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_124)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_123)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_122))))));
    bufp->fullBit(oldp+183,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_126)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_126)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125))))));
    bufp->fullBit(oldp+184,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_126)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_124))))));
    bufp->fullIData(oldp+185,(vlSelf->NPC__DOT___ifu_inst),32);
    bufp->fullCData(oldp+186,(vlSelf->NPC__DOT___idu_io_RegNum),3);
    bufp->fullBit(oldp+187,((0U != (IData)(vlSelf->NPC__DOT__idu__DOT___io_CsrWr_orMatrixOutputs_T))));
    bufp->fullBit(oldp+188,((1U & vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory
                             [0xaU])));
    bufp->fullCData(oldp+189,(vlSelf->NPC__DOT__idu__DOT__immNum_invInputs),7);
    bufp->fullCData(oldp+190,((7U & (~ (vlSelf->NPC__DOT___ifu_inst 
                                        >> 2U)))),3);
    bufp->fullCData(oldp+191,((0x1fU & (~ (vlSelf->NPC__DOT___ifu_inst 
                                           >> 2U)))),5);
    bufp->fullIData(oldp+192,((0x3fffffffU & (~ (vlSelf->NPC__DOT___ifu_inst 
                                                 >> 2U)))),30);
    bufp->fullCData(oldp+193,((3U & (~ (vlSelf->NPC__DOT___ifu_inst 
                                        >> 2U)))),2);
    bufp->fullCData(oldp+194,((0xffU & (~ (IData)(vlSelf->NPC__DOT__idu__DOT___GEN)))),8);
    bufp->fullSData(oldp+195,(vlSelf->NPC__DOT__idu__DOT__AluSela_invInputs),15);
    bufp->fullIData(oldp+196,(vlSelf->NPC__DOT__idu__DOT__casez_tmp),32);
    bufp->fullCData(oldp+197,(vlSelf->NPC__DOT__idu__DOT__io_rs1),5);
    bufp->fullCData(oldp+198,(vlSelf->NPC__DOT__idu__DOT__io_rs2),5);
    bufp->fullSData(oldp+199,((vlSelf->NPC__DOT___ifu_inst 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+200,(vlSelf->NPC__DOT__idu__DOT__Csr_ext__DOT__Memory
                              [0x300U]),32);
    bufp->fullIData(oldp+201,(((0xffffffffU == vlSelf->NPC__DOT__idu__DOT___io_ecall_andMatrixOutputs_T)
                                ? 0xbU : vlSelf->NPC__DOT__idu__DOT__Csr_ext__DOT__Memory
                               [0x300U])),32);
    bufp->fullIData(oldp+202,(((0xffffffffU == vlSelf->NPC__DOT__idu__DOT___io_ecall_andMatrixOutputs_T)
                                ? vlSelf->NPC__DOT__pc
                                : vlSelf->NPC__DOT__idu__DOT__Csr_ext__DOT__Memory
                               [0x341U])),32);
    bufp->fullIData(oldp+203,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory
                              [vlSelf->NPC__DOT__idu__DOT__io_rs2]),32);
    bufp->fullIData(oldp+204,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory
                              [vlSelf->NPC__DOT__idu__DOT__io_rs1]),32);
    bufp->fullIData(oldp+205,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory
                              [0xaU]),32);
    bufp->fullIData(oldp+206,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[0]),32);
    bufp->fullIData(oldp+207,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[1]),32);
    bufp->fullIData(oldp+208,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[2]),32);
    bufp->fullIData(oldp+209,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[3]),32);
    bufp->fullIData(oldp+210,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[4]),32);
    bufp->fullIData(oldp+211,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[5]),32);
    bufp->fullIData(oldp+212,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[6]),32);
    bufp->fullIData(oldp+213,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[7]),32);
    bufp->fullIData(oldp+214,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[8]),32);
    bufp->fullIData(oldp+215,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[9]),32);
    bufp->fullIData(oldp+216,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[10]),32);
    bufp->fullIData(oldp+217,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[11]),32);
    bufp->fullIData(oldp+218,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[12]),32);
    bufp->fullIData(oldp+219,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[13]),32);
    bufp->fullIData(oldp+220,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[14]),32);
    bufp->fullIData(oldp+221,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[15]),32);
    bufp->fullIData(oldp+222,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[16]),32);
    bufp->fullIData(oldp+223,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[17]),32);
    bufp->fullIData(oldp+224,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[18]),32);
    bufp->fullIData(oldp+225,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[19]),32);
    bufp->fullIData(oldp+226,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[20]),32);
    bufp->fullIData(oldp+227,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[21]),32);
    bufp->fullIData(oldp+228,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[22]),32);
    bufp->fullIData(oldp+229,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[23]),32);
    bufp->fullIData(oldp+230,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[24]),32);
    bufp->fullIData(oldp+231,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[25]),32);
    bufp->fullIData(oldp+232,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[26]),32);
    bufp->fullIData(oldp+233,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[27]),32);
    bufp->fullIData(oldp+234,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[28]),32);
    bufp->fullIData(oldp+235,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[29]),32);
    bufp->fullIData(oldp+236,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[30]),32);
    bufp->fullIData(oldp+237,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory[31]),32);
    bufp->fullIData(oldp+238,(vlSelf->NPC__DOT__wbu__DOT___lsu_DataOut),32);
    bufp->fullBit(oldp+239,(vlSelf->clock));
    bufp->fullBit(oldp+240,(vlSelf->reset));
    bufp->fullBit(oldp+241,(vlSelf->io_reset));
    bufp->fullCData(oldp+242,(vlSelf->io_rd),5);
    bufp->fullIData(oldp+243,(vlSelf->io_src1),32);
    bufp->fullIData(oldp+244,(vlSelf->io_src2),32);
    bufp->fullIData(oldp+245,(vlSelf->io_halt_ret),32);
    bufp->fullIData(oldp+246,(vlSelf->io_PC),32);
    bufp->fullIData(oldp+247,(vlSelf->io_NPC),32);
    bufp->fullIData(oldp+248,(vlSelf->io_halt),32);
    bufp->fullCData(oldp+249,(vlSelf->io_instType),3);
    bufp->fullIData(oldp+250,(vlSelf->io_result),32);
    bufp->fullIData(oldp+251,(vlSelf->io_rs1),32);
    bufp->fullIData(oldp+252,(vlSelf->io_ina),32);
    bufp->fullIData(oldp+253,(vlSelf->io_inb),32);
    bufp->fullIData(oldp+254,(vlSelf->io_inst),32);
    bufp->fullIData(oldp+255,(vlSelf->io_mtvec),32);
    bufp->fullIData(oldp+256,(vlSelf->io_CsrWr),32);
    bufp->fullIData(oldp+257,(vlSelf->io_Recsr),32);
    bufp->fullIData(oldp+258,(vlSelf->io_Csr),32);
    bufp->fullIData(oldp+259,(vlSelf->io_csr),32);
    bufp->fullIData(oldp+260,(vlSelf->io_DataOut),32);
    bufp->fullCData(oldp+261,(vlSelf->io_AluMux),4);
    bufp->fullCData(oldp+262,(vlSelf->io_AluMuxa),4);
    bufp->fullCData(oldp+263,(vlSelf->io_AluMuxb),4);
    bufp->fullCData(oldp+264,(vlSelf->io_AluSel),4);
    bufp->fullCData(oldp+265,(vlSelf->io_AluSela),4);
    bufp->fullCData(oldp+266,(vlSelf->io_AluSelb),4);
    bufp->fullCData(oldp+267,(vlSelf->io_PCMux),4);
    bufp->fullCData(oldp+268,(vlSelf->io_MemNum),2);
    bufp->fullBit(oldp+269,(vlSelf->io_RegWr));
    bufp->fullBit(oldp+270,(vlSelf->io_MemWr));
    bufp->fullBit(oldp+271,(vlSelf->io_stop));
    bufp->fullBit(oldp+272,(vlSelf->io_MemtoReg));
    bufp->fullIData(oldp+273,(vlSelf->NPC__DOT___DpiEbreak_io_isbreak_T),32);
    bufp->fullCData(oldp+274,((0x1fU & vlSelf->io_inb)),5);
    bufp->fullBit(oldp+275,((1U & (IData)(vlSelf->io_AluSel))));
    bufp->fullBit(oldp+276,((1U & ((IData)(vlSelf->io_AluSel) 
                                   >> 1U))));
    bufp->fullCData(oldp+277,((((0x1ffU != ((0x100U 
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
    bufp->fullCData(oldp+278,(vlSelf->io_instType),4);
    bufp->fullIData(oldp+279,(((0U != (IData)(vlSelf->NPC__DOT__idu__DOT___io_CsrWr_orMatrixOutputs_T))
                                ? vlSelf->io_result
                                : vlSelf->io_Csr)),32);
    bufp->fullIData(oldp+280,(vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory
                              [vlSelf->io_rd]),32);
    bufp->fullIData(oldp+281,(((0U == (IData)(vlSelf->io_rd))
                                ? 0U : ((IData)(vlSelf->io_RegWr)
                                         ? ((IData)(vlSelf->io_MemtoReg)
                                             ? vlSelf->io_DataOut
                                             : vlSelf->io_result)
                                         : ((0U != (IData)(vlSelf->NPC__DOT__idu__DOT___io_CsrWr_orMatrixOutputs_T))
                                             ? vlSelf->io_Csr
                                             : vlSelf->NPC__DOT__idu__DOT__Ref_ext__DOT__Memory
                                            [vlSelf->io_rd])))),32);
    bufp->fullIData(oldp+282,((((0x1ffU != ((0x100U 
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
    bufp->fullSData(oldp+283,(0x305U),12);
    bufp->fullBit(oldp+284,(1U));
    bufp->fullSData(oldp+285,(0x341U),12);
    bufp->fullSData(oldp+286,(0x300U),12);
    bufp->fullSData(oldp+287,(0x342U),12);
    bufp->fullIData(oldp+288,(0xbU),32);
    bufp->fullIData(oldp+289,(0x1800U),32);
    bufp->fullCData(oldp+290,(0xaU),5);
    bufp->fullCData(oldp+291,(0U),5);
    bufp->fullIData(oldp+292,(0U),32);
}

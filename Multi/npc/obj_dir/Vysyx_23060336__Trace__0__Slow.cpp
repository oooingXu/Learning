// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_23060336__Syms.h"


VL_ATTR_COLD void Vysyx_23060336___024root__trace_init_sub__TOP__0(Vysyx_23060336___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+257,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+258,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+259,"io_dnpc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+260,"io_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+261,"io_out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("ysyx_23060336 ");
    tracep->declBit(c+257,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+258,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+259,"io_dnpc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+260,"io_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+261,"io_out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("csr ");
    tracep->declBit(c+257,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"io_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+77,"io_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+37,"io_wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"io_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+78,"io_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+38,"io_ecall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+260,"io_mepc_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1,"io_mepc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2,"io_mtvec",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_23060336_csrs_ext ");
    tracep->declBus(c+36,"R0_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+276,"R0_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"R0_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+77,"R0_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+277,"R1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+276,"R1_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"R1_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"R1_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+278,"R2_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+276,"R2_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"R2_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"R2_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+278,"R3_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+276,"R3_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"R3_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"R3_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+279,"R4_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+276,"R4_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"R4_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"R4_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"W0_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+37,"W0_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"W0_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+78,"W0_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+278,"W1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+276,"W1_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"W1_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+262,"W1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+279,"W2_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+276,"W2_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"W2_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+263,"W2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+280,"W3_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+276,"W3_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"W3_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+281,"W3_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu_exu ");
    tracep->declBit(c+258,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+260,"io_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+39,"io_inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+79,"io_src1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+80,"io_src2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+77,"io_Csr_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1,"io_mepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+2,"io_mtvec",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+78,"io_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+259,"io_dnpc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+77,"io_Csr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"io_csr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+40,"io_rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+41,"io_rs1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+42,"io_rs2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+43,"io_MemNum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+44,"io_RegNum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+38,"io_ecall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"io_CsrWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"io_MemWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+46,"io_RegWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"io_MemtoReg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+48,"io_empty",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"io_ebreak",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+50,"immNum_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+51,"AluMuxa_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+52,"AluMuxb_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+53,"AluSela_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 14,0);
    tracep->declBus(c+52,"AluSelb_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+54,"recsr_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+55,"branch_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+55,"pcmux_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+56,"mret_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 29,0);
    tracep->declBus(c+56,"io_ecall_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 29,0);
    tracep->declBus(c+56,"io_ebreak_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 29,0);
    tracep->declBus(c+52,"io_MemNum_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+52,"io_RegNum_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+54,"io_CsrWr_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+51,"io_MemtoReg_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+51,"io_MemWr_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+51,"io_RegWr_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+54,"io_RegWr_invInputs_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+57,"casez_tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,"instType_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+58,"imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+81,"PCMux",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+59,"io_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+82,"io_ina",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+83,"io_inb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+78,"io_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+60,"cin",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("addsub ");
    tracep->declBit(c+60,"io_cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+82,"io_ina",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+83,"io_inb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+84,"io_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+85,"io_zero",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"io_carry",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"io_overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+88,"t_no_cin",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+82,"io_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+89,"io_shamt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+61,"io_isLeft",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"io_izArith",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+90,"io_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+91,"leftIn",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+92,"io_out_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+93,"io_out_sel_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+94,"casez_tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+95,"casez_tmp_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+96,"casez_tmp_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+97,"casez_tmp_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+98,"casez_tmp_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+99,"casez_tmp_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+100,"casez_tmp_5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+101,"casez_tmp_6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+102,"casez_tmp_7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+103,"casez_tmp_8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+104,"casez_tmp_9",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+105,"casez_tmp_10",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+106,"casez_tmp_11",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+107,"casez_tmp_12",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+108,"casez_tmp_13",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+109,"casez_tmp_14",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+110,"casez_tmp_15",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+111,"casez_tmp_16",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+112,"casez_tmp_17",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+113,"casez_tmp_18",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+114,"casez_tmp_19",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+115,"casez_tmp_20",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+116,"casez_tmp_21",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+117,"casez_tmp_22",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+118,"casez_tmp_23",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+119,"casez_tmp_24",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+120,"casez_tmp_25",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+121,"casez_tmp_26",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+122,"casez_tmp_27",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+123,"casez_tmp_28",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+124,"casez_tmp_29",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+125,"casez_tmp_30",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+126,"io_out_sel_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+127,"casez_tmp_31",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+128,"casez_tmp_32",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+129,"casez_tmp_33",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+130,"casez_tmp_34",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+131,"casez_tmp_35",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+132,"casez_tmp_36",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+133,"casez_tmp_37",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+134,"casez_tmp_38",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+135,"casez_tmp_39",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+136,"casez_tmp_40",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+137,"casez_tmp_41",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+138,"casez_tmp_42",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+139,"casez_tmp_43",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+140,"casez_tmp_44",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+141,"casez_tmp_45",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+142,"casez_tmp_46",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+143,"casez_tmp_47",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+144,"casez_tmp_48",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+145,"casez_tmp_49",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+146,"casez_tmp_50",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+147,"casez_tmp_51",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+148,"casez_tmp_52",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+149,"casez_tmp_53",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+150,"casez_tmp_54",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+151,"casez_tmp_55",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+152,"casez_tmp_56",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+153,"casez_tmp_57",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+154,"casez_tmp_58",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+155,"casez_tmp_59",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+156,"casez_tmp_60",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+157,"casez_tmp_61",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+158,"casez_tmp_62",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+159,"io_out_sel_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+160,"casez_tmp_63",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+161,"casez_tmp_64",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+162,"casez_tmp_65",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+163,"casez_tmp_66",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+164,"casez_tmp_67",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+165,"casez_tmp_68",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+166,"casez_tmp_69",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+167,"casez_tmp_70",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+168,"casez_tmp_71",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+169,"casez_tmp_72",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+170,"casez_tmp_73",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+171,"casez_tmp_74",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+172,"casez_tmp_75",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+173,"casez_tmp_76",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+174,"casez_tmp_77",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+175,"casez_tmp_78",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+176,"casez_tmp_79",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+177,"casez_tmp_80",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+178,"casez_tmp_81",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+179,"casez_tmp_82",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+180,"casez_tmp_83",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+181,"casez_tmp_84",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+182,"casez_tmp_85",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+183,"casez_tmp_86",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+184,"casez_tmp_87",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+185,"casez_tmp_88",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+186,"casez_tmp_89",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+187,"casez_tmp_90",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+188,"casez_tmp_91",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+189,"casez_tmp_92",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+190,"casez_tmp_93",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+191,"casez_tmp_94",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+192,"io_out_sel_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+193,"casez_tmp_95",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+194,"casez_tmp_96",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+195,"casez_tmp_97",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+196,"casez_tmp_98",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+197,"casez_tmp_99",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+198,"casez_tmp_100",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+199,"casez_tmp_101",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+200,"casez_tmp_102",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+201,"casez_tmp_103",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+202,"casez_tmp_104",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+203,"casez_tmp_105",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+204,"casez_tmp_106",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+205,"casez_tmp_107",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+206,"casez_tmp_108",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+207,"casez_tmp_109",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+208,"casez_tmp_110",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+209,"casez_tmp_111",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+210,"casez_tmp_112",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+211,"casez_tmp_113",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+212,"casez_tmp_114",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+213,"casez_tmp_115",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+214,"casez_tmp_116",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+215,"casez_tmp_117",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+216,"casez_tmp_118",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+217,"casez_tmp_119",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+218,"casez_tmp_120",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+219,"casez_tmp_121",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+220,"casez_tmp_122",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+221,"casez_tmp_123",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+222,"casez_tmp_124",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+223,"casez_tmp_125",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+224,"casez_tmp_126",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+225,"casez_tmp_127",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+226,"casez_tmp_128",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+227,"casez_tmp_129",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+228,"casez_tmp_130",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+229,"casez_tmp_131",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+230,"casez_tmp_132",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+231,"casez_tmp_133",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+232,"casez_tmp_134",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+233,"casez_tmp_135",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+234,"casez_tmp_136",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+235,"casez_tmp_137",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+236,"casez_tmp_138",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+237,"casez_tmp_139",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+238,"casez_tmp_140",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+239,"casez_tmp_141",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+240,"casez_tmp_142",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+241,"casez_tmp_143",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+242,"casez_tmp_144",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+243,"casez_tmp_145",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+244,"casez_tmp_146",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+245,"casez_tmp_147",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+246,"casez_tmp_148",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+247,"casez_tmp_149",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+248,"casez_tmp_150",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+249,"casez_tmp_151",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+250,"casez_tmp_152",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+251,"casez_tmp_153",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+252,"casez_tmp_154",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+253,"casez_tmp_155",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+254,"casez_tmp_156",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+255,"casez_tmp_157",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+256,"casez_tmp_158",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+257,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+258,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+261,"io_in_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+48,"io_empty",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+259,"io_dnpc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+39,"io_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+260,"io_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+264,"io_out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+265,"io_axi_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+266,"io_axi_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+264,"io_axi_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+39,"io_axi_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+74,"PC",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+75,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_wbu ");
    tracep->declBit(c+257,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+258,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+78,"io_result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+259,"io_dnpc_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+80,"io_src2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+77,"io_Csr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"io_csr_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+40,"io_rd_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+43,"io_MemNum",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+44,"io_RegNum",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+37,"io_CsrWr_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+46,"io_RegWr_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"io_MemWr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"io_MemtoReg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"io_ebreak",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+48,"io_empty",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"io_in_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+259,"io_dnpc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+267,"io_regdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+78,"io_csrdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"io_csr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+40,"io_rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+37,"io_CsrWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+46,"io_RegWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+261,"io_out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+268,"io_axi_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+78,"io_axi_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+268,"io_axi_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+80,"io_axi_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"io_axi_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+45,"io_axi_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+269,"io_axi_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+78,"io_axi_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+63,"io_axi_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+64,"io_axi_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+269,"io_axi_arvalid_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+270,"prepare",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+271,"DataOut",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("ebreak ");
    tracep->declBit(c+257,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"ebreak",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_0 ");
    tracep->declBit(c+257,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+41,"io_raddr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+42,"io_raddr2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+79,"io_rdata1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+80,"io_rdata2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+272,"io_wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+40,"io_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+267,"io_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_23060336_regs_ext ");
    tracep->declBus(c+42,"R0_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+276,"R0_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"R0_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+273,"R0_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+41,"R1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+276,"R1_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"R1_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+274,"R1_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+40,"W0_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+275,"W0_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"W0_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+267,"W0_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+4+i*1,"Memory",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram_ifu ");
    tracep->declBit(c+257,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+258,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+276,"awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+282,"awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+283,"awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+284,"awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+285,"awlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+286,"awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+287,"awburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+276,"wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+282,"wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+283,"wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+288,"wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+276,"wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+282,"bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+66,"bresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+284,"bid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+276,"arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+265,"arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+266,"araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+284,"arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+285,"arlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+289,"arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+287,"arburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+276,"rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+290,"rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+39,"rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+276,"rlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+291,"rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+67,"resp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+292,"RLFSR",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+293,"WLFSR",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+68,"Begin",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,"sdramdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+294,"strb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram_lsu ");
    tracep->declBit(c+257,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+258,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+276,"awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+268,"awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+78,"awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+291,"awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+285,"awlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+295,"awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+287,"awburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+276,"wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+268,"wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+80,"wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+45,"wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+276,"bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+69,"bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+70,"bresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+284,"bid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+276,"arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+269,"arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+78,"araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+291,"arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+285,"arlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+289,"arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+287,"arburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+276,"rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+290,"rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+64,"rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+276,"rlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+291,"rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+71,"resp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,"RLFSR",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+297,"WLFSR",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,"Begin",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,"sdramdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,"strb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_23060336___024root__trace_init_top(Vysyx_23060336___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root__trace_init_top\n"); );
    // Body
    Vysyx_23060336___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_23060336___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vysyx_23060336___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vysyx_23060336___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vysyx_23060336___024root__trace_register(Vysyx_23060336___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_23060336___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_23060336___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_23060336___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_23060336___024root__trace_full_sub_0(Vysyx_23060336___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vysyx_23060336___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_23060336___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060336___024root*>(voidSelf);
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_23060336___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_23060336___024root__trace_full_sub_0(Vysyx_23060336___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060336__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060336___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                            [0x341U]),32);
    bufp->fullIData(oldp+2,(vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                            [0x305U]),32);
    bufp->fullIData(oldp+3,(vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                            [0x342U]),32);
    bufp->fullIData(oldp+4,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[0]),32);
    bufp->fullIData(oldp+5,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[1]),32);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[2]),32);
    bufp->fullIData(oldp+7,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[3]),32);
    bufp->fullIData(oldp+8,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[4]),32);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[5]),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[6]),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[7]),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[8]),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[9]),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[10]),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[11]),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[12]),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[13]),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[14]),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[15]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[16]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[17]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[18]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[19]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[20]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[21]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[22]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[23]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[24]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[25]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[26]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[27]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[28]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[29]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[30]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[31]),32);
    bufp->fullSData(oldp+36,((vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                              >> 0x14U)),12);
    bufp->fullBit(oldp+37,(vlSelf->ysyx_23060336__DOT___lsu_wbu_io_CsrWr));
    bufp->fullBit(oldp+38,((0xffffffffU == vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_ecall_andMatrixOutputs_T)));
    bufp->fullIData(oldp+39,(vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata),32);
    bufp->fullCData(oldp+40,((0x1fU & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                       >> 7U))),5);
    bufp->fullCData(oldp+41,((0x1fU & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+42,((0x1fU & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+43,((((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_MemNum_orMatrixOutputs_T_4)) 
                               << 3U) | (((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_MemNum_orMatrixOutputs_T_4)) 
                                          << 2U) | 
                                         ((2U & ((~ (IData)(
                                                            (0x1ffU 
                                                             == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_MemNum_andMatrixOutputs_T_1)))) 
                                                 << 1U)) 
                                          | (0x3ffU 
                                             != ((0x200U 
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
    bufp->fullCData(oldp+44,(vlSelf->ysyx_23060336__DOT___idu_exu_io_RegNum),3);
    bufp->fullBit(oldp+45,(vlSelf->ysyx_23060336__DOT___lsu_wbu_io_axi_wlast));
    bufp->fullBit(oldp+46,((1U & ((IData)(((3U == (0xfU 
                                                   & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                           & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h14776bc0__0))) 
                                  | ((IData)((0x13U 
                                              == (0x5bU 
                                                  & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata))) 
                                     | ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h52335523__0) 
                                        | (IData)(vlSelf->ysyx_23060336__DOT___lsu_wbu_io_CsrWr)))))));
    bufp->fullBit(oldp+47,(vlSelf->ysyx_23060336__DOT___idu_exu_io_MemtoReg));
    bufp->fullBit(oldp+48,((0U == vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)));
    bufp->fullBit(oldp+49,(vlSelf->ysyx_23060336__DOT___idu_exu_io_ebreak));
    bufp->fullCData(oldp+50,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__immNum_invInputs),7);
    bufp->fullCData(oldp+51,((0x1fU & (~ (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                          >> 2U)))),5);
    bufp->fullCData(oldp+52,((0xffU & (~ (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___GEN)))),8);
    bufp->fullSData(oldp+53,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs),15);
    bufp->fullCData(oldp+54,((3U & (~ (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                       >> 2U)))),2);
    bufp->fullCData(oldp+55,((7U & (~ (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                       >> 2U)))),3);
    bufp->fullIData(oldp+56,((0x3fffffffU & (~ (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                >> 2U)))),30);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__casez_tmp),32);
    bufp->fullIData(oldp+58,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__imm),32);
    bufp->fullCData(oldp+59,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel),4);
    bufp->fullBit(oldp+60,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__cin));
    bufp->fullBit(oldp+61,((1U & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel))));
    bufp->fullBit(oldp+62,((1U & ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel) 
                                  >> 1U))));
    bufp->fullBit(oldp+63,(vlSelf->ysyx_23060336__DOT___sdram_lsu_rvalid));
    bufp->fullIData(oldp+64,(vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__sdramdata),32);
    bufp->fullBit(oldp+65,(vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__bvalid));
    bufp->fullCData(oldp+66,((3U & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__resp)),2);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__resp),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__Begin),32);
    bufp->fullBit(oldp+69,(vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__bvalid));
    bufp->fullCData(oldp+70,((3U & vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__resp)),2);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__resp),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__Begin),32);
    bufp->fullIData(oldp+73,((((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_MemNum_orMatrixOutputs_T_4)) 
                               << 3U) | (((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_MemNum_orMatrixOutputs_T_4)) 
                                          << 2U) | 
                                         ((2U & ((~ (IData)(
                                                            (0x1ffU 
                                                             == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_MemNum_andMatrixOutputs_T_1)))) 
                                                 << 1U)) 
                                          | (0x3ffU 
                                             != ((0x200U 
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
    bufp->fullIData(oldp+74,(vlSelf->ysyx_23060336__DOT__ifu__DOT__PC),32);
    bufp->fullBit(oldp+75,(vlSelf->ysyx_23060336__DOT__ifu__DOT__state));
    bufp->fullBit(oldp+76,(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__state));
    bufp->fullIData(oldp+77,(vlSelf->ysyx_23060336__DOT___csr_io_rdata),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT___alu_io_result),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_23060336__DOT___reg_io_rdata1),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_23060336__DOT___reg_io_rdata2),32);
    bufp->fullCData(oldp+81,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__PCMux),4);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_inb),32);
    bufp->fullIData(oldp+84,((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__addsub__DOT___sum_T_1)),32);
    bufp->fullBit(oldp+85,((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__addsub__DOT___sum_T_1))));
    bufp->fullBit(oldp+86,((1U & (IData)((vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__addsub__DOT___sum_T_1 
                                          >> 0x20U)))));
    bufp->fullBit(oldp+87,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT___addsub_io_overflow));
    bufp->fullIData(oldp+88,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__addsub__DOT__t_no_cin),32);
    bufp->fullCData(oldp+89,((0x1fU & vlSelf->ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_inb)),5);
    bufp->fullIData(oldp+90,(((((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)))) 
                               << 0x1fU) | ((((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                               ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)
                                               : ((1U 
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
    bufp->fullBit(oldp+91,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
    bufp->fullCData(oldp+92,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel),2);
    bufp->fullCData(oldp+93,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_1),2);
    bufp->fullBit(oldp+94,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp));
    bufp->fullBit(oldp+95,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_0));
    bufp->fullBit(oldp+96,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_1));
    bufp->fullBit(oldp+97,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_2));
    bufp->fullBit(oldp+98,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_3));
    bufp->fullBit(oldp+99,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_4));
    bufp->fullBit(oldp+100,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_5));
    bufp->fullBit(oldp+101,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_6));
    bufp->fullBit(oldp+102,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_7));
    bufp->fullBit(oldp+103,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_8));
    bufp->fullBit(oldp+104,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_9));
    bufp->fullBit(oldp+105,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_10));
    bufp->fullBit(oldp+106,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_11));
    bufp->fullBit(oldp+107,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_12));
    bufp->fullBit(oldp+108,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_13));
    bufp->fullBit(oldp+109,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_14));
    bufp->fullBit(oldp+110,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_15));
    bufp->fullBit(oldp+111,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_16));
    bufp->fullBit(oldp+112,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_17));
    bufp->fullBit(oldp+113,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_18));
    bufp->fullBit(oldp+114,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_19));
    bufp->fullBit(oldp+115,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_20));
    bufp->fullBit(oldp+116,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_21));
    bufp->fullBit(oldp+117,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_22));
    bufp->fullBit(oldp+118,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_23));
    bufp->fullBit(oldp+119,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_24));
    bufp->fullBit(oldp+120,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_25));
    bufp->fullBit(oldp+121,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_26));
    bufp->fullBit(oldp+122,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_27));
    bufp->fullBit(oldp+123,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_28));
    bufp->fullBit(oldp+124,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_29));
    bufp->fullBit(oldp+125,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_30));
    bufp->fullCData(oldp+126,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_2),2);
    bufp->fullBit(oldp+127,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_31));
    bufp->fullBit(oldp+128,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_32));
    bufp->fullBit(oldp+129,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_33));
    bufp->fullBit(oldp+130,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_34));
    bufp->fullBit(oldp+131,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_35));
    bufp->fullBit(oldp+132,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_36));
    bufp->fullBit(oldp+133,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_37));
    bufp->fullBit(oldp+134,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_38));
    bufp->fullBit(oldp+135,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_39));
    bufp->fullBit(oldp+136,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_40));
    bufp->fullBit(oldp+137,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_41));
    bufp->fullBit(oldp+138,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_42));
    bufp->fullBit(oldp+139,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_43));
    bufp->fullBit(oldp+140,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_44));
    bufp->fullBit(oldp+141,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_45));
    bufp->fullBit(oldp+142,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_46));
    bufp->fullBit(oldp+143,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_47));
    bufp->fullBit(oldp+144,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_48));
    bufp->fullBit(oldp+145,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_49));
    bufp->fullBit(oldp+146,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_50));
    bufp->fullBit(oldp+147,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_51));
    bufp->fullBit(oldp+148,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_52));
    bufp->fullBit(oldp+149,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_53));
    bufp->fullBit(oldp+150,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_54));
    bufp->fullBit(oldp+151,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_55));
    bufp->fullBit(oldp+152,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_56));
    bufp->fullBit(oldp+153,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_57));
    bufp->fullBit(oldp+154,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_58));
    bufp->fullBit(oldp+155,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_59));
    bufp->fullBit(oldp+156,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_60));
    bufp->fullBit(oldp+157,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_61));
    bufp->fullBit(oldp+158,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_62));
    bufp->fullCData(oldp+159,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_3),2);
    bufp->fullBit(oldp+160,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_63));
    bufp->fullBit(oldp+161,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_64));
    bufp->fullBit(oldp+162,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_65));
    bufp->fullBit(oldp+163,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_66));
    bufp->fullBit(oldp+164,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_67));
    bufp->fullBit(oldp+165,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_68));
    bufp->fullBit(oldp+166,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_69));
    bufp->fullBit(oldp+167,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_70));
    bufp->fullBit(oldp+168,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_71));
    bufp->fullBit(oldp+169,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_72));
    bufp->fullBit(oldp+170,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_73));
    bufp->fullBit(oldp+171,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_74));
    bufp->fullBit(oldp+172,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_75));
    bufp->fullBit(oldp+173,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_76));
    bufp->fullBit(oldp+174,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_77));
    bufp->fullBit(oldp+175,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_78));
    bufp->fullBit(oldp+176,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_79));
    bufp->fullBit(oldp+177,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_80));
    bufp->fullBit(oldp+178,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_81));
    bufp->fullBit(oldp+179,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_82));
    bufp->fullBit(oldp+180,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_83));
    bufp->fullBit(oldp+181,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_84));
    bufp->fullBit(oldp+182,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_85));
    bufp->fullBit(oldp+183,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_86));
    bufp->fullBit(oldp+184,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_87));
    bufp->fullBit(oldp+185,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_88));
    bufp->fullBit(oldp+186,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_89));
    bufp->fullBit(oldp+187,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_90));
    bufp->fullBit(oldp+188,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_91));
    bufp->fullBit(oldp+189,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_92));
    bufp->fullBit(oldp+190,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_93));
    bufp->fullBit(oldp+191,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_94));
    bufp->fullCData(oldp+192,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4),2);
    bufp->fullBit(oldp+193,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_95));
    bufp->fullBit(oldp+194,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96));
    bufp->fullBit(oldp+195,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97));
    bufp->fullBit(oldp+196,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98));
    bufp->fullBit(oldp+197,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99));
    bufp->fullBit(oldp+198,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100));
    bufp->fullBit(oldp+199,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101));
    bufp->fullBit(oldp+200,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102));
    bufp->fullBit(oldp+201,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103));
    bufp->fullBit(oldp+202,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104));
    bufp->fullBit(oldp+203,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105));
    bufp->fullBit(oldp+204,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106));
    bufp->fullBit(oldp+205,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107));
    bufp->fullBit(oldp+206,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108));
    bufp->fullBit(oldp+207,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109));
    bufp->fullBit(oldp+208,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110));
    bufp->fullBit(oldp+209,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111));
    bufp->fullBit(oldp+210,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112));
    bufp->fullBit(oldp+211,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113));
    bufp->fullBit(oldp+212,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114));
    bufp->fullBit(oldp+213,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115));
    bufp->fullBit(oldp+214,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116));
    bufp->fullBit(oldp+215,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117));
    bufp->fullBit(oldp+216,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118));
    bufp->fullBit(oldp+217,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119));
    bufp->fullBit(oldp+218,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120));
    bufp->fullBit(oldp+219,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121));
    bufp->fullBit(oldp+220,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122));
    bufp->fullBit(oldp+221,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123));
    bufp->fullBit(oldp+222,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124));
    bufp->fullBit(oldp+223,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125));
    bufp->fullBit(oldp+224,(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126));
    bufp->fullBit(oldp+225,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_95))))));
    bufp->fullBit(oldp+226,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_95)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4)) 
                                     & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_95))))));
    bufp->fullBit(oldp+227,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97))))));
    bufp->fullBit(oldp+228,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96))))));
    bufp->fullBit(oldp+229,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99))))));
    bufp->fullBit(oldp+230,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98))))));
    bufp->fullBit(oldp+231,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101))))));
    bufp->fullBit(oldp+232,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100))))));
    bufp->fullBit(oldp+233,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103))))));
    bufp->fullBit(oldp+234,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102))))));
    bufp->fullBit(oldp+235,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105))))));
    bufp->fullBit(oldp+236,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104))))));
    bufp->fullBit(oldp+237,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107))))));
    bufp->fullBit(oldp+238,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106))))));
    bufp->fullBit(oldp+239,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109))))));
    bufp->fullBit(oldp+240,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108))))));
    bufp->fullBit(oldp+241,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111))))));
    bufp->fullBit(oldp+242,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110))))));
    bufp->fullBit(oldp+243,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113))))));
    bufp->fullBit(oldp+244,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112))))));
    bufp->fullBit(oldp+245,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115))))));
    bufp->fullBit(oldp+246,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114))))));
    bufp->fullBit(oldp+247,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117))))));
    bufp->fullBit(oldp+248,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116))))));
    bufp->fullBit(oldp+249,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119))))));
    bufp->fullBit(oldp+250,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118))))));
    bufp->fullBit(oldp+251,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121))))));
    bufp->fullBit(oldp+252,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120))))));
    bufp->fullBit(oldp+253,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123))))));
    bufp->fullBit(oldp+254,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122))))));
    bufp->fullBit(oldp+255,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125))))));
    bufp->fullBit(oldp+256,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124))))));
    bufp->fullBit(oldp+257,(vlSelf->clock));
    bufp->fullBit(oldp+258,(vlSelf->reset));
    bufp->fullIData(oldp+259,(vlSelf->io_dnpc),32);
    bufp->fullIData(oldp+260,(vlSelf->io_pc),32);
    bufp->fullBit(oldp+261,(vlSelf->io_out_valid));
    bufp->fullIData(oldp+262,(((0xffffffffU == vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_ecall_andMatrixOutputs_T)
                                ? vlSelf->ysyx_23060336__DOT__ifu__DOT__PC
                                : vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                               [0x341U])),32);
    bufp->fullIData(oldp+263,(((0xffffffffU == vlSelf->ysyx_23060336__DOT__idu_exu__DOT___io_ecall_andMatrixOutputs_T)
                                ? 0xbU : vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                               [0x342U])),32);
    bufp->fullBit(oldp+264,(vlSelf->ysyx_23060336__DOT___sdram_ifu_rvalid));
    bufp->fullBit(oldp+265,(((0U == vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata) 
                             | (IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__state))));
    bufp->fullIData(oldp+266,(((IData)(vlSelf->reset)
                                ? 0x80000000U : (((IData)(vlSelf->ysyx_23060336__DOT__ifu__DOT__state) 
                                                  & (IData)(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__state))
                                                  ? vlSelf->io_dnpc
                                                  : vlSelf->ysyx_23060336__DOT__ifu__DOT__PC))),32);
    bufp->fullIData(oldp+267,(((IData)(vlSelf->ysyx_23060336__DOT___lsu_wbu_io_CsrWr)
                                ? vlSelf->ysyx_23060336__DOT___csr_io_rdata
                                : (((2U == (IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_RegNum)) 
                                    | (5U == (IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_RegNum)))
                                    ? vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__DataOut
                                    : ((3U == (IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_RegNum))
                                        ? (0xffU & vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__DataOut)
                                        : ((4U == (IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_RegNum))
                                            ? (0xffffU 
                                               & vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__DataOut)
                                            : ((0U 
                                                == (IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_RegNum))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__DataOut 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__DataOut))
                                                : (
                                                   (1U 
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
    bufp->fullBit(oldp+268,(vlSelf->ysyx_23060336__DOT___lsu_wbu_io_axi_awvalid));
    bufp->fullBit(oldp+269,(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__io_axi_arvalid_0));
    bufp->fullBit(oldp+270,(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__prepare));
    bufp->fullIData(oldp+271,(vlSelf->ysyx_23060336__DOT__lsu_wbu__DOT__DataOut),32);
    bufp->fullBit(oldp+272,((((IData)(((3U == (0xfU 
                                               & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                       & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h14776bc0__0))) 
                              | ((IData)((0x13U == 
                                          (0x5bU & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata))) 
                                 | ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h52335523__0) 
                                    | (IData)(vlSelf->ysyx_23060336__DOT___lsu_wbu_io_CsrWr)))) 
                             & ((IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_MemtoReg) 
                                ^ (IData)(vlSelf->ysyx_23060336__DOT___sdram_ifu_rvalid)))));
    bufp->fullIData(oldp+273,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory
                              [(0x1fU & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+274,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory
                              [(0x1fU & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                         >> 0xfU))]),32);
    bufp->fullBit(oldp+275,(((((IData)(((3U == (0xfU 
                                                & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata)) 
                                        & (IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h14776bc0__0))) 
                               | ((IData)((0x13U == 
                                           (0x5bU & vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata))) 
                                  | ((IData)(vlSelf->ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h52335523__0) 
                                     | (IData)(vlSelf->ysyx_23060336__DOT___lsu_wbu_io_CsrWr)))) 
                              & ((IData)(vlSelf->ysyx_23060336__DOT___idu_exu_io_MemtoReg) 
                                 ^ (IData)(vlSelf->ysyx_23060336__DOT___sdram_ifu_rvalid))) 
                             & (0U != (0x1fU & (vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata 
                                                >> 7U))))));
    bufp->fullBit(oldp+276,(1U));
    bufp->fullSData(oldp+277,(0x305U),12);
    bufp->fullSData(oldp+278,(0x341U),12);
    bufp->fullSData(oldp+279,(0x342U),12);
    bufp->fullSData(oldp+280,(0x300U),12);
    bufp->fullIData(oldp+281,(0x1800U),32);
    bufp->fullBit(oldp+282,(0U));
    bufp->fullIData(oldp+283,(0U),32);
    bufp->fullCData(oldp+284,(1U),4);
    bufp->fullCData(oldp+285,(0U),8);
    bufp->fullCData(oldp+286,(3U),3);
    bufp->fullCData(oldp+287,(1U),2);
    bufp->fullCData(oldp+288,(3U),4);
    bufp->fullCData(oldp+289,(2U),3);
    bufp->fullCData(oldp+290,(0U),2);
    bufp->fullCData(oldp+291,(2U),4);
    bufp->fullCData(oldp+292,(vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__RLFSR),5);
    bufp->fullCData(oldp+293,(vlSelf->ysyx_23060336__DOT__sdram_ifu__DOT__WLFSR),5);
    bufp->fullIData(oldp+294,(3U),32);
    bufp->fullCData(oldp+295,(0U),3);
    bufp->fullCData(oldp+296,(vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__RLFSR),5);
    bufp->fullCData(oldp+297,(vlSelf->ysyx_23060336__DOT__sdram_lsu__DOT__WLFSR),5);
}

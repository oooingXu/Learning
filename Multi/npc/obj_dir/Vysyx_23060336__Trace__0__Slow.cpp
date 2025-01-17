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
    tracep->declBit(c+305,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+306,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+307,"io_ebreak",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+308,"io_NPC",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+309,"io_PC",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+310,"io_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+311,"io_mcause",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+312,"io_mstatus",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+313,"io_iduopcode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+314,"io_idupcmux",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+315,"io_iduinst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+316,"io_exupcmux",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+317,"io_ifuvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+318,"io_ifuready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+319,"io_iduvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+320,"io_iduready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+321,"io_exuvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+322,"io_exuready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"io_lsuvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"io_lsuready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+325,"io_lsuarvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+326,"io_lsuarready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+327,"io_lsuawvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+328,"io_lsuawready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+329,"io_lsurready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+330,"io_lsurvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+331,"io_lsuwready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+332,"io_lsuwvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"io_ifurvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+334,"io_ifuarvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+335,"io_wbuvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+336,"io_wbuready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+337,"io_MemtoReg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+338,"io_iduMemWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+339,"io_exuMemWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+340,"io_lsuMemWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+341,"io_isRAW",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+342,"io_checkright",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+343,"io_checkfail",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+344,"io_arid_halt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+345,"io_awid_halt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+346,"io_idupc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+347,"io_exupc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+348,"io_alumux",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+349,"io_pcadd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+350,"io_pca",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+351,"io_pcb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+352,"io_aluresult",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+353,"io_ina",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+354,"io_inb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+355,"io_regdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+356,"io_csrdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+357,"io_idurs1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+358,"io_idurs2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+359,"io_exurd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+360,"io_lsurd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+361,"io_wburd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+362,"io_ifuaraddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+363,"io_lsuaraddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+364,"io_lsurdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+365,"io_ifurdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+366,"io_lsuawaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+367,"io_lsuwdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+368,"io_wburesult",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+369,"io_wbupc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+370,"io_lsupc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+371,"io_regrs1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+372,"io_regrs2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+373,"io_regsrc1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+374,"io_regsrc2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+375,"io_regwen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+376,"io_regwaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+377,"io_regwdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+378,"io_imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_23060336 ");
    tracep->declBit(c+305,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+306,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+307,"io_ebreak",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+308,"io_NPC",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+309,"io_PC",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+310,"io_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+311,"io_mcause",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+312,"io_mstatus",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+313,"io_iduopcode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+314,"io_idupcmux",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+315,"io_iduinst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+316,"io_exupcmux",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+317,"io_ifuvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+318,"io_ifuready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+317,"io_iduvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+318,"io_iduready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+321,"io_exuvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+322,"io_exuready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"io_lsuvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"io_lsuready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+325,"io_lsuarvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+326,"io_lsuarready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+327,"io_lsuawvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+328,"io_lsuawready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+329,"io_lsurready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+330,"io_lsurvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+331,"io_lsuwready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+327,"io_lsuwvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"io_ifurvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+334,"io_ifuarvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+335,"io_wbuvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+336,"io_wbuready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+337,"io_MemtoReg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+338,"io_iduMemWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+339,"io_exuMemWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+340,"io_lsuMemWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+341,"io_isRAW",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+342,"io_checkright",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+343,"io_checkfail",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+344,"io_arid_halt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+345,"io_awid_halt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+346,"io_idupc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+347,"io_exupc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+348,"io_alumux",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+349,"io_pcadd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+350,"io_pca",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+351,"io_pcb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+352,"io_aluresult",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+353,"io_ina",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+354,"io_inb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+355,"io_regdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+356,"io_csrdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+357,"io_idurs1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+358,"io_idurs2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+359,"io_exurd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+360,"io_lsurd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+361,"io_wburd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+362,"io_ifuaraddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+356,"io_lsuaraddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+364,"io_lsurdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+310,"io_ifurdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+356,"io_lsuawaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+367,"io_lsuwdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+368,"io_wburesult",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+369,"io_wbupc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+370,"io_lsupc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+357,"io_regrs1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+358,"io_regrs2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+373,"io_regsrc1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+374,"io_regsrc2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+375,"io_regwen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+361,"io_regwaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+377,"io_regwdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+378,"io_imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+273,"idu_io_in_bits_r_inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,"idu_io_in_bits_r_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+274,"idu_io_in_bits_r_checkright",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+2,"exu_io_in_bits_r_rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+3,"exu_io_in_bits_r_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+4,"exu_io_in_bits_r_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,"exu_io_in_bits_r_zimm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,"exu_io_in_bits_r_src1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,"exu_io_in_bits_r_src2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,"exu_io_in_bits_r_csr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+9,"exu_io_in_bits_r_Csr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,"exu_io_in_bits_r_PcMux",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+11,"exu_io_in_bits_r_AluMux",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+12,"exu_io_in_bits_r_AluSel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+275,"exu_io_in_bits_r_MemNum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,"exu_io_in_bits_r_RegNum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+14,"exu_io_in_bits_r_Check",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+15,"exu_io_in_bits_r_CsrWr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+16,"exu_io_in_bits_r_MemWr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+17,"exu_io_in_bits_r_RegWr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+18,"exu_io_in_bits_r_MemtoReg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+19,"exu_io_in_bits_r_Branch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+20,"exu_io_in_bits_r_mret",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+21,"exu_io_in_bits_r_ecall",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+22,"exu_io_in_bits_r_ebreak",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+23,"exu_io_in_bits_r_Recsr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+276,"exu_io_in_bits_r_checkright",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+24,"lsu_io_in_bits_r_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,"lsu_io_in_bits_r_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,"lsu_io_in_bits_r_src2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,"lsu_io_in_bits_r_Csr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,"lsu_io_in_bits_r_csr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+277,"lsu_io_in_bits_r_MemNum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+29,"lsu_io_in_bits_r_RegNum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+30,"lsu_io_in_bits_r_rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+31,"lsu_io_in_bits_r_MemtoReg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+32,"lsu_io_in_bits_r_MemWr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+33,"lsu_io_in_bits_r_RegWr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+34,"lsu_io_in_bits_r_CsrWr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+35,"lsu_io_in_bits_r_ebreak",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+36,"wbu_io_in_bits_r_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,"wbu_io_in_bits_r_DataOut",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,"wbu_io_in_bits_r_result",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,"wbu_io_in_bits_r_csr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 11,0);
    tracep->declBus(c+40,"wbu_io_in_bits_r_Csr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,"wbu_io_in_bits_r_rd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+42,"wbu_io_in_bits_r_RegNum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+43,"wbu_io_in_bits_r_CsrWr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+44,"wbu_io_in_bits_r_RegWr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+45,"wbu_io_in_bits_r_ebreak",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("clint ");
    tracep->declBit(c+305,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+306,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+379,"io_axi_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+334,"io_axi_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+380,"io_axi_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+46,"mtimel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,"mtimeh",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr ");
    tracep->declBit(c+305,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+278,"io_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+381,"io_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+43,"io_wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+39,"io_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+368,"io_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+21,"io_ecall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+347,"io_mepc_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"io_mepc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+49,"io_mtvec",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+311,"io_mcause",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+312,"io_mstatus",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_23060336_csrs_ext ");
    tracep->declBus(c+278,"R0_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+401,"R0_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+305,"R0_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+381,"R0_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+402,"R1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+401,"R1_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+305,"R1_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+49,"R1_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+403,"R2_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+401,"R2_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+305,"R2_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+312,"R2_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+404,"R3_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+401,"R3_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+305,"R3_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+48,"R3_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+405,"R4_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+401,"R4_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+305,"R4_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+311,"R4_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+404,"R5_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+401,"R5_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+305,"R5_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+48,"R5_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+405,"R6_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+401,"R6_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+305,"R6_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+311,"R6_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+39,"W0_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+43,"W0_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+305,"W0_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+368,"W0_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+404,"W1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+401,"W1_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+305,"W1_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+50,"W1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+405,"W2_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+401,"W2_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+305,"W2_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+51,"W2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+403,"W3_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+401,"W3_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+305,"W3_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+406,"W3_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+321,"io_in_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+2,"io_in_bits_rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+3,"io_in_bits_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+4,"io_in_bits_imm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+5,"io_in_bits_zimm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+6,"io_in_bits_src1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+7,"io_in_bits_src2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+8,"io_in_bits_csr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+9,"io_in_bits_Csr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+10,"io_in_bits_PcMux",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+11,"io_in_bits_AluMux",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+12,"io_in_bits_AluSel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+275,"io_in_bits_MemNum",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+13,"io_in_bits_RegNum",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+14,"io_in_bits_Check",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"io_in_bits_CsrWr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"io_in_bits_MemWr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"io_in_bits_RegWr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"io_in_bits_MemtoReg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"io_in_bits_Branch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"io_in_bits_mret",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"io_in_bits_ecall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"io_in_bits_ebreak",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"io_in_bits_Recsr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+276,"io_in_bits_checkright",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+321,"io_out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+347,"io_out_bits_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+352,"io_out_bits_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+7,"io_out_bits_src2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+9,"io_out_bits_Csr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+8,"io_out_bits_csr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+279,"io_out_bits_MemNum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+13,"io_out_bits_RegNum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+359,"io_out_bits_rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+18,"io_out_bits_MemtoReg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+339,"io_out_bits_MemWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"io_out_bits_RegWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"io_out_bits_CsrWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+307,"io_out_bits_ebreak",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+48,"io_mepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+49,"io_mtvec",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+342,"io_checkright",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+382,"io_checkfail",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+383,"io_Checkfail",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+321,"io_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+52,"io_ecall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+10,"io_pcmux",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+348,"io_alumux",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+359,"io_rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+349,"io_pcadd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+352,"io_aluresult",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+353,"io_ina",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+354,"io_inb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+350,"io_pca",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+351,"io_pcb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+347,"io_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+308,"io_dnpc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+347,"io_mepc_in",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+339,"io_exuMemWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+307,"io_ebreak",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+353,"ina",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+354,"inb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+53,"PCMux",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+350,"pca",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+351,"pcb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+308,"io_dnpc_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+12,"io_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+353,"io_ina",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+354,"io_inb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+352,"io_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+54,"cin",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("addsub ");
    tracep->declBit(c+54,"io_cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+353,"io_ina",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+354,"io_inb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+55,"io_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+56,"io_zero",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+57,"io_carry",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"io_overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+59,"t_no_cin",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+353,"io_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+384,"io_shamt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+60,"io_isLeft",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"io_izArith",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+62,"io_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+63,"leftIn",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+64,"io_out_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+65,"io_out_sel_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+66,"casez_tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+67,"casez_tmp_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+68,"casez_tmp_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+69,"casez_tmp_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+70,"casez_tmp_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+71,"casez_tmp_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+72,"casez_tmp_5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+73,"casez_tmp_6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+74,"casez_tmp_7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+75,"casez_tmp_8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+76,"casez_tmp_9",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+77,"casez_tmp_10",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+78,"casez_tmp_11",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+79,"casez_tmp_12",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+80,"casez_tmp_13",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+81,"casez_tmp_14",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+82,"casez_tmp_15",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+83,"casez_tmp_16",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+84,"casez_tmp_17",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+85,"casez_tmp_18",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+86,"casez_tmp_19",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+87,"casez_tmp_20",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+88,"casez_tmp_21",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+89,"casez_tmp_22",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+90,"casez_tmp_23",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+91,"casez_tmp_24",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+92,"casez_tmp_25",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+93,"casez_tmp_26",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+94,"casez_tmp_27",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+95,"casez_tmp_28",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+96,"casez_tmp_29",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+97,"casez_tmp_30",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+98,"io_out_sel_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+99,"casez_tmp_31",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+100,"casez_tmp_32",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+101,"casez_tmp_33",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+102,"casez_tmp_34",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+103,"casez_tmp_35",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+104,"casez_tmp_36",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+105,"casez_tmp_37",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+106,"casez_tmp_38",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+107,"casez_tmp_39",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+108,"casez_tmp_40",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+109,"casez_tmp_41",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+110,"casez_tmp_42",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+111,"casez_tmp_43",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+112,"casez_tmp_44",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+113,"casez_tmp_45",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+114,"casez_tmp_46",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+115,"casez_tmp_47",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+116,"casez_tmp_48",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+117,"casez_tmp_49",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+118,"casez_tmp_50",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+119,"casez_tmp_51",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+120,"casez_tmp_52",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+121,"casez_tmp_53",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+122,"casez_tmp_54",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+123,"casez_tmp_55",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+124,"casez_tmp_56",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+125,"casez_tmp_57",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+126,"casez_tmp_58",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+127,"casez_tmp_59",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+128,"casez_tmp_60",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+129,"casez_tmp_61",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+130,"casez_tmp_62",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+131,"io_out_sel_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+132,"casez_tmp_63",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+133,"casez_tmp_64",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+134,"casez_tmp_65",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+135,"casez_tmp_66",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+136,"casez_tmp_67",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+137,"casez_tmp_68",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+138,"casez_tmp_69",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+139,"casez_tmp_70",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+140,"casez_tmp_71",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+141,"casez_tmp_72",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+142,"casez_tmp_73",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+143,"casez_tmp_74",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+144,"casez_tmp_75",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+145,"casez_tmp_76",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+146,"casez_tmp_77",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+147,"casez_tmp_78",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+148,"casez_tmp_79",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+149,"casez_tmp_80",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+150,"casez_tmp_81",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+151,"casez_tmp_82",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+152,"casez_tmp_83",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+153,"casez_tmp_84",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+154,"casez_tmp_85",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+155,"casez_tmp_86",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+156,"casez_tmp_87",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+157,"casez_tmp_88",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+158,"casez_tmp_89",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+159,"casez_tmp_90",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+160,"casez_tmp_91",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+161,"casez_tmp_92",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+162,"casez_tmp_93",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+163,"casez_tmp_94",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+164,"io_out_sel_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+165,"casez_tmp_95",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+166,"casez_tmp_96",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+167,"casez_tmp_97",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+168,"casez_tmp_98",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+169,"casez_tmp_99",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+170,"casez_tmp_100",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+171,"casez_tmp_101",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+172,"casez_tmp_102",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+173,"casez_tmp_103",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+174,"casez_tmp_104",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+175,"casez_tmp_105",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+176,"casez_tmp_106",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+177,"casez_tmp_107",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+178,"casez_tmp_108",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+179,"casez_tmp_109",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+180,"casez_tmp_110",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+181,"casez_tmp_111",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+182,"casez_tmp_112",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+183,"casez_tmp_113",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+184,"casez_tmp_114",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+185,"casez_tmp_115",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+186,"casez_tmp_116",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+187,"casez_tmp_117",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+188,"casez_tmp_118",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+189,"casez_tmp_119",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+190,"casez_tmp_120",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+191,"casez_tmp_121",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+192,"casez_tmp_122",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+193,"casez_tmp_123",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+194,"casez_tmp_124",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+195,"casez_tmp_125",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+196,"casez_tmp_126",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+197,"casez_tmp_127",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+198,"casez_tmp_128",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+199,"casez_tmp_129",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+200,"casez_tmp_130",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+201,"casez_tmp_131",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+202,"casez_tmp_132",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+203,"casez_tmp_133",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+204,"casez_tmp_134",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+205,"casez_tmp_135",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+206,"casez_tmp_136",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+207,"casez_tmp_137",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+208,"casez_tmp_138",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+209,"casez_tmp_139",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+210,"casez_tmp_140",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+211,"casez_tmp_141",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+212,"casez_tmp_142",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+213,"casez_tmp_143",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+214,"casez_tmp_144",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+215,"casez_tmp_145",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+216,"casez_tmp_146",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+217,"casez_tmp_147",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+218,"casez_tmp_148",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+219,"casez_tmp_149",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+220,"casez_tmp_150",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+221,"casez_tmp_151",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+222,"casez_tmp_152",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+223,"casez_tmp_153",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+224,"casez_tmp_154",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+225,"casez_tmp_155",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+226,"casez_tmp_156",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+227,"casez_tmp_157",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+228,"casez_tmp_158",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("check ");
    tracep->declBit(c+14,"Check",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+342,"checkright",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+276,"Checkright",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+308,"dnpc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+3,"pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+382,"checkfail",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+383,"Checkfail",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+280,"CheckFail",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+318,"io_in_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+317,"io_in_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+273,"io_in_bits_inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1,"io_in_bits_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+274,"io_in_bits_checkright",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+317,"io_out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+299,"io_out_bits_rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+385,"io_out_bits_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+300,"io_out_bits_imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+281,"io_out_bits_zimm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+386,"io_out_bits_src1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+374,"io_out_bits_src2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+278,"io_out_bits_csr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+381,"io_out_bits_Csr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+314,"io_out_bits_PcMux",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+387,"io_out_bits_AluMux",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+301,"io_out_bits_AluSel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+282,"io_out_bits_MemNum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+283,"io_out_bits_RegNum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+388,"io_out_bits_Check",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+302,"io_out_bits_CsrWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+338,"io_out_bits_MemWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+303,"io_out_bits_RegWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+304,"io_out_bits_MemtoReg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+284,"io_out_bits_Branch",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"io_out_bits_mret",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+286,"io_out_bits_ecall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+389,"io_out_bits_ebreak",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+287,"io_out_bits_Recsr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+274,"io_out_bits_checkright",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+381,"io_Csr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+373,"io_src1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+374,"io_src2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+359,"io_exu_rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+360,"io_lsu_rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+361,"io_wbu_rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+347,"io_exu_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+383,"io_Checkfail",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+357,"io_rs1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+358,"io_rs2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+278,"io_csr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+346,"io_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+314,"io_pcmux",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+313,"io_opcode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+315,"io_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+378,"io_imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+341,"io_isRAW",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+317,"io_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+318,"io_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+338,"io_iduMemWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+341,"isRAW",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+288,"immNum_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+289,"instType_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+289,"AluMuxa_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+290,"AluMuxb_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+291,"AluSela_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 14,0);
    tracep->declBus(c+290,"AluSelb_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+292,"casez_tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+293,"io_out_bits_ecall_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 29,0);
    tracep->declBus(c+293,"io_out_bits_ebreak_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 29,0);
    tracep->declBus(c+293,"io_out_bits_mret_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 29,0);
    tracep->declBus(c+294,"io_out_bits_Branch_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+294,"io_out_bits_PcMux_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+314,"io_out_bits_PcMux_plaOutput",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+289,"io_out_bits_MemWr_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+338,"io_iduMemWr_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+289,"io_out_bits_MemtoReg_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+289,"io_out_bits_RegWr_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+295,"io_out_bits_RegWr_invInputs_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+295,"io_out_bits_CsrWr_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+295,"io_out_bits_Recsr_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+290,"io_out_bits_MemNum_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+290,"io_out_bits_RegNum_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+305,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+306,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+307,"io_ebreak",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+382,"io_checkfail",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+318,"io_out_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+317,"io_out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+310,"io_out_bits_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+390,"io_out_bits_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+342,"io_out_bits_checkright",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+310,"io_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+309,"io_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+308,"io_dnpc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+347,"io_exu_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+317,"io_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+318,"io_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+342,"io_checkright",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+334,"io_axi_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+362,"io_axi_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+318,"io_axi_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"io_axi_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+310,"io_axi_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+229,"PC",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+230,"Checkright",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+317,"io_valid_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+342,"CheckRight",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+306,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"io_out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+370,"io_out_bits_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+355,"io_out_bits_DataOut",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+356,"io_out_bits_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+28,"io_out_bits_csr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+27,"io_out_bits_Csr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+360,"io_out_bits_rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+29,"io_out_bits_RegNum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+34,"io_out_bits_CsrWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"io_out_bits_RegWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"io_out_bits_ebreak",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"io_in_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+321,"io_in_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+24,"io_in_bits_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+25,"io_in_bits_result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+26,"io_in_bits_src2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+27,"io_in_bits_Csr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+28,"io_in_bits_csr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+277,"io_in_bits_MemNum",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+29,"io_in_bits_RegNum",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+30,"io_in_bits_rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+31,"io_in_bits_MemtoReg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"io_in_bits_MemWr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"io_in_bits_RegWr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"io_in_bits_CsrWr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"io_in_bits_ebreak",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"io_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"io_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+340,"io_lsuMemWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+337,"io_MemtoReg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+360,"io_rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+370,"io_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+355,"io_regdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+356,"io_csrdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+327,"io_axi_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+356,"io_axi_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+327,"io_axi_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+367,"io_axi_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+296,"io_axi_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+391,"io_axi_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+325,"io_axi_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+356,"io_axi_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+329,"io_axi_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+330,"io_axi_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+364,"io_axi_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+329,"io_axi_rready_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+327,"io_axi_wvalid_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+392,"prepare",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"io_valid_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"io_ready_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+355,"io_regdata_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_0 ");
    tracep->declBit(c+305,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+357,"io_raddr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+358,"io_raddr2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+373,"io_rdata1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+374,"io_rdata2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+375,"io_wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+361,"io_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+377,"io_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_23060336_regs_ext ");
    tracep->declBus(c+358,"R0_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+401,"R0_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+305,"R0_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+393,"R0_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+357,"R1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+401,"R1_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+305,"R1_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+394,"R1_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+361,"W0_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+231,"W0_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+305,"W0_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+377,"W0_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+232+i*1,"Memory",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+305,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+306,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+401,"awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+395,"awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+356,"awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+407,"awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+408,"awlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+409,"awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+410,"awburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+401,"wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+395,"wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+367,"wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+296,"wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+401,"wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+267,"bresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+411,"bid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+401,"arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+396,"arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+379,"araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+397,"arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+408,"arlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+412,"arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+410,"arburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+398,"rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+268,"rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+413,"rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+269,"rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+401,"rlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+407,"rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+270,"resp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+414,"RLFSR",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+415,"WLFSR",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+271,"Begin",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+272,"sdramdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+297,"strb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+305,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"io_in_bits_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+37,"io_in_bits_DataOut",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+38,"io_in_bits_result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+39,"io_in_bits_csr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+40,"io_in_bits_Csr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+41,"io_in_bits_rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+42,"io_in_bits_RegNum",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+43,"io_in_bits_CsrWr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+44,"io_in_bits_RegWr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"io_in_bits_ebreak",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+375,"io_RegWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"io_CsrWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+361,"io_rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+39,"io_csr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+368,"io_csrdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+377,"io_regdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+369,"io_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("ebreak ");
    tracep->declBit(c+305,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"ebreak",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("xbar ");
    tracep->declBit(c+305,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+306,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+334,"io_ifu_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+362,"io_ifu_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+318,"io_ifu_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"io_ifu_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+310,"io_ifu_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+328,"io_lsu_awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+327,"io_lsu_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+356,"io_lsu_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+331,"io_lsu_wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+327,"io_lsu_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+367,"io_lsu_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+296,"io_lsu_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+391,"io_lsu_bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+326,"io_lsu_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+325,"io_lsu_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+356,"io_lsu_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+329,"io_lsu_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+330,"io_lsu_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+364,"io_lsu_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+401,"io_sdram_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+395,"io_sdram_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+356,"io_sdram_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+401,"io_sdram_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+395,"io_sdram_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+367,"io_sdram_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+296,"io_sdram_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+264,"io_sdram_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"io_sdram_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+401,"io_sdram_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+396,"io_sdram_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+379,"io_sdram_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+397,"io_sdram_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+398,"io_sdram_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+268,"io_sdram_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+269,"io_sdram_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+379,"io_clint_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+334,"io_clint_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+380,"io_clint_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+344,"io_arid_halt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+345,"io_awid_halt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+399,"rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+400,"rvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+298,"arid_halt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+265,"awid_halt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+379,"araddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+333,"io_ifu_rvalid_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+330,"io_lsu_rvalid_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
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
    bufp->fullIData(oldp+1,(vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_pc),32);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_rd),5);
    bufp->fullIData(oldp+3,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_pc),32);
    bufp->fullIData(oldp+4,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_imm),32);
    bufp->fullIData(oldp+5,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_zimm),32);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_src1),32);
    bufp->fullIData(oldp+7,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_src2),32);
    bufp->fullSData(oldp+8,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_csr),12);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Csr),32);
    bufp->fullCData(oldp+10,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_PcMux),2);
    bufp->fullCData(oldp+11,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluMux),4);
    bufp->fullCData(oldp+12,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel),4);
    bufp->fullCData(oldp+13,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_RegNum),3);
    bufp->fullBit(oldp+14,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Check));
    bufp->fullBit(oldp+15,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_CsrWr));
    bufp->fullBit(oldp+16,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_MemWr));
    bufp->fullBit(oldp+17,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_RegWr));
    bufp->fullBit(oldp+18,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_MemtoReg));
    bufp->fullBit(oldp+19,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Branch));
    bufp->fullBit(oldp+20,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_mret));
    bufp->fullBit(oldp+21,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_ecall));
    bufp->fullBit(oldp+22,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_ebreak));
    bufp->fullBit(oldp+23,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_Recsr));
    bufp->fullIData(oldp+24,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_pc),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_result),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_src2),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_Csr),32);
    bufp->fullSData(oldp+28,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_csr),12);
    bufp->fullCData(oldp+29,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_RegNum),3);
    bufp->fullCData(oldp+30,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_rd),5);
    bufp->fullBit(oldp+31,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemtoReg));
    bufp->fullBit(oldp+32,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemWr));
    bufp->fullBit(oldp+33,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_RegWr));
    bufp->fullBit(oldp+34,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_CsrWr));
    bufp->fullBit(oldp+35,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_ebreak));
    bufp->fullIData(oldp+36,(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_pc),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_DataOut),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_result),32);
    bufp->fullSData(oldp+39,(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_csr),12);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_Csr),32);
    bufp->fullCData(oldp+41,(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_rd),5);
    bufp->fullCData(oldp+42,(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegNum),3);
    bufp->fullBit(oldp+43,(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_CsrWr));
    bufp->fullBit(oldp+44,(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegWr));
    bufp->fullBit(oldp+45,(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_ebreak));
    bufp->fullIData(oldp+46,(vlSelf->ysyx_23060336__DOT__clint__DOT__mtimel),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_23060336__DOT__clint__DOT__mtimeh),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                             [0x341U]),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                             [0x305U]),32);
    bufp->fullIData(oldp+50,(((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_ecall)
                               ? vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_pc
                               : vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                              [0x341U])),32);
    bufp->fullIData(oldp+51,(((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_ecall)
                               ? 0xbU : vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                              [0x342U])),32);
    bufp->fullCData(oldp+52,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_ecall),2);
    bufp->fullCData(oldp+53,(vlSelf->ysyx_23060336__DOT__exu__DOT__PCMux),4);
    bufp->fullBit(oldp+54,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__cin));
    bufp->fullIData(oldp+55,((IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__addsub__DOT___sum_T_1)),32);
    bufp->fullBit(oldp+56,((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__addsub__DOT___sum_T_1))));
    bufp->fullBit(oldp+57,((1U & (IData)((vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__addsub__DOT___sum_T_1 
                                          >> 0x20U)))));
    bufp->fullBit(oldp+58,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT___addsub_io_overflow));
    bufp->fullIData(oldp+59,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__addsub__DOT__t_no_cin),32);
    bufp->fullBit(oldp+60,((1U & (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel))));
    bufp->fullBit(oldp+61,((1U & ((IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_AluSel) 
                                  >> 1U))));
    bufp->fullIData(oldp+62,(((((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                 ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                 : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                     ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn)
                                     : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                         ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                         : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)))) 
                               << 0x1fU) | ((((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                               ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)
                                               : ((1U 
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
    bufp->fullBit(oldp+63,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn));
    bufp->fullCData(oldp+64,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel),2);
    bufp->fullCData(oldp+65,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_1),2);
    bufp->fullBit(oldp+66,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp));
    bufp->fullBit(oldp+67,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_0));
    bufp->fullBit(oldp+68,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_1));
    bufp->fullBit(oldp+69,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_2));
    bufp->fullBit(oldp+70,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_3));
    bufp->fullBit(oldp+71,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_4));
    bufp->fullBit(oldp+72,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_5));
    bufp->fullBit(oldp+73,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_6));
    bufp->fullBit(oldp+74,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_7));
    bufp->fullBit(oldp+75,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_8));
    bufp->fullBit(oldp+76,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_9));
    bufp->fullBit(oldp+77,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_10));
    bufp->fullBit(oldp+78,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_11));
    bufp->fullBit(oldp+79,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_12));
    bufp->fullBit(oldp+80,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_13));
    bufp->fullBit(oldp+81,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_14));
    bufp->fullBit(oldp+82,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_15));
    bufp->fullBit(oldp+83,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_16));
    bufp->fullBit(oldp+84,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_17));
    bufp->fullBit(oldp+85,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_18));
    bufp->fullBit(oldp+86,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_19));
    bufp->fullBit(oldp+87,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_20));
    bufp->fullBit(oldp+88,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_21));
    bufp->fullBit(oldp+89,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_22));
    bufp->fullBit(oldp+90,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_23));
    bufp->fullBit(oldp+91,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_24));
    bufp->fullBit(oldp+92,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_25));
    bufp->fullBit(oldp+93,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_26));
    bufp->fullBit(oldp+94,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_27));
    bufp->fullBit(oldp+95,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_28));
    bufp->fullBit(oldp+96,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_29));
    bufp->fullBit(oldp+97,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_30));
    bufp->fullCData(oldp+98,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_2),2);
    bufp->fullBit(oldp+99,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_31));
    bufp->fullBit(oldp+100,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_32));
    bufp->fullBit(oldp+101,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_33));
    bufp->fullBit(oldp+102,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_34));
    bufp->fullBit(oldp+103,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_35));
    bufp->fullBit(oldp+104,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_36));
    bufp->fullBit(oldp+105,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_37));
    bufp->fullBit(oldp+106,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_38));
    bufp->fullBit(oldp+107,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_39));
    bufp->fullBit(oldp+108,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_40));
    bufp->fullBit(oldp+109,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_41));
    bufp->fullBit(oldp+110,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_42));
    bufp->fullBit(oldp+111,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_43));
    bufp->fullBit(oldp+112,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_44));
    bufp->fullBit(oldp+113,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_45));
    bufp->fullBit(oldp+114,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_46));
    bufp->fullBit(oldp+115,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_47));
    bufp->fullBit(oldp+116,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_48));
    bufp->fullBit(oldp+117,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_49));
    bufp->fullBit(oldp+118,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_50));
    bufp->fullBit(oldp+119,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_51));
    bufp->fullBit(oldp+120,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_52));
    bufp->fullBit(oldp+121,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_53));
    bufp->fullBit(oldp+122,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_54));
    bufp->fullBit(oldp+123,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_55));
    bufp->fullBit(oldp+124,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_56));
    bufp->fullBit(oldp+125,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_57));
    bufp->fullBit(oldp+126,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_58));
    bufp->fullBit(oldp+127,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_59));
    bufp->fullBit(oldp+128,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_60));
    bufp->fullBit(oldp+129,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_61));
    bufp->fullBit(oldp+130,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_62));
    bufp->fullCData(oldp+131,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_3),2);
    bufp->fullBit(oldp+132,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_63));
    bufp->fullBit(oldp+133,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_64));
    bufp->fullBit(oldp+134,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_65));
    bufp->fullBit(oldp+135,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_66));
    bufp->fullBit(oldp+136,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_67));
    bufp->fullBit(oldp+137,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_68));
    bufp->fullBit(oldp+138,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_69));
    bufp->fullBit(oldp+139,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_70));
    bufp->fullBit(oldp+140,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_71));
    bufp->fullBit(oldp+141,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_72));
    bufp->fullBit(oldp+142,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_73));
    bufp->fullBit(oldp+143,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_74));
    bufp->fullBit(oldp+144,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_75));
    bufp->fullBit(oldp+145,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_76));
    bufp->fullBit(oldp+146,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_77));
    bufp->fullBit(oldp+147,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_78));
    bufp->fullBit(oldp+148,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_79));
    bufp->fullBit(oldp+149,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_80));
    bufp->fullBit(oldp+150,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_81));
    bufp->fullBit(oldp+151,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_82));
    bufp->fullBit(oldp+152,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_83));
    bufp->fullBit(oldp+153,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_84));
    bufp->fullBit(oldp+154,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_85));
    bufp->fullBit(oldp+155,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_86));
    bufp->fullBit(oldp+156,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_87));
    bufp->fullBit(oldp+157,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_88));
    bufp->fullBit(oldp+158,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_89));
    bufp->fullBit(oldp+159,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_90));
    bufp->fullBit(oldp+160,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_91));
    bufp->fullBit(oldp+161,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_92));
    bufp->fullBit(oldp+162,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_93));
    bufp->fullBit(oldp+163,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_94));
    bufp->fullCData(oldp+164,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4),2);
    bufp->fullBit(oldp+165,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_95));
    bufp->fullBit(oldp+166,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_96));
    bufp->fullBit(oldp+167,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_97));
    bufp->fullBit(oldp+168,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_98));
    bufp->fullBit(oldp+169,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_99));
    bufp->fullBit(oldp+170,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_100));
    bufp->fullBit(oldp+171,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_101));
    bufp->fullBit(oldp+172,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_102));
    bufp->fullBit(oldp+173,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_103));
    bufp->fullBit(oldp+174,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_104));
    bufp->fullBit(oldp+175,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_105));
    bufp->fullBit(oldp+176,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_106));
    bufp->fullBit(oldp+177,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_107));
    bufp->fullBit(oldp+178,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_108));
    bufp->fullBit(oldp+179,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_109));
    bufp->fullBit(oldp+180,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_110));
    bufp->fullBit(oldp+181,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_111));
    bufp->fullBit(oldp+182,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_112));
    bufp->fullBit(oldp+183,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_113));
    bufp->fullBit(oldp+184,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_114));
    bufp->fullBit(oldp+185,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_115));
    bufp->fullBit(oldp+186,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_116));
    bufp->fullBit(oldp+187,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_117));
    bufp->fullBit(oldp+188,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_118));
    bufp->fullBit(oldp+189,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_119));
    bufp->fullBit(oldp+190,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_120));
    bufp->fullBit(oldp+191,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_121));
    bufp->fullBit(oldp+192,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_122));
    bufp->fullBit(oldp+193,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_123));
    bufp->fullBit(oldp+194,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_124));
    bufp->fullBit(oldp+195,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_125));
    bufp->fullBit(oldp+196,(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_126));
    bufp->fullBit(oldp+197,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_96)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_97)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_96)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_95))))));
    bufp->fullBit(oldp+198,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_95)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_96)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4)) 
                                     & (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_95))))));
    bufp->fullBit(oldp+199,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_98)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_99)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_98)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_97))))));
    bufp->fullBit(oldp+200,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_97)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_98)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_97)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_96))))));
    bufp->fullBit(oldp+201,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_100)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_101)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_100)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_99))))));
    bufp->fullBit(oldp+202,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_99)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_100)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_99)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_98))))));
    bufp->fullBit(oldp+203,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_102)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_103)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_102)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_101))))));
    bufp->fullBit(oldp+204,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_101)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_102)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_101)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_100))))));
    bufp->fullBit(oldp+205,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_104)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_105)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_104)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_103))))));
    bufp->fullBit(oldp+206,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_103)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_104)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_103)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_102))))));
    bufp->fullBit(oldp+207,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_106)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_107)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_106)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_105))))));
    bufp->fullBit(oldp+208,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_105)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_106)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_105)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_104))))));
    bufp->fullBit(oldp+209,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_108)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_109)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_108)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_107))))));
    bufp->fullBit(oldp+210,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_107)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_108)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_107)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_106))))));
    bufp->fullBit(oldp+211,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_110)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_111)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_110)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_109))))));
    bufp->fullBit(oldp+212,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_109)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_110)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_109)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_108))))));
    bufp->fullBit(oldp+213,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_112)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_113)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_112)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_111))))));
    bufp->fullBit(oldp+214,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_111)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_112)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_111)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_110))))));
    bufp->fullBit(oldp+215,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_114)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_115)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_114)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_113))))));
    bufp->fullBit(oldp+216,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_113)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_114)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_113)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_112))))));
    bufp->fullBit(oldp+217,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_116)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_117)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_116)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_115))))));
    bufp->fullBit(oldp+218,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_115)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_116)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_115)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_114))))));
    bufp->fullBit(oldp+219,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_118)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_119)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_118)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_117))))));
    bufp->fullBit(oldp+220,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_117)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_118)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_117)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_116))))));
    bufp->fullBit(oldp+221,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_120)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_121)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_120)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_119))))));
    bufp->fullBit(oldp+222,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_119)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_120)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_119)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_118))))));
    bufp->fullBit(oldp+223,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_122)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_123)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_122)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_121))))));
    bufp->fullBit(oldp+224,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_121)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_122)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_121)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_120))))));
    bufp->fullBit(oldp+225,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_124)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_124)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_123))))));
    bufp->fullBit(oldp+226,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_123)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_124)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_123)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_122))))));
    bufp->fullBit(oldp+227,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__leftIn)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_125))))));
    bufp->fullBit(oldp+228,(((0U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)
                              : ((1U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                  : ((2U == (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)
                                      : (IData)(vlSelf->ysyx_23060336__DOT__exu__DOT__alu__DOT__shift__DOT__casez_tmp_124))))));
    bufp->fullIData(oldp+229,(vlSelf->ysyx_23060336__DOT__ifu__DOT__PC),32);
    bufp->fullBit(oldp+230,(vlSelf->ysyx_23060336__DOT__ifu__DOT__Checkright));
    bufp->fullBit(oldp+231,(((IData)(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_RegWr) 
                             & (0U != (IData)(vlSelf->ysyx_23060336__DOT__wbu_io_in_bits_r_rd)))));
    bufp->fullIData(oldp+232,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[0]),32);
    bufp->fullIData(oldp+233,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[1]),32);
    bufp->fullIData(oldp+234,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[2]),32);
    bufp->fullIData(oldp+235,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[3]),32);
    bufp->fullIData(oldp+236,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[4]),32);
    bufp->fullIData(oldp+237,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[5]),32);
    bufp->fullIData(oldp+238,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[6]),32);
    bufp->fullIData(oldp+239,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[7]),32);
    bufp->fullIData(oldp+240,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[8]),32);
    bufp->fullIData(oldp+241,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[9]),32);
    bufp->fullIData(oldp+242,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[10]),32);
    bufp->fullIData(oldp+243,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[11]),32);
    bufp->fullIData(oldp+244,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[12]),32);
    bufp->fullIData(oldp+245,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[13]),32);
    bufp->fullIData(oldp+246,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[14]),32);
    bufp->fullIData(oldp+247,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[15]),32);
    bufp->fullIData(oldp+248,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[16]),32);
    bufp->fullIData(oldp+249,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[17]),32);
    bufp->fullIData(oldp+250,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[18]),32);
    bufp->fullIData(oldp+251,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[19]),32);
    bufp->fullIData(oldp+252,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[20]),32);
    bufp->fullIData(oldp+253,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[21]),32);
    bufp->fullIData(oldp+254,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[22]),32);
    bufp->fullIData(oldp+255,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[23]),32);
    bufp->fullIData(oldp+256,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[24]),32);
    bufp->fullIData(oldp+257,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[25]),32);
    bufp->fullIData(oldp+258,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[26]),32);
    bufp->fullIData(oldp+259,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[27]),32);
    bufp->fullIData(oldp+260,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[28]),32);
    bufp->fullIData(oldp+261,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[29]),32);
    bufp->fullIData(oldp+262,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[30]),32);
    bufp->fullIData(oldp+263,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[31]),32);
    bufp->fullBit(oldp+264,(((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_6) 
                             & (2U == (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__awid_halt)))));
    bufp->fullCData(oldp+265,(vlSelf->ysyx_23060336__DOT__xbar__DOT__awid_halt),4);
    bufp->fullBit(oldp+266,(vlSelf->ysyx_23060336__DOT___sdram_bvalid));
    bufp->fullCData(oldp+267,((3U & vlSelf->ysyx_23060336__DOT__sdram__DOT__resp)),2);
    bufp->fullBit(oldp+268,(vlSelf->ysyx_23060336__DOT___sdram_rvalid));
    bufp->fullIData(oldp+269,(((1U == vlSelf->ysyx_23060336__DOT__sdram__DOT__Begin)
                                ? 0x413U : vlSelf->ysyx_23060336__DOT__sdram__DOT__sdramdata)),32);
    bufp->fullIData(oldp+270,(vlSelf->ysyx_23060336__DOT__sdram__DOT__resp),32);
    bufp->fullIData(oldp+271,(vlSelf->ysyx_23060336__DOT__sdram__DOT__Begin),32);
    bufp->fullIData(oldp+272,(vlSelf->ysyx_23060336__DOT__sdram__DOT__sdramdata),32);
    bufp->fullIData(oldp+273,(vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst),32);
    bufp->fullBit(oldp+274,(vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_checkright));
    bufp->fullCData(oldp+275,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_MemNum),4);
    bufp->fullBit(oldp+276,(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_checkright));
    bufp->fullCData(oldp+277,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemNum),3);
    bufp->fullSData(oldp+278,((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                               >> 0x14U)),12);
    bufp->fullCData(oldp+279,((7U & (IData)(vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_MemNum))),3);
    bufp->fullBit(oldp+280,(vlSelf->ysyx_23060336__DOT__exu__DOT__check__DOT__CheckFail));
    bufp->fullIData(oldp+281,((0x1fU & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                        >> 0xfU))),32);
    bufp->fullCData(oldp+282,((((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___io_out_bits_MemNum_orMatrixOutputs_T_4)) 
                                << 3U) | (((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___io_out_bits_MemNum_orMatrixOutputs_T_4)) 
                                           << 2U) | 
                                          ((2U & ((~ (IData)(
                                                             (0x1ffU 
                                                              == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___io_out_bits_MemNum_andMatrixOutputs_T_1)))) 
                                                  << 1U)) 
                                           | (0x3ffU 
                                              != ((0x200U 
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
                                                                       | (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h8f0d9fc5__0)))))))))))))),4);
    bufp->fullCData(oldp+283,(vlSelf->ysyx_23060336__DOT___idu_io_out_bits_RegNum),3);
    bufp->fullBit(oldp+284,(vlSelf->ysyx_23060336__DOT___idu_io_out_bits_Branch));
    bufp->fullBit(oldp+285,(vlSelf->ysyx_23060336__DOT___idu_io_out_bits_mret));
    bufp->fullBit(oldp+286,(vlSelf->ysyx_23060336__DOT___idu_io_out_bits_ecall));
    bufp->fullBit(oldp+287,((IData)(((0x73U == (0x7fU 
                                                & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                     & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3c1cf46e__0)))));
    bufp->fullCData(oldp+288,(vlSelf->ysyx_23060336__DOT__idu__DOT__immNum_invInputs),7);
    bufp->fullCData(oldp+289,((0x1fU & (~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                           >> 2U)))),5);
    bufp->fullCData(oldp+290,((0xffU & (~ (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN)))),8);
    bufp->fullSData(oldp+291,(vlSelf->ysyx_23060336__DOT__idu__DOT__AluSela_invInputs),15);
    bufp->fullIData(oldp+292,(vlSelf->ysyx_23060336__DOT__idu__DOT__casez_tmp),32);
    bufp->fullIData(oldp+293,((0x3fffffffU & (~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                 >> 2U)))),30);
    bufp->fullCData(oldp+294,((7U & (~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                        >> 2U)))),3);
    bufp->fullCData(oldp+295,((3U & (~ (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                        >> 2U)))),2);
    bufp->fullCData(oldp+296,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemNum),4);
    bufp->fullIData(oldp+297,(vlSelf->ysyx_23060336__DOT__lsu_io_in_bits_r_MemNum),32);
    bufp->fullCData(oldp+298,(vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt),4);
    bufp->fullCData(oldp+299,(((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h782dc640__0)
                                ? 0U : (0x1fU & (vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                                 >> 7U)))),5);
    bufp->fullIData(oldp+300,(((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h782dc640__0)
                                ? 0U : ((1U & (IData)(
                                                      ((0x1013U 
                                                        == 
                                                        (0x1013U 
                                                         & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                                       & (0x5bU 
                                                          == 
                                                          (0x5bU 
                                                           & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT__immNum_invInputs))))))
                                         ? (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->ysyx_23060336__DOT__idu__DOT__casez_tmp 
                                                            >> 4U)))) 
                                             << 5U) 
                                            | (0x1fU 
                                               & vlSelf->ysyx_23060336__DOT__idu__DOT__casez_tmp))
                                         : vlSelf->ysyx_23060336__DOT__idu__DOT__casez_tmp))),32);
    bufp->fullCData(oldp+301,(((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h782dc640__0)
                                ? 0U : (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___io_out_bits_AluSel_T_3))),4);
    bufp->fullBit(oldp+302,(((~ (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h782dc640__0)) 
                             & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h18adaeaa__0))));
    bufp->fullBit(oldp+303,(((~ (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h782dc640__0)) 
                             & ((IData)(((3U == (0xfU 
                                                 & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                         & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf34c4125__0))) 
                                | ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                    & ((vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                        >> 1U) & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hcd64561c__0))) 
                                   | ((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h3804dd5e__0) 
                                      | (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h18adaeaa__0)))))));
    bufp->fullBit(oldp+304,(((~ (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h782dc640__0)) 
                             & (IData)(((3U == (0x1fU 
                                                & vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst)) 
                                        & (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_hf34c4125__0))))));
    bufp->fullBit(oldp+305,(vlSelf->clock));
    bufp->fullBit(oldp+306,(vlSelf->reset));
    bufp->fullBit(oldp+307,(vlSelf->io_ebreak));
    bufp->fullIData(oldp+308,(vlSelf->io_NPC),32);
    bufp->fullIData(oldp+309,(vlSelf->io_PC),32);
    bufp->fullIData(oldp+310,(vlSelf->io_inst),32);
    bufp->fullIData(oldp+311,(vlSelf->io_mcause),32);
    bufp->fullIData(oldp+312,(vlSelf->io_mstatus),32);
    bufp->fullCData(oldp+313,(vlSelf->io_iduopcode),7);
    bufp->fullCData(oldp+314,(vlSelf->io_idupcmux),2);
    bufp->fullIData(oldp+315,(vlSelf->io_iduinst),32);
    bufp->fullCData(oldp+316,(vlSelf->io_exupcmux),4);
    bufp->fullBit(oldp+317,(vlSelf->io_ifuvalid));
    bufp->fullBit(oldp+318,(vlSelf->io_ifuready));
    bufp->fullBit(oldp+319,(vlSelf->io_iduvalid));
    bufp->fullBit(oldp+320,(vlSelf->io_iduready));
    bufp->fullBit(oldp+321,(vlSelf->io_exuvalid));
    bufp->fullBit(oldp+322,(vlSelf->io_exuready));
    bufp->fullBit(oldp+323,(vlSelf->io_lsuvalid));
    bufp->fullBit(oldp+324,(vlSelf->io_lsuready));
    bufp->fullBit(oldp+325,(vlSelf->io_lsuarvalid));
    bufp->fullBit(oldp+326,(vlSelf->io_lsuarready));
    bufp->fullBit(oldp+327,(vlSelf->io_lsuawvalid));
    bufp->fullBit(oldp+328,(vlSelf->io_lsuawready));
    bufp->fullBit(oldp+329,(vlSelf->io_lsurready));
    bufp->fullBit(oldp+330,(vlSelf->io_lsurvalid));
    bufp->fullBit(oldp+331,(vlSelf->io_lsuwready));
    bufp->fullBit(oldp+332,(vlSelf->io_lsuwvalid));
    bufp->fullBit(oldp+333,(vlSelf->io_ifurvalid));
    bufp->fullBit(oldp+334,(vlSelf->io_ifuarvalid));
    bufp->fullBit(oldp+335,(vlSelf->io_wbuvalid));
    bufp->fullBit(oldp+336,(vlSelf->io_wbuready));
    bufp->fullBit(oldp+337,(vlSelf->io_MemtoReg));
    bufp->fullBit(oldp+338,(vlSelf->io_iduMemWr));
    bufp->fullBit(oldp+339,(vlSelf->io_exuMemWr));
    bufp->fullBit(oldp+340,(vlSelf->io_lsuMemWr));
    bufp->fullBit(oldp+341,(vlSelf->io_isRAW));
    bufp->fullBit(oldp+342,(vlSelf->io_checkright));
    bufp->fullBit(oldp+343,(vlSelf->io_checkfail));
    bufp->fullCData(oldp+344,(vlSelf->io_arid_halt),4);
    bufp->fullCData(oldp+345,(vlSelf->io_awid_halt),4);
    bufp->fullIData(oldp+346,(vlSelf->io_idupc),32);
    bufp->fullIData(oldp+347,(vlSelf->io_exupc),32);
    bufp->fullCData(oldp+348,(vlSelf->io_alumux),4);
    bufp->fullIData(oldp+349,(vlSelf->io_pcadd),32);
    bufp->fullIData(oldp+350,(vlSelf->io_pca),32);
    bufp->fullIData(oldp+351,(vlSelf->io_pcb),32);
    bufp->fullIData(oldp+352,(vlSelf->io_aluresult),32);
    bufp->fullIData(oldp+353,(vlSelf->io_ina),32);
    bufp->fullIData(oldp+354,(vlSelf->io_inb),32);
    bufp->fullIData(oldp+355,(vlSelf->io_regdata),32);
    bufp->fullIData(oldp+356,(vlSelf->io_csrdata),32);
    bufp->fullCData(oldp+357,(vlSelf->io_idurs1),5);
    bufp->fullCData(oldp+358,(vlSelf->io_idurs2),5);
    bufp->fullCData(oldp+359,(vlSelf->io_exurd),5);
    bufp->fullCData(oldp+360,(vlSelf->io_lsurd),5);
    bufp->fullCData(oldp+361,(vlSelf->io_wburd),5);
    bufp->fullIData(oldp+362,(vlSelf->io_ifuaraddr),32);
    bufp->fullIData(oldp+363,(vlSelf->io_lsuaraddr),32);
    bufp->fullIData(oldp+364,(vlSelf->io_lsurdata),32);
    bufp->fullIData(oldp+365,(vlSelf->io_ifurdata),32);
    bufp->fullIData(oldp+366,(vlSelf->io_lsuawaddr),32);
    bufp->fullIData(oldp+367,(vlSelf->io_lsuwdata),32);
    bufp->fullIData(oldp+368,(vlSelf->io_wburesult),32);
    bufp->fullIData(oldp+369,(vlSelf->io_wbupc),32);
    bufp->fullIData(oldp+370,(vlSelf->io_lsupc),32);
    bufp->fullCData(oldp+371,(vlSelf->io_regrs1),5);
    bufp->fullCData(oldp+372,(vlSelf->io_regrs2),5);
    bufp->fullIData(oldp+373,(vlSelf->io_regsrc1),32);
    bufp->fullIData(oldp+374,(vlSelf->io_regsrc2),32);
    bufp->fullBit(oldp+375,(vlSelf->io_regwen));
    bufp->fullCData(oldp+376,(vlSelf->io_regwaddr),5);
    bufp->fullIData(oldp+377,(vlSelf->io_regwdata),32);
    bufp->fullIData(oldp+378,(vlSelf->io_imm),32);
    bufp->fullIData(oldp+379,(vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr),32);
    bufp->fullIData(oldp+380,(((0xa0000048U == vlSelf->ysyx_23060336__DOT__xbar__DOT__araddr)
                                ? vlSelf->ysyx_23060336__DOT__clint__DOT__mtimel
                                : vlSelf->ysyx_23060336__DOT__clint__DOT__mtimeh)),32);
    bufp->fullIData(oldp+381,(vlSelf->ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                              [(vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_inst 
                                >> 0x14U)]),32);
    bufp->fullBit(oldp+382,(vlSelf->ysyx_23060336__DOT___exu_io_checkfail));
    bufp->fullBit(oldp+383,(vlSelf->ysyx_23060336__DOT___exu_io_Checkfail));
    bufp->fullCData(oldp+384,((0x1fU & vlSelf->io_inb)),5);
    bufp->fullIData(oldp+385,(((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h60b2c038__0)
                                ? vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_pc
                                : vlSelf->ysyx_23060336__DOT__idu_io_in_bits_r_pc)),32);
    bufp->fullIData(oldp+386,(((IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h782dc640__0)
                                ? 0U : vlSelf->io_regsrc1)),32);
    bufp->fullCData(oldp+387,(vlSelf->ysyx_23060336__DOT___idu_io_out_bits_AluMux),4);
    bufp->fullBit(oldp+388,(((~ (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT____VdfgTmp_h782dc640__0)) 
                             & ((2U == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN_0)) 
                                | ((4U == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN_0)) 
                                   | ((0U == (IData)(vlSelf->ysyx_23060336__DOT__idu__DOT___GEN_0)) 
                                      & (0x67U == (IData)(vlSelf->io_iduopcode))))))));
    bufp->fullBit(oldp+389,(vlSelf->ysyx_23060336__DOT___idu_io_out_bits_ebreak));
    bufp->fullIData(oldp+390,(((IData)(vlSelf->ysyx_23060336__DOT___exu_io_checkfail)
                                ? vlSelf->ysyx_23060336__DOT__exu_io_in_bits_r_pc
                                : vlSelf->ysyx_23060336__DOT__ifu__DOT__PC)),32);
    bufp->fullBit(oldp+391,(((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_7) 
                             & (IData)(vlSelf->ysyx_23060336__DOT___sdram_bvalid))));
    bufp->fullBit(oldp+392,(vlSelf->ysyx_23060336__DOT__lsu__DOT__prepare));
    bufp->fullIData(oldp+393,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory
                              [vlSelf->io_idurs2]),32);
    bufp->fullIData(oldp+394,(vlSelf->ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory
                              [vlSelf->io_idurs1]),32);
    bufp->fullBit(oldp+395,(vlSelf->ysyx_23060336__DOT___xbar_io_sdram_awvalid));
    bufp->fullBit(oldp+396,(((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_4) 
                             & ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN)
                                 ? ((2U == (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt))
                                     ? (IData)(vlSelf->io_lsuarvalid)
                                     : (IData)(vlSelf->io_ifuarvalid))
                                 : ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_1)
                                     ? (IData)(vlSelf->io_ifuarvalid)
                                     : ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_2) 
                                        & (IData)(vlSelf->io_lsuarvalid)))))));
    bufp->fullCData(oldp+397,(((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN)
                                ? ((2U == (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt))
                                    ? 2U : 1U) : ((1U 
                                                   & ((~ (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_2)) 
                                                      | (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_1)))
                                                   ? 1U
                                                   : 2U))),4);
    bufp->fullBit(oldp+398,(((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_4) 
                             & ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN)
                                 ? ((2U == (IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT__arid_halt))
                                     ? (IData)(vlSelf->io_lsurready)
                                     : (IData)(vlSelf->io_ifuready))
                                 : ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_1)
                                     ? (IData)(vlSelf->io_ifuready)
                                     : ((IData)(vlSelf->ysyx_23060336__DOT__xbar__DOT___GEN_2) 
                                        & (IData)(vlSelf->io_lsurready)))))));
    bufp->fullIData(oldp+399,(vlSelf->ysyx_23060336__DOT__xbar__DOT__rdata),32);
    bufp->fullBit(oldp+400,(vlSelf->ysyx_23060336__DOT__xbar__DOT__rvalid));
    bufp->fullBit(oldp+401,(1U));
    bufp->fullSData(oldp+402,(0x305U),12);
    bufp->fullSData(oldp+403,(0x300U),12);
    bufp->fullSData(oldp+404,(0x341U),12);
    bufp->fullSData(oldp+405,(0x342U),12);
    bufp->fullIData(oldp+406,(0x1800U),32);
    bufp->fullCData(oldp+407,(2U),4);
    bufp->fullCData(oldp+408,(0U),8);
    bufp->fullCData(oldp+409,(0U),3);
    bufp->fullCData(oldp+410,(1U),2);
    bufp->fullCData(oldp+411,(1U),4);
    bufp->fullCData(oldp+412,(2U),3);
    bufp->fullCData(oldp+413,(0U),2);
    bufp->fullCData(oldp+414,(vlSelf->ysyx_23060336__DOT__sdram__DOT__RLFSR),5);
    bufp->fullCData(oldp+415,(vlSelf->ysyx_23060336__DOT__sdram__DOT__WLFSR),5);
}

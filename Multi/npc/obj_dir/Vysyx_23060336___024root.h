// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_23060336.h for the primary calling header

#ifndef VERILATED_VYSYX_23060336___024ROOT_H_
#define VERILATED_VYSYX_23060336___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_23060336__Syms;
class Vysyx_23060336___024unit;


class Vysyx_23060336___024root final : public VerilatedModule {
  public:
    // CELLS
    Vysyx_23060336___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(io_out_valid,0,0);
        CData/*0:0*/ ysyx_23060336__DOT___sdram_lsu_rvalid;
        CData/*0:0*/ ysyx_23060336__DOT___sdram_ifu_rvalid;
        CData/*0:0*/ ysyx_23060336__DOT___lsu_wbu_io_CsrWr;
        CData/*0:0*/ ysyx_23060336__DOT___lsu_wbu_io_axi_awvalid;
        CData/*0:0*/ ysyx_23060336__DOT___lsu_wbu_io_axi_wlast;
        CData/*2:0*/ ysyx_23060336__DOT___idu_exu_io_RegNum;
        CData/*0:0*/ ysyx_23060336__DOT___idu_exu_io_MemtoReg;
        CData/*0:0*/ ysyx_23060336__DOT___idu_exu_io_ebreak;
        CData/*0:0*/ ysyx_23060336__DOT___ifu_io_axi_arvalid;
        CData/*0:0*/ ysyx_23060336__DOT____Vcellinp__csr__io_ecall;
        CData/*0:0*/ ysyx_23060336__DOT__ifu__DOT__state;
        CData/*6:0*/ ysyx_23060336__DOT__idu_exu__DOT__immNum_invInputs;
        CData/*7:0*/ ysyx_23060336__DOT__idu_exu__DOT___GEN;
        CData/*1:0*/ ysyx_23060336__DOT__idu_exu__DOT___io_MemNum_orMatrixOutputs_T_4;
        CData/*3:0*/ ysyx_23060336__DOT__idu_exu__DOT___GEN_0;
        CData/*5:0*/ ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_2;
        CData/*6:0*/ ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_3;
        CData/*5:0*/ ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_6;
        CData/*5:0*/ ysyx_23060336__DOT__idu_exu__DOT___instType_andMatrixOutputs_T_8;
        CData/*3:0*/ ysyx_23060336__DOT__idu_exu__DOT__PCMux;
        CData/*3:0*/ ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_sel;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hd4808a30__0;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h99d72b5f__0;
        CData/*1:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h6a9262f1__0;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h6c886094__0;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h795fdc33__0;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hc5ce86a9__0;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h859083b2__0;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0f7b3c5e__0;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0855c605__0;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h14776bc0__0;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h52335523__0;
        CData/*4:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h22c3cfbd__0;
        CData/*2:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hd8e30b4d__0;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h76b56b94__0;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hcfa7dcbc__0;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h7fc75f50__0;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h70585f8a__0;
        CData/*1:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h171c6c87__0;
        CData/*1:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h0993e147__0;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hc0dd1abe__0;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_hcfa7c5ac__0;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h03617c08__0;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h96c0b08d__0;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h9ecf676a__0;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h45879115__0;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h1cfc0c30__0;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_ha09dbe48__0;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h62cc9b06__0;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h049281d3__0;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT____VdfgTmp_h036178c4__0;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT___addsub_io_overflow;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__cin;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn;
        CData/*1:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel;
        CData/*1:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_1;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_0;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_1;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_2;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_3;
    };
    struct {
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_4;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_5;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_6;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_7;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_8;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_9;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_10;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_11;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_12;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_13;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_14;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_15;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_16;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_17;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_18;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_19;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_20;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_21;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_22;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_23;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_24;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_25;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_26;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_27;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_28;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_29;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_30;
        CData/*1:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_2;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_31;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_32;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_33;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_34;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_35;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_36;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_37;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_38;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_39;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_40;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_41;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_42;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_43;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_44;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_45;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_46;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_47;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_48;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_49;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_50;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_51;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_52;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_53;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_54;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_55;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_56;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_57;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_58;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_59;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_60;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_61;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_62;
        CData/*1:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_3;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_63;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_64;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_65;
    };
    struct {
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_66;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_67;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_68;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_69;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_70;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_71;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_72;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_73;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_74;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_75;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_76;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_77;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_78;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_79;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_80;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_81;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_82;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_83;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_84;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_85;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_86;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_87;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_88;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_89;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_90;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_91;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_92;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_93;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_94;
        CData/*1:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_95;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125;
        CData/*0:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126;
        CData/*0:0*/ ysyx_23060336__DOT__lsu_wbu__DOT__io_axi_arvalid_0;
        CData/*0:0*/ ysyx_23060336__DOT__lsu_wbu__DOT__state;
    };
    struct {
        CData/*0:0*/ ysyx_23060336__DOT__lsu_wbu__DOT__prepare;
        CData/*0:0*/ ysyx_23060336__DOT__sdram_ifu__DOT__bvalid;
        CData/*4:0*/ ysyx_23060336__DOT__sdram_ifu__DOT__RLFSR;
        CData/*4:0*/ ysyx_23060336__DOT__sdram_ifu__DOT__WLFSR;
        CData/*0:0*/ ysyx_23060336__DOT__sdram_lsu__DOT__bvalid;
        CData/*4:0*/ ysyx_23060336__DOT__sdram_lsu__DOT__RLFSR;
        CData/*4:0*/ ysyx_23060336__DOT__sdram_lsu__DOT__WLFSR;
        CData/*0:0*/ __Vdly__ysyx_23060336__DOT__ifu__DOT__state;
        CData/*0:0*/ __Vdly__ysyx_23060336__DOT__lsu_wbu__DOT__state;
        CData/*0:0*/ __Vdly__ysyx_23060336__DOT___sdram_ifu_rvalid;
        CData/*0:0*/ __Vtrigrprev__TOP__clock;
        CData/*0:0*/ __Vtrigrprev__TOP__reset;
        CData/*0:0*/ __VactContinue;
        SData/*14:0*/ ysyx_23060336__DOT__idu_exu__DOT__AluSela_invInputs;
        SData/*8:0*/ ysyx_23060336__DOT__idu_exu__DOT___io_MemNum_andMatrixOutputs_T_1;
        VL_OUT(io_dnpc,31,0);
        VL_OUT(io_pc,31,0);
        IData/*31:0*/ ysyx_23060336__DOT___csr_io_rdata;
        IData/*31:0*/ ysyx_23060336__DOT___reg_io_rdata1;
        IData/*31:0*/ ysyx_23060336__DOT___reg_io_rdata2;
        IData/*31:0*/ ysyx_23060336__DOT__ifu__DOT__PC;
        IData/*31:0*/ ysyx_23060336__DOT__idu_exu__DOT___alu_io_result;
        IData/*31:0*/ ysyx_23060336__DOT__idu_exu__DOT___io_ecall_andMatrixOutputs_T;
        IData/*31:0*/ ysyx_23060336__DOT__idu_exu__DOT__casez_tmp;
        IData/*31:0*/ ysyx_23060336__DOT__idu_exu__DOT__imm;
        IData/*31:0*/ ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_inb;
        IData/*31:0*/ ysyx_23060336__DOT__idu_exu__DOT____Vcellinp__alu__io_ina;
        IData/*31:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__addsub__DOT__t_no_cin;
        IData/*31:0*/ ysyx_23060336__DOT__lsu_wbu__DOT__DataOut;
        IData/*31:0*/ ysyx_23060336__DOT__sdram_ifu__DOT__resp;
        IData/*31:0*/ ysyx_23060336__DOT__sdram_ifu__DOT__Begin;
        IData/*31:0*/ ysyx_23060336__DOT__sdram_ifu__DOT__sdramdata;
        IData/*31:0*/ ysyx_23060336__DOT__sdram_lsu__DOT__resp;
        IData/*31:0*/ ysyx_23060336__DOT__sdram_lsu__DOT__Begin;
        IData/*31:0*/ ysyx_23060336__DOT__sdram_lsu__DOT__sdramdata;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ ysyx_23060336__DOT__idu_exu__DOT__alu__DOT__addsub__DOT___sum_T_1;
        VlUnpacked<IData/*31:0*/, 32> ysyx_23060336__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory;
        VlUnpacked<IData/*31:0*/, 4096> ysyx_23060336__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_23060336__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_23060336___024root(Vysyx_23060336__Syms* symsp, const char* v__name);
    ~Vysyx_23060336___024root();
    VL_UNCOPYABLE(Vysyx_23060336___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

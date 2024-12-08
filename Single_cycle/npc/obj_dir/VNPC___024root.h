// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNPC.h for the primary calling header

#ifndef VERILATED_VNPC___024ROOT_H_
#define VERILATED_VNPC___024ROOT_H_  // guard

#include "verilated.h"

class VNPC__Syms;
class VNPC___024unit;


class VNPC___024root final : public VerilatedModule {
  public:
    // CELLS
    VNPC___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_reset,0,0);
        VL_OUT8(io_rd,4,0);
        VL_OUT8(io_instType,2,0);
        VL_OUT8(io_AluMux,2,0);
        VL_OUT8(io_AluSel,3,0);
        VL_OUT8(io_PCMux,3,0);
        VL_OUT8(io_MemNum,1,0);
        VL_OUT8(io_RegWr,0,0);
        VL_OUT8(io_MemWr,0,0);
        VL_OUT8(io_stop,0,0);
        VL_OUT8(io_MemtoReg,0,0);
        CData/*2:0*/ NPC__DOT___idu_io_RegNum;
        CData/*0:0*/ NPC__DOT___idu_io_Branch;
        CData/*0:0*/ NPC__DOT___idu_io_halt;
        CData/*0:0*/ NPC__DOT___idu_io_mret;
        CData/*0:0*/ NPC__DOT__stop;
        CData/*6:0*/ NPC__DOT__idu__DOT__immNum_invInputs;
        CData/*5:0*/ NPC__DOT__idu__DOT___instType_andMatrixOutputs_T_2;
        CData/*6:0*/ NPC__DOT__idu__DOT___instType_andMatrixOutputs_T_3;
        CData/*5:0*/ NPC__DOT__idu__DOT___instType_andMatrixOutputs_T_6;
        CData/*5:0*/ NPC__DOT__idu__DOT___instType_andMatrixOutputs_T_8;
        CData/*1:0*/ NPC__DOT__idu__DOT___io_CsrWr_orMatrixOutputs_T;
        CData/*7:0*/ NPC__DOT__idu__DOT___GEN;
        CData/*4:0*/ NPC__DOT__idu__DOT__io_rs1;
        CData/*4:0*/ NPC__DOT__idu__DOT__io_rs2;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_hcfa7c5ac__0;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_h03617c08__0;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_h14776bc0__0;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_h0855c605__0;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_hcfa7dcbc__0;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_h33c2d558__0;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_h52335523__0;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_h1038d363__0;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_h0f7b3c5e__0;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_h7fc75f50__0;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_h70585f8a__0;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_h859083b2__0;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_h96c0b08d__0;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_h9ecf676a__0;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_h45879115__0;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_h1cfc0c30__0;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_h69bb9be0__0;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_ha09dbe48__0;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_h795fdc33__0;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_h40c0d4db__0;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_hc5ce86a9__0;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_h6c886094__0;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_h2376aa4a__0;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_h62cc9b06__0;
        CData/*2:0*/ NPC__DOT__idu__DOT____VdfgTmp_hd8e30b4d__0;
        CData/*2:0*/ NPC__DOT__idu__DOT____VdfgTmp_hd7d880ef__0;
        CData/*1:0*/ NPC__DOT__idu__DOT____VdfgTmp_h171c6c87__0;
        CData/*2:0*/ NPC__DOT__idu__DOT____VdfgTmp_h17a37d60__0;
        CData/*1:0*/ NPC__DOT__idu__DOT____VdfgTmp_h0993e147__0;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_hdf4b4597__0;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_h6dd14589__0;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_h049281d3__0;
        CData/*0:0*/ NPC__DOT__idu__DOT____VdfgTmp_h036178c4__0;
        CData/*0:0*/ NPC__DOT__exu__DOT____VdfgTmp_h64552ae9__0;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT___AddSub_io_overflow;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__cin;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT___out13_T_1;
    };
    struct {
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn;
        CData/*1:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel;
        CData/*1:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_1;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_0;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_1;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_2;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_3;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_4;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_5;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_6;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_7;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_8;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_9;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_10;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_11;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_12;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_13;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_14;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_15;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_16;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_17;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_18;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_19;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_20;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_21;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_22;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_23;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_24;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_25;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_26;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_27;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_28;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_29;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_30;
        CData/*1:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_2;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_31;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_32;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_33;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_34;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_35;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_36;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_37;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_38;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_39;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_40;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_41;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_42;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_43;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_44;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_45;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_46;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_47;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_48;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_49;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_50;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_51;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_52;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_53;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_54;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_55;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_56;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_57;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_58;
    };
    struct {
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_59;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_60;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_61;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_62;
        CData/*1:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_3;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_63;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_64;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_65;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_66;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_67;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_68;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_69;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_70;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_71;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_72;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_73;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_74;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_75;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_76;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_77;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_78;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_79;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_80;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_81;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_82;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_83;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_84;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_85;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_86;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_87;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_88;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_89;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_90;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_91;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_92;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_93;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_94;
        CData/*1:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_95;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_96;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_97;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_98;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_99;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_100;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_101;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_102;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_103;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_104;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_105;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_106;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_107;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_108;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_109;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_110;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_111;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_112;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_113;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_114;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_115;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_116;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_117;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_118;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_119;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_120;
    };
    struct {
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_121;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_122;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_123;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_124;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125;
        CData/*0:0*/ NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_126;
        CData/*0:0*/ __Vtrigrprev__TOP__clock;
        CData/*0:0*/ __VactContinue;
        SData/*14:0*/ NPC__DOT__idu__DOT__AluSela_invInputs;
        VL_OUT(io_src1,31,0);
        VL_OUT(io_src2,31,0);
        VL_OUT(io_halt_ret,31,0);
        VL_OUT(io_PC,31,0);
        VL_OUT(io_NPC,31,0);
        VL_OUT(io_halt,31,0);
        VL_OUT(io_result,31,0);
        VL_OUT(io_ina,31,0);
        VL_OUT(io_inb,31,0);
        VL_OUT(io_inst,31,0);
        VL_OUT(io_DataOut,31,0);
        IData/*31:0*/ NPC__DOT___idu_io_imm;
        IData/*31:0*/ NPC__DOT___ifu_inst;
        IData/*31:0*/ NPC__DOT__pc;
        IData/*31:0*/ NPC__DOT___DpiEbreak_io_isbreak_T;
        IData/*31:0*/ NPC__DOT__idu__DOT___Csr_ext_R2_data;
        IData/*31:0*/ NPC__DOT__idu__DOT___io_ecall_andMatrixOutputs_T;
        IData/*31:0*/ NPC__DOT__idu__DOT__casez_tmp;
        IData/*31:0*/ NPC__DOT__idu__DOT____Vcellinp__Ref_ext__W0_data;
        IData/*31:0*/ NPC__DOT__idu__DOT____Vcellinp__Csr_ext__W3_data;
        IData/*31:0*/ NPC__DOT__idu__DOT____Vcellinp__Csr_ext__W0_data;
        IData/*31:0*/ NPC__DOT__exu__DOT__casez_tmp;
        IData/*31:0*/ NPC__DOT__exu__DOT__Alu__DOT__AddSub__DOT__t_no_cin;
        IData/*31:0*/ NPC__DOT__wbu__DOT___lsu_DataOut;
        IData/*31:0*/ __Vfunc_pmem_read__1__Vfuncout;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ NPC__DOT__exu__DOT__Alu__DOT__AddSub__DOT___sum_T_1;
        VlUnpacked<IData/*31:0*/, 32> NPC__DOT__idu__DOT__Ref_ext__DOT__Memory;
        VlUnpacked<IData/*31:0*/, 4096> NPC__DOT__idu__DOT__Csr_ext__DOT__Memory;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VNPC__Syms* const vlSymsp;

    // CONSTRUCTORS
    VNPC___024root(VNPC__Syms* symsp, const char* v__name);
    ~VNPC___024root();
    VL_UNCOPYABLE(VNPC___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

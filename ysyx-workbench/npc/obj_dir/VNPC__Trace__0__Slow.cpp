// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VNPC__Syms.h"


VL_ATTR_COLD void VNPC___024root__trace_init_sub__TOP__0(VNPC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+242,"clock", false,-1);
    tracep->declBit(c+243,"reset", false,-1);
    tracep->declBit(c+244,"io_reset", false,-1);
    tracep->declBus(c+245,"io_rd", false,-1, 4,0);
    tracep->declBus(c+246,"io_src1", false,-1, 31,0);
    tracep->declBus(c+247,"io_src2", false,-1, 31,0);
    tracep->declBus(c+248,"io_halt_ret", false,-1, 31,0);
    tracep->declBus(c+249,"io_PC", false,-1, 31,0);
    tracep->declBus(c+250,"io_NPC", false,-1, 31,0);
    tracep->declBus(c+251,"io_halt", false,-1, 31,0);
    tracep->declBus(c+252,"io_Ref", false,-1, 31,0);
    tracep->declBus(c+253,"io_instType", false,-1, 2,0);
    tracep->declBus(c+254,"io_result", false,-1, 31,0);
    tracep->declBus(c+255,"io_ina", false,-1, 31,0);
    tracep->declBus(c+256,"io_inb", false,-1, 31,0);
    tracep->declBus(c+257,"io_inst", false,-1, 31,0);
    tracep->declBus(c+258,"io_DataOut", false,-1, 31,0);
    tracep->declBus(c+259,"io_mDataOut", false,-1, 31,0);
    tracep->declBus(c+260,"io_RegData", false,-1, 31,0);
    tracep->declBus(c+261,"io_AluMux", false,-1, 2,0);
    tracep->declBus(c+262,"io_AluSel", false,-1, 3,0);
    tracep->declBus(c+263,"io_MemNum", false,-1, 1,0);
    tracep->declBit(c+264,"io_RegWr", false,-1);
    tracep->declBit(c+265,"io_MemWr", false,-1);
    tracep->declBit(c+266,"io_vaild", false,-1);
    tracep->declBit(c+267,"io_stop", false,-1);
    tracep->declBit(c+268,"io_MemtoReg", false,-1);
    tracep->pushNamePrefix("NPC ");
    tracep->declBit(c+242,"clock", false,-1);
    tracep->declBit(c+243,"reset", false,-1);
    tracep->declBit(c+244,"io_reset", false,-1);
    tracep->declBus(c+245,"io_rd", false,-1, 4,0);
    tracep->declBus(c+246,"io_src1", false,-1, 31,0);
    tracep->declBus(c+247,"io_src2", false,-1, 31,0);
    tracep->declBus(c+248,"io_halt_ret", false,-1, 31,0);
    tracep->declBus(c+249,"io_PC", false,-1, 31,0);
    tracep->declBus(c+250,"io_NPC", false,-1, 31,0);
    tracep->declBus(c+251,"io_halt", false,-1, 31,0);
    tracep->declBus(c+252,"io_Ref", false,-1, 31,0);
    tracep->declBus(c+253,"io_instType", false,-1, 2,0);
    tracep->declBus(c+254,"io_result", false,-1, 31,0);
    tracep->declBus(c+255,"io_ina", false,-1, 31,0);
    tracep->declBus(c+256,"io_inb", false,-1, 31,0);
    tracep->declBus(c+257,"io_inst", false,-1, 31,0);
    tracep->declBus(c+258,"io_DataOut", false,-1, 31,0);
    tracep->declBus(c+259,"io_mDataOut", false,-1, 31,0);
    tracep->declBus(c+260,"io_RegData", false,-1, 31,0);
    tracep->declBus(c+261,"io_AluMux", false,-1, 2,0);
    tracep->declBus(c+262,"io_AluSel", false,-1, 3,0);
    tracep->declBus(c+263,"io_MemNum", false,-1, 1,0);
    tracep->declBit(c+264,"io_RegWr", false,-1);
    tracep->declBit(c+265,"io_MemWr", false,-1);
    tracep->declBit(c+266,"io_vaild", false,-1);
    tracep->declBit(c+267,"io_stop", false,-1);
    tracep->declBit(c+268,"io_MemtoReg", false,-1);
    tracep->declBit(c+1,"stop", false,-1);
    tracep->declBus(c+2,"pc", false,-1, 31,0);
    tracep->declBus(c+250,"io_NPC_0", false,-1, 31,0);
    tracep->pushNamePrefix("DpiEbreak ");
    tracep->declBit(c+242,"clock", false,-1);
    tracep->declBit(c+3,"halt", false,-1);
    tracep->declBit(c+1,"stop", false,-1);
    tracep->declBus(c+250,"isbreak", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+268,"io_MemtoReg", false,-1);
    tracep->declBit(c+4,"io_vaild", false,-1);
    tracep->declBit(c+5,"io_Branch", false,-1);
    tracep->declBit(c+6,"io_Recsr", false,-1);
    tracep->declBit(c+7,"io_mret", false,-1);
    tracep->declBit(c+8,"io_ecall", false,-1);
    tracep->declBit(c+3,"io_halt", false,-1);
    tracep->declBus(c+2,"io_pc", false,-1, 31,0);
    tracep->declBus(c+9,"io_imm", false,-1, 31,0);
    tracep->declBus(c+10,"io_zimm", false,-1, 31,0);
    tracep->declBus(c+246,"io_src1", false,-1, 31,0);
    tracep->declBus(c+247,"io_src2", false,-1, 31,0);
    tracep->declBus(c+11,"io_Csr", false,-1, 31,0);
    tracep->declBus(c+12,"io_mtvec", false,-1, 31,0);
    tracep->declBus(c+13,"io_mepc", false,-1, 31,0);
    tracep->declBus(c+14,"io_PcMux", false,-1, 1,0);
    tracep->declBus(c+261,"io_AluMux", false,-1, 2,0);
    tracep->declBus(c+262,"io_AluSel", false,-1, 3,0);
    tracep->declBus(c+254,"io_result", false,-1, 31,0);
    tracep->declBus(c+15,"io_dnpc", false,-1, 31,0);
    tracep->declBus(c+255,"io_ina", false,-1, 31,0);
    tracep->declBus(c+256,"io_inb", false,-1, 31,0);
    tracep->declBus(c+255,"io_ina_0", false,-1, 31,0);
    tracep->declBus(c+16,"casez_tmp", false,-1, 31,0);
    tracep->declBus(c+17,"PCMux", false,-1, 3,0);
    tracep->pushNamePrefix("Alu ");
    tracep->declBus(c+262,"io_sel", false,-1, 3,0);
    tracep->declBus(c+255,"io_ina", false,-1, 31,0);
    tracep->declBus(c+16,"io_inb", false,-1, 31,0);
    tracep->declBus(c+254,"io_result", false,-1, 31,0);
    tracep->declBit(c+18,"cin", false,-1);
    tracep->pushNamePrefix("AddSub ");
    tracep->declBit(c+18,"io_cin", false,-1);
    tracep->declBus(c+255,"io_ina", false,-1, 31,0);
    tracep->declBus(c+16,"io_inb", false,-1, 31,0);
    tracep->declBus(c+19,"io_result", false,-1, 31,0);
    tracep->declBit(c+20,"io_zero", false,-1);
    tracep->declBit(c+21,"io_carry", false,-1);
    tracep->declBit(c+22,"io_overflow", false,-1);
    tracep->declBus(c+23,"t_no_cin", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Shift ");
    tracep->declBus(c+255,"io_in", false,-1, 31,0);
    tracep->declBus(c+24,"io_shamt", false,-1, 4,0);
    tracep->declBit(c+269,"io_isLeft", false,-1);
    tracep->declBit(c+270,"io_izArith", false,-1);
    tracep->declBus(c+25,"io_out", false,-1, 31,0);
    tracep->declBit(c+26,"leftIn", false,-1);
    tracep->declBus(c+27,"io_out_sel", false,-1, 1,0);
    tracep->declBus(c+28,"io_out_sel_1", false,-1, 1,0);
    tracep->declBit(c+29,"casez_tmp", false,-1);
    tracep->declBit(c+30,"casez_tmp_0", false,-1);
    tracep->declBit(c+31,"casez_tmp_1", false,-1);
    tracep->declBit(c+32,"casez_tmp_2", false,-1);
    tracep->declBit(c+33,"casez_tmp_3", false,-1);
    tracep->declBit(c+34,"casez_tmp_4", false,-1);
    tracep->declBit(c+35,"casez_tmp_5", false,-1);
    tracep->declBit(c+36,"casez_tmp_6", false,-1);
    tracep->declBit(c+37,"casez_tmp_7", false,-1);
    tracep->declBit(c+38,"casez_tmp_8", false,-1);
    tracep->declBit(c+39,"casez_tmp_9", false,-1);
    tracep->declBit(c+40,"casez_tmp_10", false,-1);
    tracep->declBit(c+41,"casez_tmp_11", false,-1);
    tracep->declBit(c+42,"casez_tmp_12", false,-1);
    tracep->declBit(c+43,"casez_tmp_13", false,-1);
    tracep->declBit(c+44,"casez_tmp_14", false,-1);
    tracep->declBit(c+45,"casez_tmp_15", false,-1);
    tracep->declBit(c+46,"casez_tmp_16", false,-1);
    tracep->declBit(c+47,"casez_tmp_17", false,-1);
    tracep->declBit(c+48,"casez_tmp_18", false,-1);
    tracep->declBit(c+49,"casez_tmp_19", false,-1);
    tracep->declBit(c+50,"casez_tmp_20", false,-1);
    tracep->declBit(c+51,"casez_tmp_21", false,-1);
    tracep->declBit(c+52,"casez_tmp_22", false,-1);
    tracep->declBit(c+53,"casez_tmp_23", false,-1);
    tracep->declBit(c+54,"casez_tmp_24", false,-1);
    tracep->declBit(c+55,"casez_tmp_25", false,-1);
    tracep->declBit(c+56,"casez_tmp_26", false,-1);
    tracep->declBit(c+57,"casez_tmp_27", false,-1);
    tracep->declBit(c+58,"casez_tmp_28", false,-1);
    tracep->declBit(c+59,"casez_tmp_29", false,-1);
    tracep->declBit(c+60,"casez_tmp_30", false,-1);
    tracep->declBus(c+61,"io_out_sel_2", false,-1, 1,0);
    tracep->declBit(c+62,"casez_tmp_31", false,-1);
    tracep->declBit(c+63,"casez_tmp_32", false,-1);
    tracep->declBit(c+64,"casez_tmp_33", false,-1);
    tracep->declBit(c+65,"casez_tmp_34", false,-1);
    tracep->declBit(c+66,"casez_tmp_35", false,-1);
    tracep->declBit(c+67,"casez_tmp_36", false,-1);
    tracep->declBit(c+68,"casez_tmp_37", false,-1);
    tracep->declBit(c+69,"casez_tmp_38", false,-1);
    tracep->declBit(c+70,"casez_tmp_39", false,-1);
    tracep->declBit(c+71,"casez_tmp_40", false,-1);
    tracep->declBit(c+72,"casez_tmp_41", false,-1);
    tracep->declBit(c+73,"casez_tmp_42", false,-1);
    tracep->declBit(c+74,"casez_tmp_43", false,-1);
    tracep->declBit(c+75,"casez_tmp_44", false,-1);
    tracep->declBit(c+76,"casez_tmp_45", false,-1);
    tracep->declBit(c+77,"casez_tmp_46", false,-1);
    tracep->declBit(c+78,"casez_tmp_47", false,-1);
    tracep->declBit(c+79,"casez_tmp_48", false,-1);
    tracep->declBit(c+80,"casez_tmp_49", false,-1);
    tracep->declBit(c+81,"casez_tmp_50", false,-1);
    tracep->declBit(c+82,"casez_tmp_51", false,-1);
    tracep->declBit(c+83,"casez_tmp_52", false,-1);
    tracep->declBit(c+84,"casez_tmp_53", false,-1);
    tracep->declBit(c+85,"casez_tmp_54", false,-1);
    tracep->declBit(c+86,"casez_tmp_55", false,-1);
    tracep->declBit(c+87,"casez_tmp_56", false,-1);
    tracep->declBit(c+88,"casez_tmp_57", false,-1);
    tracep->declBit(c+89,"casez_tmp_58", false,-1);
    tracep->declBit(c+90,"casez_tmp_59", false,-1);
    tracep->declBit(c+91,"casez_tmp_60", false,-1);
    tracep->declBit(c+92,"casez_tmp_61", false,-1);
    tracep->declBit(c+93,"casez_tmp_62", false,-1);
    tracep->declBus(c+94,"io_out_sel_3", false,-1, 1,0);
    tracep->declBit(c+95,"casez_tmp_63", false,-1);
    tracep->declBit(c+96,"casez_tmp_64", false,-1);
    tracep->declBit(c+97,"casez_tmp_65", false,-1);
    tracep->declBit(c+98,"casez_tmp_66", false,-1);
    tracep->declBit(c+99,"casez_tmp_67", false,-1);
    tracep->declBit(c+100,"casez_tmp_68", false,-1);
    tracep->declBit(c+101,"casez_tmp_69", false,-1);
    tracep->declBit(c+102,"casez_tmp_70", false,-1);
    tracep->declBit(c+103,"casez_tmp_71", false,-1);
    tracep->declBit(c+104,"casez_tmp_72", false,-1);
    tracep->declBit(c+105,"casez_tmp_73", false,-1);
    tracep->declBit(c+106,"casez_tmp_74", false,-1);
    tracep->declBit(c+107,"casez_tmp_75", false,-1);
    tracep->declBit(c+108,"casez_tmp_76", false,-1);
    tracep->declBit(c+109,"casez_tmp_77", false,-1);
    tracep->declBit(c+110,"casez_tmp_78", false,-1);
    tracep->declBit(c+111,"casez_tmp_79", false,-1);
    tracep->declBit(c+112,"casez_tmp_80", false,-1);
    tracep->declBit(c+113,"casez_tmp_81", false,-1);
    tracep->declBit(c+114,"casez_tmp_82", false,-1);
    tracep->declBit(c+115,"casez_tmp_83", false,-1);
    tracep->declBit(c+116,"casez_tmp_84", false,-1);
    tracep->declBit(c+117,"casez_tmp_85", false,-1);
    tracep->declBit(c+118,"casez_tmp_86", false,-1);
    tracep->declBit(c+119,"casez_tmp_87", false,-1);
    tracep->declBit(c+120,"casez_tmp_88", false,-1);
    tracep->declBit(c+121,"casez_tmp_89", false,-1);
    tracep->declBit(c+122,"casez_tmp_90", false,-1);
    tracep->declBit(c+123,"casez_tmp_91", false,-1);
    tracep->declBit(c+124,"casez_tmp_92", false,-1);
    tracep->declBit(c+125,"casez_tmp_93", false,-1);
    tracep->declBit(c+126,"casez_tmp_94", false,-1);
    tracep->declBus(c+127,"io_out_sel_4", false,-1, 1,0);
    tracep->declBit(c+128,"casez_tmp_95", false,-1);
    tracep->declBit(c+129,"casez_tmp_96", false,-1);
    tracep->declBit(c+130,"casez_tmp_97", false,-1);
    tracep->declBit(c+131,"casez_tmp_98", false,-1);
    tracep->declBit(c+132,"casez_tmp_99", false,-1);
    tracep->declBit(c+133,"casez_tmp_100", false,-1);
    tracep->declBit(c+134,"casez_tmp_101", false,-1);
    tracep->declBit(c+135,"casez_tmp_102", false,-1);
    tracep->declBit(c+136,"casez_tmp_103", false,-1);
    tracep->declBit(c+137,"casez_tmp_104", false,-1);
    tracep->declBit(c+138,"casez_tmp_105", false,-1);
    tracep->declBit(c+139,"casez_tmp_106", false,-1);
    tracep->declBit(c+140,"casez_tmp_107", false,-1);
    tracep->declBit(c+141,"casez_tmp_108", false,-1);
    tracep->declBit(c+142,"casez_tmp_109", false,-1);
    tracep->declBit(c+143,"casez_tmp_110", false,-1);
    tracep->declBit(c+144,"casez_tmp_111", false,-1);
    tracep->declBit(c+145,"casez_tmp_112", false,-1);
    tracep->declBit(c+146,"casez_tmp_113", false,-1);
    tracep->declBit(c+147,"casez_tmp_114", false,-1);
    tracep->declBit(c+148,"casez_tmp_115", false,-1);
    tracep->declBit(c+149,"casez_tmp_116", false,-1);
    tracep->declBit(c+150,"casez_tmp_117", false,-1);
    tracep->declBit(c+151,"casez_tmp_118", false,-1);
    tracep->declBit(c+152,"casez_tmp_119", false,-1);
    tracep->declBit(c+153,"casez_tmp_120", false,-1);
    tracep->declBit(c+154,"casez_tmp_121", false,-1);
    tracep->declBit(c+155,"casez_tmp_122", false,-1);
    tracep->declBit(c+156,"casez_tmp_123", false,-1);
    tracep->declBit(c+157,"casez_tmp_124", false,-1);
    tracep->declBit(c+158,"casez_tmp_125", false,-1);
    tracep->declBit(c+159,"casez_tmp_126", false,-1);
    tracep->declBit(c+160,"casez_tmp_127", false,-1);
    tracep->declBit(c+161,"casez_tmp_128", false,-1);
    tracep->declBit(c+162,"casez_tmp_129", false,-1);
    tracep->declBit(c+163,"casez_tmp_130", false,-1);
    tracep->declBit(c+164,"casez_tmp_131", false,-1);
    tracep->declBit(c+165,"casez_tmp_132", false,-1);
    tracep->declBit(c+166,"casez_tmp_133", false,-1);
    tracep->declBit(c+167,"casez_tmp_134", false,-1);
    tracep->declBit(c+168,"casez_tmp_135", false,-1);
    tracep->declBit(c+169,"casez_tmp_136", false,-1);
    tracep->declBit(c+170,"casez_tmp_137", false,-1);
    tracep->declBit(c+171,"casez_tmp_138", false,-1);
    tracep->declBit(c+172,"casez_tmp_139", false,-1);
    tracep->declBit(c+173,"casez_tmp_140", false,-1);
    tracep->declBit(c+174,"casez_tmp_141", false,-1);
    tracep->declBit(c+175,"casez_tmp_142", false,-1);
    tracep->declBit(c+176,"casez_tmp_143", false,-1);
    tracep->declBit(c+177,"casez_tmp_144", false,-1);
    tracep->declBit(c+178,"casez_tmp_145", false,-1);
    tracep->declBit(c+179,"casez_tmp_146", false,-1);
    tracep->declBit(c+180,"casez_tmp_147", false,-1);
    tracep->declBit(c+181,"casez_tmp_148", false,-1);
    tracep->declBit(c+182,"casez_tmp_149", false,-1);
    tracep->declBit(c+183,"casez_tmp_150", false,-1);
    tracep->declBit(c+184,"casez_tmp_151", false,-1);
    tracep->declBit(c+185,"casez_tmp_152", false,-1);
    tracep->declBit(c+186,"casez_tmp_153", false,-1);
    tracep->declBit(c+187,"casez_tmp_154", false,-1);
    tracep->declBit(c+188,"casez_tmp_155", false,-1);
    tracep->declBit(c+189,"casez_tmp_156", false,-1);
    tracep->declBit(c+190,"casez_tmp_157", false,-1);
    tracep->declBit(c+191,"casez_tmp_158", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("idu ");
    tracep->declBus(c+192,"io_inst", false,-1, 31,0);
    tracep->declBus(c+245,"io_rd", false,-1, 4,0);
    tracep->declBus(c+193,"io_rs1", false,-1, 4,0);
    tracep->declBus(c+194,"io_rs2", false,-1, 4,0);
    tracep->declBus(c+253,"io_instType", false,-1, 2,0);
    tracep->declBus(c+195,"io_csr", false,-1, 11,0);
    tracep->declBus(c+10,"io_zimm", false,-1, 31,0);
    tracep->declBus(c+9,"io_imm", false,-1, 31,0);
    tracep->declBus(c+14,"io_PcMux", false,-1, 1,0);
    tracep->declBus(c+261,"io_AluMux", false,-1, 2,0);
    tracep->declBus(c+262,"io_AluSel", false,-1, 3,0);
    tracep->declBus(c+271,"io_MemNum", false,-1, 2,0);
    tracep->declBus(c+196,"io_RegNum", false,-1, 2,0);
    tracep->declBit(c+264,"io_RegWr", false,-1);
    tracep->declBit(c+265,"io_MemWr", false,-1);
    tracep->declBit(c+268,"io_MemtoReg", false,-1);
    tracep->declBit(c+197,"io_CsrWr", false,-1);
    tracep->declBit(c+5,"io_Branch", false,-1);
    tracep->declBit(c+3,"io_halt", false,-1);
    tracep->declBit(c+7,"io_mret", false,-1);
    tracep->declBit(c+8,"io_ecall", false,-1);
    tracep->declBit(c+6,"io_Recsr", false,-1);
    tracep->declBus(c+198,"immNum_invInputs", false,-1, 6,0);
    tracep->declBus(c+199,"io_Branch_invInputs", false,-1, 2,0);
    tracep->declBus(c+200,"instType_invInputs", false,-1, 4,0);
    tracep->declBus(c+199,"io_PcMux_invInputs", false,-1, 2,0);
    tracep->declBus(c+200,"io_MemWr_invInputs", false,-1, 4,0);
    tracep->declBus(c+200,"io_RegWr_invInputs", false,-1, 4,0);
    tracep->declBus(c+201,"io_ecall_invInputs", false,-1, 29,0);
    tracep->declBus(c+201,"io_mret_invInputs", false,-1, 29,0);
    tracep->declBus(c+200,"io_MemtoReg_invInputs", false,-1, 4,0);
    tracep->declBus(c+202,"io_CsrWr_invInputs", false,-1, 1,0);
    tracep->declBus(c+200,"AluMuxa_invInputs", false,-1, 4,0);
    tracep->declBus(c+203,"AluMuxb_invInputs", false,-1, 7,0);
    tracep->declBus(c+202,"io_Recsr_invInputs", false,-1, 1,0);
    tracep->declBus(c+203,"io_MemNum_invInputs", false,-1, 7,0);
    tracep->declBus(c+203,"io_RegNum_invInputs", false,-1, 7,0);
    tracep->declBus(c+204,"AluSela_invInputs", false,-1, 14,0);
    tracep->declBus(c+203,"AluSelb_invInputs", false,-1, 7,0);
    tracep->declBus(c+205,"casez_tmp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+242,"clock", false,-1);
    tracep->declBit(c+4,"vaild", false,-1);
    tracep->declBit(c+3,"halt", false,-1);
    tracep->declBit(c+268,"MemtoReg", false,-1);
    tracep->declBus(c+250,"Maddr", false,-1, 31,0);
    tracep->declBus(c+192,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+242,"clock", false,-1);
    tracep->declBus(c+245,"io_rd", false,-1, 4,0);
    tracep->declBus(c+193,"io_rs1", false,-1, 4,0);
    tracep->declBus(c+194,"io_rs2", false,-1, 4,0);
    tracep->declBus(c+271,"io_MemNum", false,-1, 2,0);
    tracep->declBus(c+196,"io_RegNum", false,-1, 2,0);
    tracep->declBus(c+195,"io_csr", false,-1, 11,0);
    tracep->declBus(c+254,"io_result", false,-1, 31,0);
    tracep->declBus(c+2,"io_pc", false,-1, 31,0);
    tracep->declBit(c+268,"io_MemtoReg", false,-1);
    tracep->declBit(c+197,"io_CsrWr", false,-1);
    tracep->declBit(c+265,"io_MemWr", false,-1);
    tracep->declBit(c+264,"io_RegWr", false,-1);
    tracep->declBit(c+8,"io_ecall", false,-1);
    tracep->declBit(c+4,"io_vaild", false,-1);
    tracep->declBus(c+246,"io_src1", false,-1, 31,0);
    tracep->declBus(c+247,"io_src2", false,-1, 31,0);
    tracep->declBus(c+248,"io_halt_ret", false,-1, 31,0);
    tracep->declBus(c+258,"io_DataOut", false,-1, 31,0);
    tracep->declBus(c+259,"io_mDataOut", false,-1, 31,0);
    tracep->declBus(c+260,"io_RegData", false,-1, 31,0);
    tracep->declBus(c+252,"io_Ref", false,-1, 31,0);
    tracep->declBus(c+11,"io_Csr", false,-1, 31,0);
    tracep->declBus(c+12,"io_mtvec", false,-1, 31,0);
    tracep->declBus(c+13,"io_mepc", false,-1, 31,0);
    tracep->declBus(c+247,"src2", false,-1, 31,0);
    tracep->declBus(c+258,"DataOut", false,-1, 31,0);
    tracep->declBus(c+260,"RegData", false,-1, 31,0);
    tracep->pushNamePrefix("Csr_ext ");
    tracep->declBus(c+275,"R0_addr", false,-1, 11,0);
    tracep->declBit(c+276,"R0_en", false,-1);
    tracep->declBit(c+242,"R0_clk", false,-1);
    tracep->declBus(c+12,"R0_data", false,-1, 31,0);
    tracep->declBus(c+277,"R1_addr", false,-1, 11,0);
    tracep->declBit(c+276,"R1_en", false,-1);
    tracep->declBit(c+242,"R1_clk", false,-1);
    tracep->declBus(c+13,"R1_data", false,-1, 31,0);
    tracep->declBus(c+195,"R2_addr", false,-1, 11,0);
    tracep->declBit(c+276,"R2_en", false,-1);
    tracep->declBit(c+242,"R2_clk", false,-1);
    tracep->declBus(c+11,"R2_data", false,-1, 31,0);
    tracep->declBus(c+277,"R3_addr", false,-1, 11,0);
    tracep->declBit(c+276,"R3_en", false,-1);
    tracep->declBit(c+242,"R3_clk", false,-1);
    tracep->declBus(c+13,"R3_data", false,-1, 31,0);
    tracep->declBus(c+195,"R4_addr", false,-1, 11,0);
    tracep->declBit(c+276,"R4_en", false,-1);
    tracep->declBit(c+242,"R4_clk", false,-1);
    tracep->declBus(c+11,"R4_data", false,-1, 31,0);
    tracep->declBus(c+278,"W0_addr", false,-1, 11,0);
    tracep->declBit(c+276,"W0_en", false,-1);
    tracep->declBit(c+242,"W0_clk", false,-1);
    tracep->declBus(c+279,"W0_data", false,-1, 31,0);
    tracep->declBus(c+280,"W1_addr", false,-1, 11,0);
    tracep->declBit(c+276,"W1_en", false,-1);
    tracep->declBit(c+242,"W1_clk", false,-1);
    tracep->declBus(c+281,"W1_data", false,-1, 31,0);
    tracep->declBus(c+277,"W2_addr", false,-1, 11,0);
    tracep->declBit(c+276,"W2_en", false,-1);
    tracep->declBit(c+242,"W2_clk", false,-1);
    tracep->declBus(c+206,"W2_data", false,-1, 31,0);
    tracep->declBus(c+195,"W3_addr", false,-1, 11,0);
    tracep->declBit(c+276,"W3_en", false,-1);
    tracep->declBit(c+242,"W3_clk", false,-1);
    tracep->declBus(c+272,"W3_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Ref_ext ");
    tracep->declBus(c+194,"R0_addr", false,-1, 4,0);
    tracep->declBit(c+276,"R0_en", false,-1);
    tracep->declBit(c+242,"R0_clk", false,-1);
    tracep->declBus(c+207,"R0_data", false,-1, 31,0);
    tracep->declBus(c+193,"R1_addr", false,-1, 4,0);
    tracep->declBit(c+276,"R1_en", false,-1);
    tracep->declBit(c+242,"R1_clk", false,-1);
    tracep->declBus(c+208,"R1_data", false,-1, 31,0);
    tracep->declBus(c+282,"R2_addr", false,-1, 4,0);
    tracep->declBit(c+276,"R2_en", false,-1);
    tracep->declBit(c+242,"R2_clk", false,-1);
    tracep->declBus(c+248,"R2_data", false,-1, 31,0);
    tracep->declBus(c+245,"R3_addr", false,-1, 4,0);
    tracep->declBit(c+276,"R3_en", false,-1);
    tracep->declBit(c+242,"R3_clk", false,-1);
    tracep->declBus(c+252,"R3_data", false,-1, 31,0);
    tracep->declBus(c+245,"R4_addr", false,-1, 4,0);
    tracep->declBit(c+276,"R4_en", false,-1);
    tracep->declBit(c+242,"R4_clk", false,-1);
    tracep->declBus(c+252,"R4_data", false,-1, 31,0);
    tracep->declBus(c+283,"W0_addr", false,-1, 4,0);
    tracep->declBit(c+276,"W0_en", false,-1);
    tracep->declBit(c+242,"W0_clk", false,-1);
    tracep->declBus(c+284,"W0_data", false,-1, 31,0);
    tracep->declBus(c+245,"W1_addr", false,-1, 4,0);
    tracep->declBit(c+276,"W1_en", false,-1);
    tracep->declBit(c+242,"W1_clk", false,-1);
    tracep->declBus(c+273,"W1_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+209+i*1,"Memory", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBus(c+254,"Maddr", false,-1, 31,0);
    tracep->declBus(c+247,"DataIn", false,-1, 31,0);
    tracep->declBus(c+274,"wmask", false,-1, 31,0);
    tracep->declBit(c+265,"MemWr", false,-1);
    tracep->declBit(c+268,"MemtoReg", false,-1);
    tracep->declBit(c+242,"clock", false,-1);
    tracep->declBit(c+4,"vaild", false,-1);
    tracep->declBus(c+241,"DataOut", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VNPC___024root__trace_init_top(VNPC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root__trace_init_top\n"); );
    // Body
    VNPC___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VNPC___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VNPC___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VNPC___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VNPC___024root__trace_register(VNPC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VNPC___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VNPC___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VNPC___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VNPC___024root__trace_full_sub_0(VNPC___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VNPC___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root__trace_full_top_0\n"); );
    // Init
    VNPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VNPC___024root*>(voidSelf);
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VNPC___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VNPC___024root__trace_full_sub_0(VNPC___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->NPC__DOT__stop));
    bufp->fullIData(oldp+2,(vlSelf->NPC__DOT__pc),32);
    bufp->fullBit(oldp+3,((0x100073U == vlSelf->NPC__DOT___ifu_inst)));
    bufp->fullBit(oldp+4,(vlSelf->NPC__DOT___wbu_io_vaild));
    bufp->fullBit(oldp+5,(vlSelf->NPC__DOT___idu_io_Branch));
    bufp->fullBit(oldp+6,((IData)(((0x73U == (0x7fU 
                                              & vlSelf->NPC__DOT___ifu_inst)) 
                                   & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h40c0d4db__0)))));
    bufp->fullBit(oldp+7,(vlSelf->NPC__DOT___idu_io_mret));
    bufp->fullBit(oldp+8,(vlSelf->NPC__DOT___idu_io_ecall));
    bufp->fullIData(oldp+9,(vlSelf->NPC__DOT___idu_io_imm),32);
    bufp->fullIData(oldp+10,((0x1fU & (vlSelf->NPC__DOT___ifu_inst 
                                       >> 0xfU))),32);
    bufp->fullIData(oldp+11,(vlSelf->NPC__DOT__wbu__DOT___Csr_ext_R2_data),32);
    bufp->fullIData(oldp+12,(vlSelf->NPC__DOT__wbu__DOT__Csr_ext__DOT__Memory
                             [0x305U]),32);
    bufp->fullIData(oldp+13,(vlSelf->NPC__DOT__wbu__DOT__Csr_ext__DOT__Memory
                             [0x341U]),32);
    bufp->fullCData(oldp+14,((((IData)(((7U == (7U 
                                                & vlSelf->NPC__DOT___ifu_inst)) 
                                        & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_hcfa7c5ac__0))) 
                               << 1U) | ((IData)(vlSelf->NPC__DOT___idu_io_Branch) 
                                         | (IData)(
                                                   ((0xfU 
                                                     == 
                                                     (0xfU 
                                                      & vlSelf->NPC__DOT___ifu_inst)) 
                                                    & (IData)(vlSelf->NPC__DOT__idu__DOT____VdfgTmp_h03617c08__0)))))),2);
    bufp->fullIData(oldp+15,(vlSelf->NPC__DOT___exu_io_dnpc),32);
    bufp->fullIData(oldp+16,(vlSelf->NPC__DOT__exu__DOT__casez_tmp),32);
    bufp->fullCData(oldp+17,(vlSelf->NPC__DOT__exu__DOT__PCMux),4);
    bufp->fullBit(oldp+18,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__cin));
    bufp->fullIData(oldp+19,((IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__AddSub__DOT___sum_T_1)),32);
    bufp->fullBit(oldp+20,((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__AddSub__DOT___sum_T_1))));
    bufp->fullBit(oldp+21,((1U & (IData)((vlSelf->NPC__DOT__exu__DOT__Alu__DOT__AddSub__DOT___sum_T_1 
                                          >> 0x20U)))));
    bufp->fullBit(oldp+22,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT___AddSub_io_overflow));
    bufp->fullIData(oldp+23,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__AddSub__DOT__t_no_cin),32);
    bufp->fullCData(oldp+24,((0x1fU & vlSelf->NPC__DOT__exu__DOT__casez_tmp)),5);
    bufp->fullIData(oldp+25,(((((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
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
    bufp->fullBit(oldp+26,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn));
    bufp->fullCData(oldp+27,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel),2);
    bufp->fullCData(oldp+28,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_1),2);
    bufp->fullBit(oldp+29,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp));
    bufp->fullBit(oldp+30,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_0));
    bufp->fullBit(oldp+31,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_1));
    bufp->fullBit(oldp+32,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_2));
    bufp->fullBit(oldp+33,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_3));
    bufp->fullBit(oldp+34,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_4));
    bufp->fullBit(oldp+35,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_5));
    bufp->fullBit(oldp+36,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_6));
    bufp->fullBit(oldp+37,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_7));
    bufp->fullBit(oldp+38,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_8));
    bufp->fullBit(oldp+39,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_9));
    bufp->fullBit(oldp+40,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_10));
    bufp->fullBit(oldp+41,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_11));
    bufp->fullBit(oldp+42,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_12));
    bufp->fullBit(oldp+43,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_13));
    bufp->fullBit(oldp+44,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_14));
    bufp->fullBit(oldp+45,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_15));
    bufp->fullBit(oldp+46,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_16));
    bufp->fullBit(oldp+47,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_17));
    bufp->fullBit(oldp+48,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_18));
    bufp->fullBit(oldp+49,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_19));
    bufp->fullBit(oldp+50,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_20));
    bufp->fullBit(oldp+51,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_21));
    bufp->fullBit(oldp+52,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_22));
    bufp->fullBit(oldp+53,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_23));
    bufp->fullBit(oldp+54,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_24));
    bufp->fullBit(oldp+55,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_25));
    bufp->fullBit(oldp+56,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_26));
    bufp->fullBit(oldp+57,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_27));
    bufp->fullBit(oldp+58,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_28));
    bufp->fullBit(oldp+59,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_29));
    bufp->fullBit(oldp+60,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_30));
    bufp->fullCData(oldp+61,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_2),2);
    bufp->fullBit(oldp+62,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_31));
    bufp->fullBit(oldp+63,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_32));
    bufp->fullBit(oldp+64,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_33));
    bufp->fullBit(oldp+65,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_34));
    bufp->fullBit(oldp+66,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_35));
    bufp->fullBit(oldp+67,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_36));
    bufp->fullBit(oldp+68,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_37));
    bufp->fullBit(oldp+69,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_38));
    bufp->fullBit(oldp+70,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_39));
    bufp->fullBit(oldp+71,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_40));
    bufp->fullBit(oldp+72,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_41));
    bufp->fullBit(oldp+73,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_42));
    bufp->fullBit(oldp+74,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_43));
    bufp->fullBit(oldp+75,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_44));
    bufp->fullBit(oldp+76,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_45));
    bufp->fullBit(oldp+77,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_46));
    bufp->fullBit(oldp+78,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_47));
    bufp->fullBit(oldp+79,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_48));
    bufp->fullBit(oldp+80,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_49));
    bufp->fullBit(oldp+81,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_50));
    bufp->fullBit(oldp+82,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_51));
    bufp->fullBit(oldp+83,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_52));
    bufp->fullBit(oldp+84,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_53));
    bufp->fullBit(oldp+85,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_54));
    bufp->fullBit(oldp+86,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_55));
    bufp->fullBit(oldp+87,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_56));
    bufp->fullBit(oldp+88,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_57));
    bufp->fullBit(oldp+89,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_58));
    bufp->fullBit(oldp+90,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_59));
    bufp->fullBit(oldp+91,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_60));
    bufp->fullBit(oldp+92,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_61));
    bufp->fullBit(oldp+93,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_62));
    bufp->fullCData(oldp+94,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_3),2);
    bufp->fullBit(oldp+95,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_63));
    bufp->fullBit(oldp+96,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_64));
    bufp->fullBit(oldp+97,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_65));
    bufp->fullBit(oldp+98,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_66));
    bufp->fullBit(oldp+99,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_67));
    bufp->fullBit(oldp+100,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_68));
    bufp->fullBit(oldp+101,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_69));
    bufp->fullBit(oldp+102,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_70));
    bufp->fullBit(oldp+103,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_71));
    bufp->fullBit(oldp+104,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_72));
    bufp->fullBit(oldp+105,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_73));
    bufp->fullBit(oldp+106,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_74));
    bufp->fullBit(oldp+107,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_75));
    bufp->fullBit(oldp+108,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_76));
    bufp->fullBit(oldp+109,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_77));
    bufp->fullBit(oldp+110,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_78));
    bufp->fullBit(oldp+111,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_79));
    bufp->fullBit(oldp+112,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_80));
    bufp->fullBit(oldp+113,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_81));
    bufp->fullBit(oldp+114,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_82));
    bufp->fullBit(oldp+115,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_83));
    bufp->fullBit(oldp+116,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_84));
    bufp->fullBit(oldp+117,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_85));
    bufp->fullBit(oldp+118,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_86));
    bufp->fullBit(oldp+119,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_87));
    bufp->fullBit(oldp+120,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_88));
    bufp->fullBit(oldp+121,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_89));
    bufp->fullBit(oldp+122,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_90));
    bufp->fullBit(oldp+123,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_91));
    bufp->fullBit(oldp+124,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_92));
    bufp->fullBit(oldp+125,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_93));
    bufp->fullBit(oldp+126,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_94));
    bufp->fullCData(oldp+127,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4),2);
    bufp->fullBit(oldp+128,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_95));
    bufp->fullBit(oldp+129,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_96));
    bufp->fullBit(oldp+130,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_97));
    bufp->fullBit(oldp+131,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_98));
    bufp->fullBit(oldp+132,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_99));
    bufp->fullBit(oldp+133,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_100));
    bufp->fullBit(oldp+134,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_101));
    bufp->fullBit(oldp+135,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_102));
    bufp->fullBit(oldp+136,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_103));
    bufp->fullBit(oldp+137,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_104));
    bufp->fullBit(oldp+138,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_105));
    bufp->fullBit(oldp+139,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_106));
    bufp->fullBit(oldp+140,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_107));
    bufp->fullBit(oldp+141,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_108));
    bufp->fullBit(oldp+142,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_109));
    bufp->fullBit(oldp+143,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_110));
    bufp->fullBit(oldp+144,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_111));
    bufp->fullBit(oldp+145,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_112));
    bufp->fullBit(oldp+146,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_113));
    bufp->fullBit(oldp+147,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_114));
    bufp->fullBit(oldp+148,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_115));
    bufp->fullBit(oldp+149,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_116));
    bufp->fullBit(oldp+150,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_117));
    bufp->fullBit(oldp+151,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_118));
    bufp->fullBit(oldp+152,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_119));
    bufp->fullBit(oldp+153,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_120));
    bufp->fullBit(oldp+154,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_121));
    bufp->fullBit(oldp+155,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_122));
    bufp->fullBit(oldp+156,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_123));
    bufp->fullBit(oldp+157,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_124));
    bufp->fullBit(oldp+158,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125));
    bufp->fullBit(oldp+159,(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_126));
    bufp->fullBit(oldp+160,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_96)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_97)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_96)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_95))))));
    bufp->fullBit(oldp+161,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_95)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_96)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4)) 
                                     & (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_95))))));
    bufp->fullBit(oldp+162,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_98)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_99)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_98)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_97))))));
    bufp->fullBit(oldp+163,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_97)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_98)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_97)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_96))))));
    bufp->fullBit(oldp+164,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_100)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_101)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_100)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_99))))));
    bufp->fullBit(oldp+165,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_99)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_100)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_99)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_98))))));
    bufp->fullBit(oldp+166,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_102)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_103)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_102)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_101))))));
    bufp->fullBit(oldp+167,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_101)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_102)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_101)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_100))))));
    bufp->fullBit(oldp+168,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_104)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_105)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_104)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_103))))));
    bufp->fullBit(oldp+169,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_103)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_104)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_103)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_102))))));
    bufp->fullBit(oldp+170,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_106)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_107)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_106)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_105))))));
    bufp->fullBit(oldp+171,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_105)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_106)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_105)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_104))))));
    bufp->fullBit(oldp+172,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_108)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_109)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_108)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_107))))));
    bufp->fullBit(oldp+173,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_107)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_108)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_107)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_106))))));
    bufp->fullBit(oldp+174,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_110)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_111)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_110)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_109))))));
    bufp->fullBit(oldp+175,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_109)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_110)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_109)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_108))))));
    bufp->fullBit(oldp+176,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_112)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_113)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_112)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_111))))));
    bufp->fullBit(oldp+177,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_111)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_112)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_111)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_110))))));
    bufp->fullBit(oldp+178,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_114)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_115)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_114)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_113))))));
    bufp->fullBit(oldp+179,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_113)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_114)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_113)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_112))))));
    bufp->fullBit(oldp+180,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_116)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_117)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_116)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_115))))));
    bufp->fullBit(oldp+181,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_115)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_116)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_115)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_114))))));
    bufp->fullBit(oldp+182,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_118)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_119)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_118)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_117))))));
    bufp->fullBit(oldp+183,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_117)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_118)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_117)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_116))))));
    bufp->fullBit(oldp+184,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_120)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_121)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_120)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_119))))));
    bufp->fullBit(oldp+185,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_119)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_120)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_119)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_118))))));
    bufp->fullBit(oldp+186,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_122)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_123)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_122)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_121))))));
    bufp->fullBit(oldp+187,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_121)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_122)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_121)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_120))))));
    bufp->fullBit(oldp+188,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_124)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_124)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_123))))));
    bufp->fullBit(oldp+189,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_123)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_124)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_123)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_122))))));
    bufp->fullBit(oldp+190,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_126)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__leftIn)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_126)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125))))));
    bufp->fullBit(oldp+191,(((0U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125)
                              : ((1U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_126)
                                  : ((2U == (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_125)
                                      : (IData)(vlSelf->NPC__DOT__exu__DOT__Alu__DOT__Shift__DOT__casez_tmp_124))))));
    bufp->fullIData(oldp+192,(vlSelf->NPC__DOT___ifu_inst),32);
    bufp->fullCData(oldp+193,(vlSelf->NPC__DOT___idu_io_rs1),5);
    bufp->fullCData(oldp+194,(vlSelf->NPC__DOT___idu_io_rs2),5);
    bufp->fullSData(oldp+195,((vlSelf->NPC__DOT___ifu_inst 
                               >> 0x14U)),12);
    bufp->fullCData(oldp+196,(vlSelf->NPC__DOT___idu_io_RegNum),3);
    bufp->fullBit(oldp+197,(vlSelf->NPC__DOT___idu_io_CsrWr));
    bufp->fullCData(oldp+198,(vlSelf->NPC__DOT__idu__DOT__immNum_invInputs),7);
    bufp->fullCData(oldp+199,((7U & (~ (vlSelf->NPC__DOT___ifu_inst 
                                        >> 2U)))),3);
    bufp->fullCData(oldp+200,((0x1fU & (~ (vlSelf->NPC__DOT___ifu_inst 
                                           >> 2U)))),5);
    bufp->fullIData(oldp+201,((0x3fffffffU & (~ (vlSelf->NPC__DOT___ifu_inst 
                                                 >> 2U)))),30);
    bufp->fullCData(oldp+202,((3U & (~ (vlSelf->NPC__DOT___ifu_inst 
                                        >> 2U)))),2);
    bufp->fullCData(oldp+203,((0xffU & (~ (IData)(vlSelf->NPC__DOT__idu__DOT___GEN)))),8);
    bufp->fullSData(oldp+204,(vlSelf->NPC__DOT__idu__DOT__AluSela_invInputs),15);
    bufp->fullIData(oldp+205,(vlSelf->NPC__DOT__idu__DOT__casez_tmp),32);
    bufp->fullIData(oldp+206,(((IData)(vlSelf->NPC__DOT___idu_io_ecall)
                                ? vlSelf->NPC__DOT__pc
                                : vlSelf->NPC__DOT__wbu__DOT__Csr_ext__DOT__Memory
                               [0x341U])),32);
    bufp->fullIData(oldp+207,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory
                              [vlSelf->NPC__DOT___idu_io_rs2]),32);
    bufp->fullIData(oldp+208,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory
                              [vlSelf->NPC__DOT___idu_io_rs1]),32);
    bufp->fullIData(oldp+209,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[0]),32);
    bufp->fullIData(oldp+210,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[1]),32);
    bufp->fullIData(oldp+211,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[2]),32);
    bufp->fullIData(oldp+212,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[3]),32);
    bufp->fullIData(oldp+213,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[4]),32);
    bufp->fullIData(oldp+214,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[5]),32);
    bufp->fullIData(oldp+215,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[6]),32);
    bufp->fullIData(oldp+216,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[7]),32);
    bufp->fullIData(oldp+217,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[8]),32);
    bufp->fullIData(oldp+218,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[9]),32);
    bufp->fullIData(oldp+219,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[10]),32);
    bufp->fullIData(oldp+220,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[11]),32);
    bufp->fullIData(oldp+221,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[12]),32);
    bufp->fullIData(oldp+222,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[13]),32);
    bufp->fullIData(oldp+223,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[14]),32);
    bufp->fullIData(oldp+224,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[15]),32);
    bufp->fullIData(oldp+225,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[16]),32);
    bufp->fullIData(oldp+226,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[17]),32);
    bufp->fullIData(oldp+227,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[18]),32);
    bufp->fullIData(oldp+228,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[19]),32);
    bufp->fullIData(oldp+229,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[20]),32);
    bufp->fullIData(oldp+230,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[21]),32);
    bufp->fullIData(oldp+231,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[22]),32);
    bufp->fullIData(oldp+232,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[23]),32);
    bufp->fullIData(oldp+233,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[24]),32);
    bufp->fullIData(oldp+234,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[25]),32);
    bufp->fullIData(oldp+235,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[26]),32);
    bufp->fullIData(oldp+236,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[27]),32);
    bufp->fullIData(oldp+237,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[28]),32);
    bufp->fullIData(oldp+238,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[29]),32);
    bufp->fullIData(oldp+239,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[30]),32);
    bufp->fullIData(oldp+240,(vlSelf->NPC__DOT__wbu__DOT__Ref_ext__DOT__Memory[31]),32);
    bufp->fullIData(oldp+241,(vlSelf->NPC__DOT__wbu__DOT___lsu_DataOut),32);
    bufp->fullBit(oldp+242,(vlSelf->clock));
    bufp->fullBit(oldp+243,(vlSelf->reset));
    bufp->fullBit(oldp+244,(vlSelf->io_reset));
    bufp->fullCData(oldp+245,(vlSelf->io_rd),5);
    bufp->fullIData(oldp+246,(vlSelf->io_src1),32);
    bufp->fullIData(oldp+247,(vlSelf->io_src2),32);
    bufp->fullIData(oldp+248,(vlSelf->io_halt_ret),32);
    bufp->fullIData(oldp+249,(vlSelf->io_PC),32);
    bufp->fullIData(oldp+250,(vlSelf->io_NPC),32);
    bufp->fullIData(oldp+251,(vlSelf->io_halt),32);
    bufp->fullIData(oldp+252,(vlSelf->io_Ref),32);
    bufp->fullCData(oldp+253,(vlSelf->io_instType),3);
    bufp->fullIData(oldp+254,(vlSelf->io_result),32);
    bufp->fullIData(oldp+255,(vlSelf->io_ina),32);
    bufp->fullIData(oldp+256,(vlSelf->io_inb),32);
    bufp->fullIData(oldp+257,(vlSelf->io_inst),32);
    bufp->fullIData(oldp+258,(vlSelf->io_DataOut),32);
    bufp->fullIData(oldp+259,(vlSelf->io_mDataOut),32);
    bufp->fullIData(oldp+260,(vlSelf->io_RegData),32);
    bufp->fullCData(oldp+261,(vlSelf->io_AluMux),3);
    bufp->fullCData(oldp+262,(vlSelf->io_AluSel),4);
    bufp->fullCData(oldp+263,(vlSelf->io_MemNum),2);
    bufp->fullBit(oldp+264,(vlSelf->io_RegWr));
    bufp->fullBit(oldp+265,(vlSelf->io_MemWr));
    bufp->fullBit(oldp+266,(vlSelf->io_vaild));
    bufp->fullBit(oldp+267,(vlSelf->io_stop));
    bufp->fullBit(oldp+268,(vlSelf->io_MemtoReg));
    bufp->fullBit(oldp+269,((1U & (IData)(vlSelf->io_AluSel))));
    bufp->fullBit(oldp+270,((1U & ((IData)(vlSelf->io_AluSel) 
                                   >> 1U))));
    bufp->fullCData(oldp+271,((((0x1ffU != ((0x100U 
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
    bufp->fullIData(oldp+272,(((IData)(vlSelf->NPC__DOT___idu_io_CsrWr)
                                ? vlSelf->io_result
                                : vlSelf->NPC__DOT__wbu__DOT___Csr_ext_R2_data)),32);
    bufp->fullIData(oldp+273,(((0U == (IData)(vlSelf->io_rd))
                                ? 0U : ((IData)(vlSelf->io_RegWr)
                                         ? vlSelf->io_RegData
                                         : ((IData)(vlSelf->NPC__DOT___idu_io_CsrWr)
                                             ? vlSelf->NPC__DOT__wbu__DOT___Csr_ext_R2_data
                                             : vlSelf->io_Ref)))),32);
    bufp->fullIData(oldp+274,((((0x1ffU != ((0x100U 
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
    bufp->fullSData(oldp+275,(0x305U),12);
    bufp->fullBit(oldp+276,(1U));
    bufp->fullSData(oldp+277,(0x341U),12);
    bufp->fullSData(oldp+278,(0x342U),12);
    bufp->fullIData(oldp+279,(0xbU),32);
    bufp->fullSData(oldp+280,(0x300U),12);
    bufp->fullIData(oldp+281,(0x1800U),32);
    bufp->fullCData(oldp+282,(0xaU),5);
    bufp->fullCData(oldp+283,(0U),5);
    bufp->fullIData(oldp+284,(0U),32);
}

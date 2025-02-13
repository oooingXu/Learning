// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VysyxSoCFull__Syms.h"


VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__0(VysyxSoCFull___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1202,"externalPins_gpio_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+1203,"externalPins_gpio_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+1204,"externalPins_gpio_seg_0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1205,"externalPins_gpio_seg_1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1206,"externalPins_gpio_seg_2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1207,"externalPins_gpio_seg_3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1208,"externalPins_gpio_seg_4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1209,"externalPins_gpio_seg_5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1210,"externalPins_gpio_seg_6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1211,"externalPins_gpio_seg_7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1212,"externalPins_ps2_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1213,"externalPins_ps2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1214,"externalPins_vga_r",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1215,"externalPins_vga_g",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1216,"externalPins_vga_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1217,"externalPins_vga_hsync",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1218,"externalPins_vga_vsync",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1219,"externalPins_vga_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1220,"externalPins_uart_rx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1221,"externalPins_uart_tx",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1202,"externalPins_gpio_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+1203,"externalPins_gpio_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+1204,"externalPins_gpio_seg_0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1205,"externalPins_gpio_seg_1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1206,"externalPins_gpio_seg_2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1207,"externalPins_gpio_seg_3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1208,"externalPins_gpio_seg_4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1209,"externalPins_gpio_seg_5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1210,"externalPins_gpio_seg_6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1211,"externalPins_gpio_seg_7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1212,"externalPins_ps2_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1213,"externalPins_ps2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1214,"externalPins_vga_r",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1215,"externalPins_vga_g",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1216,"externalPins_vga_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1217,"externalPins_vga_hsync",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1218,"externalPins_vga_vsync",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1219,"externalPins_vga_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1220,"externalPins_uart_rx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1221,"externalPins_uart_tx",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+924,"spi_sck",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1196,"spi_ss",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1197,"spi_mosi",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1222,"spi_miso",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1220,"uart_rx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1221,"uart_tx",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+182,"psram_sck",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+183,"psram_ce_n",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1223,"psram_dio",-1,FST_VD_INOUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1224,"sdram_clk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+925,"sdram_cke",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+926,"sdram_cs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+927,"sdram_ras",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+928,"sdram_cas",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+929,"sdram_we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+930,"sdram_a",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 12,0);
    tracep->declBus(c+931,"sdram_ba",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+932,"sdram_dqm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+933,"sdram_dq",-1,FST_VD_INOUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+1202,"gpio_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+1203,"gpio_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+1204,"gpio_seg_0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1205,"gpio_seg_1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1206,"gpio_seg_2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1207,"gpio_seg_3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1208,"gpio_seg_4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1209,"gpio_seg_5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1210,"gpio_seg_6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1211,"gpio_seg_7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1212,"ps2_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1213,"ps2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1214,"vga_r",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1215,"vga_g",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1216,"vga_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1217,"vga_hsync",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1218,"vga_vsync",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1219,"vga_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+92,"in_paddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+93,"in_psel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+292,"in_penable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1246,"in_pprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+94,"in_pwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+95,"in_pwdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"in_pstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+184,"in_pready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+185,"in_prdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+97,"in_pslverr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+92,"out_paddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+93,"out_psel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+292,"out_penable",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1246,"out_pprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+94,"out_pwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+95,"out_pwdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"out_pstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+184,"out_pready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+185,"out_prdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+97,"out_pslverr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+93,"auto_anon_in_psel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+292,"auto_anon_in_penable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"auto_anon_in_pwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+92,"auto_anon_in_paddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1246,"auto_anon_in_pprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+95,"auto_anon_in_pwdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"auto_anon_in_pstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+184,"auto_anon_in_pready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"auto_anon_in_pslverr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+185,"auto_anon_in_prdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+98,"auto_anon_out_6_psel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"auto_anon_out_6_penable",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"auto_anon_out_6_pwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+92,"auto_anon_out_6_paddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1246,"auto_anon_out_6_pprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+95,"auto_anon_out_6_pwdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"auto_anon_out_6_pstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+934,"auto_anon_out_6_pready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"auto_anon_out_6_pslverr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+935,"auto_anon_out_6_prdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+99,"auto_anon_out_5_psel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"auto_anon_out_5_penable",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"auto_anon_out_5_pwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+100,"auto_anon_out_5_paddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 29,0);
    tracep->declBus(c+1246,"auto_anon_out_5_pprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+95,"auto_anon_out_5_pwdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"auto_anon_out_5_pstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+44,"auto_anon_out_5_pready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1248,"auto_anon_out_5_pslverr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1249,"auto_anon_out_5_prdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+101,"auto_anon_out_4_psel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"auto_anon_out_4_penable",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"auto_anon_out_4_pwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+102,"auto_anon_out_4_paddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 28,0);
    tracep->declBus(c+1246,"auto_anon_out_4_pprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+95,"auto_anon_out_4_pwdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"auto_anon_out_4_pstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+103,"auto_anon_out_4_pready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1250,"auto_anon_out_4_pslverr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"auto_anon_out_4_prdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+104,"auto_anon_out_3_psel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"auto_anon_out_3_penable",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"auto_anon_out_3_pwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+102,"auto_anon_out_3_paddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 28,0);
    tracep->declBus(c+1246,"auto_anon_out_3_pprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+95,"auto_anon_out_3_pwdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"auto_anon_out_3_pstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+106,"auto_anon_out_3_pready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1251,"auto_anon_out_3_pslverr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+936,"auto_anon_out_3_prdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+107,"auto_anon_out_2_psel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"auto_anon_out_2_penable",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"auto_anon_out_2_pwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+92,"auto_anon_out_2_paddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1246,"auto_anon_out_2_pprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+95,"auto_anon_out_2_pwdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"auto_anon_out_2_pstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1225,"auto_anon_out_2_pready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"auto_anon_out_2_pslverr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+293,"auto_anon_out_2_prdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+108,"auto_anon_out_1_psel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+109,"auto_anon_out_1_penable",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"auto_anon_out_1_pwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+102,"auto_anon_out_1_paddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 28,0);
    tracep->declBus(c+1246,"auto_anon_out_1_pprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+95,"auto_anon_out_1_pwdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"auto_anon_out_1_pstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+110,"auto_anon_out_1_pready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"auto_anon_out_1_pslverr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1226,"auto_anon_out_1_prdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+111,"auto_anon_out_0_psel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+112,"auto_anon_out_0_penable",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"auto_anon_out_0_pwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+100,"auto_anon_out_0_paddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 29,0);
    tracep->declBus(c+1246,"auto_anon_out_0_pprot",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+95,"auto_anon_out_0_pwdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"auto_anon_out_0_pstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+294,"auto_anon_out_0_pready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"auto_anon_out_0_pslverr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1227,"auto_anon_out_0_prdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+113,"sel_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+114,"sel_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+115,"sel_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+116,"sel_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+117,"sel_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+118,"sel_5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+119,"sel_6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+120,"auto_in_awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"auto_in_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+295,"auto_in_awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+296,"auto_in_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+297,"auto_in_awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+120,"auto_in_wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"auto_in_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+298,"auto_in_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+299,"auto_in_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+186,"auto_in_bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+187,"auto_in_bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+300,"auto_in_bid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+48,"auto_in_bresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+121,"auto_in_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+122,"auto_in_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+301,"auto_in_arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+123,"auto_in_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+302,"auto_in_arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+188,"auto_in_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+189,"auto_in_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+303,"auto_in_rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+52,"auto_in_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"auto_in_rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+93,"auto_out_psel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+292,"auto_out_penable",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"auto_out_pwrite",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+92,"auto_out_paddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+95,"auto_out_pwdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"auto_out_pstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+184,"auto_out_pready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"auto_out_pslverr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+185,"auto_out_prdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+292,"nodeOut_penable",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+304,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+121,"accept_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+120,"accept_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+305,"is_write_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+94,"is_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+303,"rid_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+300,"bid_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+306,"araddr_reg_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,"awaddr_reg_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,"wdata_reg_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+309,"wstrb_reg_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+124,"resp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+310,"resp_hold_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+48,"resp_hold",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+189,"nodeIn_rvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+311,"nodeIn_rdata_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+187,"nodeIn_bvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+312,"auto_in_awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"auto_in_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1252,"auto_in_awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+313,"auto_in_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1253,"auto_in_awlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+314,"auto_in_awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1254,"auto_in_awburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+315,"auto_in_wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"auto_in_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+316,"auto_in_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+317,"auto_in_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+318,"auto_in_wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1255,"auto_in_bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"auto_in_bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+191,"auto_in_bid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+53,"auto_in_bresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+319,"auto_in_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+125,"auto_in_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+320,"auto_in_arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+126,"auto_in_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1253,"auto_in_arlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+321,"auto_in_arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1254,"auto_in_arburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+322,"auto_in_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+192,"auto_in_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+193,"auto_in_rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+54,"auto_in_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1228,"auto_in_rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+55,"auto_in_rlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+194,"auto_out_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"auto_out_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+295,"auto_out_awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+296,"auto_out_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+297,"auto_out_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+323,"auto_out_awecho_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+195,"auto_out_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"auto_out_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+298,"auto_out_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+299,"auto_out_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+22,"auto_out_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1255,"auto_out_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+196,"auto_out_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+191,"auto_out_bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+197,"auto_out_bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+198,"auto_out_becho_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+199,"auto_out_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+127,"auto_out_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+301,"auto_out_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+123,"auto_out_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+302,"auto_out_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+324,"auto_out_arecho_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+322,"auto_out_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+192,"auto_out_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+193,"auto_out_rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+54,"auto_out_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1228,"auto_out_rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+56,"auto_out_recho_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+200,"auto_out_rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"nodeOut_wvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+325,"w_idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+201,"in_awready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+326,"busy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+327,"r_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+328,"r_len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+329,"len",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+128,"addr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+330,"busy_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+331,"r_addr_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+332,"r_len_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+333,"len_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+334,"addr_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+335,"wbeats_latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+20,"nodeOut_awvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"wbeats_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+336,"w_counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->declBus(c+24,"w_todo",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 8,0);
    tracep->declBit(c+22,"w_last",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1255,"nodeOut_bready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+337,"error_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+338,"error_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+339,"error_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+340,"error_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+341,"error_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+342,"error_5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+343,"error_6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+344,"error_7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+345,"error_8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+346,"error_9",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+347,"error_10",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+348,"error_11",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+349,"error_12",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+350,"error_13",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+351,"error_14",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+352,"error_15",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+319,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+125,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+320,"io_enq_bits_id",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+126,"io_enq_bits_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1253,"io_enq_bits_len",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+321,"io_enq_bits_size",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1254,"io_enq_bits_burst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+202,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+127,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+301,"io_deq_bits_id",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+129,"io_deq_bits_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+353,"io_deq_bits_len",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+302,"io_deq_bits_size",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+354,"io_deq_bits_burst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declQuad(c+355,"ram",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 48,0);
    tracep->declBit(c+357,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+127,"io_deq_valid_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+203,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+312,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1252,"io_enq_bits_id",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+313,"io_enq_bits_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1253,"io_enq_bits_len",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+314,"io_enq_bits_size",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1254,"io_enq_bits_burst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+204,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+295,"io_deq_bits_id",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+358,"io_deq_bits_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+359,"io_deq_bits_len",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+297,"io_deq_bits_size",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+360,"io_deq_bits_burst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declQuad(c+361,"ram",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 48,0);
    tracep->declBit(c+363,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+25,"io_deq_valid_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+205,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+315,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+316,"io_enq_bits_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+317,"io_enq_bits_strb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+318,"io_enq_bits_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+206,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+298,"io_deq_bits_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+299,"io_deq_bits_strb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+364,"io_deq_bits_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+365,"ram",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 36,0);
    tracep->declBit(c+367,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+26,"io_deq_valid_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+207,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4ram ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+208,"auto_in_awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"auto_in_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+295,"auto_in_awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+368,"auto_in_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 27,0);
    tracep->declBit(c+57,"auto_in_wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"auto_in_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+298,"auto_in_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+299,"auto_in_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+209,"auto_in_bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+369,"auto_in_bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+370,"auto_in_bid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+371,"auto_in_bresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+210,"auto_in_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+130,"auto_in_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+301,"auto_in_arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+131,"auto_in_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 27,0);
    tracep->declBit(c+211,"auto_in_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+372,"auto_in_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+373,"auto_in_rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+374,"auto_in_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+375,"auto_in_rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+210,"nodeIn_arready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+208,"nodeIn_awready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+376,"w_sel0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+369,"w_full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+370,"w_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+377,"r_sel1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+378,"w_sel1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+372,"r_full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+373,"r_id",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+212,"ren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+379,"rdata_REG",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+380,"rdata_r0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+381,"rdata_r1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+382,"rdata_r2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+383,"rdata_r3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+132,"R0_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
    tracep->declBit(c+212,"R0_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1200,"R0_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+384,"R0_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+385,"W0_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
    tracep->declBit(c+213,"W0_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1200,"W0_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+298,"W0_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+299,"W0_mask",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+312,"auto_anon_in_awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"auto_anon_in_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1252,"auto_anon_in_awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+313,"auto_anon_in_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1253,"auto_anon_in_awlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+314,"auto_anon_in_awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1254,"auto_anon_in_awburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+315,"auto_anon_in_wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"auto_anon_in_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+316,"auto_anon_in_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+317,"auto_anon_in_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+318,"auto_anon_in_wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1255,"auto_anon_in_bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"auto_anon_in_bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+191,"auto_anon_in_bid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+53,"auto_anon_in_bresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+319,"auto_anon_in_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+125,"auto_anon_in_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+320,"auto_anon_in_arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+126,"auto_anon_in_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1253,"auto_anon_in_arlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+321,"auto_anon_in_arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1254,"auto_anon_in_arburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+322,"auto_anon_in_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+192,"auto_anon_in_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+193,"auto_anon_in_rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+54,"auto_anon_in_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1228,"auto_anon_in_rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+55,"auto_anon_in_rlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+312,"auto_anon_out_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"auto_anon_out_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1252,"auto_anon_out_awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+313,"auto_anon_out_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1253,"auto_anon_out_awlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+314,"auto_anon_out_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1254,"auto_anon_out_awburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+315,"auto_anon_out_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"auto_anon_out_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+316,"auto_anon_out_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+317,"auto_anon_out_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+318,"auto_anon_out_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1255,"auto_anon_out_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"auto_anon_out_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+191,"auto_anon_out_bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+53,"auto_anon_out_bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+319,"auto_anon_out_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+125,"auto_anon_out_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+320,"auto_anon_out_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+126,"auto_anon_out_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1253,"auto_anon_out_arlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+321,"auto_anon_out_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1254,"auto_anon_out_arburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+322,"auto_anon_out_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+192,"auto_anon_out_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+193,"auto_anon_out_rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+54,"auto_anon_out_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1228,"auto_anon_out_rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+55,"auto_anon_out_rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+214,"auto_anon_in_awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"auto_anon_in_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+295,"auto_anon_in_awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+296,"auto_anon_in_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+297,"auto_anon_in_awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+195,"auto_anon_in_wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"auto_anon_in_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+298,"auto_anon_in_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+299,"auto_anon_in_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+22,"auto_anon_in_wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1255,"auto_anon_in_bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+196,"auto_anon_in_bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+191,"auto_anon_in_bid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+197,"auto_anon_in_bresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+215,"auto_anon_in_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+133,"auto_anon_in_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+301,"auto_anon_in_arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+123,"auto_anon_in_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+302,"auto_anon_in_arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+322,"auto_anon_in_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+192,"auto_anon_in_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+193,"auto_anon_in_rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+54,"auto_anon_in_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1228,"auto_anon_in_rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+200,"auto_anon_in_rlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+208,"auto_anon_out_2_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"auto_anon_out_2_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+295,"auto_anon_out_2_awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+368,"auto_anon_out_2_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 27,0);
    tracep->declBit(c+57,"auto_anon_out_2_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"auto_anon_out_2_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+298,"auto_anon_out_2_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+299,"auto_anon_out_2_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+209,"auto_anon_out_2_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+369,"auto_anon_out_2_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+370,"auto_anon_out_2_bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+371,"auto_anon_out_2_bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+210,"auto_anon_out_2_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+130,"auto_anon_out_2_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+301,"auto_anon_out_2_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+131,"auto_anon_out_2_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 27,0);
    tracep->declBit(c+211,"auto_anon_out_2_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+372,"auto_anon_out_2_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+373,"auto_anon_out_2_rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+374,"auto_anon_out_2_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+375,"auto_anon_out_2_rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+30,"auto_anon_out_1_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"auto_anon_out_1_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+386,"auto_anon_out_1_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+134,"auto_anon_out_1_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+301,"auto_anon_out_1_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+135,"auto_anon_out_1_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 29,0);
    tracep->declBit(c+58,"auto_anon_out_1_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+387,"auto_anon_out_1_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+388,"auto_anon_out_1_rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+389,"auto_anon_out_1_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+120,"auto_anon_out_0_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"auto_anon_out_0_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+295,"auto_anon_out_0_awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+296,"auto_anon_out_0_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+297,"auto_anon_out_0_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+120,"auto_anon_out_0_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"auto_anon_out_0_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+298,"auto_anon_out_0_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+299,"auto_anon_out_0_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+186,"auto_anon_out_0_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+187,"auto_anon_out_0_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+300,"auto_anon_out_0_bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+48,"auto_anon_out_0_bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+121,"auto_anon_out_0_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+122,"auto_anon_out_0_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+301,"auto_anon_out_0_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+123,"auto_anon_out_0_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+302,"auto_anon_out_0_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+188,"auto_anon_out_0_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+189,"auto_anon_out_0_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+303,"auto_anon_out_0_rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+52,"auto_anon_out_0_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"auto_anon_out_0_rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+196,"in_0_bvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+192,"in_0_rvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+214,"anonIn_awready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+136,"requestARIO_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+137,"requestARIO_0_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+138,"requestARIO_0_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+390,"requestAWIO_0_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+391,"requestAWIO_0_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+392,"requestAWIO_0_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+393,"arFIFOMap_0_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+394,"awFIFOMap_0_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+395,"arFIFOMap_1_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+396,"awFIFOMap_1_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+397,"arFIFOMap_2_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+398,"awFIFOMap_2_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+399,"arFIFOMap_3_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+400,"awFIFOMap_3_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+401,"arFIFOMap_4_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+402,"awFIFOMap_4_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+403,"arFIFOMap_5_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+404,"awFIFOMap_5_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+405,"arFIFOMap_6_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+406,"awFIFOMap_6_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+407,"arFIFOMap_7_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+408,"awFIFOMap_7_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+409,"arFIFOMap_8_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+410,"awFIFOMap_8_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+411,"arFIFOMap_9_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+412,"awFIFOMap_9_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+413,"arFIFOMap_10_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+414,"awFIFOMap_10_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+415,"arFIFOMap_11_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+416,"awFIFOMap_11_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+417,"arFIFOMap_12_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+418,"awFIFOMap_12_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+419,"arFIFOMap_13_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+420,"awFIFOMap_13_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+421,"arFIFOMap_14_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+422,"awFIFOMap_14_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+423,"arFIFOMap_15_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+424,"awFIFOMap_15_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+425,"latched",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+32,"in_0_awvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"awIn_0_io_enq_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"in_0_wvalid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+426,"idle_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+216,"anyValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+217,"readys_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+427,"readys_mask",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+218,"readys_readys",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+219,"prefixOR_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+220,"winner_3_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+221,"winner_3_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+428,"state_3_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+429,"state_3_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+430,"state_3_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+222,"muxState_3_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"muxState_3_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+224,"muxState_3_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+431,"idle_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+225,"anyValid_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+226,"readys_valid_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+432,"readys_mask_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+227,"readys_readys_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+228,"winner_4_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+229,"winner_4_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+433,"state_4_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+434,"state_4_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+230,"muxState_4_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"muxState_4_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+435,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+436,"io_enq_bits",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+232,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+437,"io_deq_bits",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+438,"wrap",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+439,"wrap_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+440,"maybe_full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+441,"ptr_match",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+442,"empty",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+443,"full",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"io_deq_valid_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+233,"do_deq",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+234,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+439,"R0_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1255,"R0_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1200,"R0_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+444,"R0_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+438,"W0_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+234,"W0_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1200,"W0_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+436,"W0_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+445+i*1,"Memory",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 2,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4yank ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+194,"auto_in_awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"auto_in_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+295,"auto_in_awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+296,"auto_in_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+297,"auto_in_awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+323,"auto_in_awecho_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+195,"auto_in_wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"auto_in_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+298,"auto_in_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+299,"auto_in_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+22,"auto_in_wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1255,"auto_in_bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+196,"auto_in_bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+191,"auto_in_bid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+197,"auto_in_bresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+198,"auto_in_becho_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+199,"auto_in_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+127,"auto_in_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+301,"auto_in_arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+123,"auto_in_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+302,"auto_in_arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+324,"auto_in_arecho_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+322,"auto_in_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+192,"auto_in_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+193,"auto_in_rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+54,"auto_in_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1228,"auto_in_rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+56,"auto_in_recho_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+200,"auto_in_rlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+214,"auto_out_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"auto_out_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+295,"auto_out_awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+296,"auto_out_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+297,"auto_out_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+195,"auto_out_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"auto_out_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+298,"auto_out_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+299,"auto_out_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+22,"auto_out_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1255,"auto_out_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+196,"auto_out_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+191,"auto_out_bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+197,"auto_out_bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+215,"auto_out_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+133,"auto_out_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+301,"auto_out_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+123,"auto_out_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+302,"auto_out_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+322,"auto_out_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+192,"auto_out_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+193,"auto_out_rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+54,"auto_out_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1228,"auto_out_rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+200,"auto_out_rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+447,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+59,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+235,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+448,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+449,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+449,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+448,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+450,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+451,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+236,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+452,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+453,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+453,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+452,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+454,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+455,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+456,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+457,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+457,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+456,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+458,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+459,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+238,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+460,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+461,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+461,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+460,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+462,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+463,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+464,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+465,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+465,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+464,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+466,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+467,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+468,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+469,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+469,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+468,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+470,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+471,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+472,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+473,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+473,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+472,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+474,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+475,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+242,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+476,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+477,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+477,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+476,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+478,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+479,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+67,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+243,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+480,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+481,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+481,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+480,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+482,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+483,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+68,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+244,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+484,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+485,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+485,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+484,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+486,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+487,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+69,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+245,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+488,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+489,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+489,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+488,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+490,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+491,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+246,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+493,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+493,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+492,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+494,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+495,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+247,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+496,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+497,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+497,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+496,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+498,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+499,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+248,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+500,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+501,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+501,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+500,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+502,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+503,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+73,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+249,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+504,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+505,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+505,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+504,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+506,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+507,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+250,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+508,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+509,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+509,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+508,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+510,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+511,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+512,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+513,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+513,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+512,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+514,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+515,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+252,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+516,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+517,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+517,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+516,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+518,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+519,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+253,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+520,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+521,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+521,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+520,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+522,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+523,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+254,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+524,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+525,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+525,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+524,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+526,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+527,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+79,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+255,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+528,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+529,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+529,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+528,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+530,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+531,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+256,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+532,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+533,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+533,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+532,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+534,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+535,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+536,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+537,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+537,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+536,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+538,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+539,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+258,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+540,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+541,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+541,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+540,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+542,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+543,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+259,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+544,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+545,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+545,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+544,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+546,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+547,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+84,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+260,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+548,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+549,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+549,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+548,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+550,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+551,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+85,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+261,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+552,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+553,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+553,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+552,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+554,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+555,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+262,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+556,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+557,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+557,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+556,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+558,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+559,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+263,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+560,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+561,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+561,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+560,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+562,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+563,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+88,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+564,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+565,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+565,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+564,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+566,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+567,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+89,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+265,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+568,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+569,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+569,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+568,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+570,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"io_enq_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+90,"io_enq_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"io_enq_bits_real_last",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"io_deq_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+572,"io_deq_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+573,"io_deq_bits_real_last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+573,"ram_real_last",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+572,"full",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+574,"do_enq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+312,"auto_master_out_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"auto_master_out_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1252,"auto_master_out_awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+313,"auto_master_out_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1253,"auto_master_out_awlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+314,"auto_master_out_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1254,"auto_master_out_awburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+315,"auto_master_out_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"auto_master_out_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+316,"auto_master_out_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+317,"auto_master_out_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+318,"auto_master_out_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1255,"auto_master_out_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"auto_master_out_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+191,"auto_master_out_bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+53,"auto_master_out_bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+319,"auto_master_out_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+125,"auto_master_out_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+320,"auto_master_out_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+126,"auto_master_out_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1253,"auto_master_out_arlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+321,"auto_master_out_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1254,"auto_master_out_arburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+322,"auto_master_out_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+192,"auto_master_out_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+193,"auto_master_out_rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+54,"auto_master_out_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1228,"auto_master_out_rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+55,"auto_master_out_rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"io_interrupt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+312,"io_master_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"io_master_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+313,"io_master_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1252,"io_master_awid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1253,"io_master_awlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+314,"io_master_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1254,"io_master_awburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+315,"io_master_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"io_master_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+316,"io_master_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+317,"io_master_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+318,"io_master_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1255,"io_master_bready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"io_master_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+53,"io_master_bresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+191,"io_master_bid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+319,"io_master_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+125,"io_master_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+126,"io_master_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+320,"io_master_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1253,"io_master_arlen",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+321,"io_master_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1254,"io_master_arburst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+322,"io_master_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+192,"io_master_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1228,"io_master_rresp",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+54,"io_master_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+55,"io_master_rlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+193,"io_master_rid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1247,"io_slave_awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"io_slave_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1256,"io_slave_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1257,"io_slave_awid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1253,"io_slave_awlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1258,"io_slave_awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1259,"io_slave_awburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+1247,"io_slave_wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"io_slave_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1256,"io_slave_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1257,"io_slave_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1247,"io_slave_wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"io_slave_bready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"io_slave_bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1259,"io_slave_bresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1257,"io_slave_bid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1247,"io_slave_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"io_slave_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1256,"io_slave_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1257,"io_slave_arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1253,"io_slave_arlen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1258,"io_slave_arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1259,"io_slave_arburst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+1247,"io_slave_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"io_slave_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1259,"io_slave_rresp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1256,"io_slave_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1247,"io_slave_rlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1257,"io_slave_rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->pushNamePrefix("arbiter ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"io_ifu_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"io_ifu_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+140,"io_ifu_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+575,"io_ifu_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+267,"io_ifu_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+268,"io_ifu_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+312,"io_lsu_awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"io_lsu_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+313,"io_lsu_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+314,"io_lsu_awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+315,"io_lsu_wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"io_lsu_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+316,"io_lsu_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+317,"io_lsu_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+318,"io_lsu_wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"io_lsu_bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"io_lsu_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"io_lsu_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+313,"io_lsu_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+576,"io_lsu_arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+577,"io_lsu_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+269,"io_lsu_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+268,"io_lsu_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+312,"io_axi_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"io_axi_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+313,"io_axi_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+314,"io_axi_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+315,"io_axi_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"io_axi_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+316,"io_axi_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+317,"io_axi_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+318,"io_axi_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"io_axi_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"io_axi_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"io_axi_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+126,"io_axi_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+320,"io_axi_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+321,"io_axi_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+322,"io_axi_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+270,"io_axi_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+268,"io_axi_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+578,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"io_axi_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"io_axi_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+126,"io_axi_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+50,"io_axi_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+51,"io_axi_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+579,"mtimel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+580,"mtimeh",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+581,"io_raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+582,"io_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+583,"io_wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+581,"io_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+313,"io_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+584,"io_ecall",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+585,"io_mepc_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+586,"io_mepc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+587,"io_mtvec",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_23060336_csrs_ext ");
    tracep->declBus(c+581,"R0_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+1255,"R0_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1200,"R0_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+582,"R0_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1260,"R1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+1255,"R1_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1200,"R1_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+587,"R1_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1261,"R2_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+1255,"R2_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1200,"R2_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+586,"R2_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+581,"W0_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+583,"W0_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1200,"W0_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+313,"W0_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1261,"W1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+584,"W1_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1200,"W1_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+585,"W1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1262,"W2_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+584,"W2_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1200,"W2_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1263,"W2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1264,"W3_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+36,"W3_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1200,"W3_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1265,"W3_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1266,"W4_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+36,"W4_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1200,"W4_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1267,"W4_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1268,"W5_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBit(c+36,"W5_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1200,"W5_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1269,"W5_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu_exu ");
    tracep->declBit(c+36,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+585,"io_pc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+588,"io_inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+589,"io_src1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+590,"io_src2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+582,"io_Csr_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+586,"io_mepc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+587,"io_mtvec",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+313,"io_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+41,"io_dnpc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+582,"io_Csr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+581,"io_csr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+591,"io_rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+592,"io_rs1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+593,"io_rs2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1229,"io_instType",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+594,"io_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+314,"io_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+595,"io_RegNum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+576,"io_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+596,"io_ecall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+597,"io_CsrWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+598,"io_MemWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+599,"io_RegWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+600,"io_MemtoReg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+601,"io_ebreak",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+602,"immNum_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBus(c+603,"instType_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+603,"AluMuxa_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+604,"AluMuxb_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+605,"AluSela_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 14,0);
    tracep->declBus(c+604,"AluSelb_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+606,"recsr_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+607,"branch_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+607,"pcmux_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+608,"mret_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 29,0);
    tracep->declBus(c+608,"io_ecall_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 29,0);
    tracep->declBus(c+608,"io_ebreak_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 29,0);
    tracep->declBus(c+604,"io_wstrb_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+604,"io_awsize_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+604,"io_arsize_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+604,"io_RegNum_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+606,"io_CsrWr_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+603,"io_MemtoReg_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+603,"io_MemWr_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+603,"io_RegWr_invInputs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+606,"io_RegWr_invInputs_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+609,"casez_tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+610,"imm",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+611,"PCMux",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+612,"io_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+613,"io_ina",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+614,"io_inb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+313,"io_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+615,"cin",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("addsub ");
    tracep->declBit(c+615,"io_cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+613,"io_ina",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+614,"io_inb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+616,"io_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+617,"io_zero",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+618,"io_carry",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+619,"io_overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+620,"t_no_cin",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+613,"io_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+621,"io_shamt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+622,"io_isLeft",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+623,"io_izArith",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+624,"io_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+625,"leftIn",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+626,"io_out_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+627,"io_out_sel_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+628,"casez_tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+629,"casez_tmp_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+630,"casez_tmp_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+631,"casez_tmp_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+632,"casez_tmp_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+633,"casez_tmp_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+634,"casez_tmp_5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+635,"casez_tmp_6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+636,"casez_tmp_7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+637,"casez_tmp_8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+638,"casez_tmp_9",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+639,"casez_tmp_10",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+640,"casez_tmp_11",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+641,"casez_tmp_12",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+642,"casez_tmp_13",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+643,"casez_tmp_14",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+644,"casez_tmp_15",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+645,"casez_tmp_16",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+646,"casez_tmp_17",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+647,"casez_tmp_18",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+648,"casez_tmp_19",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+649,"casez_tmp_20",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+650,"casez_tmp_21",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+651,"casez_tmp_22",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+652,"casez_tmp_23",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+653,"casez_tmp_24",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+654,"casez_tmp_25",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+655,"casez_tmp_26",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+656,"casez_tmp_27",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+657,"casez_tmp_28",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+658,"casez_tmp_29",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+659,"casez_tmp_30",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+660,"io_out_sel_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+661,"casez_tmp_31",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+662,"casez_tmp_32",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+663,"casez_tmp_33",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+664,"casez_tmp_34",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+665,"casez_tmp_35",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+666,"casez_tmp_36",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+667,"casez_tmp_37",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+668,"casez_tmp_38",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+669,"casez_tmp_39",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+670,"casez_tmp_40",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+671,"casez_tmp_41",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+672,"casez_tmp_42",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+673,"casez_tmp_43",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+674,"casez_tmp_44",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+675,"casez_tmp_45",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+676,"casez_tmp_46",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+677,"casez_tmp_47",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+678,"casez_tmp_48",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+679,"casez_tmp_49",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+680,"casez_tmp_50",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+681,"casez_tmp_51",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+682,"casez_tmp_52",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+683,"casez_tmp_53",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+684,"casez_tmp_54",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+685,"casez_tmp_55",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+686,"casez_tmp_56",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+687,"casez_tmp_57",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+688,"casez_tmp_58",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+689,"casez_tmp_59",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+690,"casez_tmp_60",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+691,"casez_tmp_61",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+692,"casez_tmp_62",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+693,"io_out_sel_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+694,"casez_tmp_63",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+695,"casez_tmp_64",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+696,"casez_tmp_65",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+697,"casez_tmp_66",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+698,"casez_tmp_67",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+699,"casez_tmp_68",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+700,"casez_tmp_69",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+701,"casez_tmp_70",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+702,"casez_tmp_71",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+703,"casez_tmp_72",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+704,"casez_tmp_73",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+705,"casez_tmp_74",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+706,"casez_tmp_75",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+707,"casez_tmp_76",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+708,"casez_tmp_77",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+709,"casez_tmp_78",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+710,"casez_tmp_79",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+711,"casez_tmp_80",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+712,"casez_tmp_81",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+713,"casez_tmp_82",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+714,"casez_tmp_83",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+715,"casez_tmp_84",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+716,"casez_tmp_85",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+717,"casez_tmp_86",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+718,"casez_tmp_87",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+719,"casez_tmp_88",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+720,"casez_tmp_89",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+721,"casez_tmp_90",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+722,"casez_tmp_91",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+723,"casez_tmp_92",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+724,"casez_tmp_93",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+725,"casez_tmp_94",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+726,"io_out_sel_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+727,"casez_tmp_95",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+728,"casez_tmp_96",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+729,"casez_tmp_97",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+730,"casez_tmp_98",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+731,"casez_tmp_99",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+732,"casez_tmp_100",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+733,"casez_tmp_101",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+734,"casez_tmp_102",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+735,"casez_tmp_103",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+736,"casez_tmp_104",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+737,"casez_tmp_105",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+738,"casez_tmp_106",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+739,"casez_tmp_107",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+740,"casez_tmp_108",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+741,"casez_tmp_109",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+742,"casez_tmp_110",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+743,"casez_tmp_111",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+744,"casez_tmp_112",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+745,"casez_tmp_113",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+746,"casez_tmp_114",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+747,"casez_tmp_115",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+748,"casez_tmp_116",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+749,"casez_tmp_117",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+750,"casez_tmp_118",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+751,"casez_tmp_119",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+752,"casez_tmp_120",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+753,"casez_tmp_121",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+754,"casez_tmp_122",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+755,"casez_tmp_123",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+756,"casez_tmp_124",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+757,"casez_tmp_125",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+758,"casez_tmp_126",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+759,"casez_tmp_127",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+760,"casez_tmp_128",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+761,"casez_tmp_129",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+762,"casez_tmp_130",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+763,"casez_tmp_131",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+764,"casez_tmp_132",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+765,"casez_tmp_133",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+766,"casez_tmp_134",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+767,"casez_tmp_135",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+768,"casez_tmp_136",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+769,"casez_tmp_137",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+770,"casez_tmp_138",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+771,"casez_tmp_139",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+772,"casez_tmp_140",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+773,"casez_tmp_141",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+774,"casez_tmp_142",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+775,"casez_tmp_143",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+776,"casez_tmp_144",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+777,"casez_tmp_145",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+778,"casez_tmp_146",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+779,"casez_tmp_147",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+780,"casez_tmp_148",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+781,"casez_tmp_149",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+782,"casez_tmp_150",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+783,"casez_tmp_151",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+784,"casez_tmp_152",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+785,"casez_tmp_153",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+786,"casez_tmp_154",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+787,"casez_tmp_155",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+788,"casez_tmp_156",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+789,"casez_tmp_157",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+790,"casez_tmp_158",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"io_axi_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"io_axi_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+140,"io_axi_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+575,"io_axi_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+267,"io_axi_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+268,"io_axi_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+791,"io_ifu_idle",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+41,"io_dnpc",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+588,"io_inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+585,"io_pc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1230,"io_ifu_flash_count",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1231,"io_ifu_psram_count",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declQuad(c+792,"io_ifu_clk_count",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+794,"io_ifu_psram_clk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+796,"io_ifu_flash_clk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBit(c+798,"io_out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+585,"PC",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+588,"finst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+799,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+140,"io_axi_araddr_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+798,"io_out_valid_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"io_axi_arvalid_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("ifu_count ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+799,"state",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+140,"araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1230,"ifu_flash_count",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1231,"ifu_psram_count",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declQuad(c+796,"ifu_flash_clk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+794,"ifu_psram_clk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+792,"ifu_clk_count",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lsu_wbu ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+312,"io_axi_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"io_axi_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+313,"io_axi_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+314,"io_axi_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+315,"io_axi_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"io_axi_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+316,"io_axi_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+317,"io_axi_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+318,"io_axi_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"io_axi_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+49,"io_axi_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"io_axi_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+313,"io_axi_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+576,"io_axi_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+577,"io_axi_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+269,"io_axi_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+268,"io_axi_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declQuad(c+792,"io_ifu_clk_count",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+1231,"io_ifu_psram_count",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1230,"io_ifu_flash_count",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declQuad(c+794,"io_ifu_psram_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+796,"io_ifu_flash_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+313,"io_result",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+41,"io_dnpc_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+590,"io_src2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+582,"io_Csr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+581,"io_csr_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+591,"io_rd_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1229,"io_instType",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+594,"io_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+314,"io_awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+595,"io_RegNum",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+576,"io_arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+597,"io_CsrWr_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+599,"io_RegWr_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+596,"io_ecall_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+598,"io_MemWr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+600,"io_MemtoReg",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+601,"io_ebreak",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+798,"io_in_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+41,"io_dnpc",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+800,"io_regdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+313,"io_csrdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+581,"io_csr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 11,0);
    tracep->declBus(c+591,"io_rd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+583,"io_CsrWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+801,"io_RegWr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+596,"io_ecall",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+791,"io_out_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+271,"prepare",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+802,"rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+803,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+272,"casez_tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+791,"io_out_valid_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+91,"casez_tmp_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+804,"casez_tmp_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+805,"casez_tmp_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+806,"DataOut",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+19,"io_axi_awvalid_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+316,"io_axi_wdata_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+38,"io_axi_arvalid_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("ebreak ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+601,"ebreak",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+798,"in_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+791,"out_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+269,"axi_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+803,"state",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1229,"instType",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1231,"ifu_psram_count",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1230,"ifu_flash_count",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declQuad(c+794,"ifu_psram_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+796,"ifu_flash_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declQuad(c+792,"ifu_clk_count",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 63,0);
    tracep->declBus(c+1270,"idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1271,"work",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1176,"ifu_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1232,"lsu_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1177,"i_type_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1178,"s_type_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1179,"u_type_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1180,"b_type_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1181,"r_type_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1182,"j_type_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1183,"c_type_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1184,"w_type_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+807,"i_clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+808,"s_clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+809,"u_clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+810,"b_clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+811,"r_clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+812,"j_clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+813,"c_clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+814,"w_clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declQuad(c+815,"lsu_clk_count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declQuad(c+817,"backend_clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBit(c+819,"clk_state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sram_read ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+313,"araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+313,"awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+316,"wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+820,"arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+594,"wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+49,"arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+312,"awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reg_0 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+592,"io_raddr1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+593,"io_raddr2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+589,"io_rdata1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+590,"io_rdata2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+801,"io_wen",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+591,"io_waddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+800,"io_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_23060336_regs_ext ");
    tracep->declBus(c+593,"R0_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+1255,"R0_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1200,"R0_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+821,"R0_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+592,"R1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+1255,"R1_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1200,"R1_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+822,"R1_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+591,"W0_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+823,"W0_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1200,"W0_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+800,"W0_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+824+i*1,"Memory",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("xbar ");
    tracep->declBit(c+312,"io_slave_awready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"io_slave_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+313,"io_slave_awaddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+314,"io_slave_awsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+315,"io_slave_wready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"io_slave_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+316,"io_slave_wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+317,"io_slave_wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+318,"io_slave_wlast",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"io_slave_bvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"io_slave_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"io_slave_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+126,"io_slave_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+320,"io_slave_arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+321,"io_slave_arsize",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+322,"io_slave_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+270,"io_slave_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+268,"io_slave_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+312,"io_master_awready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"io_master_awvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+313,"io_master_awaddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+314,"io_master_awsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+315,"io_master_wready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"io_master_wvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+316,"io_master_wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+317,"io_master_wstrb",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+318,"io_master_wlast",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"io_master_bvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+319,"io_master_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+125,"io_master_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+126,"io_master_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+320,"io_master_arid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+321,"io_master_arsize",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+322,"io_master_rready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+192,"io_master_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+54,"io_master_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+40,"io_clint_arready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"io_clint_arvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+126,"io_clint_araddr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+50,"io_clint_rvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+51,"io_clint_rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"io_d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+856,"io_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"io_d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+856,"io_q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+856,"sync_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+857,"sync_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+858,"sync_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+859,"sync_3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+860,"sync_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+861,"sync_5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+862,"sync_6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+863,"sync_7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+864,"sync_8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+865,"sync_9",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+104,"auto_in_psel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"auto_in_penable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"auto_in_pwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+102,"auto_in_paddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 28,0);
    tracep->declBus(c+1246,"auto_in_pprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+95,"auto_in_pwdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"auto_in_pstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+106,"auto_in_pready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1251,"auto_in_pslverr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+936,"auto_in_prdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1202,"gpio_bundle_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+1203,"gpio_bundle_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+1204,"gpio_bundle_seg_0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1205,"gpio_bundle_seg_1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1206,"gpio_bundle_seg_2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1207,"gpio_bundle_seg_3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1208,"gpio_bundle_seg_4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1209,"gpio_bundle_seg_5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1210,"gpio_bundle_seg_6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1211,"gpio_bundle_seg_7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+141,"in_paddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+104,"in_psel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"in_penable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1246,"in_pprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+94,"in_pwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+95,"in_pwdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"in_pstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+106,"in_pready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+936,"in_prdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1251,"in_pslverr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1202,"gpio_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+1203,"gpio_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+1204,"gpio_seg_0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1205,"gpio_seg_1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1206,"gpio_seg_2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1207,"gpio_seg_3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1208,"gpio_seg_4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1209,"gpio_seg_5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1210,"gpio_seg_6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1211,"gpio_seg_7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+937,"led_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+938,"switch_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+939,"seg_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+936,"prdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+940,"pslverr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,"segs",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+101,"auto_in_psel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"auto_in_penable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"auto_in_pwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+102,"auto_in_paddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 28,0);
    tracep->declBus(c+1246,"auto_in_pprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+95,"auto_in_pwdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"auto_in_pstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+103,"auto_in_pready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1250,"auto_in_pslverr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"auto_in_prdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1212,"ps2_bundle_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1213,"ps2_bundle_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+141,"in_paddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+101,"in_psel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+45,"in_penable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1246,"in_pprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+94,"in_pwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+95,"in_pwdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"in_pstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+103,"in_pready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"in_prdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1250,"in_pslverr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1212,"ps2_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1213,"ps2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+866,"prdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+867,"buffer",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+868,"rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+869,"count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+870,"ps2_clk_sync",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+871,"sampling",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"auto_in_awvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"auto_in_wvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+386,"auto_in_arready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+134,"auto_in_arvalid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+301,"auto_in_arid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+135,"auto_in_araddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 29,0);
    tracep->declBit(c+58,"auto_in_rready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+387,"auto_in_rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+388,"auto_in_rid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+389,"auto_in_rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+387,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+389,"nodeIn_rdata_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+388,"nodeIn_rid_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+142,"raddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+143,"ren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+144,"rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+107,"auto_in_psel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"auto_in_penable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"auto_in_pwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+92,"auto_in_paddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1246,"auto_in_pprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+95,"auto_in_pwdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"auto_in_pstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1225,"auto_in_pready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"auto_in_pslverr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+293,"auto_in_prdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+182,"qspi_bundle_sck",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+183,"qspi_bundle_ce_n",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1223,"qspi_bundle_dio",-1,FST_VD_INOUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+92,"in_paddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+107,"in_psel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+47,"in_penable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1246,"in_pprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+94,"in_pwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+95,"in_pwdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"in_pstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1225,"in_pready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+293,"in_prdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1247,"in_pslverr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+182,"qspi_sck",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+183,"qspi_ce_n",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1223,"qspi_dio",-1,FST_VD_INOUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1223,"din",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+273,"dout",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+274,"douten",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1233,"ack",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1200,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"rst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+92,"adr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+95,"dat_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+293,"dat_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+107,"cyc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+107,"stb_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1233,"ack_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+182,"sck",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+183,"ce_n",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1223,"din",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+273,"dout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+274,"douten",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1259,"ST_IDLE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+1254,"ST_WAIT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+1272,"QT_IDLE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+1273,"QT_WAIT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBit(c+941,"mr_sck",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+942,"mr_ce_n",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1223,"mr_din",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+943,"mr_dout",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+944,"mr_doe",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+945,"mw_sck",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+946,"mw_ce_n",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1223,"mw_din",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+275,"mw_dout",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+947,"mw_doe",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+276,"mr_rd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+948,"mr_done",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+277,"mw_wr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+278,"mw_done",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+107,"wb_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"wb_we",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+146,"wb_re",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+949,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+1234,"nstate",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+950,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+951,"q_ce_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+952,"q_sck",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+953,"q_dout",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+954,"q_douten",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1274,"CMD_35H",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+147,"size",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+148,"byte0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+149,"byte1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+150,"byte2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+151,"byte3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+152,"wdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1200,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1235,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+153,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+276,"rd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1275,"size",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+948,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+293,"line",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+941,"sck",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+942,"ce_n",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1223,"din",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+943,"dout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+944,"douten",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1276,"IDLE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+1277,"READ",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+1278,"FINAL_COUNT",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+955,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+279,"nstate",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+956,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+957,"saddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+872+i*1,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->declBus(c+1279,"CMD_EBH",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+958,"byte_index",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1200,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1235,"rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+154,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+152,"line",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+147,"size",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+277,"wr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+278,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+945,"sck",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+946,"ce_n",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1223,"din",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+275,"dout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+947,"douten",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1276,"IDLE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+1277,"WRITE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBus(c+155,"FINAL_COUNT",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+959,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+280,"nstate",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+960,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+961,"saddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+1280,"CMD_38H",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+98,"auto_in_psel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"auto_in_penable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"auto_in_pwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+92,"auto_in_paddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1246,"auto_in_pprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+95,"auto_in_pwdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"auto_in_pstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+934,"auto_in_pready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"auto_in_pslverr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+935,"auto_in_prdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1224,"sdram_bundle_clk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+925,"sdram_bundle_cke",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+926,"sdram_bundle_cs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+927,"sdram_bundle_ras",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+928,"sdram_bundle_cas",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+929,"sdram_bundle_we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+930,"sdram_bundle_a",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 12,0);
    tracep->declBus(c+931,"sdram_bundle_ba",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+932,"sdram_bundle_dqm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+933,"sdram_bundle_dq",-1,FST_VD_INOUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+92,"in_paddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+98,"in_psel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"in_penable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1246,"in_pprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+94,"in_pwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+95,"in_pwdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"in_pstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+934,"in_pready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+935,"in_prdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1247,"in_pslverr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1224,"sdram_clk",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+925,"sdram_cke",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+926,"sdram_cs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+927,"sdram_ras",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+928,"sdram_cas",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+929,"sdram_we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+930,"sdram_a",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 12,0);
    tracep->declBus(c+931,"sdram_ba",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+932,"sdram_dqm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+933,"sdram_dq",-1,FST_VD_INOUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+962,"sdram_dout_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+963,"sdram_dout",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+876,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+964,"req_accept",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+156,"is_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+157,"is_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1200,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"rst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+158,"inport_wr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+156,"inport_rd_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1253,"inport_len_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+92,"inport_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+95,"inport_write_data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+933,"sdram_data_input_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+964,"inport_accept_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+934,"inport_ack_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"inport_error_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+935,"inport_read_data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1224,"sdram_clk_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+925,"sdram_cke_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+926,"sdram_cs_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+927,"sdram_ras_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+928,"sdram_cas_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+929,"sdram_we_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+932,"sdram_dqm_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+930,"sdram_addr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 12,0);
    tracep->declBus(c+931,"sdram_ba_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+963,"sdram_data_output_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+962,"sdram_data_out_en_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1281,"SDRAM_MHZ",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1282,"SDRAM_ADDR_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1283,"SDRAM_COL_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1284,"SDRAM_READ_LATENCY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1284,"SDRAM_BANK_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1284,"SDRAM_DQM_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1285,"SDRAM_BANKS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1286,"SDRAM_ROW_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1287,"SDRAM_REFRESH_CNT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1288,"SDRAM_START_DELAY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1289,"SDRAM_REFRESH_CYCLES",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1285,"CMD_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1290,"CMD_NOP",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1291,"CMD_ACTIVE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1292,"CMD_READ",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1293,"CMD_WRITE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1294,"CMD_TERMINATE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1252,"CMD_PRECHARGE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1295,"CMD_REFRESH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1257,"CMD_LOAD_MODE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1296,"MODE_REG",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 12,0);
    tracep->declBus(c+1285,"STATE_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1257,"STATE_INIT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1295,"STATE_DELAY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1252,"STATE_IDLE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1291,"STATE_ACTIVATE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1293,"STATE_READ",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1292,"STATE_READ_WAIT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1294,"STATE_WRITE0",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1290,"STATE_WRITE1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1297,"STATE_PRECHARGE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1298,"STATE_REFRESH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1299,"AUTO_PRECHARGE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1299,"ALL_BANKS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1300,"SDRAM_DATA_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1299,"CYCLE_TIME_NS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1284,"SDRAM_TRCD_CYCLES",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1284,"SDRAM_TRP_CYCLES",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1301,"SDRAM_TRFC_CYCLES",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+92,"ram_addr_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+158,"ram_wr_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+156,"ram_rd_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+964,"ram_accept_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+95,"ram_write_data_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+935,"ram_read_data_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+934,"ram_ack_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+159,"ram_req_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+965,"command_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+930,"addr_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 12,0);
    tracep->declBus(c+963,"data_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBit(c+966,"data_rd_en_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+932,"dqm_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+925,"cke_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+931,"bank_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+967,"data_buffer_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+968,"dqm_buffer_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+933,"sdram_data_in_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+969,"refresh_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+970,"row_open_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+971+i*1,"active_row_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 12,0);
    }
    tracep->declBus(c+975,"state_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+281,"next_state_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+282,"target_state_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+976,"target_state_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+977,"delay_state_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+160,"addr_col_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 12,0);
    tracep->declBus(c+161,"addr_row_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 12,0);
    tracep->declBus(c+162,"addr_bank_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1285,"DELAY_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+978,"delay_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+283,"delay_r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1302,"REFRESH_CNT_W",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+979,"refresh_timer_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 16,0);
    tracep->declBus(c+980,"sample_data0_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+981,"sample_data_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+982,"idx",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+983,"rd_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+934,"ack_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declArray(c+984,"dbg_state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+111,"auto_in_psel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+112,"auto_in_penable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"auto_in_pwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+100,"auto_in_paddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 29,0);
    tracep->declBus(c+1246,"auto_in_pprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+95,"auto_in_pwdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"auto_in_pstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+294,"auto_in_pready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"auto_in_pslverr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1227,"auto_in_prdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+924,"spi_bundle_sck",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1196,"spi_bundle_ss",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1197,"spi_bundle_mosi",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1222,"spi_bundle_miso",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1303,"flash_addr_start",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1304,"flash_addr_end",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1305,"spi_ss_num",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+163,"in_paddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+111,"in_psel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+112,"in_penable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1246,"in_pprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+94,"in_pwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+95,"in_pwdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"in_pstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+294,"in_pready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1227,"in_prdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1247,"in_pslverr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+924,"spi_sck",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1196,"spi_ss",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1197,"spi_mosi",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1222,"spi_miso",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+987,"spi_irq_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1306,"spi_addr_start",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1307,"spi_addr_end",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1295,"xip_tx",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1252,"xip_divider",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1291,"xip_ss",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1293,"xip_ctrl_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1292,"xip_ctrl_r",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1294,"xip_rx",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1290,"xip_ss_re",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1297,"wait_en_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+877,"pwdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+878,"paddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+879,"rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+880,"pstrb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1308,"pprot",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+881,"pwrite",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+882,"penable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+883,"psel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+884,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+988,"pready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+164,"fenable",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+165,"fsel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+166,"fwrite",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+167,"spi_check",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+168,"fstrb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+989,"prdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+169,"faddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+170,"fwdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1271,"Tp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1200,"wb_clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"wb_rst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+171,"wb_adr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+170,"wb_dat_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+989,"wb_dat_o",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,"wb_sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+166,"wb_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+165,"wb_stb_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+164,"wb_cyc_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+988,"wb_ack_o",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBit(c+1247,"wb_err_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+987,"wb_int_o",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBus(c+1196,"ss_pad_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+924,"sclk_pad_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1197,"mosi_pad_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1222,"miso_pad_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+990,"divider",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+991,"ctrl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 13,0);
    tracep->declBus(c+992,"ss",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+284,"wb_dat",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declArray(c+993,"rx",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 127,0);
    tracep->declBit(c+997,"rx_negedge",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+998,"tx_negedge",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+999,"char_len",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+1000,"go",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1001,"lsb",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1002,"ie",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1003,"ass",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+172,"spi_divider_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+173,"spi_ctrl_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+174,"spi_tx_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+175,"spi_ss_sel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1004,"tip",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1005,"pos_edge",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1006,"neg_edge",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1007,"last_bit",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1271,"Tp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1200,"clk_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1004,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1000,"go",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1007,"last_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+990,"divider",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBit(c+924,"clk_out",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBit(c+1005,"pos_edge",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBit(c+1006,"neg_edge",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBus(c+1008,"cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBit(c+1009,"cnt_zero",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1010,"cnt_one",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1271,"Tp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1200,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+176,"latch",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+168,"byte_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+999,"len",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declBit(c+1001,"lsb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1000,"go",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1005,"pos_edge",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1006,"neg_edge",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+997,"rx_negedge",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+998,"tx_negedge",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1004,"tip",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBit(c+1007,"last",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+170,"p_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+993,"p_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 127,0);
    tracep->declBit(c+924,"s_clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1222,"s_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1197,"s_out",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBus(c+1011,"cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declArray(c+993,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 127,0);
    tracep->declBus(c+1012,"tx_bit_pos",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1013,"rx_bit_pos",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1014,"rx_clk",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1015,"tx_clk",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+108,"auto_in_psel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+109,"auto_in_penable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"auto_in_pwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+102,"auto_in_paddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 28,0);
    tracep->declBus(c+1246,"auto_in_pprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+95,"auto_in_pwdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"auto_in_pstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+110,"auto_in_pready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"auto_in_pslverr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1226,"auto_in_prdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1220,"uart_rx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1221,"uart_tx",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+108,"in_psel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+109,"in_penable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1246,"in_pprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+110,"in_pready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"in_pslverr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+141,"in_paddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+94,"in_pwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1226,"in_prdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+95,"in_pwdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"in_pstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1220,"uart_rx",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1221,"uart_tx",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1016,"rtsn",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"ctsn",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1017,"dtr_pad_o",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"dsr_pad_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"ri_pad_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"dcd_pad_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1018,"interrupt",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+177,"reg_we",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+178,"reg_re",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+179,"reg_adr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+180,"reg_dat8_w",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+885,"reg_dat8_w_reg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+285,"reg_dat8_r",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1019,"rts_internal",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1200,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"wb_rst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+179,"wb_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+181,"wb_dat_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+285,"wb_dat_o",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+177,"wb_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+178,"wb_re_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1221,"stx_pad_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1220,"srx_pad_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1297,"modem_inputs",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1019,"rts_pad_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1017,"dtr_pad_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1018,"int_o",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBit(c+1020,"enable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1021,"srx_pad",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1022,"ier",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1023,"iir",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1024,"fcr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+1025,"mcr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1026,"lcr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+1027,"msr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+1028,"dl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+1029,"scratch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+1030,"start_dlc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1031,"lsr_mask_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1032,"msi_reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1033,"dlc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+1034,"trigger_level",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+1035,"rx_reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1036,"tx_reset",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1037,"dlab",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1255,"cts_pad_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"dsr_pad_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"ri_pad_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"dcd_pad_i",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1038,"loopback",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"cts",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1255,"dsr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1255,"ri",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1255,"dcd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1039,"cts_c",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1040,"dsr_c",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1041,"ri_c",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1042,"dcd_c",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1043,"lsr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1044,"lsr0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1045,"lsr1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1046,"lsr2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1047,"lsr3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1048,"lsr4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1049,"lsr5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1050,"lsr6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1051,"lsr7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1052,"lsr0r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1053,"lsr1r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1054,"lsr2r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1055,"lsr3r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1056,"lsr4r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1057,"lsr5r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1058,"lsr6r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1059,"lsr7r",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+286,"lsr_mask",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1060,"rls_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1061,"rda_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1062,"ti_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1063,"thre_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1064,"ms_int",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1065,"tf_push",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1066,"rf_pop",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1236,"rf_data_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 10,0);
    tracep->declBit(c+1067,"rf_error_bit",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1045,"rf_overrun",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1068,"rf_push_pulse",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1069,"rf_count",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1070,"tf_count",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1071,"tstate",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1072,"rstate",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1073,"counter_t",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBit(c+1074,"thre_set_en",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1075,"block_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+1076,"block_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+1077,"serial_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1078,"serial_in",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+287,"lsr_mask_condition",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+288,"iir_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+289,"msr_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+290,"fifo_read",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+291,"fifo_write",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1079,"delayed_modem_signals",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+1080,"lsr0_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1081,"lsr1_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1082,"lsr2_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1083,"lsr3_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1084,"lsr4_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1085,"lsr5_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1086,"lsr6_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1087,"lsr7_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1088,"rls_int_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1089,"thre_int_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1090,"ms_int_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1091,"ti_int_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1092,"rda_int_d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1093,"rls_int_rise",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1094,"thre_int_rise",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1095,"ms_int_rise",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1096,"ti_int_rise",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1097,"rda_int_rise",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1098,"rls_int_pnd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1099,"rda_int_pnd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1100,"thre_int_pnd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1101,"ms_int_pnd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1102,"ti_int_pnd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1271,"Tp",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1271,"width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1277,"init_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
    tracep->declBit(c+1201,"rst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1200,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"stage1_rst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1255,"stage1_clk_en_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1220,"async_dat_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
    tracep->declBus(c+1021,"sync_dat_o",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->declBus(c+1103,"flop_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1200,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"wb_rst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1026,"lcr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1066,"rf_pop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1078,"srx_pad_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1020,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1035,"rx_reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+286,"lsr_mask",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1073,"counter_t",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+1069,"rf_count",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1236,"rf_data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
    tracep->declBit(c+1045,"rf_overrun",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1067,"rf_error_bit",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1072,"rstate",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+1068,"rf_push_pulse",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1104,"rcounter16",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1105,"rbit_counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+1106,"rshift",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+1107,"rparity",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1108,"rparity_error",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1109,"rframing_error",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1110,"rbit_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1111,"rparity_xor",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1112,"counter_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+1113,"rf_push_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1114,"rf_data_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 10,0);
    tracep->declBit(c+1115,"rf_push",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1116,"break_error",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1117,"rcounter16_eq_7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1118,"rcounter16_eq_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1119,"rcounter16_eq_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1120,"rcounter16_minus_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1257,"sr_idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1295,"sr_rec_start",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1252,"sr_rec_bit",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1291,"sr_rec_parity",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1293,"sr_rec_stop",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1292,"sr_check_parity",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1294,"sr_rec_prepare",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1290,"sr_end_bit",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1297,"sr_ca_lc_parity",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1298,"sr_wait1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1309,"sr_push",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1121,"toc_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+1122,"brc_value",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1310,"fifo_width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1300,"fifo_depth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1285,"fifo_pointer_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1311,"fifo_counter_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1200,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"wb_rst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1068,"push",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1066,"pop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1114,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
    tracep->declBit(c+1035,"fifo_reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+286,"reset_status",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1236,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
    tracep->declBit(c+1045,"overrun",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBus(c+1069,"count",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+1067,"error_bit",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1237,"data8_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1123+i*1,"fifo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 2,0);
    }
    tracep->declBus(c+1139,"top",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1140,"bottom",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1141,"top_plus_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1142,"word0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1143,"word1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1144,"word2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1145,"word3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1146,"word4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1147,"word5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1148,"word6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1149,"word7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1150,"word8",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1151,"word9",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1152,"word10",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1153,"word11",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1154,"word12",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1155,"word13",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1156,"word14",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+1157,"word15",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1285,"addr_width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1305,"data_width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1300,"depth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1200,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1068,"we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1139,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1140,"dpra",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1158,"di",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1237,"dpo",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+886+i*1,"ram",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1200,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"wb_rst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1026,"lcr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1065,"tf_push",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+181,"wb_dat_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1020,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1036,"tx_reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+286,"lsr_mask",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1077,"stx_pad_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1071,"tstate",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+1070,"tf_count",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1159,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1160,"bit_counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+1161,"shift_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBit(c+1162,"stx_o_tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1163,"parity_xor",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1164,"tf_pop",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1165,"bit_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+181,"tf_data_in",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1238,"tf_data_out",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1166,"tf_overrun",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1258,"s_idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1246,"s_send_start",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1312,"s_send_byte",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1313,"s_send_parity",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1275,"s_send_stop",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1314,"s_pop_byte",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1305,"fifo_width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1300,"fifo_depth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1285,"fifo_pointer_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1311,"fifo_counter_w",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1200,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"wb_rst_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1065,"push",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1164,"pop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+181,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1036,"fifo_reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+286,"reset_status",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1238,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1166,"overrun",-1,FST_VD_OUTPUT,FST_VT_SV_BIT, false,-1);
    tracep->declBus(c+1070,"count",-1,FST_VD_OUTPUT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1167,"top",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1168,"bottom",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1169,"top_plus_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1285,"addr_width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1305,"data_width",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1300,"depth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+1200,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1065,"we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1167,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1168,"dpra",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+181,"di",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1238,"dpo",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+902+i*1,"ram",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+99,"auto_in_psel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"auto_in_penable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"auto_in_pwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+100,"auto_in_paddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 29,0);
    tracep->declBus(c+1246,"auto_in_pprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+95,"auto_in_pwdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"auto_in_pstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+44,"auto_in_pready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1248,"auto_in_pslverr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1249,"auto_in_prdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1214,"vga_bundle_r",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1215,"vga_bundle_g",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1216,"vga_bundle_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1217,"vga_bundle_hsync",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1218,"vga_bundle_vsync",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1219,"vga_bundle_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1200,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1201,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+163,"in_paddr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+99,"in_psel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+43,"in_penable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1246,"in_pprot",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+94,"in_pwrite",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+95,"in_pwdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+96,"in_pstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+44,"in_pready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1249,"in_prdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1248,"in_pslverr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1214,"vga_r",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1215,"vga_g",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1216,"vga_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+1217,"vga_hsync",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1218,"vga_vsync",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1219,"vga_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1315,"h_frontporch",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1316,"h_active",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1317,"h_backporch",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1318,"h_total",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1284,"v_frontporch",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1319,"v_active",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1320,"v_backporch",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1321,"v_total",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBit(c+918,"valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+919,"x_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+920,"y_cnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->declBus(c+921,"pwdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+922,"h_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+923,"v_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+924,"sck",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1198,"ss",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1197,"mosi",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1191,"miso",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1257,"s_idle",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1295,"s_r_wait_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1252,"s_r_wait_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1291,"s_r_wait_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1293,"s_r_wait_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1292,"s_r_wait_5",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1294,"s_r_wait_6",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1290,"s_r_wait_7",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1297,"s_w_wait_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1298,"s_w_wait_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1309,"s_w_wait_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1322,"s_w_wait_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1323,"s_w_wait_5",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1324,"s_w_wait_6",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1325,"s_w_wait_7",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1326,"s_w_wait_8",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 3,0);
    tracep->declBus(c+1192,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1193,"spidata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+1194,"outdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+924,"sck",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1199,"ss",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1197,"mosi",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1239,"miso",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1199,"reset",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1185,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+1186,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+1187,"cmd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+1188,"addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+1189,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+1190,"ren",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1240,"rdata",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1241,"raddr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1195,"data_bswap",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+924,"clock",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1190,"valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1187,"cmd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1241,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1240,"data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+182,"sck",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+183,"ce_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1223,"dio",-1,FST_VD_INOUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1258,"SPI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1246,"SPI_READ",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1312,"SPI_WRITE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1313,"QPI",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1275,"QPI_READ",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1314,"QPI_WRITE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+1170,"spi_cmd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+1171,"qpi_cmd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+1172,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+1242,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+1173,"saddr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+1174,"line",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1243,"wr",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+1244,"wline",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1175,"rline",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1245,"pline",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1224,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+925,"cke",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+926,"cs",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+927,"ras",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+928,"cas",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+929,"we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+930,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 12,0);
    tracep->declBus(c+931,"ba",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+932,"dqm",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+933,"dq",-1,FST_VD_INOUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_top(VysyxSoCFull___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_top\n"); );
    // Body
    VysyxSoCFull___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VysyxSoCFull___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_register(VysyxSoCFull___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VysyxSoCFull___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VysyxSoCFull___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VysyxSoCFull___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_top_0\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VysyxSoCFull___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[0]),8);
    bufp->fullCData(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[1]),8);
    bufp->fullCData(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[2]),8);
    bufp->fullCData(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[3]),8);
    bufp->fullCData(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[4]),8);
    bufp->fullCData(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[5]),8);
    bufp->fullCData(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[6]),8);
    bufp->fullCData(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[7]),8);
    bufp->fullCData(oldp+9,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[8]),8);
    bufp->fullCData(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[9]),8);
    bufp->fullCData(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[10]),8);
    bufp->fullCData(oldp+12,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[11]),8);
    bufp->fullCData(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[12]),8);
    bufp->fullCData(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[13]),8);
    bufp->fullCData(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[14]),8);
    bufp->fullCData(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__segs[15]),8);
    bufp->fullBit(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_awvalid));
    bufp->fullBit(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_wvalid));
    bufp->fullBit(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullBit(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+22,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullBit(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid));
    bufp->fullBit(oldp+28,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                               >> 2U))));
    bufp->fullBit(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+30,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                            & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0x1bU)) 
                                      | ((0xcU & (8U 
                                                  ^ 
                                                  (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                         | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x17U)) 
                                            | (1U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0xcU)))))))));
    bufp->fullBit(oldp+31,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                               >> 1U))));
    bufp->fullBit(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+34,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullBit(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullBit(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__io_axi_arvalid_0));
    bufp->fullBit(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__io_axi_arvalid_0));
    bufp->fullBit(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_arvalid));
    bufp->fullBit(oldp+40,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset)))));
    bufp->fullIData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_wbu_io_dnpc),32);
    bufp->fullBit(oldp+42,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+43,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+44,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+45,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullIData(oldp+46,((((0U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready))
                               ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata))
                                   ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata))
                               : 0U)),32);
    bufp->fullBit(oldp+47,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullCData(oldp+48,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                  << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))),2);
    bufp->fullBit(oldp+49,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_slave_arready) 
                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state)))));
    bufp->fullBit(oldp+50,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__xbar__DOT___GEN) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_axi_arvalid))));
    bufp->fullIData(oldp+51,(((0x2000000U == vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr)
                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtimel
                               : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtimeh)),32);
    bufp->fullIData(oldp+52,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                               : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+53,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                    | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                         << 0x1eU) 
                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                            << 0x1cU) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                  << 0x18U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                     << 0x16U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                        << 0x14U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                           << 0x12U) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                              << 0x10U) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                 << 0xeU) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                    << 0xcU) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                       << 0xaU) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                          << 8U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                             << 6U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                       >> (0x1fU & 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                            << 1U)))))),2);
    bufp->fullIData(oldp+54,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                                : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                           : 0U) | 
                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                           ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                  ? 
                                                 (vlSelf->__VdfgTmp_hf132a334__0 
                                                  >> 0x18U)
                                                  : 0U)
                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                               << 0x18U) 
                                              | ((0xff0000U 
                                                  & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                        ? 
                                                       (vlSelf->__VdfgTmp_hf132a334__0 
                                                        >> 0x10U)
                                                        : 0U)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                     << 0x10U)) 
                                                 | ((0xff00U 
                                                     & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                          ? 
                                                         ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                           ? 
                                                          (vlSelf->__VdfgTmp_hf132a334__0 
                                                           >> 8U)
                                                           : 0U)
                                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                            ? vlSelf->__VdfgTmp_hf132a334__0
                                                            : 0U)
                                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                           : 0U)))),32);
    bufp->fullBit(oldp+55,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                               << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                            << 0xeU) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                               << 0xdU) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                  << 0xcU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                     << 0xbU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                        << 0xaU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                           << 9U) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                              << 8U) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                 << 7U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                       << 5U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                          << 4U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                             << 3U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                             >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4))));
    bufp->fullBit(oldp+56,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                    << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                 << 0xeU) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                    << 0xdU) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                       << 0xcU) 
                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                          << 0xbU) 
                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                             << 0xaU) 
                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                << 9U) 
                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                   << 8U) 
                                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                      << 7U) 
                                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                         << 6U) 
                                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                            << 5U) 
                                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                               << 4U) 
                                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                  >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)))));
    bufp->fullBit(oldp+57,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_awvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+58,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                   >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+59,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+60,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+61,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+62,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+63,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+64,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+65,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+66,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+67,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+68,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+69,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+70,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+71,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+72,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+73,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+74,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+75,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+76,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+77,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+78,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+79,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+80,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+81,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+82,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+83,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+84,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                            & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+85,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+86,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+87,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+88,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+89,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+90,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullIData(oldp+91,(((0U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr))
                               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_slave_rdata
                               : ((1U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr))
                                   ? (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_slave_rdata 
                                               >> 8U))
                                   : ((2U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr))
                                       ? (0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_slave_rdata 
                                                   >> 0x10U))
                                       : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_slave_rdata 
                                          >> 0x18U))))),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr),32);
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata),32);
    bufp->fullCData(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+98,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+99,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+100,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),30);
    bufp->fullBit(oldp+101,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+102,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),29);
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable));
    bufp->fullBit(oldp+106,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_3_psel))));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable));
    bufp->fullBit(oldp+110,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel))));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_psel));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_0_penable));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_arvalid));
    bufp->fullIData(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+124,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullIData(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullBit(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullBit(oldp+130,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+131,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullSData(oldp+132,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+134,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+135,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_slave_arready));
    bufp->fullIData(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__io_axi_araddr_0),32);
    bufp->fullIData(oldp+141,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullIData(oldp+142,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+150,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+151,((vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+152,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pwdata) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+153,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullIData(oldp+154,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),24);
    bufp->fullCData(oldp+155,((0xffU & ((IData)(7U) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_rd_w));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+160,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                         >> 1U))),13);
    bufp->fullSData(oldp+161,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+162,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr 
                                     >> 0xaU))),2);
    bufp->fullIData(oldp+163,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),32);
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__fenable));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__fsel));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__fwrite));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_check));
    bufp->fullCData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__fstrb),4);
    bufp->fullIData(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__faddr),32);
    bufp->fullIData(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__fwdata),32);
    bufp->fullCData(oldp+171,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__faddr)),5);
    bufp->fullBit(oldp+172,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__faddr)))));
    bufp->fullBit(oldp+173,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__faddr)))));
    bufp->fullCData(oldp+174,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (0xcU == (0x1cU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__faddr))) 
                                << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                            & (8U == 
                                               (0x1cU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__faddr))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (4U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__faddr))) 
                                            << 1U) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                              & (0U 
                                                 == 
                                                 (0x1cU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__faddr))))))),4);
    bufp->fullBit(oldp+175,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__faddr)))));
    bufp->fullCData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullCData(oldp+179,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_paddr)),3);
    bufp->fullCData(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT___asic_psram_sck));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT___asic_psram_ce_n));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_bready));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_0_rready));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+190,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19),4);
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_bready));
    bufp->fullBit(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_anon_out_2_rready));
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anonIn_awready));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+235,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+236,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+237,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+238,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+239,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+240,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+241,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+242,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+243,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+244,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+245,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+246,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+247,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+248,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+249,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+250,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+251,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+252,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+253,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+254,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+255,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+256,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+257,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+258,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+259,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+260,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+261,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+262,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+263,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+264,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+265,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+266,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                             & ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_ifu_rvalid));
    bufp->fullIData(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_slave_rdata),32);
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___arbiter_io_lsu_rvalid));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___xbar_io_slave_rvalid));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__prepare));
    bufp->fullCData(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__casez_tmp),3);
    bufp->fullCData(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+292,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+293,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullBit(oldp+294,((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state))));
    bufp->fullCData(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullIData(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullCData(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullCData(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+312,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullIData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullCData(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize),3);
    bufp->fullBit(oldp+315,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullIData(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullCData(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullBit(oldp+319,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullCData(oldp+320,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state))
                                ? 2U : 1U)),4);
    bufp->fullCData(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+323,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+324,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+325,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullSData(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullCData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullCData(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullIData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+364,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                               >> 0x24U))
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullQData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullIData(oldp+368,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+371,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+374,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                      ? (vlSelf->__VdfgTmp_hf132a334__0 
                                         >> 0x18U) : 0U)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                << 0x18U) | ((0xff0000U 
                                              & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                    ? 
                                                   (vlSelf->__VdfgTmp_hf132a334__0 
                                                    >> 0x10U)
                                                    : 0U)
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                       ? 
                                                      (vlSelf->__VdfgTmp_hf132a334__0 
                                                       >> 8U)
                                                       : 0U)
                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                        ? vlSelf->__VdfgTmp_hf132a334__0
                                                        : 0U)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
    bufp->fullCData(oldp+375,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+376,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullSData(oldp+385,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+386,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+391,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+435,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullCData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullCData(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+447,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+451,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+455,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+459,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+463,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+467,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+471,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+475,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+479,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+483,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+487,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+491,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+495,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+499,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+503,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+507,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+511,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+515,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+519,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+523,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+527,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+531,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+535,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+539,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+543,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+547,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+551,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+555,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+559,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+563,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+567,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+571,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+575,((1U & ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state)))) 
                                   | (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state))))));
    bufp->fullCData(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_wbu_io_axi_arsize),3);
    bufp->fullBit(oldp+577,((1U & ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__state)))) 
                                   | ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__state)) 
                                      | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__state)))))));
    bufp->fullCData(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arbiter__DOT__state),2);
    bufp->fullIData(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtimel),32);
    bufp->fullIData(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint__DOT__mtimeh),32);
    bufp->fullSData(oldp+581,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__finst 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___csr_io_rdata),32);
    bufp->fullBit(oldp+583,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_exu_io_CsrWr) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__state)))));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__csr__io_ecall));
    bufp->fullIData(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__PC),32);
    bufp->fullIData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                              [0x341U]),32);
    bufp->fullIData(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__csr__DOT__ysyx_23060336_csrs_ext__DOT__Memory
                              [0x305U]),32);
    bufp->fullIData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__finst),32);
    bufp->fullIData(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___reg_io_rdata1),32);
    bufp->fullIData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___reg_io_rdata2),32);
    bufp->fullCData(oldp+591,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__finst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+592,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__finst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+593,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__finst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_exu_io_wstrb),4);
    bufp->fullCData(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_exu_io_RegNum),3);
    bufp->fullBit(oldp+596,((0xffffffffU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT___io_ecall_andMatrixOutputs_T)));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_exu_io_CsrWr));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_exu_io_MemWr));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_exu_io_RegWr));
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_exu_io_MemtoReg));
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_exu_io_ebreak));
    bufp->fullCData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__immNum_invInputs),7);
    bufp->fullCData(oldp+603,((0x1fU & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__finst 
                                           >> 2U)))),5);
    bufp->fullCData(oldp+604,((0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT___GEN)))),8);
    bufp->fullSData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__AluSela_invInputs),15);
    bufp->fullCData(oldp+606,((3U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__finst 
                                        >> 2U)))),2);
    bufp->fullCData(oldp+607,((7U & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__finst 
                                        >> 2U)))),3);
    bufp->fullIData(oldp+608,((0x3fffffffU & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__finst 
                                                 >> 2U)))),30);
    bufp->fullIData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__casez_tmp),32);
    bufp->fullIData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__imm),32);
    bufp->fullCData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__PCMux),4);
    bufp->fullCData(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT____Vcellinp__alu__io_sel),4);
    bufp->fullIData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT____Vcellinp__alu__io_ina),32);
    bufp->fullIData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT____Vcellinp__alu__io_inb),32);
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__cin));
    bufp->fullIData(oldp+616,((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__addsub__DOT___sum_T_1)),32);
    bufp->fullBit(oldp+617,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__addsub__DOT___sum_T_1))));
    bufp->fullBit(oldp+618,((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__addsub__DOT___sum_T_1 
                                           >> 0x20U)))));
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT___addsub_io_overflow));
    bufp->fullIData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__addsub__DOT__t_no_cin),32);
    bufp->fullCData(oldp+621,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT____Vcellinp__alu__io_inb)),5);
    bufp->fullBit(oldp+622,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT____Vcellinp__alu__io_sel))));
    bufp->fullBit(oldp+623,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT____Vcellinp__alu__io_sel) 
                                   >> 1U))));
    bufp->fullIData(oldp+624,(((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                  : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn)
                                      : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)))) 
                                << 0x1fU) | ((((0U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124)))) 
                                              << 0x1eU) 
                                             | ((((0U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124)
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123)))) 
                                                 << 0x1dU) 
                                                | ((((0U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123)
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124)
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123)
                                                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122)))) 
                                                    << 0x1cU) 
                                                   | ((((0U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122)
                                                         : 
                                                        ((1U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123)
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122)
                                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121)))) 
                                                       << 0x1bU) 
                                                      | ((((0U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121)
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122)
                                                             : 
                                                            ((2U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121)
                                                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120)))) 
                                                          << 0x1aU) 
                                                         | ((((0U 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120)
                                                               : 
                                                              ((1U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121)
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120)
                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119)))) 
                                                             << 0x19U) 
                                                            | ((((0U 
                                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119)
                                                                  : 
                                                                 ((1U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120)
                                                                   : 
                                                                  ((2U 
                                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119)
                                                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118)))) 
                                                                << 0x18U) 
                                                               | ((((0U 
                                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118)
                                                                     : 
                                                                    ((1U 
                                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119)
                                                                      : 
                                                                     ((2U 
                                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118)
                                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117)))) 
                                                                   << 0x17U) 
                                                                  | ((((0U 
                                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117)
                                                                        : 
                                                                       ((1U 
                                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118)
                                                                         : 
                                                                        ((2U 
                                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117)
                                                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116)))) 
                                                                      << 0x16U) 
                                                                     | ((((0U 
                                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116)
                                                                           : 
                                                                          ((1U 
                                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117)
                                                                            : 
                                                                           ((2U 
                                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116)
                                                                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115)))) 
                                                                         << 0x15U) 
                                                                        | ((((0U 
                                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115)
                                                                              : 
                                                                             ((1U 
                                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116)
                                                                               : 
                                                                              ((2U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115)
                                                                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114)))) 
                                                                            << 0x14U) 
                                                                           | ((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113)))) 
                                                                               << 0x13U) 
                                                                              | ((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112)))) 
                                                                                << 0x12U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111)))) 
                                                                                << 0x11U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110)))) 
                                                                                << 0x10U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109)))) 
                                                                                << 0xfU) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108)))) 
                                                                                << 0xeU) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107)))) 
                                                                                << 0xdU) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106)))) 
                                                                                << 0xcU) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105)))) 
                                                                                << 0xbU) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104)))) 
                                                                                << 0xaU) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103)))) 
                                                                                << 9U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102)))) 
                                                                                << 8U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101)))) 
                                                                                << 7U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100)))) 
                                                                                << 6U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99)))) 
                                                                                << 5U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98)))) 
                                                                                << 4U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97)))) 
                                                                                << 3U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96)))) 
                                                                                << 2U) 
                                                                                | ((((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96)
                                                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_95)))) 
                                                                                << 1U) 
                                                                                | ((0U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_95)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4)) 
                                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_95)))))))))))))))))))))))))))))))))))),32);
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn));
    bufp->fullCData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel),2);
    bufp->fullCData(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_1),2);
    bufp->fullBit(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp));
    bufp->fullBit(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_0));
    bufp->fullBit(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_1));
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_2));
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_3));
    bufp->fullBit(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_4));
    bufp->fullBit(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_5));
    bufp->fullBit(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_6));
    bufp->fullBit(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_7));
    bufp->fullBit(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_8));
    bufp->fullBit(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_9));
    bufp->fullBit(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_10));
    bufp->fullBit(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_11));
    bufp->fullBit(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_12));
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_13));
    bufp->fullBit(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_14));
    bufp->fullBit(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_15));
    bufp->fullBit(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_16));
    bufp->fullBit(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_17));
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_18));
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_19));
    bufp->fullBit(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_20));
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_21));
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_22));
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_23));
    bufp->fullBit(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_24));
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_25));
    bufp->fullBit(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_26));
    bufp->fullBit(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_27));
    bufp->fullBit(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_28));
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_29));
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_30));
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_2),2);
    bufp->fullBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_31));
    bufp->fullBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_32));
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_33));
    bufp->fullBit(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_34));
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_35));
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_36));
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_37));
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_38));
    bufp->fullBit(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_39));
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_40));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_41));
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_42));
    bufp->fullBit(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_43));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_44));
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_45));
    bufp->fullBit(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_46));
    bufp->fullBit(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_47));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_48));
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_49));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_50));
    bufp->fullBit(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_51));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_52));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_53));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_54));
    bufp->fullBit(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_55));
    bufp->fullBit(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_56));
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_57));
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_58));
    bufp->fullBit(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_59));
    bufp->fullBit(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_60));
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_61));
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_62));
    bufp->fullCData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_3),2);
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_63));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_64));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_65));
    bufp->fullBit(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_66));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_67));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_68));
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_69));
    bufp->fullBit(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_70));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_71));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_72));
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_73));
    bufp->fullBit(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_74));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_75));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_76));
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_77));
    bufp->fullBit(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_78));
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_79));
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_80));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_81));
    bufp->fullBit(oldp+713,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_82));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_83));
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_84));
    bufp->fullBit(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_85));
    bufp->fullBit(oldp+717,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_86));
    bufp->fullBit(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_87));
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_88));
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_89));
    bufp->fullBit(oldp+721,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_90));
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_91));
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_92));
    bufp->fullBit(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_93));
    bufp->fullBit(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_94));
    bufp->fullCData(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4),2);
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_95));
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96));
    bufp->fullBit(oldp+729,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97));
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98));
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99));
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100));
    bufp->fullBit(oldp+733,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101));
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102));
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103));
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104));
    bufp->fullBit(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105));
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106));
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107));
    bufp->fullBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108));
    bufp->fullBit(oldp+741,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109));
    bufp->fullBit(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110));
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111));
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112));
    bufp->fullBit(oldp+745,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113));
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114));
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115));
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116));
    bufp->fullBit(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117));
    bufp->fullBit(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118));
    bufp->fullBit(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119));
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120));
    bufp->fullBit(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121));
    bufp->fullBit(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122));
    bufp->fullBit(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123));
    bufp->fullBit(oldp+756,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124));
    bufp->fullBit(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125));
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126));
    bufp->fullBit(oldp+759,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_95))))));
    bufp->fullBit(oldp+760,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_95)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4)) 
                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_95))))));
    bufp->fullBit(oldp+761,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97))))));
    bufp->fullBit(oldp+762,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_97)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_96))))));
    bufp->fullBit(oldp+763,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99))))));
    bufp->fullBit(oldp+764,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_99)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_98))))));
    bufp->fullBit(oldp+765,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101))))));
    bufp->fullBit(oldp+766,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_101)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_100))))));
    bufp->fullBit(oldp+767,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103))))));
    bufp->fullBit(oldp+768,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_103)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_102))))));
    bufp->fullBit(oldp+769,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105))))));
    bufp->fullBit(oldp+770,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_105)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_104))))));
    bufp->fullBit(oldp+771,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107))))));
    bufp->fullBit(oldp+772,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_107)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_106))))));
    bufp->fullBit(oldp+773,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109))))));
    bufp->fullBit(oldp+774,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_109)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_108))))));
    bufp->fullBit(oldp+775,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111))))));
    bufp->fullBit(oldp+776,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_111)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_110))))));
    bufp->fullBit(oldp+777,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113))))));
    bufp->fullBit(oldp+778,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_113)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_112))))));
    bufp->fullBit(oldp+779,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115))))));
    bufp->fullBit(oldp+780,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_115)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_114))))));
    bufp->fullBit(oldp+781,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117))))));
    bufp->fullBit(oldp+782,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_117)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_116))))));
    bufp->fullBit(oldp+783,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119))))));
    bufp->fullBit(oldp+784,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_119)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_118))))));
    bufp->fullBit(oldp+785,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121))))));
    bufp->fullBit(oldp+786,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_121)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_120))))));
    bufp->fullBit(oldp+787,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123))))));
    bufp->fullBit(oldp+788,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_123)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_122))))));
    bufp->fullBit(oldp+789,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__leftIn)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125))))));
    bufp->fullBit(oldp+790,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)
                              : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_126)
                                  : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__io_out_sel_4))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_125)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idu_exu__DOT__alu__DOT__shift__DOT__casez_tmp_124))))));
    bufp->fullBit(oldp+791,((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__state))));
    bufp->fullQData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_count__DOT___ifu_clk_count),64);
    bufp->fullQData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_count__DOT___ifu_psram_clk),64);
    bufp->fullQData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_count__DOT___ifu_flash_clk),64);
    bufp->fullBit(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__io_out_valid_0));
    bufp->fullCData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__state),2);
    bufp->fullIData(oldp+800,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_exu_io_CsrWr)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___csr_io_rdata
                                : (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_exu_io_RegNum)) 
                                    | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_exu_io_RegNum)))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__DataOut
                                    : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_exu_io_RegNum))
                                        ? (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__DataOut)
                                        : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_exu_io_RegNum))
                                            ? (0xffffU 
                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__DataOut)
                                            : ((0U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_exu_io_RegNum))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__DataOut 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__DataOut))
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_exu_io_RegNum))
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__DataOut 
                                                                    >> 0xfU)))) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__DataOut))
                                                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__DataOut))))))),32);
    bufp->fullBit(oldp+801,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_exu_io_RegWr) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__state)))));
    bufp->fullIData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__rdata),32);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__state),3);
    bufp->fullIData(oldp+804,(((0U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr))
                                ? (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___reg_io_rdata2)
                                : ((1U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr))
                                    ? (0xff00U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___reg_io_rdata2 
                                                  << 8U))
                                    : ((2U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr))
                                        ? (0xff0000U 
                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___reg_io_rdata2 
                                              << 0x10U))
                                        : (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___reg_io_rdata2 
                                           << 0x18U))))),32);
    bufp->fullCData(oldp+805,((0xfU & ((0U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_exu_io_wstrb)
                                        : ((1U == (3U 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr))
                                            ? (0xeU 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_exu_io_wstrb) 
                                                  << 1U))
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr))
                                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_exu_io_wstrb) 
                                                   << 2U)
                                                : (8U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_exu_io_wstrb) 
                                                      << 3U))))))),4);
    bufp->fullIData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__DataOut),32);
    bufp->fullIData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__ebreak__DOT__i_clk),32);
    bufp->fullIData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__ebreak__DOT__s_clk),32);
    bufp->fullIData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__ebreak__DOT__u_clk),32);
    bufp->fullIData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__ebreak__DOT__b_clk),32);
    bufp->fullIData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__ebreak__DOT__r_clk),32);
    bufp->fullIData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__ebreak__DOT__j_clk),32);
    bufp->fullIData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__ebreak__DOT__c_clk),32);
    bufp->fullIData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__ebreak__DOT__w_clk),32);
    bufp->fullQData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__ebreak__DOT__lsu_clk_count),64);
    bufp->fullQData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__ebreak__DOT__backend_clk),64);
    bufp->fullBit(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__ebreak__DOT__clk_state));
    bufp->fullCData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___lsu_wbu_io_axi_arsize),4);
    bufp->fullIData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory
                              [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__finst 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory
                              [(0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__finst 
                                         >> 0xfU))]),32);
    bufp->fullBit(oldp+823,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_exu_io_RegWr) 
                              & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__state))) 
                             & (0U != (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__finst 
                                                >> 7U))))));
    bufp->fullIData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[0]),32);
    bufp->fullIData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[1]),32);
    bufp->fullIData(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[2]),32);
    bufp->fullIData(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[3]),32);
    bufp->fullIData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[4]),32);
    bufp->fullIData(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[5]),32);
    bufp->fullIData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[6]),32);
    bufp->fullIData(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[7]),32);
    bufp->fullIData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[8]),32);
    bufp->fullIData(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[9]),32);
    bufp->fullIData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[10]),32);
    bufp->fullIData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[11]),32);
    bufp->fullIData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[12]),32);
    bufp->fullIData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[13]),32);
    bufp->fullIData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[14]),32);
    bufp->fullIData(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[15]),32);
    bufp->fullIData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[16]),32);
    bufp->fullIData(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[17]),32);
    bufp->fullIData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[18]),32);
    bufp->fullIData(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[19]),32);
    bufp->fullIData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[20]),32);
    bufp->fullIData(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[21]),32);
    bufp->fullIData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[22]),32);
    bufp->fullIData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[23]),32);
    bufp->fullIData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[24]),32);
    bufp->fullIData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[25]),32);
    bufp->fullIData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[26]),32);
    bufp->fullIData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[27]),32);
    bufp->fullIData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[28]),32);
    bufp->fullIData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[29]),32);
    bufp->fullIData(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[30]),32);
    bufp->fullIData(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__reg_0__DOT__ysyx_23060336_regs_ext__DOT__Memory[31]),32);
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+866,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata))
                                ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata))),32);
    bufp->fullSData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__buffer),10);
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__rdata),8);
    bufp->fullCData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__count),4);
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_sync),3);
    bufp->fullBit(oldp+871,((IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lkeyboard__DOT__mps2__DOT__ps2_clk_sync))))));
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullIData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwdata),32);
    bufp->fullIData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__paddr),32);
    bufp->fullIData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__rdata),32);
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pstrb),4);
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pwrite));
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__penable));
    bufp->fullBit(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__psel));
    bufp->fullCData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__state),4);
    bufp->fullCData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__valid));
    bufp->fullSData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt),10);
    bufp->fullSData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt),10);
    bufp->fullIData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__pwdata),24);
    bufp->fullBit(oldp+922,(((0x90U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt)) 
                             & (0x310U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__x_cnt)))));
    bufp->fullBit(oldp+923,(((0x23U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt)) 
                             & (0x203U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lvga__DOT__mvga__DOT__y_cnt)))));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+926,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+927,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+928,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+929,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+933,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+935,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullIData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__prdata),32);
    bufp->fullSData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__led_data),16);
    bufp->fullSData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__switch_data),16);
    bufp->fullIData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__seg_data),32);
    bufp->fullBit(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lgpio__DOT__mgpio__DOT__pslverr));
    bufp->fullBit(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+943,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                ? 0xeU : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                           ? 0xbU : 
                                          (0xfU & (
                                                   (2U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0x14U)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 0x10U)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 0xcU)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                       >> 8U)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                        ? 
                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                        >> 4U)
                                                        : 
                                                       ((7U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                         : 0U)))))))))),4);
    bufp->fullBit(oldp+944,((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+947,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+948,((0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state),2);
    bufp->fullCData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__counter),8);
    bufp->fullBit(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__q_ce_n));
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__q_sck));
    bufp->fullCData(oldp+953,(((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__counter))
                                ? (1U & (0x35U >> (7U 
                                                   & ((IData)(7U) 
                                                      - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__counter)))))
                                : 0U)),4);
    bufp->fullBit(oldp+954,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__q_ce_n)))));
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+958,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+962,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+964,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+965,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pready));
    bufp->fullIData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__prdata),32);
    bufp->fullSData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+997,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+998,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+999,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+1000,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 8U))));
    bufp->fullBit(oldp+1001,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1002,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1003,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+1007,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+1009,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+1010,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+1012,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                          ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                             - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                          : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                             - (IData)(1U))))),8);
    bufp->fullCData(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+1016,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                       >> 1U)))));
    bufp->fullBit(oldp+1017,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+1019,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 1U))));
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+1037,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                    >> 7U))));
    bufp->fullBit(oldp+1038,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 4U))));
    bufp->fullBit(oldp+1039,((IData)((0x10U != (0x12U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1040,((IData)((0x11U == (0x11U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1041,((IData)((0x14U == (0x14U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1042,((IData)((0x18U == (0x18U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+1043,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                 << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            << 6U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                               << 5U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+1046,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1047,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+1048,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+1067,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [1U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [2U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [3U] 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [4U] 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [5U] 
                                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [6U] 
                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [7U] 
                                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [8U] 
                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [9U] 
                                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [0xaU] 
                                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0xbU] 
                                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0xcU] 
                                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xdU] 
                                                                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU]))))))))))))))))));
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+1074,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+1093,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+1094,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+1095,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+1096,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+1097,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+1116,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+1117,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1118,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1119,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+1120,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                        - (IData)(1U)))),4);
    bufp->fullSData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+1122,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                         >> 2U))),8);
    bufp->fullCData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+1132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+1133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+1134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+1141,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0U]),3);
    bufp->fullCData(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [1U]),3);
    bufp->fullCData(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [2U]),3);
    bufp->fullCData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]),3);
    bufp->fullCData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [4U]),3);
    bufp->fullCData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [5U]),3);
    bufp->fullCData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [6U]),3);
    bufp->fullCData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [7U]),3);
    bufp->fullCData(oldp+1150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [8U]),3);
    bufp->fullCData(oldp+1151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [9U]),3);
    bufp->fullCData(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xaU]),3);
    bufp->fullCData(oldp+1153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xbU]),3);
    bufp->fullCData(oldp+1154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xcU]),3);
    bufp->fullCData(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xdU]),3);
    bufp->fullCData(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xeU]),3);
    bufp->fullCData(oldp+1157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xfU]),3);
    bufp->fullCData(oldp+1158,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                         >> 3U))),8);
    bufp->fullCData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+1161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+1162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+1163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+1164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+1169,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullCData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__psram__DOT__spi_cmd),8);
    bufp->fullCData(oldp+1171,(vlSelf->ysyxSoCFull__DOT__psram__DOT__qpi_cmd),8);
    bufp->fullCData(oldp+1172,(vlSelf->ysyxSoCFull__DOT__psram__DOT__state),3);
    bufp->fullIData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__psram__DOT__saddr),24);
    bufp->fullIData(oldp+1174,(vlSelf->ysyxSoCFull__DOT__psram__DOT__line),32);
    bufp->fullIData(oldp+1175,(vlSelf->ysyxSoCFull__DOT__psram__DOT__rline),32);
    bufp->fullIData(oldp+1176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__ebreak__DOT__ifu_count),32);
    bufp->fullIData(oldp+1177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__ebreak__DOT__i_type_count),32);
    bufp->fullIData(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__ebreak__DOT__s_type_count),32);
    bufp->fullIData(oldp+1179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__ebreak__DOT__u_type_count),32);
    bufp->fullIData(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__ebreak__DOT__b_type_count),32);
    bufp->fullIData(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__ebreak__DOT__r_type_count),32);
    bufp->fullIData(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__ebreak__DOT__j_type_count),32);
    bufp->fullIData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__ebreak__DOT__c_type_count),32);
    bufp->fullIData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__ebreak__DOT__w_type_count),32);
    bufp->fullCData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1186,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1190,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1191,(((0U == (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state)) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__outdata))));
    bufp->fullCData(oldp+1192,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state),4);
    bufp->fullCData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__spidata),8);
    bufp->fullBit(oldp+1194,(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__outdata));
    bufp->fullIData(oldp+1195,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1196,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+1197,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1198,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1199,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullBit(oldp+1200,(vlSelf->clock));
    bufp->fullBit(oldp+1201,(vlSelf->reset));
    bufp->fullSData(oldp+1202,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1203,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1204,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1205,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1206,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1207,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1208,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1209,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1210,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1211,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1212,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1213,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1214,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1215,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1216,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1217,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1218,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1219,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1220,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1221,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1222,((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__state)) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__bitrev__DOT__outdata)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                 | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                      ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                      : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                    >> 0x1fU)))));
    bufp->fullCData(oldp+1223,(vlSelf->ysyxSoCFull__DOT___dio_wire),4);
    bufp->fullBit(oldp+1224,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1225,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel))));
    bufp->fullIData(oldp+1226,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullCData(oldp+1228,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                         << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullCData(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT___idu_exu_io_instType),4);
    bufp->fullIData(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_count__DOT___ifu_flash_count),32);
    bufp->fullIData(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu__DOT__ifu_count__DOT___ifu_psram_count),32);
    bufp->fullIData(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wbu__DOT__ebreak__DOT__lsu_count),32);
    bufp->fullBit(oldp+1233,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullCData(oldp+1234,(((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                 ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                     ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)) 
                                         | ((0x16U 
                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re)))
                                         ? 2U : 3U)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel)
                                         ? 3U : 2U))
                                 : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state))
                                     ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)) 
                                         | ((0x16U 
                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re)))
                                         ? 0U : 1U)
                                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_anon_out_2_psel)
                                         ? 1U : ((9U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__counter))
                                                  ? 2U
                                                  : 0U))))),2);
    bufp->fullBit(oldp+1235,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullSData(oldp+1236,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullBit(oldp+1239,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1240,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1241,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullCData(oldp+1242,(vlSelf->ysyxSoCFull__DOT__psram__DOT__counter),8);
    bufp->fullCData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wr),4);
    bufp->fullIData(oldp+1244,(vlSelf->ysyxSoCFull__DOT__psram__DOT__wline),32);
    bufp->fullIData(oldp+1245,(vlSelf->ysyxSoCFull__DOT___dio_wire),32);
    bufp->fullCData(oldp+1246,(1U),3);
    bufp->fullBit(oldp+1247,(0U));
    bufp->fullBit(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullBit(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullCData(oldp+1252,(2U),4);
    bufp->fullCData(oldp+1253,(0U),8);
    bufp->fullCData(oldp+1254,(1U),2);
    bufp->fullBit(oldp+1255,(1U));
    bufp->fullIData(oldp+1256,(0U),32);
    bufp->fullCData(oldp+1257,(0U),4);
    bufp->fullCData(oldp+1258,(0U),3);
    bufp->fullCData(oldp+1259,(0U),2);
    bufp->fullSData(oldp+1260,(0x305U),12);
    bufp->fullSData(oldp+1261,(0x341U),12);
    bufp->fullSData(oldp+1262,(0x342U),12);
    bufp->fullIData(oldp+1263,(0xbU),32);
    bufp->fullSData(oldp+1264,(0x300U),12);
    bufp->fullIData(oldp+1265,(0x1800U),32);
    bufp->fullSData(oldp+1266,(0xf12U),12);
    bufp->fullIData(oldp+1267,(0x15fdf70U),32);
    bufp->fullSData(oldp+1268,(0xf11U),12);
    bufp->fullIData(oldp+1269,(0x79737978U),32);
    bufp->fullIData(oldp+1270,(0U),32);
    bufp->fullIData(oldp+1271,(1U),32);
    bufp->fullCData(oldp+1272,(2U),2);
    bufp->fullCData(oldp+1273,(3U),2);
    bufp->fullCData(oldp+1274,(0x35U),8);
    bufp->fullCData(oldp+1275,(4U),3);
    bufp->fullBit(oldp+1276,(0U));
    bufp->fullBit(oldp+1277,(1U));
    bufp->fullCData(oldp+1278,(0x15U),8);
    bufp->fullCData(oldp+1279,(0xebU),8);
    bufp->fullCData(oldp+1280,(0x38U),8);
    bufp->fullIData(oldp+1281,(0x64U),32);
    bufp->fullIData(oldp+1282,(0x18U),32);
    bufp->fullIData(oldp+1283,(9U),32);
    bufp->fullIData(oldp+1284,(2U),32);
    bufp->fullIData(oldp+1285,(4U),32);
    bufp->fullIData(oldp+1286,(0xdU),32);
    bufp->fullIData(oldp+1287,(0x2000U),32);
    bufp->fullIData(oldp+1288,(0x2710U),32);
    bufp->fullIData(oldp+1289,(0x30cU),32);
    bufp->fullCData(oldp+1290,(7U),4);
    bufp->fullCData(oldp+1291,(3U),4);
    bufp->fullCData(oldp+1292,(5U),4);
    bufp->fullCData(oldp+1293,(4U),4);
    bufp->fullCData(oldp+1294,(6U),4);
    bufp->fullCData(oldp+1295,(1U),4);
    bufp->fullSData(oldp+1296,(0x21U),13);
    bufp->fullCData(oldp+1297,(8U),4);
    bufp->fullCData(oldp+1298,(9U),4);
    bufp->fullIData(oldp+1299,(0xaU),32);
    bufp->fullIData(oldp+1300,(0x10U),32);
    bufp->fullIData(oldp+1301,(6U),32);
    bufp->fullIData(oldp+1302,(0x11U),32);
    bufp->fullIData(oldp+1303,(0x30000000U),32);
    bufp->fullIData(oldp+1304,(0x3fffffffU),32);
    bufp->fullIData(oldp+1305,(8U),32);
    bufp->fullIData(oldp+1306,(0x10001000U),32);
    bufp->fullIData(oldp+1307,(0x10001fffU),32);
    bufp->fullCData(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__pprot),3);
    bufp->fullCData(oldp+1309,(0xaU),4);
    bufp->fullIData(oldp+1310,(0xbU),32);
    bufp->fullIData(oldp+1311,(5U),32);
    bufp->fullCData(oldp+1312,(2U),3);
    bufp->fullCData(oldp+1313,(3U),3);
    bufp->fullCData(oldp+1314,(5U),3);
    bufp->fullIData(oldp+1315,(0x60U),32);
    bufp->fullIData(oldp+1316,(0x90U),32);
    bufp->fullIData(oldp+1317,(0x310U),32);
    bufp->fullIData(oldp+1318,(0x320U),32);
    bufp->fullIData(oldp+1319,(0x23U),32);
    bufp->fullIData(oldp+1320,(0x203U),32);
    bufp->fullIData(oldp+1321,(0x20dU),32);
    bufp->fullCData(oldp+1322,(0xbU),4);
    bufp->fullCData(oldp+1323,(0xcU),4);
    bufp->fullCData(oldp+1324,(0xdU),4);
    bufp->fullCData(oldp+1325,(0xeU),4);
    bufp->fullCData(oldp+1326,(0xfU),4);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024unit.h"

extern "C" void psram_read(int addr, int* data, int wr);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_psram_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data, IData/*31:0*/ wr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_psram_read_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int data__Vcvt;
    for (size_t data__Vidx = 0; data__Vidx < 1; ++data__Vidx) data__Vcvt = data;
    int wr__Vcvt;
    for (size_t wr__Vidx = 0; wr__Vidx < 1; ++wr__Vidx) wr__Vcvt = wr;
    psram_read(addr__Vcvt, &data__Vcvt, wr__Vcvt);
    data = data__Vcvt;
}

extern "C" void flash_read(int addr, int* data);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    int data__Vcvt;
    flash_read(addr__Vcvt, &data__Vcvt);
    data = data__Vcvt;
}

extern "C" void set_npc_state(int ebreak, int ifu_count, int lsu_count, int i_type_count, int s_type_count, int u_type_count, int b_type_count, int r_type_count, int j_type_count, int c_type_count, int w_type_count, int ifu_clk_count_h, int ifu_clk_count_l, int lsu_clk_count_h, int lsu_clk_count_l, int ifu_psram_clk_h, int ifu_psram_clk_l, int ifu_flash_clk_h, int ifu_flash_clk_l, int i_clk, int s_clk, int u_clk, int b_clk, int r_clk, int j_clk, int c_clk, int w_clk, int backend_clk_h, int backend_clk_l, int ifu_flash_count, int ifu_psram_count);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_set_npc_state_TOP____024unit(IData/*31:0*/ ebreak, IData/*31:0*/ ifu_count, IData/*31:0*/ lsu_count, IData/*31:0*/ i_type_count, IData/*31:0*/ s_type_count, IData/*31:0*/ u_type_count, IData/*31:0*/ b_type_count, IData/*31:0*/ r_type_count, IData/*31:0*/ j_type_count, IData/*31:0*/ c_type_count, IData/*31:0*/ w_type_count, IData/*31:0*/ ifu_clk_count_h, IData/*31:0*/ ifu_clk_count_l, IData/*31:0*/ lsu_clk_count_h, IData/*31:0*/ lsu_clk_count_l, IData/*31:0*/ ifu_psram_clk_h, IData/*31:0*/ ifu_psram_clk_l, IData/*31:0*/ ifu_flash_clk_h, IData/*31:0*/ ifu_flash_clk_l, IData/*31:0*/ i_clk, IData/*31:0*/ s_clk, IData/*31:0*/ u_clk, IData/*31:0*/ b_clk, IData/*31:0*/ r_clk, IData/*31:0*/ j_clk, IData/*31:0*/ c_clk, IData/*31:0*/ w_clk, IData/*31:0*/ backend_clk_h, IData/*31:0*/ backend_clk_l, IData/*31:0*/ ifu_flash_count, IData/*31:0*/ ifu_psram_count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_set_npc_state_TOP____024unit\n"); );
    // Body
    int ebreak__Vcvt;
    for (size_t ebreak__Vidx = 0; ebreak__Vidx < 1; ++ebreak__Vidx) ebreak__Vcvt = ebreak;
    int ifu_count__Vcvt;
    for (size_t ifu_count__Vidx = 0; ifu_count__Vidx < 1; ++ifu_count__Vidx) ifu_count__Vcvt = ifu_count;
    int lsu_count__Vcvt;
    for (size_t lsu_count__Vidx = 0; lsu_count__Vidx < 1; ++lsu_count__Vidx) lsu_count__Vcvt = lsu_count;
    int i_type_count__Vcvt;
    for (size_t i_type_count__Vidx = 0; i_type_count__Vidx < 1; ++i_type_count__Vidx) i_type_count__Vcvt = i_type_count;
    int s_type_count__Vcvt;
    for (size_t s_type_count__Vidx = 0; s_type_count__Vidx < 1; ++s_type_count__Vidx) s_type_count__Vcvt = s_type_count;
    int u_type_count__Vcvt;
    for (size_t u_type_count__Vidx = 0; u_type_count__Vidx < 1; ++u_type_count__Vidx) u_type_count__Vcvt = u_type_count;
    int b_type_count__Vcvt;
    for (size_t b_type_count__Vidx = 0; b_type_count__Vidx < 1; ++b_type_count__Vidx) b_type_count__Vcvt = b_type_count;
    int r_type_count__Vcvt;
    for (size_t r_type_count__Vidx = 0; r_type_count__Vidx < 1; ++r_type_count__Vidx) r_type_count__Vcvt = r_type_count;
    int j_type_count__Vcvt;
    for (size_t j_type_count__Vidx = 0; j_type_count__Vidx < 1; ++j_type_count__Vidx) j_type_count__Vcvt = j_type_count;
    int c_type_count__Vcvt;
    for (size_t c_type_count__Vidx = 0; c_type_count__Vidx < 1; ++c_type_count__Vidx) c_type_count__Vcvt = c_type_count;
    int w_type_count__Vcvt;
    for (size_t w_type_count__Vidx = 0; w_type_count__Vidx < 1; ++w_type_count__Vidx) w_type_count__Vcvt = w_type_count;
    int ifu_clk_count_h__Vcvt;
    for (size_t ifu_clk_count_h__Vidx = 0; ifu_clk_count_h__Vidx < 1; ++ifu_clk_count_h__Vidx) ifu_clk_count_h__Vcvt = ifu_clk_count_h;
    int ifu_clk_count_l__Vcvt;
    for (size_t ifu_clk_count_l__Vidx = 0; ifu_clk_count_l__Vidx < 1; ++ifu_clk_count_l__Vidx) ifu_clk_count_l__Vcvt = ifu_clk_count_l;
    int lsu_clk_count_h__Vcvt;
    for (size_t lsu_clk_count_h__Vidx = 0; lsu_clk_count_h__Vidx < 1; ++lsu_clk_count_h__Vidx) lsu_clk_count_h__Vcvt = lsu_clk_count_h;
    int lsu_clk_count_l__Vcvt;
    for (size_t lsu_clk_count_l__Vidx = 0; lsu_clk_count_l__Vidx < 1; ++lsu_clk_count_l__Vidx) lsu_clk_count_l__Vcvt = lsu_clk_count_l;
    int ifu_psram_clk_h__Vcvt;
    for (size_t ifu_psram_clk_h__Vidx = 0; ifu_psram_clk_h__Vidx < 1; ++ifu_psram_clk_h__Vidx) ifu_psram_clk_h__Vcvt = ifu_psram_clk_h;
    int ifu_psram_clk_l__Vcvt;
    for (size_t ifu_psram_clk_l__Vidx = 0; ifu_psram_clk_l__Vidx < 1; ++ifu_psram_clk_l__Vidx) ifu_psram_clk_l__Vcvt = ifu_psram_clk_l;
    int ifu_flash_clk_h__Vcvt;
    for (size_t ifu_flash_clk_h__Vidx = 0; ifu_flash_clk_h__Vidx < 1; ++ifu_flash_clk_h__Vidx) ifu_flash_clk_h__Vcvt = ifu_flash_clk_h;
    int ifu_flash_clk_l__Vcvt;
    for (size_t ifu_flash_clk_l__Vidx = 0; ifu_flash_clk_l__Vidx < 1; ++ifu_flash_clk_l__Vidx) ifu_flash_clk_l__Vcvt = ifu_flash_clk_l;
    int i_clk__Vcvt;
    for (size_t i_clk__Vidx = 0; i_clk__Vidx < 1; ++i_clk__Vidx) i_clk__Vcvt = i_clk;
    int s_clk__Vcvt;
    for (size_t s_clk__Vidx = 0; s_clk__Vidx < 1; ++s_clk__Vidx) s_clk__Vcvt = s_clk;
    int u_clk__Vcvt;
    for (size_t u_clk__Vidx = 0; u_clk__Vidx < 1; ++u_clk__Vidx) u_clk__Vcvt = u_clk;
    int b_clk__Vcvt;
    for (size_t b_clk__Vidx = 0; b_clk__Vidx < 1; ++b_clk__Vidx) b_clk__Vcvt = b_clk;
    int r_clk__Vcvt;
    for (size_t r_clk__Vidx = 0; r_clk__Vidx < 1; ++r_clk__Vidx) r_clk__Vcvt = r_clk;
    int j_clk__Vcvt;
    for (size_t j_clk__Vidx = 0; j_clk__Vidx < 1; ++j_clk__Vidx) j_clk__Vcvt = j_clk;
    int c_clk__Vcvt;
    for (size_t c_clk__Vidx = 0; c_clk__Vidx < 1; ++c_clk__Vidx) c_clk__Vcvt = c_clk;
    int w_clk__Vcvt;
    for (size_t w_clk__Vidx = 0; w_clk__Vidx < 1; ++w_clk__Vidx) w_clk__Vcvt = w_clk;
    int backend_clk_h__Vcvt;
    for (size_t backend_clk_h__Vidx = 0; backend_clk_h__Vidx < 1; ++backend_clk_h__Vidx) backend_clk_h__Vcvt = backend_clk_h;
    int backend_clk_l__Vcvt;
    for (size_t backend_clk_l__Vidx = 0; backend_clk_l__Vidx < 1; ++backend_clk_l__Vidx) backend_clk_l__Vcvt = backend_clk_l;
    int ifu_flash_count__Vcvt;
    for (size_t ifu_flash_count__Vidx = 0; ifu_flash_count__Vidx < 1; ++ifu_flash_count__Vidx) ifu_flash_count__Vcvt = ifu_flash_count;
    int ifu_psram_count__Vcvt;
    for (size_t ifu_psram_count__Vidx = 0; ifu_psram_count__Vidx < 1; ++ifu_psram_count__Vidx) ifu_psram_count__Vcvt = ifu_psram_count;
    set_npc_state(ebreak__Vcvt, ifu_count__Vcvt, lsu_count__Vcvt, i_type_count__Vcvt, s_type_count__Vcvt, u_type_count__Vcvt, b_type_count__Vcvt, r_type_count__Vcvt, j_type_count__Vcvt, c_type_count__Vcvt, w_type_count__Vcvt, ifu_clk_count_h__Vcvt, ifu_clk_count_l__Vcvt, lsu_clk_count_h__Vcvt, lsu_clk_count_l__Vcvt, ifu_psram_clk_h__Vcvt, ifu_psram_clk_l__Vcvt, ifu_flash_clk_h__Vcvt, ifu_flash_clk_l__Vcvt, i_clk__Vcvt, s_clk__Vcvt, u_clk__Vcvt, b_clk__Vcvt, r_clk__Vcvt, j_clk__Vcvt, c_clk__Vcvt, w_clk__Vcvt, backend_clk_h__Vcvt, backend_clk_l__Vcvt, ifu_flash_count__Vcvt, ifu_psram_count__Vcvt);
}

extern "C" void sram_read(int araddr, int arvalid, int arready, int arsize, int awaddr, int wdata, int awvalid, int awready, int wstrb);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_sram_read_TOP____024unit(IData/*31:0*/ araddr, IData/*31:0*/ arvalid, IData/*31:0*/ arready, IData/*31:0*/ arsize, IData/*31:0*/ awaddr, IData/*31:0*/ wdata, IData/*31:0*/ awvalid, IData/*31:0*/ awready, IData/*31:0*/ wstrb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_sram_read_TOP____024unit\n"); );
    // Body
    int araddr__Vcvt;
    for (size_t araddr__Vidx = 0; araddr__Vidx < 1; ++araddr__Vidx) araddr__Vcvt = araddr;
    int arvalid__Vcvt;
    for (size_t arvalid__Vidx = 0; arvalid__Vidx < 1; ++arvalid__Vidx) arvalid__Vcvt = arvalid;
    int arready__Vcvt;
    for (size_t arready__Vidx = 0; arready__Vidx < 1; ++arready__Vidx) arready__Vcvt = arready;
    int arsize__Vcvt;
    for (size_t arsize__Vidx = 0; arsize__Vidx < 1; ++arsize__Vidx) arsize__Vcvt = arsize;
    int awaddr__Vcvt;
    for (size_t awaddr__Vidx = 0; awaddr__Vidx < 1; ++awaddr__Vidx) awaddr__Vcvt = awaddr;
    int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    int awvalid__Vcvt;
    for (size_t awvalid__Vidx = 0; awvalid__Vidx < 1; ++awvalid__Vidx) awvalid__Vcvt = awvalid;
    int awready__Vcvt;
    for (size_t awready__Vidx = 0; awready__Vidx < 1; ++awready__Vidx) awready__Vcvt = awready;
    int wstrb__Vcvt;
    for (size_t wstrb__Vidx = 0; wstrb__Vidx < 1; ++wstrb__Vidx) wstrb__Vcvt = wstrb;
    sram_read(araddr__Vcvt, arvalid__Vcvt, arready__Vcvt, arsize__Vcvt, awaddr__Vcvt, wdata__Vcvt, awvalid__Vcvt, awready__Vcvt, wstrb__Vcvt);
}

extern "C" int pmem_read(int araddr);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ araddr, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_pmem_read_TOP____024unit\n"); );
    // Body
    int araddr__Vcvt;
    for (size_t araddr__Vidx = 0; araddr__Vidx < 1; ++araddr__Vidx) araddr__Vcvt = araddr;
    int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(araddr__Vcvt);
    pmem_read__Vfuncrtn = pmem_read__Vfuncrtn__Vcvt;
}

extern "C" int pmem_write(int awaddr, int wdata, int wstrb);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ awaddr, IData/*31:0*/ wdata, IData/*31:0*/ wstrb, IData/*31:0*/ &pmem_write__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_pmem_write_TOP____024unit\n"); );
    // Body
    int awaddr__Vcvt;
    for (size_t awaddr__Vidx = 0; awaddr__Vidx < 1; ++awaddr__Vidx) awaddr__Vcvt = awaddr;
    int wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    int wstrb__Vcvt;
    for (size_t wstrb__Vidx = 0; wstrb__Vidx < 1; ++wstrb__Vidx) wstrb__Vcvt = wstrb;
    int pmem_write__Vfuncrtn__Vcvt;
    pmem_write__Vfuncrtn__Vcvt = pmem_write(awaddr__Vcvt, wdata__Vcvt, wstrb__Vcvt);
    pmem_write__Vfuncrtn = pmem_write__Vfuncrtn__Vcvt;
}

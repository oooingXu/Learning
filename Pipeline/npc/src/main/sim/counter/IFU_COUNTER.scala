package npc

import chisel3._
import chisel3.util._

class IFU_COUNTER extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock = Input(Clock())
    val arvalid = Input(Bool())
    val state = Input(UInt(3.W))
    val araddr = Input(UInt(32.W))
  })

  setInline(
    "ifu_counter.sv",
  """ `ifdef VERILATOR
    | import "DPI-C" function void ifu_counter(input int ifu_flash_count, input int ifu_psram_count, input int ifu_clk_count_h, input int ifu_clk_count_l, input int ifu_psram_clk_h, input int ifu_psram_clk_l, input int ifu_flash_clk_h, input int ifu_flash_clk_l, input int ifu_count);
    | `endif
    | module IFU_COUNTER(
    |   input         clock,
    |   input         arvalid,
    |   input  [2:0]  state,
    |   input  [31:0] araddr
    | );
    |
    | `ifdef VERILATOR
    | parameter idle = 0, work = 1;
    |
    | reg [63:0] _ifu_clk_count, _ifu_flash_clk, _ifu_psram_clk;
    | reg [31:0] _ifu_flash_count, _ifu_psram_count, ifu_count;
    | reg ifu_state;
    |
    | always@(posedge clock) begin
    |   ifu_counter(_ifu_flash_count, _ifu_psram_count, _ifu_clk_count[63:32], _ifu_clk_count[31:0], _ifu_psram_clk[63:32], _ifu_psram_clk[31:0], _ifu_flash_clk[63:32], _ifu_flash_clk[31:0], ifu_count);
    | end
    |
    | always@(posedge arvalid) begin
    |   ifu_count++;
    |   if(araddr >= 32'h30000000 && araddr < 32'h32000000) begin
    |     _ifu_flash_count++;
    |   end else if(araddr >= 32'h80000000 && araddr < 32'h80400000) begin
    |     _ifu_psram_count++;
    |   end 
    | end
    | 
    | always@(posedge clock) begin
    |   case(ifu_state)
    |     idle: ifu_state <= arvalid ? work : idle;
    |     work: ifu_state <= state == 2 ? idle : work;
    |   endcase
    | end
    |
    | always@(posedge clock) begin
    |   if(ifu_state == work) begin
    |     _ifu_clk_count++;
    |
    |     if(araddr >= 32'h30000000 && araddr < 32'h32000000) begin
    |       _ifu_flash_clk++;
    |     end else if(araddr >= 32'h80000000 && araddr < 32'h80400000) begin
    |       _ifu_psram_clk++;
    |     end 
    |
    |   end
    | end
    | `endif
    |
    | endmodule
  """.stripMargin)
}


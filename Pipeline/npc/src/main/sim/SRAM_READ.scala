package npc

import chisel3._
import chisel3.util._

class SRAM_READ extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock   = Input(Clock())
    val araddr  = Input(UInt(32.W))
    val awaddr  = Input(UInt(32.W))
    val wdata   = Input(UInt(32.W))
    val arsize  = Input(UInt(4.W))
    val wstrb   = Input(UInt(4.W))
    val arvalid = Input(Bool())
    val awvalid = Input(Bool())
    val arready = Input(Bool())
    val awready = Input(Bool())
  })

  setInline(
    "sram_read.sv",
  """`ifdef VERILATOR
    |import "DPI-C" function void sram_read(input int araddr, input int arvalid, input int arready, input int arsize, input int awaddr, input int wdata, input int awvalid, input int awready, input int wstrb);
    | `endif
    | module SRAM_READ(
    |   input clock,
    |   input [31:0] araddr,
    |   input [31:0] awaddr,
    |   input [31:0] wdata,
    |   input [3:0]  arsize,
    |   input [3:0]  wstrb,
    |   input        arready,
    |   input        awready,
    |   input        arvalid,
    |   input        awvalid
    | );
    |
    |`ifdef VERILATOR
    | always@(posedge clock) begin
    |   sram_read(araddr, {31'b0, arvalid}, {31'b0, arready}, {28'b0, arsize}, awaddr, wdata, {31'b0, awvalid}, {31'b0, awready}, {28'b0, wstrb});
    | end
    |`endif
    |
    | endmodule
  """.stripMargin)

}


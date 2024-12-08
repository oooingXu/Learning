package npc

import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline

class IFU extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock    = Input(Clock())
    val halt     = Input(Bool())
    val Maddr    = Input(UInt(32.W))
    val inst     = Output(UInt(32.W))
  })


  setInline(
    "ifu.sv",
    """import "DPI-C" function int pmem_read(input int Maddr);
    | module IFU(
    |   input clock,
    |   input halt,
    |   input [31:0] Maddr,
    |   output reg [31:0] inst
    | );
    |
    | always@(posedge clock) begin
    |   if(!halt) begin
    |     inst <= pmem_read(Maddr);
    |   end else begin
    |     inst <= inst;
    |   end
    | end
    |
    | endmodule
  """.stripMargin)
}

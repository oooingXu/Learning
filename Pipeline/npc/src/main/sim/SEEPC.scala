package npc

import chisel3._
import chisel3.util._

class SEEPC extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock = Input(Clock())
    val valid = Input(Bool())
    val pc    = Input(UInt(32.W))
    val dnpc  = Input(UInt(32.W))
  })

  setInline(
    "seepc.sv",
  """`ifdef VERILATOR
    |import "DPI-C" function void pipeline_state(input int pc, input int dnpc, input int valid);
    |`endif
    | module SEEPC(
    |   input clock,
    |   input valid,
    |   input [31:0] pc,
    |   input [31:0] dnpc
    | );
    | `ifdef VERILATOR
    | always@(posedge clock) begin
    |   pipeline_state(pc, dnpc, {31'b0, valid});
    | end
    |`endif
    |
    | endmodule
  """.stripMargin)
}

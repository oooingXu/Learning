package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_EBREAK extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock             = Input(Clock())
    val ebreak            = Input(Bool())
  })

  setInline(
    "ebreak.sv",
  """`ifdef VERILATOR
    |import "DPI-C" function void set_npc_state(input int ebreak);
    |`endif
    | module ysyx_23060336_EBREAK(
    |   input        clock,
    |   input        ebreak
    | );
    |
    |`ifdef VERILATOR
    |
    | always@(posedge clock) begin
    |   set_npc_state({31'b0, ebreak});
    | end
    |
    |`endif
    |
    | endmodule
  """.stripMargin)
}


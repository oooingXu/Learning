package npc

import chisel3._
import chisel3.util._

class WBU_COUNTER extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock             = Input(Clock())
    val state             = Input(UInt(3.W))
  })

  setInline(
    "wbu_counter.sv",
  """`ifdef VERILATOR
    |import "DPI-C" function void wbu_counter(input int wbu_clk_h, input int wbu_clk_l);
    |`endif
    | module WBU_COUNTER(
    |   input        clock,
    |   input [2:0]  state
    | );
    |
    |`ifdef VERILATOR
    | parameter idle = 0, work = 1;
    |
    | reg [63:0] wbu_clk;
    | reg        wbu_state = idle;
    |
    | wire in_valid;
    |
    | assign in_valid = state == 1;
    |
    | always@(posedge clock) begin
    |   case(wbu_state)
    |     idle: wbu_state <= state == 1 ? work : idle;
    |     work: wbu_state <= state == 0 ? idle : work;
    |   endcase
    | end
    |
    | always@(posedge clock) begin 
    |   if(wbu_state == work) begin
    |     wbu_clk++;
    |   end
    | end
    |
    | always@(posedge clock) begin
    |   wbu_counter(wbu_clk[63:32], wbu_clk[31:0]);
    | end
    |`endif
    |
    | endmodule
  """.stripMargin)
}


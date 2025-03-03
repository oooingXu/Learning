package npc

import chisel3._
import chisel3.util._

class EXU_COUNTER extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock = Input(Clock())
    val state = Input(UInt(1.W))
    val isRAW_control = Input(Bool())
  })

  setInline(
    "exu_counter.sv",
  """ `ifdef VERILATOR
    | import "DPI-C" function void exu_counter(input int exu_clk_h, input int exu_clk_l, input int raw_control_clk_h, input int raw_control_clk_l, input int branch_pre_fail);
    | `endif
    | module EXU_COUNTER(
    |   input clock,
    |   input state,
    |   input isRAW_control
    | );
    |
    | `ifdef VERILATOR
    | reg [63:0] exu_clk, raw_control_clk;
    | reg [31:0] branch_pre_fail;
    |
    | always@(posedge isRAW_control) begin
    |   branch_pre_fail++;
    | end
    |
    | always@(posedge clock) begin
    |   exu_counter(exu_clk[63:32], exu_clk[31:0], raw_control_clk[63:32], raw_control_clk[31:0], branch_pre_fail);    
    | end
    |
    | always@(posedge clock) begin
    |   if(isRAW_control) begin
    |     raw_control_clk++;
    |   end 
    | end
    |
    | always@(posedge clock) begin
    |   if(state == 1) begin
    |     exu_clk++;
    |   end
    | end
    | `endif
    |
    | endmodule
  """.stripMargin)
}


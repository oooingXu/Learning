package npc

import chisel3._
import chisel3.util._

class IDU_COUNTER extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock = Input(Clock())
    val state = Input(UInt(1.W))
    val isRAW_data = Input(Bool())
  })

  setInline(
    "idu_counter.sv",
  """ `ifdef VERILATOR
    | import "DPI-C" function void idu_counter(input int idu_clk_h, input int idu_clk_l, input int raw_data_clk_h, input int raw_data_clk_l);
    | `endif
    | module IDU_COUNTER(
    |   input clock,
    |   input state,
    |   input isRAW_data
    | );
    |
    | `ifdef VERILATOR
    | reg [63:0] idu_clk, raw_data_clk;
    |
    | always@(posedge clock) begin
    |   idu_counter(idu_clk[63:32], idu_clk[31:0], raw_data_clk[63:32], raw_data_clk[31:0]);    
    | end
    |
    | always@(posedge clock) begin
    |   if(isRAW_data) begin
    |     raw_data_clk++;
    |   end 
    | end
    |
    | always@(posedge clock) begin
    |   if(state == 1) begin
    |     idu_clk++;
    |   end
    | end
    | `endif
    |
    | endmodule
  """.stripMargin)
}


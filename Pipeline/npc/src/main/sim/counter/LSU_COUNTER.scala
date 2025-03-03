package npc

import chisel3._
import chisel3.util._

class LSU_COUNTER extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock = Input(Clock())
    val state = Input(UInt(3.W))
  })

  setInline(
    "lsu_counter.sv",
  """ `ifdef VERILATOR
    | import "DPI-C" function void lsu_counter(input int lsu_clk_h, input int lsu_clk_l);
    | `endif
    | module LSU_COUNTER(
    |   input       clock,
    |   input [2:0] state
    | );
    |
    | `ifdef VERILATOR
    | parameter idle = 0, work = 1;
    |
    | reg [63:0] lsu_clk;
    | reg lsu_state;
    |
    | always@(posedge clock) begin
    |   case(lsu_state)
    |     idle: lsu_state <= state != 0 ? work : idle;
    |     work: lsu_state <= state == 3 ? idle : work;
    |   endcase
    | end
    |
    | always@(posedge clock) begin
    |   lsu_counter(lsu_clk[63:32], lsu_clk[31:0]);    
    | end
    |
    | always@(posedge clock) begin
    |   if(lsu_state == work) begin
    |     lsu_clk++;
    |   end
    | end
    | `endif
    |
    | endmodule
  """.stripMargin)
}


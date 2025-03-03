package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_EBREAK extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock             = Input(Clock())
    val ebreak            = Input(Bool())
    val state             = Input(UInt(3.W))
    val instType          = Input(UInt(4.W))
  })

  setInline(
    "ebreak.sv",
  """`ifdef VERILATOR
    |import "DPI-C" function void set_npc_state(input int ebreak, input int i_type_count, input int s_type_count, input int u_type_count, input int b_type_count, input int r_type_count, input int j_type_count, input int c_type_count, input int w_type_count, input int i_clk, input int s_clk, input int u_clk, input int b_clk, input int r_clk, input int j_clk, input int c_clk, input int w_clk, input int wbu_clk_h, input int wbu_clk_l);
    |`endif
    | module ysyx_23060336_EBREAK(
    |   input        clock,
    |   input        ebreak,
    |   input [2:0]  state,
    |   input [3:0]  instType
    | );
    |
    |`ifdef VERILATOR
    | parameter idle = 0, work = 1;
    |
    | reg [31:0] i_type_count, s_type_count, u_type_count, b_type_count, r_type_count, j_type_count, c_type_count, w_type_count;
    | reg [31:0] i_clk, s_clk, u_clk, b_clk, r_clk, j_clk, c_clk, w_clk;
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
    |
    |     if(instType == 0) i_clk++;
    |     else if(instType == 1) s_clk++;
    |     else if(instType == 2) b_clk++;
    |     else if(instType == 3) u_clk++;
    |     else if(instType == 4) j_clk++;
    |     else if(instType == 5) r_clk++;
    |     else if(instType == 6) c_clk++;
    |     else w_clk++;
    |
    |   end
    | end
    |
    | always@(posedge in_valid) begin
    |   if(instType == 0) i_type_count++;
    |   else if(instType == 1) s_type_count++;
    |   else if(instType == 2) b_type_count++;
    |   else if(instType == 3) u_type_count++;
    |   else if(instType == 4) j_type_count++;
    |   else if(instType == 5) r_type_count++;
    |   else if(instType == 6) c_type_count++;
    |   else w_type_count++;
    | end
    |
    | always@(posedge clock) begin
    |   set_npc_state({31'b0, ebreak}, i_type_count, s_type_count, u_type_count, b_type_count, r_type_count, j_type_count, c_type_count, w_type_count, i_clk, s_clk, b_clk, u_clk, j_clk, r_clk, c_clk, w_clk, wbu_clk[63:32], wbu_clk[31:0]);
    | end
    |`endif
    |
    | endmodule
  """.stripMargin)
}


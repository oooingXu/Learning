package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_EBREAK extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock             = Input(Clock())
    val ebreak            = Input(Bool())
    val in_valid          = Input(Bool())
    val out_valid         = Input(Bool())
    val state             = Input(UInt(3.W))
    val instType          = Input(UInt(4.W))
  })

  setInline(
    "ebreak.sv",
  """`ifdef VERILATOR
    |import "DPI-C" function void set_npc_state(input int ebreak, input int i_type_count, input int s_type_count, input int u_type_count, input int b_type_count, input int r_type_count, input int j_type_count, input int c_type_count, input int w_type_count, input int lsu_clk_count_h, input int lsu_clk_count_l, input int i_clk, input int s_clk, input int u_clk, input int b_clk, input int r_clk, input int j_clk, input int c_clk, input int w_clk, input int backend_clk_h, input int backend_clk_l);
    |`endif
    | module ysyx_23060336_EBREAK(
    |   input        clock,
    |   input        ebreak,
    |   input        in_valid,
    |   input        out_valid,
    |   input [2:0]  state,
    |   input [3:0]  instType
    | );
    |
    |`ifdef VERILATOR
    | parameter idle = 0, work = 1;
    |
    | reg [31:0] i_type_count, s_type_count, u_type_count, b_type_count, r_type_count, j_type_count, c_type_count, w_type_count;
    | reg [31:0] i_clk, s_clk, u_clk, b_clk, r_clk, j_clk, c_clk, w_clk;
    | reg [63:0] lsu_clk_count, backend_clk;
    | reg        clk_state = idle;
    |
    | always@(posedge clock) begin
    |   case(clk_state)
    |     idle: clk_state <= in_valid  ? work : idle;
    |     work: clk_state <= out_valid ? idle : work;
    |   endcase
    | end
    |
    | always@(posedge clock) begin 
    |   if(clk_state == work) begin
    |     backend_clk++;
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
    | always@(posedge clock) begin
    |   if(state == 1 || state == 2) begin
    |     lsu_clk_count++;
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
    |   set_npc_state({31'b0, ebreak}, i_type_count, s_type_count, u_type_count, b_type_count, r_type_count, j_type_count, c_type_count, w_type_count, lsu_clk_count[63:32], lsu_clk_count[31:0], i_clk, s_clk, b_clk, u_clk, j_clk, r_clk, c_clk, w_clk, backend_clk[63:32], backend_clk[31:0]);
    | end
    |`endif
    |
    | endmodule
  """.stripMargin)
}


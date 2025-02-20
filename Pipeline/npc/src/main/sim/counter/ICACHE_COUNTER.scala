package npc

import chisel3._
import chisel3.util._

class ICACHE_COUNTER extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock             = Input(Clock())
    val slave_arvalid     = Input(Bool())
    val slave_rvalid      = Input(Bool())
    val master_arvalid    = Input(Bool())
    val master_rvalid     = Input(Bool())
  })

  setInline(
    "icache_counter.sv",
  """ `ifdef VERILATOR
    | import "DPI-C" function void icache_counter(input int icache_count, input int icache_miss_count, input int access_time_h, input int access_time_l, input int miss_penalty_h, input int miss_penalty_l);
    | `endif
    | module ICACHE_COUNTER(
    |   input clock,
    |   input slave_arvalid,
    |   input slave_rvalid,
    |   input master_arvalid,
    |   input master_rvalid
    | );
    |
    | `ifdef VERILATOR
    | parameter idle = 0, access_start = 1, miss = 2, access_end = 3;
    |
    | reg [63:0] _access_time, _miss_penalty;
    | reg [31:0] _icache_count, _icache_miss_count;
    | reg [1:0]  state = idle;
    |
    | always@(posedge slave_arvalid) begin
    |   _icache_count++;
    | end
    |   
    | always@(posedge master_arvalid) begin
    |   _icache_miss_count++;
    | end
    |
    | always@(posedge clock) begin
    |   case(state)
    |     idle         : state <= slave_arvalid ? access_start : idle;
    |     access_start : state <= slave_rvalid  ? access_end   : master_arvalid ? miss : access_start;
    |     miss         : state <= master_rvalid ? access_end   : miss;
    |     access_end   : state <= slave_rvalid  ? idle         : access_end;
    |   endcase
    | end
    |
    | always@(posedge clock) begin
    |   if(state != idle) begin
    |     _access_time++;
    |   end
    |
    |   if(state == miss) begin
    |     _miss_penalty++;
    |   end
    | end
    |
    | always@(posedge clock) begin
    |   icache_counter(_icache_count, _icache_miss_count, _access_time[63:32], _access_time[31:0], _miss_penalty[63:32], _miss_penalty[31:0]);
    | end
    |
    | `endif
    |
    | endmodule
  """.stripMargin)
}
  

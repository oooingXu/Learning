package npc

import chisel3._
import chisel3.util._

class SRAM_READ extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock   = Input(Clock())
    val wbu_sram_data = new WBU_SRAM_DATA()
    val inst = Input(UInt(Base.dataWidth.W))
  })

  setInline(
    "sram_read.sv",
  """`ifdef VERILATOR
    |import "DPI-C" function void sram_read(input int inst, input int araddr, input int arvalid, input int arsize, input int awaddr, input int wdata, input int awvalid, input int wstrb);
    | `endif
    | module SRAM_READ(
    |   input clock,
    |   input [31:0] inst,
    |   input [31:0] wbu_sram_data_araddr,
    |   input [31:0] wbu_sram_data_awaddr,
    |   input [31:0] wbu_sram_data_wdata,
    |   input [3:0]  wbu_sram_data_wstrb,
    |   input [2:0]  wbu_sram_data_arsize,
    |   input        wbu_sram_data_arvalid,
    |   input        wbu_sram_data_awvalid
    | );
    |
    |`ifdef VERILATOR
    | always@(posedge clock) begin
    |   sram_read(inst, wbu_sram_data_araddr, {31'b0, wbu_sram_data_arvalid}, {29'b0, wbu_sram_data_arsize}, wbu_sram_data_awaddr, wbu_sram_data_wdata, {31'b0, wbu_sram_data_awvalid}, {28'b0, wbu_sram_data_wstrb});
    | end
    |`endif
    |
    | endmodule
  """.stripMargin)

}


package npc

import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline

class NPC_SIM extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock = Input(Clock())
    val axi = new ysyx_23060336_AXI4Slave()
  })

  setInline(
    "npc_sim.sv",
  """ //`define CONFIG_NPC
    |import "DPI-C" function int pmem_read(input int araddr);
    |import "DPI-C" function int pmem_write(input int awaddr, int wdata, int wstrb);
    | 
    | module NPC_SIM(
    |   input         clock,
    |   input         axi_wlast,
    |   input         axi_wvalid,
    |   input         axi_bready,
    |   input         axi_rready,
    |   input         axi_awvalid,
    |   input         axi_arvalid,
    |   input  [1:0]  axi_awburst,
    |   input  [1:0]  axi_arburst,
    |   input  [2:0]  axi_awsize,
    |   input  [2:0]  axi_arsize,
    |   input  [3:0]  axi_awid,
    |   input  [3:0]  axi_arid,
    |   input  [3:0]  axi_wstrb,
    |   input  [7:0]  axi_awlen,
    |   input  [7:0]  axi_arlen,
    |   input  [31:0] axi_wdata,
    |   input  [31:0] axi_araddr,
    |   input  [31:0] axi_awaddr,
    |   output        axi_awready,
    |   output        axi_wready,
    |   output        axi_bvalid,
    |   output        axi_arready,
    |   output        axi_rvalid,
    |   output        axi_rlast,
    |   output [1:0]  axi_bresp,
    |   output [3:0]  axi_bid,
    |   output [1:0]  axi_rresp,
    |   output [3:0]  axi_rid,
    |   output [31:0] axi_rdata
    | );
    |
    | `ifdef CONFIG_NPC
    | reg npc_rvalid, npc_bvalid;
    | reg [1:0]  npc_bresp;
    | reg [31:0] npc_rdata;
    |
    | always@(posedge clock) begin
    |   if(axi_arvalid) begin
    |     npc_rvalid <= 1;
    |     npc_rdata  <= pmem_read(axi_araddr);
    |   end else begin
    |     npc_rvalid <= 0;
    |     npc_rdata  <= 0;
    |   end
    |
    |   if(axi_awvalid) begin
    |     npc_bvalid <= 1;
    |     {30'b0, npc_bresp}  <= pmem_write(axi_awaddr, axi_wdata, {28'b0, axi_wstrb});
    |   end else begin
    |     npc_bvalid <= 0;
    |   end
    | end
    |
    | assign axi_rdata   = npc_rdata;
    | assign axi_rvalid  = npc_rvalid;
    | assign axi_bvalid  = npc_bvalid;
    | assign axi_bresp   = npc_bresp;
    | assign axi_arready = 1;
    | assign axi_awready = 1;
    | assign axi_wready  = 1;
    | `endif
    |
    | endmodule
  """.stripMargin)
}

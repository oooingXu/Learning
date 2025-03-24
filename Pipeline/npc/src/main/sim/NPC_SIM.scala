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
  """ `ifdef VERILATOR
    |import "DPI-C" function int pmem_read(input int araddr);
    |import "DPI-C" function int pmem_write(input int awaddr, int wdata, int wstrb);
    | `endif
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
    | `ifdef VERILATOR
    | parameter IDLE = 0, TRANSMISS = 1, ISSUE = 2;
    |
    | reg [1:0] nstate = IDLE;
    | reg [1:0] state  = IDLE;
    |
    | reg npc_rvalid, npc_bvalid, npc_rlast;
    | reg [1:0]  npc_bresp;
    | reg [31:0] npc_rdata;
    | reg [7:0]  npc_arlen;
    | 
    | wire [31:0] npc_araddr;
    |
    | assign npc_araddr = axi_araddr + npc_arlen * 32'd4;
    |
    | always@(posedge clock) begin
    |   state <= nstate;
    | end
    |
    | always@* begin
    |   case(state)
    |     IDLE: nstate = axi_arvalid ? npc_arlen == axi_arlen ? ISSUE : TRANSMISS : IDLE;
    |     TRANSMISS: nstate = npc_arlen == axi_arlen ? ISSUE : TRANSMISS;
    |     ISSUE: nstate = npc_rlast ? IDLE : ISSUE;
    |     default: nstate = IDLE;
    |   endcase
    | end
    |
    | always@(posedge clock) begin
    |   if(state == TRANSMISS && npc_rvalid) begin
    |     npc_arlen <= npc_arlen + 1;
    |   end else if(state == IDLE) begin
    |     npc_arlen <= 0;
    |   end else begin
    |     npc_arlen <= npc_arlen;
    |   end
    | end
    |
    | always@(posedge clock) begin
    |   if(state == TRANSMISS || state == ISSUE) begin
    |     if(axi_rready && !npc_rvalid) begin
    |       npc_rdata <= pmem_read(npc_araddr);
    |       npc_rvalid <= 1;
    |     end else begin
    |       npc_rdata <= 0;
    |       npc_rvalid <= 0;
    |     end
    |   end
    | end
    |
    | always@(posedge clock) begin
    |   if((state == TRANSMISS || state == ISSUE) && (axi_arlen == npc_arlen) && axi_rready && !npc_rlast) begin
    |     npc_rlast <= 1;
    |   end else begin
    |     npc_rlast <= 0;
    |   end
    | end
    |
    | always@(posedge clock) begin
    |   if(axi_awvalid && !npc_bvalid) begin
    |     npc_bvalid <= 1;
    |     {30'b0, npc_bresp}  <= pmem_write(axi_awaddr, axi_wdata, {28'b0, axi_wstrb});
    |   end else begin
    |     npc_bvalid <= 0;
    |   end
    | end
    |
    | assign axi_rdata   = npc_rdata;
    | assign axi_rvalid  = npc_rvalid;
    | assign axi_rlast   = npc_rlast;
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

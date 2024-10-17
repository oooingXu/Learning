package npc

import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline

class ysyx_23060336_vLSU extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock = Input(Clock())
    val reset = Input(Bool())
    val awready = Output(Bool())
    val awvalid = Input(Bool()) 
    val awaddr  = Input(UInt(32.W)) 
    val awid    = Input(UInt(4.W)) 
    val awlen   = Input(UInt(8.W)) 
    val awsize  = Input(UInt(3.W)) 
    val awburst = Input(UInt(2.W)) 
    val wready  = Output(Bool())
    val wvalid  = Input(Bool()) 
    val wdata   = Input(UInt(32.W)) 
    val wstrb   = Input(UInt(4.W)) 
    val wlast   = Input(Bool()) 
    val bready  = Input(Bool()) 
    val bvalid  = Output(Bool())
    val bresp   = Output(UInt(2.W))
    val bid     = Output(UInt(4.W))
    val arready = Output(Bool())
    val arvalid = Input(Bool()) 
    val araddr  = Input(UInt(32.W)) 
    val arid    = Input(UInt(4.W)) 
    val arlen   = Input(UInt(8.W)) 
    val arsize  = Input(UInt(3.W)) 
    val arburst = Input(UInt(2.W)) 
    val rready  = Input(Bool()) 
    val rvalid  = Output(Bool())
    val rresp   = Output(UInt(2.W))
    val rdata   = Output(UInt(32.W))
    val rlast   = Output(Bool())
    val rid     = Output(UInt(4.W))

  })

  setInline(
    "vlsu.sv",
    """//import "DPI-C" function void pmem_write(input int awaddr, input int wdata, input int wstrb); 
    | module ysyx_23060336_vLSU(
    |   input             clock,
    |   input             reset,
    |   output reg        awready,
    |   input             awvalid,
    |   input      [31:0] awaddr,
    |   input      [3:0]  awid,
    |   input      [7:0]  awlen,
    |   input      [2:0]  awsize,
    |   input      [1:0]  awburst,
    |   output reg        wready,
    |   input             wvalid,
    |   input      [31:0] wdata,
    |   input      [3:0]  wstrb,
    |   input             wlast,
    |   input             bready,
    |   output reg        bvalid,
    |   output reg [1:0]  bresp,
    |   output reg [3:0]  bid,
    |   output reg        arready,
    |   input             arvalid,
    |   input      [31:0] araddr,
    |   input      [3:0]  arid,
    |   input      [7:0]  arlen,
    |   input      [2:0]  arsize,
    |   input      [1:0]  arburst,
    |   input             rready,
    |   output reg        rvalid,
    |   output reg [1:0]  rresp,
    |   output reg [31:0] rdata,
    |   output reg        rlast,
    |   output reg [3:0]  rid     
    | );
    |
    | //reg [31:0] data_memory [0:255];
    |
    | always@(posedge clock) begin
    |   if(MemtoReg) begin
    |     ready <= 1'b1;
    |     rdata = pmem_read(araddr);
    |   //  rdata <= data_memory[araddr];
    |   end else begin
    |     rdata <= 32'b0;
    |     ready <= 1'b0;
    |   end
    |   if(MemWr) begin
    |    pmem_write(awaddr, wdata, wstrb);
    |   //  data_memory[awaddr] <= wdata & ~wstrb;
    |   end
    | end
    |
    | endmodule
  """.stripMargin)

}



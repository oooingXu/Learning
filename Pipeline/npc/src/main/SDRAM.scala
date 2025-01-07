package npc

import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline

class ysyx_23060336_SDRAM extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock   = Input(Clock())
    val reset   = Input(Bool())
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
    "sdram.sv",
    """import "DPI-C" function int pmem_write(input int awaddr, input int wdata, input int wstrb); 
    |  import "DPI-C" function int pmem_read(input int araddr);
    | module ysyx_23060336_SDRAM(
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
    | reg  [31:0] resp;
    | reg  [4:0]  RLFSR;
    | reg  [4:0]  WLFSR;
    | wire [31:0] strb;
    |
    | assign awready = 1'b1;
    | assign arready = 1'b1;
    | assign bid     = 4'b1;
    | assign rresp   = 2'b0;
    | assign rlast   = 1'b1;
    | assign rid     = 4'b10;
    | assign bresp   = resp[1:0];
    | assign strb    = {{28{1'b0}},wstrb};
    |
    | always@(posedge clock) begin
    |   if(reset) begin
    |     wready  <= 1'b1;
    |     bvalid  <= 1'b0;
    |     rvalid  <= 1'b0;
    |   end else begin

    |     if(arvalid) begin
    |       if(RLFSR >= 5'b11) begin
    |         RLFSR  <= 5'b0;
    |         rvalid <= 1'b1;
    |         rdata  <= pmem_read(araddr);
    |     //  rdata   <= data_memory[araddr];
    |       end else begin
    |         RLFSR  <= RLFSR + 5'b1;
    |         rdata  <= rdata;
    |         rvalid <= 1'b0;
    |       end
    |     end else begin
    |       RLFSR <= 5'b0;
    |       rvalid <= 1'b0;
    |       rdata <= rdata;
    |     end
    |
    |     if(wvalid) begin
    |       if(WLFSR >= 5'b10010) begin
    |         WLFSR  <= 5'b0;
    |         resp   <= pmem_write(awaddr, wdata, strb);
    |         wready <= 1'b1;
    |     //  data_memory[awaddr] <= wdata;
    |       end else begin
    |         WLFSR  <= WLFSR + 5'b1;
    |         wready <= 1'b0;
    |         resp   <= 32'b10;
    |       end
    |     end else begin
    |       WLFSR  <= 5'b0;
    |       wready <= 1'b0;
    |       resp   <= resp;
    |     end
    |   end
    | end
    |
    | endmodule
  """.stripMargin)

}



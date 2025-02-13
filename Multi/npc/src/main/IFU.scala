package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_IFU extends Module{
  val io = IO(new Bundle{
    val axi             = new ysyx_23060336_AXI4Master()
    val ifu_idle        = Input(Bool())
    val dnpc            = Input(UInt(32.W))
    val inst            = Output(UInt(32.W))
    val pc              = Output(UInt(32.W))
    val ifu_flash_count = Output(UInt(32.W))
    val ifu_psram_count = Output(UInt(32.W))
    val ifu_clk_count   = Output(UInt(64.W))
    val ifu_psram_clk   = Output(UInt(64.W))
    val ifu_flash_clk   = Output(UInt(64.W))
    val out_valid       = Output(Bool())
  })

  def npc   = "h30000000".U
  val PC    = RegInit("h30000000".U(32.W))
  val finst = RegInit(0.U(32.W))

  val s_idle :: s_wait_rvalid :: s_wait_ready :: Nil = Enum(3)
  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle)(List(
    s_idle        -> Mux(io.axi.arready, Mux(io.axi.rvalid, s_wait_ready, s_wait_rvalid), s_idle),
    s_wait_rvalid -> Mux(io.axi.rvalid, s_wait_ready, s_wait_rvalid),
    s_wait_ready  -> Mux(io.ifu_idle, s_idle, s_wait_ready)
  ))

//  io.axi.araddr := Mux(reset.asBool, npc, Mux((state === s_wait_ready) , io.dnpc, PC)) 
  io.axi.araddr := Mux(reset.asBool, npc, Mux((state === s_idle) , PC, io.dnpc)) 

  PC := Mux(reset.asBool, npc,      
        Mux((state === s_wait_ready) && io.ifu_idle, io.dnpc, PC))

  io.axi.awvalid := false.B
  io.axi.awaddr  := 0.U
  io.axi.awid    := "h1".U
  io.axi.awlen   := "h0".U
  io.axi.awsize  := "h3".U
  io.axi.awburst := "h1".U
  io.axi.wvalid  := false.B
  io.axi.wdata   := 0.U
  io.axi.wstrb   := "b11".U
  io.axi.wlast   := false.B
  io.axi.bready  := false.B
  io.axi.arid    := "h1".U
  io.axi.arlen   := "h0".U
  io.axi.arsize  := "h2".U
  io.axi.arburst := "h1".U
  io.axi.rready  := state === s_idle || state === s_wait_rvalid
  io.axi.arvalid := Mux(reset.asBool, false.B, state === s_idle)

  io.out_valid := state === s_wait_ready
  io.inst := finst
  io.pc   := PC

  when(io.axi.rvalid){
    finst := io.axi.rdata
  }

  val ifu_count = Module(new IFU_COUNTER())
  io.ifu_clk_count := ifu_count.io.ifu_clk_count
  ifu_count.io.clock := clock
  ifu_count.io.arvalid := io.axi.arvalid
  ifu_count.io.state := state
  ifu_count.io.araddr:= io.axi.araddr
  io.ifu_flash_count := ifu_count.io.ifu_flash_count
  io.ifu_psram_count := ifu_count.io.ifu_psram_count
  io.ifu_psram_clk := ifu_count.io.ifu_psram_clk
  io.ifu_flash_clk := ifu_count.io.ifu_flash_clk
}

class IFU_COUNTER extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock = Input(Clock())
    val arvalid = Input(Bool())
    val state = Input(UInt(2.W))
    val araddr = Input(UInt(32.W))
    val ifu_flash_count = Output(UInt(32.W))
    val ifu_psram_count = Output(UInt(32.W))
    val ifu_clk_count = Output(UInt(64.W))
    val ifu_psram_clk = Output(UInt(64.W))
    val ifu_flash_clk = Output(UInt(64.W))
  })

  setInline(
    "IFU_COUNTER.sv",
  """
    | module IFU_COUNTER(
    |   input         clock,
    |   input         arvalid,
    |   input  [1:0]  state,
    |   input  [31:0] araddr,
    |   output [31:0] ifu_flash_count,
    |   output [31:0] ifu_psram_count,
    |   output [63:0] ifu_flash_clk,
    |   output [63:0] ifu_psram_clk,
    |   output [63:0] ifu_clk_count
    | );
    |
    | `ifdef VERILATOR
    | reg [63:0] _ifu_clk_count, _ifu_flash_clk, _ifu_psram_clk;
    | reg [31:0] _ifu_flash_count, _ifu_psram_count;
    |
    | assign ifu_clk_count = _ifu_clk_count;
    | assign ifu_psram_clk = _ifu_psram_clk;
    | assign ifu_flash_clk = _ifu_flash_clk;
    | assign ifu_flash_count = _ifu_flash_count;
    | assign ifu_psram_count = _ifu_psram_count;
    |
    | always@(posedge arvalid) begin
    |   if(araddr >= 32'h30000000 && araddr < 32'h32000000) begin
    |     _ifu_flash_count++;
    |   end else if(araddr >= 32'h80000000 && araddr < 32'h80400000) begin
    |     _ifu_psram_count++;
    |   end 
    | end
    | 
    |
    | always@(posedge clock) begin
    |   if(state == 1) begin
    |     _ifu_clk_count++;
    |
    |     if(araddr >= 32'h30000000 && araddr < 32'h32000000) begin
    |       _ifu_flash_clk++;
    |     end else if(araddr >= 32'h80000000 && araddr < 32'h80400000) begin
    |       _ifu_psram_clk++;
    |     end 
    |
    |   end
    | end
    | `endif
    |
    | endmodule
  """.stripMargin)
}


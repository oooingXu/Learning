package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_IFU extends Module{
  val io = IO(new Bundle{
    val in_valid = Input(Bool())
    val empty    = Input(Bool())
    val dnpc     = Input(UInt(32.W))
    val inst     = Output(UInt(32.W))
    val pc       = Output(UInt(32.W))
    val out_valid= Output(Bool())
    val axi      = new ysyx_23060336_AXI4Master()
  })

  def npc = "h80000000".U
  val PC = RegInit(npc)
  val ifuarvalid = Module(new ysyx_23060336_IFUARVALID())
  val arvalid = Wire(Bool())

  val s_idle :: s_wait_ready :: Nil = Enum(2)
  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle)(List(
    s_idle       -> Mux(io.axi.rvalid, s_wait_ready, s_idle),
    s_wait_ready -> Mux(io.in_valid, s_idle, s_wait_ready)
  ))

  io.axi.araddr := Mux(reset.asBool, npc, 
                   Mux((state === s_wait_ready) && io.in_valid, io.dnpc, PC))

  PC := Mux(reset.asBool, npc,      
        Mux((state === s_wait_ready) && io.in_valid, io.dnpc, PC))

  ifuarvalid.io.in_valid := io.in_valid
  ifuarvalid.io.axi_rvalid := io.axi.rvalid
  ifuarvalid.io.empty := io.empty
  arvalid := ifuarvalid.io.out_arvalid

  io.axi.awvalid := false.B
  io.axi.awaddr  := 0.U
  io.axi.awid    := "h1".U
  io.axi.awlen   := "h0".U
  io.axi.awsize  := "h3".U
  io.axi.awburst := "h1".U
  io.axi.wvalid  := false.B
  io.axi.wdata   := 0.U
  io.axi.wstrb   := "b11".U
  io.axi.wlast   := true.B
  io.axi.bready  := false.B
  io.axi.arid    := "h1".U
  io.axi.arlen   := "h0".U
  io.axi.arsize  := "h2".U
  io.axi.arburst := "h1".U
  io.axi.rready  := true.B
  io.axi.arvalid := Mux(reset.asBool, false.B, arvalid === 1.U)

  io.out_valid := io.axi.rvalid
  io.inst := io.axi.rdata 
  io.pc   := PC
}

class ysyx_23060336_IFUARVALID extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val in_valid = Input(Bool())
    val axi_rvalid = Input(Bool())
    val empty = Input(Bool())
    val out_arvalid = Output(Bool())
  })

  setInline(
    "arvalid.sv",
    """ module ysyx_23060336_IFUARVALID(
      |   input in_valid,
      |   input axi_rvalid,
      |   input empty,
      |   output reg out_arvalid
      | );
      |
      | always@(posedge in_valid or posedge !axi_rvalid or posedge empty) begin
      |   if(in_valid && !axi_rvalid || empty) begin
      |     out_arvalid <= 1'b1;
      |   end else begin
      |     out_arvalid <= 1'b0;
      |   end
      | end
      | 
      | endmodule
    """.stripMargin)
}


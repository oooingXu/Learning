package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_IFUdata extends Bundle {
  val inst = Output(UInt(32.W))
  val pc   = Output(UInt(32.W))
  val halt = Output(Bool())
}

class ysyx_23060336_IFU extends Module{
  val io = IO(new Bundle{
    val halt     = Output(Bool())
    val out      = Decoupled(new ysyx_23060336_IFUdata)
    val inst     = Output(UInt(32.W))
    val pc       = Output(UInt(32.W))
    val dnpc     = Input(UInt(32.W))
    val valid    = Output(Bool())
    val ready    = Output(Bool())
    val axi      = new ysyx_23060336_AXI4Master()
  })

  val f_idle :: f_wait_ready :: Nil = Enum(2)

  def npc = "h80000000".U
  val state = RegInit(f_idle)

  val PC = RegInit(npc)

  state := MuxLookup(state, f_idle)(List(
    f_idle       -> Mux(io.out.valid, f_wait_ready, f_idle),
    f_wait_ready -> Mux(io.out.ready, f_idle, f_wait_ready)
  ))


  PC := Mux(reset.asBool, npc, 
        Mux(!io.out.valid, PC, 
        Mux(io.halt, PC, io.dnpc)))

  io.axi.awvalid := false.B
  io.axi.awaddr  := npc
  io.axi.awid    := "b0001".U
  io.axi.awlen   := "h0".U
  io.axi.awsize  := "h0".U
  io.axi.awburst := "h1".U
  io.axi.wvalid  := false.B
  io.axi.wdata   := npc
  io.axi.wstrb   := false.B
  io.axi.wlast   := true.B
  io.axi.bready  := false.B
  io.axi.arvalid := true.B
  io.axi.araddr  := PC
  io.axi.arid    := "h1".U
  io.axi.arlen   := "h0".U
  io.axi.arsize  := "h0".U
  io.axi.arburst := "h1".U
  io.axi.rready  := true.B

  /*
  val axi4ifu = Module(new ysyx_23060336_AXI4IFU)
  axi4ifu.io.clock := clock
  axi4ifu.io.reset := reset
  axi4ifu.io.Maddr := PC
  io.halt       := axi4ifu.io.halt  
  */

  io.out.valid  := axi4ifu.io.valid &&  axi4ifu.io.ready

  io.out.bits.inst := io.axi.rdata
  io.out.bits.halt := axi4ifu.io.halt
  io.out.bits.pc := PC
  io.valid := io.out.valid
  io.ready := axi4ifu.io.ready
  io.inst := axi4ifu.io.inst

  io.pc   := PC
}


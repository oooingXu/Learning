package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_IFU extends Module{
  val io = IO(new Bundle{
    val ifu_idle = Input(Bool())
    val empty    = Input(Bool())
    val dnpc     = Input(UInt(32.W))
    val inst     = Output(UInt(32.W))
    val pc       = Output(UInt(32.W))
    val out_valid= Output(Bool())
    val axi      = new ysyx_23060336_AXI4Master()
  })

  def npc = "h20000000".U
  val PC = RegInit(npc)
  val finst = RegInit(0.U(32.W))

  val s_idle :: s_wait_rvalid :: s_wait_ready :: Nil = Enum(3)
  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle)(List(
    s_idle        -> Mux(io.axi.arready, Mux(io.axi.rvalid, s_wait_ready, s_wait_rvalid), s_idle),
    s_wait_rvalid -> Mux(io.axi.rvalid, s_wait_ready, s_wait_rvalid),
    s_wait_ready  -> Mux(io.ifu_idle, s_idle, s_wait_ready)
  ))

  io.axi.araddr := Mux(reset.asBool, npc, Mux((state === s_wait_ready) , io.dnpc, PC)) 

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
  //io.inst := Mux(io.axi.rvalid, io.axi.rdata, finst)
  io.inst := finst
  io.pc   := PC

  when(io.axi.rvalid){
    finst := io.axi.rdata
  }
}


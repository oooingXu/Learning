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
  io.axi.arvalid := io.in_valid || io.empty

  io.out_valid := io.axi.rvalid
  //io.inst := Mux(io.axi.rvalid, io.axi.rdata, "b00000000000000000000000000010011".U)
  io.inst := io.axi.rdata 
  io.pc   := PC
}


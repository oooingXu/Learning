package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_IFU extends Module{
  val io = IO(new Bundle{
    val out_valid= Input(Bool())
    val dnpc     = Input(UInt(32.W))
    val inst     = Output(UInt(32.W))
    val pc       = Output(UInt(32.W))
    val axi      = new ysyx_23060336_AXI4Master()
  })

  def npc = "h80000000".U
  val PC = RegInit(npc)

  io.axi.araddr  := Mux(reset.asBool, npc, 
                    Mux(!io.out_valid, PC, io.dnpc))

  PC := Mux(reset.asBool, npc,      
        Mux(!io.out_valid, PC, io.dnpc))

  io.axi.awvalid := false.B
  io.axi.awaddr  := npc
  io.axi.awid    := "h1".U
  io.axi.awlen   := "h0".U
  io.axi.awsize  := "h3".U
  io.axi.awburst := "h1".U
  io.axi.wvalid  := false.B
  io.axi.wdata   := npc
  io.axi.wstrb   := "b11".U
  io.axi.wlast   := true.B
  io.axi.bready  := false.B
  io.axi.arid    := "h1".U
  io.axi.arlen   := "h0".U
  io.axi.arsize  := "h2".U
  io.axi.arburst := "h1".U
  io.axi.rready  := io.out_valid
  io.axi.arvalid := Mux(reset.asBool, false.B, io.out_valid)

  io.inst := io.axi.rdata 
  io.pc   := PC
}


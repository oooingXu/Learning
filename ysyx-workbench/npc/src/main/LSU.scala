package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_LSUdata extends Bundle{
  val DataOut  = Output(UInt(32.W))
  val result   = Output(UInt(32.W))
  val csr      = Output(UInt(12.W))
  val Csr      = Output(UInt(32.W))
  val rd       = Output(UInt(5.W))
  val RegNum   = Output(UInt(3.W))
  val CsrWr    = Output(Bool())
  val RegWr    = Output(Bool())
}

class ysyx_23060336_LSU extends Module{
  val io = IO(new Bundle{
    val out      = Decoupled(new ysyx_23060336_LSUdata)
    val in       = Flipped(Decoupled(new ysyx_23060336_EXUdata))
    val valid    = Output(Bool())
    val ready    = Output(Bool())
    val axi      = new ysyx_23060336_AXI4Master()
  })

  val l_idle :: l_wait_ready :: Nil = Enum(2)
  val state = RegInit(l_idle)

  state := MuxLookup(state, l_idle)(List(
    l_idle       -> Mux(io.out.valid, l_wait_ready, l_idle),
    l_wait_ready -> Mux(io.out.ready, l_idle, l_wait_ready)
  ))

  io.out.valid := true.B 
  io.in.ready  := (io.axi.rvalid && io.in.bits.MemtoReg) || ~io.in.bits.MemtoReg

  io.out.bits.result   := io.in.bits.result    
  io.out.bits.csr      := io.in.bits.csr
  io.out.bits.Csr      := io.in.bits.Csr
  io.out.bits.rd       := io.in.bits.rd
  io.out.bits.RegNum   := io.in.bits.RegNum  
  io.out.bits.CsrWr    := io.in.bits.CsrWr
  io.out.bits.RegWr    := io.in.bits.RegWr   
  io.out.bits.DataOut  := Mux(io.in.bits.MemtoReg, io.axi.rdata, io.in.bits.result)

  // AXI4
  io.axi.awvalid := io.in.bits.MemWr && ~io.in.bits.halt
  io.axi.awaddr  := io.in.bits.result
  io.axi.awid    := "h2".U
  io.axi.awlen   := "h0".U
  io.axi.awsize  := "h0".U
  io.axi.awburst := "h1".U
  io.axi.wvalid  := io.in.bits.MemWr && ~io.in.bits.halt
  io.axi.wdata   := io.in.bits.src2
  io.axi.wstrb   := io.in.bits.MemNum
  io.axi.wlast   := true.B
  io.axi.bready  := true.B
  io.axi.arvalid := io.in.bits.MemtoReg && ~io.in.bits.halt
  io.axi.araddr  := io.in.bits.result
  io.axi.arid    := "h2".U
  io.axi.arlen   := "h0".U
  io.axi.arsize  := "h2".U
  io.axi.arburst := "h1".U
  io.axi.rready  := io.in.bits.MemtoReg && ~io.in.bits.halt

  /*
  val vlsu = Module(new ysyx_23060336_vLSU)
  vlsu.io.clock    := clock
  vlsu.io.Maddr    := io.in.bits.result
  vlsu.io.DataIn   := io.in.bits.src2
  vlsu.io.wmask    := io.in.bits.MemNum
  vlsu.io.MemWr    := io.in.bits.MemWr
  vlsu.io.MemtoReg := io.in.bits.MemtoReg
  io.out.bits.DataOut := Mux(io.in.bits.MemtoReg, vlsu.io.DataOut, io.in.bits.result)

  io.in.ready     := (vlsu.io.ready && io.in.bits.MemtoReg) || ~io.in.bits.MemtoReg
  */

  io.ready  := io.in.ready
  io.valid  := io.out.valid
}



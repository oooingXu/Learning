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
    val lsuMemWr    = Output(Bool())
    val MemtoReg = Output(Bool())
    val wen      = Output(Bool())
    val rdata    = Output(UInt(32.W))
    val axi      = new ysyx_23060336_AXI4Master()
  })

  val l_idle :: l_wait_ready :: Nil = Enum(2)
  val state  = RegInit(l_idle)

  val delay1 = RegInit(0.U(1.W))
  val delay2 = RegInit(0.U(1.W))
  val delay  = Wire(Bool())

  val rdatadelay1 = RegInit(0.U(32.W))
  val rdatadelay2 = RegInit(0.U(32.W))
  val rdatadelay  = RegInit(0.U(32.W))

  state := MuxLookup(state, l_idle)(List(
    l_idle       -> Mux(io.out.valid, l_wait_ready, l_idle),
    l_wait_ready -> Mux(io.out.ready, l_idle, l_wait_ready)
  ))

  delay1 := (io.axi.rready && io.axi.rvalid && io.in.bits.MemtoReg) || (io.axi.wvalid && io.axi.wready && io.in.bits.MemWr) 
  delay2 := delay1
  delay  := delay2

  rdatadelay1 := Mux(io.axi.rready && io.axi.rvalid, io.axi.rdata, 0.U)
  rdatadelay2 := rdatadelay1
  rdatadelay  := rdatadelay2

  io.out.valid := delay || ~io.in.bits.MemtoReg
  io.in.ready  := Mux((~io.in.bits.MemtoReg && ~io.in.bits.MemWr), true.B, delay)

  io.out.bits.csr     := io.in.bits.csr
  io.out.bits.Csr     := io.in.bits.Csr
  io.out.bits.rd      := io.in.bits.rd
  io.out.bits.CsrWr   := io.in.bits.CsrWr
  io.out.bits.RegWr   := io.in.bits.RegWr   
  io.out.bits.result  := io.in.bits.result    
  io.out.bits.RegNum  := io.in.bits.RegNum  
  io.out.bits.DataOut := Mux(delay, rdatadelay, io.in.bits.result)

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

  io.MemtoReg := io.in.bits.MemtoReg
  io.lsuMemWr := io.in.bits.MemWr
  io.wen      := io.in.bits.MemtoReg || io.in.bits.MemWr
  io.rdata    := Mux(io.axi.rready && io.axi.rvalid, io.axi.rdata, 0.U)
  io.ready    := io.in.ready
  io.valid  := io.out.valid
}



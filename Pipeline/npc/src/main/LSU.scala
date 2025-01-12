package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_LSUdata extends Bundle{
  val pc       = Output(UInt(32.W))
  val DataOut  = Output(UInt(32.W))
  val result   = Output(UInt(32.W))
  val csr      = Output(UInt(12.W))
  val Csr      = Output(UInt(32.W))
  val rd       = Output(UInt(5.W))
  val RegNum   = Output(UInt(3.W))
  val CsrWr    = Output(Bool())
  val RegWr    = Output(Bool())
  val ebreak   = Output(Bool())
}

class ysyx_23060336_LSU extends Module{
  val io = IO(new Bundle{
    val out      = Decoupled(new ysyx_23060336_LSUdata)
    val in       = Flipped(Decoupled(new ysyx_23060336_EXUdata))
    val valid    = Output(Bool())
    val ready    = Output(Bool())
    val lsuMemWr = Output(Bool())
    val MemtoReg = Output(Bool())
    val wen      = Output(Bool())
    val rd       = Output(UInt(5.W))
    val rdata    = Output(UInt(32.W))
    val pc       = Output(UInt(32.W))
    val axi      = new ysyx_23060336_AXI4Master()
  })

  val l_idle :: l_wait_ready :: Nil = Enum(2)
  val state  = RegInit(l_idle)

  val prepare       = Wire(Bool())

  state := MuxLookup(state, l_idle)(List(
    l_idle       -> Mux(io.out.valid, l_wait_ready, l_idle),
    l_wait_ready -> Mux(io.out.ready, l_idle, l_wait_ready)
  ))

  prepare := (io.axi.rready && io.axi.rvalid) || (io.axi.wvalid && io.axi.wready) 

  io.out.valid := prepare || ~io.in.bits.MemtoReg
  io.in.ready  := Mux((io.in.bits.MemtoReg || io.in.bits.MemWr), prepare, true.B)

  io.out.bits.pc      := io.in.bits.pc
  io.out.bits.csr     := io.in.bits.csr
  io.out.bits.Csr     := io.in.bits.Csr
  io.out.bits.rd      := io.in.bits.rd
  io.out.bits.CsrWr   := io.in.bits.CsrWr
  io.out.bits.RegWr   := io.in.bits.RegWr   
  io.out.bits.result  := io.in.bits.result    
  io.out.bits.RegNum  := io.in.bits.RegNum  
  io.out.bits.ebreak  := io.in.bits.ebreak  
  io.out.bits.DataOut := Mux(prepare, io.axi.rdata, io.in.bits.result)

  // AXI4
  io.axi.awvalid := Mux(reset.asBool, false.B, io.in.bits.MemWr && ~io.in.bits.ebreak)
  io.axi.awaddr  := io.in.bits.result
  io.axi.awid    := "h2".U
  io.axi.awlen   := "h0".U
  io.axi.awsize  := "h0".U
  io.axi.awburst := "h1".U
  io.axi.wvalid  := Mux(reset.asBool, false.B, io.in.bits.MemWr && ~io.in.bits.ebreak)
  io.axi.wdata   := io.in.bits.src2
  io.axi.wstrb   := io.in.bits.MemNum
  io.axi.wlast   := true.B
  io.axi.bready  := true.B
  io.axi.arvalid := Mux(reset.asBool, false.B, io.in.bits.MemtoReg && ~io.in.bits.ebreak)
  io.axi.araddr  := io.in.bits.result
  io.axi.arid    := "h2".U
  io.axi.arlen   := "h0".U
  io.axi.arsize  := "h2".U
  io.axi.arburst := "h1".U
  io.axi.rready  := io.in.bits.MemtoReg && ~io.in.bits.ebreak

  io.pc       := io.in.bits.pc
  io.rd       := io.in.bits.rd
  io.MemtoReg := io.in.bits.MemtoReg
  io.lsuMemWr := io.in.bits.MemWr
  io.wen      := io.in.bits.MemtoReg || io.in.bits.MemWr
  io.rdata    := Mux(io.axi.rready && io.axi.rvalid, io.axi.rdata, 0.U)
  io.ready    := io.in.ready
  io.valid    := io.out.valid
}



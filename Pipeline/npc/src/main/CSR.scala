package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_CSR extends Module{
  val io = IO(new Bundle{
    val raddr   = Input(UInt(12.W))
    val rdata   = Output(UInt(32.W))
    val wen     = Input(Bool())
    val waddr   = Input(UInt(12.W))
    val wdata   = Input(UInt(32.W))
    val ecall   = Input(Bool())
    val mepc_in = Input(UInt(32.W))
    val mepc    = Output(UInt(32.W))
    val mtvec   = Output(UInt(32.W))
    val mcause  = Output(UInt(32.W))
    val mstatus = Output(UInt(32.W))
  })

  val ysyx_23060336_csrs = Mem(4096, UInt(32.W))

  def MTVEC   = "h305".U
  def MEPC    = "h341".U
  def MCAUSE  = "h342".U
  def MSTATUS = "h300".U

  ysyx_23060336_csrs(MSTATUS) := "h1800".U
  ysyx_23060336_csrs(MCAUSE)  := Mux(io.ecall, "hb".U, ysyx_23060336_csrs(MCAUSE))
  ysyx_23060336_csrs(MEPC)    := Mux(io.ecall, io.mepc_in, ysyx_23060336_csrs(MEPC))

  io.rdata   := ysyx_23060336_csrs(io.raddr)
  io.mepc    := ysyx_23060336_csrs(MEPC)
  io.mtvec   := ysyx_23060336_csrs(MTVEC)
  io.mcause  := ysyx_23060336_csrs(MCAUSE)
  io.mstatus := ysyx_23060336_csrs(MSTATUS)

  when(io.wen){
    ysyx_23060336_csrs(io.waddr) := io.wdata
  }
}


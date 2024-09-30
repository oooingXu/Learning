package npc

import chisel3._
import chisel3.util._

class Csr extends Module{
  val io = IO(new Bundle{
    val raddr   = Input(UInt(12.W))
    val rdata   = Output(UInt(32.W))
    val wen     = Input(Bool())
    val waddr   = Input(UInt(12.W))
    val wdata   = Input(UInt(32.W))
    val mepc    = Output(UInt(32.W))
    val mtvec   = Output(UInt(32.W))
    val mcause  = Output(UInt(32.W))
    val mstatus = Output(UInt(32.W))
  })

  val csrs    = Mem(4096, UInt(32.W))
  def MTVEC   = "h305".U
  def MEPC    = "h341".U
  def MCAUSE  = "h342".U
  def MSTATUS = "h300".U

  io.rdata   := csrs(io.raddr)
  io.mepc    := csrs(MEPC)
  io.mtvec   := csrs(MTVEC)
  io.mcause  := csrs(MCAUSE)
  io.mstatus := csrs(MSTATUS)

  when(io.wen){
    csrs(io.waddr) := io.wdata
  }
}


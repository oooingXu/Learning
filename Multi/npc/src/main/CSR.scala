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
  })

  val ysyx_23060336_csrs = Mem(4096, UInt(32.W))

  def MSTATUS = "h300".U
  def MTVEC   = "h305".U
  def MEPC    = "h341".U
  def MCAUSE  = "h342".U

  when(reset.asBool) {
    ysyx_23060336_csrs(MSTATUS) := "h1800".U
  }

  when(io.ecall) {
  ysyx_23060336_csrs(MCAUSE)  := "hb".U
  ysyx_23060336_csrs(MEPC)    := io.mepc_in
  }

  when(io.wen){
    ysyx_23060336_csrs(io.waddr) := io.wdata
  }

  io.rdata   := ysyx_23060336_csrs(io.raddr)
  io.mepc    := ysyx_23060336_csrs(MEPC)
  io.mtvec   := ysyx_23060336_csrs(MTVEC)
}


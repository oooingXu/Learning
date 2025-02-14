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

  val mvendorid = RegInit("h79737978".U(32.W))
  val marchid   = RegInit("h15fdf70".U(32.W))
  val mstatus   = RegInit("h1800".U(32.W))
  val mtvec     = RegInit(0.U(32.W))
  val mepc      = RegInit(0.U(32.W))
  val mcause    = RegInit(0.U(32.W))

  def MVENDORID = "hf11".U
  def MARCHID   = "hf12".U
  def MSTATUS   = "h300".U
  def MTVEC     = "h305".U
  def MEPC      = "h341".U
  def MCAUSE    = "h342".U

  when(io.ecall) {
    mcause := "hb".U
    mepc   := io.mepc_in
  }

  when(io.wen){
    when(io.waddr === MTVEC){
      mtvec := io.wdata
    } .elsewhen(io.waddr === MSTATUS) {
      mstatus := io.wdata
    } .elsewhen(io.waddr === MEPC) {
      mepc := io.wdata
    } .elsewhen(io.waddr === MCAUSE) {
      mcause := io.wdata
    }
  }

  io.rdata := Mux(io.raddr === MEPC, mepc, Mux(io.raddr === MCAUSE, mcause, Mux(io.raddr === MSTATUS, mstatus, Mux(io.raddr === mtvec, MTVEC, 0.U))))
  io.mepc  := mepc
  io.mtvec := mtvec
}


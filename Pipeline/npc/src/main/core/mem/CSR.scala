package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_CSR extends Module{
  val io = IO(new Bundle{
    val csr_idu_data = new CSR_IDU_DATA()
    val csr_wbu_data = new CSR_WBU_DATA()
  })

  def MVENDORID = "hf11".U
  def MARCHID   = "hf12".U
  def MSTATUS   = "h300".U
  def MTVEC     = "h305".U
  def MEPC      = "h341".U
  def MCAUSE    = "h342".U

  val mvendorid = RegInit("h79737978".U(32.W))
  val marchid   = RegInit("h15fdf70".U(32.W))
  val mstatus   = RegInit("h1800".U(32.W))
  val mtvec     = RegInit(0.U(32.W))
  val mepc      = RegInit(0.U(32.W))
  val mcause    = RegInit(0.U(32.W))

  when(io.csr_wbu_data.ecall) {
    mcause := "hb".U
    mepc   := io.csr_wbu_data.mepc
  }

  when(io.csr_wbu_data.wen){
    when(io.csr_wbu_data.waddr === MTVEC){
      mtvec := io.csr_wbu_data.wdata
    } .elsewhen(io.csr_wbu_data.waddr === MSTATUS) {
      mstatus := io.csr_wbu_data.wdata
    } .elsewhen(io.csr_wbu_data.waddr === MEPC) {
      mepc := io.csr_wbu_data.wdata
    } .elsewhen(io.csr_wbu_data.waddr === MCAUSE) {
      mcause := io.csr_wbu_data.wdata
    }
  }

  io.csr_idu_data.mepc    := mepc
  io.csr_idu_data.mtvec   := mtvec
  io.csr_idu_data.csrdata := Mux(io.csr_idu_data.csr === MEPC, mepc, Mux(io.csr_idu_data.csr === MCAUSE, mcause, Mux(io.csr_idu_data.csr === MSTATUS, mstatus, Mux(io.csr_idu_data.csr === mtvec, MTVEC,Mux(io.csr_idu_data.csr === MVENDORID, mvendorid, Mux(io.csr_idu_data.csr === MARCHID, marchid, 0.U))))))
}


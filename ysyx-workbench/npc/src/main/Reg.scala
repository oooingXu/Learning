package

import chisel3._
import chisel3.util._

class Reg extends Module{
  val io = IO(new Bundle{
    val raddr1 = Input(UInt(5.W))
    val raddr2 = Input(UInt(5.W))
    val rdata1 = Output(UInt(32.W))
    val rdata2 = Output(UInt(32.W))
    val wen    = Input(Bool())
    val waddr  = Input(UInt(5.W))
    val wdata  = Input(UInt(32.W))
  })

  val regs = Mem(32,UInt(32.W))

  io.rdata1 := Mux(io.raddr1.orR, regs(io.raddr1), 0.U)
  io.rdata2 := Mux(io.raddr2.orR, regs(io.raddr2), 0.U)

  when(io.wen && io.waddr.orR){
    regs(io.waddr) := io.wdata
  }
}
  

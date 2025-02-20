package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_XBAR extends Module{
  val io = IO(new Bundle{
    val slave  = new ysyx_23060336_AXI4Slave()
    val master = new ysyx_23060336_AXI4Master()
    val clint  = new ysyx_23060336_AXI4Master()
  })

  def CLINT_START = "h02000000".U
  def CLINT_END   = "h0200ffff".U

  io.slave <> io.clint
  io.slave <> io.master

  when(io.slave.araddr >= CLINT_START && io.slave.araddr <= CLINT_END) {
    io.clint.arvalid  := io.slave.arvalid
    io.slave.arready  := io.clint.arready
    io.slave.rvalid   := io.clint.rvalid
    io.slave.rdata    := io.clint.rdata
    io.slave.rresp    := io.clint.rresp
    io.master.arvalid := false.B
  } .otherwise {
    io.master.arvalid := io.slave.arvalid
    io.slave.arready  := io.master.arready
    io.slave.rvalid   := io.master.rvalid
    io.slave.rdata    := io.master.rdata
    io.slave.rresp    := io.master.rresp
    io.clint.arvalid  := false.B
  }

}


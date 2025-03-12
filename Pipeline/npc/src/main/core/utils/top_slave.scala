package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_TOP_SLAVE extends Module {
  val io = IO(new Bundle{
    val slave = new ysyx_23060336_AXI4Slave()
  })

  // top <> slave
  io.slave.awready := false.B
  io.slave.wready  := false.B
  io.slave.bvalid  := false.B
  io.slave.arready := false.B
  io.slave.rvalid  := false.B
  io.slave.bresp   := 0.U
  io.slave.bid     := 0.U
  io.slave.rresp   := 0.U
  io.slave.rdata   := 0.U
  io.slave.rlast   := 0.U
  io.slave.rid     := 0.U
}

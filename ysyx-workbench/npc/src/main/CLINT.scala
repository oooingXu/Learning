package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_CLINT extends Module{
  val io = IO(new Bundle{
    val axi = new ysyx_23060336_AXI4Slave()
  })

  val mtime = RegInit(0.U)

  mtime := mtime + 1.U

  io.axi.awready := false.B;
  io.axi.wready  := false.B;
  io.axi.bvalid  := false.B;
  io.axi.bresp   := 2.U
  io.axi.bid     := 2.U
  io.axi.arready := true.B
  io.axi.vvalid  := true.B
  io.axi.rresp   := 0.U
  io.axi.rdata   := mtime
  io.axi.rlast   := 1.U
  io.axi.rid     := 2.U

}

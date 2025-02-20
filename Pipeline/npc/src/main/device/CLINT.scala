package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_CLINT extends Module{
  val io = IO(new Bundle{
    val axi = new ysyx_23060336_AXI4Slave()
  })

  val mtimel = RegInit(0.U(32.W))
  val mtimeh = RegInit(0.U(32.W))

  when(mtimel === "hFFFFFFFF".U) { // 如果 mtimel 达到最大值
    mtimel := 0.U // 重置 mtimel
    mtimeh := mtimeh + 1.U // 高位加 1
  } 
  
  mtimel := mtimel + 1.U // 低位加 1

  io.axi.awready := false.B;
  io.axi.wready  := false.B;
  io.axi.bvalid  := false.B;
  io.axi.bresp   := 2.U
  io.axi.bid     := 2.U
  io.axi.arready := Mux(reset.asBool, false.B, true.B)
  io.axi.rvalid  := io.axi.arvalid
  io.axi.rresp   := 0.U
  io.axi.rdata   := Mux(io.axi.araddr === "h02000000".U, mtimel, mtimeh)
  io.axi.rlast   := 1.U
  io.axi.rid     := 2.U

}

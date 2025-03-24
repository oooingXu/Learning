package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_CLINT extends Module{
  val io = IO(new Bundle{
    val axi = new ysyx_23060336_AXI4Slave()
  })

  val mtimel = Reg(UInt(Base.dataWidth.W))
  val mtimeh = Reg(UInt(Base.dataWidth.W))
  val araddr = Reg(UInt(Base.dataWidth.W))

  val s_idle :: s_ready :: Nil = Enum(2)
  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle)(List(
    s_idle -> Mux(io.axi.arvalid, s_ready, s_idle),
    s_ready -> Mux(io.axi.rready, s_idle, s_ready)
  ))

  when(mtimel === "hFFFFFFFF".U) { // 如果 mtimel 达到最大值
    mtimel := 0.U // 重置 mtimel
    mtimeh := mtimeh + 1.U // 高位加 1
  } 
  
  mtimel := mtimel + 1.U // 低位加 1
  araddr := io.axi.araddr

  io.axi.awready := false.B;
  io.axi.wready  := false.B;
  io.axi.bvalid  := false.B;
  io.axi.bresp   := 2.U
  io.axi.bid     := 2.U
  io.axi.arready := Mux(reset.asBool, false.B, true.B)
  io.axi.rvalid  := state === s_ready
  io.axi.rresp   := 0.U
  io.axi.rdata   := Mux(state === s_ready, Mux(araddr === "h02000000".U, mtimel, mtimeh), 0.U)
  io.axi.rlast   := state === s_ready
  io.axi.rid     := 2.U

}

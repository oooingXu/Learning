package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_ICACHE_IFU extends Module {
  val io = IO(new Bundle {
    val out = Decoupled(new ICACHE_IFU_LSU_DATA())
    val in  = new ICACHE_IFU_DATA()
  })

  val araddr = RegInit(0.U(32.W))

  val s_idle :: s_wait_ready :: Nil = Enum(2)
  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle)(List(
    s_idle       -> Mux(io.in.arvalid, s_wait_ready, s_idle),
    s_wait_ready -> Mux(io.out.ready, s_idle, s_wait_ready)
  ))

  io.out.valid := state === s_wait_ready

  // icache_ifu <> icache_lsu
  io.out.bits.coherence_output <> io.in.coherence_input
  io.out.bits.araddr  := araddr

  when(io.in.arvalid) {
    araddr := io.in.araddr
  }

  // icache <> icache_ifu
  io.in.arready := state === s_idle

}


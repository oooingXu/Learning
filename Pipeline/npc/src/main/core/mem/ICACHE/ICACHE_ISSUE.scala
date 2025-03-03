package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_ICACHE_ISSUE extends Module {
  val io = IO(new Bundle {
    val in              = Flipped(Decoupled(new ICACHE_LSU_ISSUE_DATA()))
    val icache_out_data = Output(UInt(32.W))
    val icache_issue    = Output(Bool())
    val ifu_rready      = Input(Bool())
  })

  val s_idle :: s_wait_ready :: Nil = Enum(2)
  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle)(List(
    s_idle -> Mux(io.in.valid, s_wait_ready, s_idle),
    s_wait_ready -> Mux(io.ifu_rready, s_idle, s_wait_ready)
  ))

  io.in.ready := state === s_idle

  io.icache_out_data := io.in.bits.icache_out_data
  io.icache_issue := state === s_wait_ready
}


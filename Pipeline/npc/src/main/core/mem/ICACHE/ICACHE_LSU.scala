package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_ICACHE_LSU(m: Int, n: Int) extends Module {
  val io = IO(new Bundle {
    val in = Flipped(Decoupled(new ICACHE_IFU_LSU_DATA()))
    val out = Decoupled(new ICACHE_LSU_ISSUE_DATA())
    val lsu_arbiter = new ICACHE_LSU_ARBITER_DATA()
  })
  val icache = Module(new ysyx_23060336_ICACHE_METADATA(m, n))
  val counter = RegInit(0.U(2.W))
  val maskedaraddr = io.in.bits.araddr & ~(0x0000000f.U(Base.addrWidth.W))
  val araddr = Reg(UInt(Base.addrWidth.W))
  val offset = Wire(UInt(m.W))

  val slave_tag    = io.in.bits.araddr(31, m + n)
  val slave_index  = io.in.bits.araddr(m + n - 1, m)
  val slave_offset = Wire(UInt(m.W))

  val store_tag    = io.in.bits.coherence_output.awaddr(31, m + n)
  val store_index  = io.in.bits.coherence_output.awaddr(m + n - 1, m)
  val store_offset = io.in.bits.araddr(3, 0)

  val fence_i = store_tag === slave_tag && store_index === slave_index
  val hit_miss = slave_tag === icache.io.out_tag && icache.io.out_valid

  val s_idle :: s_judge_addr :: s_sent_request :: s_update_data :: s_wait_ready :: s_wait_indata :: Nil = Enum(6)
  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle)(List(
    s_idle         -> Mux(io.in.valid, s_wait_indata, s_idle),
    s_wait_indata  -> s_judge_addr,
    s_judge_addr   -> Mux(hit_miss, s_wait_ready, s_sent_request),
    s_sent_request -> Mux(io.lsu_arbiter.arready, Mux(io.lsu_arbiter.rvalid, Mux(io.lsu_arbiter.rlast, s_wait_ready, s_update_data), s_update_data), s_sent_request),
    s_update_data  -> Mux(io.lsu_arbiter.rvalid, Mux(io.lsu_arbiter.rlast, s_wait_ready, s_update_data), s_update_data),
    s_wait_ready   -> Mux(io.out.ready, s_idle, s_wait_ready)
  ))

  io.in.ready  := state === s_idle
  io.out.valid := state === s_wait_ready

  // slave
  slave_offset := Mux(state === s_update_data, offset, io.in.bits.araddr(3, 0))

  // maskedaraddr
  if(m == 4) {
    offset := MuxLookup(counter, 0.U)(
      Seq(
        3.U(2.W) ->  "b1100".U,
        2.U(2.W) ->  "b1000".U,
        1.U(2.W) ->  "b0100".U,
        0.U(2.W) ->  "b0000".U
      )
    )
    araddr := maskedaraddr 
    io.lsu_arbiter.arlen := 3.U
  } else {
    offset := io.in.bits.araddr(3, 0)
    araddr := io.in.bits.araddr
    io.lsu_arbiter.arlen := 0.U
  }

  // icache_lsu <> arbiter
  io.lsu_arbiter.arvalid := state === s_sent_request
  io.lsu_arbiter.rready  := state === s_sent_request || state === s_update_data
  io.lsu_arbiter.araddr  := araddr
    
  // icache_lsu <> icache_metadata
  icache.io.in_index  := Mux(io.in.bits.coherence_output.awvalid && fence_i, store_index, slave_index)
  icache.io.in_data   := io.lsu_arbiter.rdata
  icache.io.wen       := (state === s_update_data && io.lsu_arbiter.rvalid) || (io.in.bits.coherence_output.awvalid && fence_i)
  icache.io.in_tag    := Mux(io.in.bits.coherence_output.awvalid && fence_i, store_tag, slave_tag)
  icache.io.in_offset := Mux(io.in.bits.coherence_output.awvalid && fence_i, store_offset, slave_offset)
  icache.io.in_valid  := !(io.in.bits.coherence_output.awvalid && fence_i)

  // icache_lsu <> icache_issue
  io.out.bits.icache_out_data := icache.io.out_data

  // counter
  if(m == 4) {
    when(state === s_wait_ready) {
      counter := 0.U
    } .elsewhen(state === s_update_data && io.lsu_arbiter.rvalid) {
      counter := counter + 1.U
    }
  } else {
    counter := 0.U
  }

}
  

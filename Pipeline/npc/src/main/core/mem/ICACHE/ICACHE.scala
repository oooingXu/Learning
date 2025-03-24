package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_ICACHE(m: Int, n: Int) extends Module{
  val io = IO(new Bundle{
    val master = new ysyx_23060336_AXI4Master()
    val slave  = new ysyx_23060336_AXI4Slave()
    val coherence_input = new COHERENCE_INPUT()
  })

  val icache_ifu = Module(new ysyx_23060336_ICACHE_IFU())
  val icache_lsu = Module(new ysyx_23060336_ICACHE_LSU(m, n))
  val icache_issue = Module(new ysyx_23060336_ICACHE_ISSUE())

  val slave_araddr = Reg(UInt(Base.addrWidth.W))

  // icache pipeline
  def icacheConnect[T <: Data, T2 <: Data](prevOut: DecoupledIO[T], thisIn: DecoupledIO[T]) = {
    prevOut.ready := thisIn.ready
    thisIn.bits   := RegEnable(prevOut.bits, prevOut.valid && thisIn.ready)
    thisIn.valid  := prevOut.valid
  }

  icacheConnect(icache_ifu.io.out, icache_lsu.io.in)
  icacheConnect(icache_lsu.io.out, icache_issue.io.in)

  val sram_start = "h0f000000".U(Base.addrWidth.W)
  val sram_end   = "h10000000".U(Base.addrWidth.W)

  val skip_addr  = io.slave.araddr >= sram_start && io.slave.araddr <= sram_end

  // state machine
  val s_idle :: s_skip :: s_wait_ready :: Nil = Enum(3)
  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle)(List(
    s_idle       -> Mux(io.slave.arvalid, Mux(skip_addr, s_skip, s_wait_ready), s_idle),
    s_skip       -> Mux(io.master.rvalid, s_idle, s_skip),
    s_wait_ready -> Mux(icache_issue.io.icache_issue, s_idle, s_wait_ready)
  ))

  // icache <> arbiter
  io.master <> io.slave

  // ifu <> icache
  io.slave.rdata    := Mux(icache_issue.io.icache_issue, icache_issue.io.icache_out_data, io.master.rdata)
  io.slave.rvalid   := icache_issue.io.icache_issue || (state === s_skip && io.master.rvalid)
  io.slave.arready  := icache_ifu.io.in.arready

  // icache <> icache_ifu
  icache_ifu.io.in.arvalid := io.slave.arvalid && !skip_addr
  icache_ifu.io.in.coherence_input := io.coherence_input
  icache_ifu.io.in.araddr  := io.slave.araddr

  // arbiter <> icache_lsu
  io.master.araddr  := Mux(state === s_skip, slave_araddr, icache_lsu.io.lsu_arbiter.araddr)
  io.master.arvalid := icache_lsu.io.lsu_arbiter.arvalid || (io.slave.arvalid && state === s_skip)
  io.master.rready  := icache_lsu.io.lsu_arbiter.rready || state === s_idle || state === s_skip
  io.master.arlen   := icache_lsu.io.lsu_arbiter.arlen

  icache_lsu.io.lsu_arbiter.rvalid     := io.master.rvalid
  icache_lsu.io.lsu_arbiter.rlast      := io.master.rlast
  icache_lsu.io.lsu_arbiter.rdata      := io.master.rdata
  icache_lsu.io.lsu_arbiter.arready    := io.master.arready
  //icache_lsu.io.lsu_arbiter.ifu_araddr := io.slave.araddr

  slave_araddr := io.slave.araddr

  // icache <> icache_issue
  icache_issue.io.ifu_rready := io.slave.rready

  // icache_counter
  val icache_counter = Module(new ICACHE_COUNTER())
  icache_counter.io.clock          := clock
  icache_counter.io.slave_arvalid  := icache_lsu.io.in.valid
  icache_counter.io.slave_rvalid   := icache_lsu.io.out.valid
  icache_counter.io.master_arvalid := io.master.arvalid
  icache_counter.io.master_rvalid  := io.master.rvalid

}


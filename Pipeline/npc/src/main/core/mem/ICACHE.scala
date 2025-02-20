package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_ICACHE(m: Int, n: Int) extends Module{
  val io = IO(new Bundle{
    val master = new ysyx_23060336_AXI4Master()
    val slave  = new ysyx_23060336_AXI4Slave()
    val awvalid = Input(Bool())
    val awaddr = Input(UInt(32.W))
  })
  
  val icache = Module(new ysyx_23060336_ICACHE_METADATA(m, n))
  val icache_counter = Module(new ICACHE_COUNTER())

  val sram_start = "h0f000000".U(32.W)
  val sram_end   = "h10000000".U(32.W)

  val slave_tag   = Wire(UInt(((1 << (m + 3)) - m - n).W))
  val slave_index = Wire(UInt((1 << n).W))

  val store_tag   = io.awaddr(31, m + n)
  val store_index = io.awaddr(m + n - 1, m)

  val araddr      = RegInit(0.U(32.W))
  val fence_i     = store_tag === slave_tag && store_index === slave_index
  val hit_miss    = slave_tag === icache.io.out_tag && icache.io.out_valid
  val skip_addr   = io.slave.araddr >= sram_start && io.slave.araddr <= sram_end

  val s_idle :: s_judge_addr :: s_sent_request :: s_update_data :: s_sent_rvalid :: s_skip :: Nil = Enum(6)
  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle)(List(
    s_idle         -> Mux(io.slave.arvalid, Mux(skip_addr, s_skip, s_judge_addr), s_idle),
    s_judge_addr   -> Mux(hit_miss, s_sent_rvalid, s_sent_request),
    s_sent_request -> Mux(io.master.arready, Mux(io.master.rvalid, Mux(io.slave.rready, s_idle, s_sent_rvalid), s_update_data), s_sent_request),
    s_update_data  -> Mux(io.master.rvalid, Mux(io.slave.rready, s_idle, s_sent_rvalid), s_update_data),
    s_skip         -> Mux(io.master.rvalid, s_idle, s_skip),
    s_sent_rvalid  -> Mux(io.slave.rready && !io.awvalid, s_idle, s_sent_rvalid)
  ))

  io.master <> io.slave
  io.master.araddr  := Mux(io.master.arvalid, araddr, 0.U)
  io.master.arvalid := state === s_sent_request || (io.slave.arvalid && skip_addr)
  io.master.rready  := state === s_sent_request || state === s_update_data || (io.slave.arvalid && skip_addr) || state === s_skip

  io.slave.arready  := state === s_idle
  io.slave.rdata    := Mux(state === s_sent_rvalid ,icache.io.out_data, io.master.rdata)
  io.slave.rvalid   := Mux((state === s_sent_rvalid && !io.awvalid) || (state === s_skip || state === s_update_data || state === s_sent_request) && io.master.rvalid && io.slave.rready, true.B, false.B)

  slave_tag   := araddr(31, m + n)
  slave_index := araddr(m + n - 1, m)

  icache.io.in_index := Mux(io.awvalid && fence_i, store_index, slave_index)
  icache.io.in_data  := io.master.rdata
  icache.io.wen      := Mux((state === s_update_data && io.master.rvalid) || (io.awvalid && fence_i), true.B, false.B)
  icache.io.in_tag   := Mux(io.awvalid && fence_i, store_tag, slave_tag)
  icache.io.in_valid := Mux(io.awvalid && fence_i, false.B, true.B)

  when(io.slave.arvalid) {
    araddr := io.slave.araddr
  }

  // icache_counter
  icache_counter.io.clock          := clock
  icache_counter.io.slave_arvalid  := io.slave.arvalid
  icache_counter.io.slave_rvalid   := io.slave.rvalid
  icache_counter.io.master_arvalid := io.master.arvalid
  icache_counter.io.master_rvalid  := io.master.rvalid

}

class ysyx_23060336_ICACHE_METADATA(m: Int, n: Int) extends Module{
  val io = IO(new Bundle {
    val wen       = Input(Bool())
    val in_index  = Input(UInt((1 << n).W))
    val in_data   = Input(UInt((1 << (m + 3)).W))
    val in_tag    = Input(UInt(((1 << (m + 3)) - m - n).W))
    val in_valid  = Input(Bool())
    val out_data  = Output(UInt((1 << (m + 3)).W))
    val out_tag   = Output(UInt(((1 << (m + 3)) - m - n).W))
    val out_valid = Output(Bool())
  })

  val ysyx_23060336_tag   = Mem(1 << n, UInt(((1 << (m + 3)) - (m + n)).W))
  val ysyx_23060336_data  = Mem(1 << n, UInt((1 << (m + 3)).W))
  val ysyx_23060336_valid = Mem(1 << n, UInt(1.W))
  
  when(io.wen) {
    ysyx_23060336_tag(io.in_index)   := io.in_tag
    ysyx_23060336_data(io.in_index)  := io.in_data
    ysyx_23060336_valid(io.in_index) := io.in_valid
  }

  io.out_tag   := ysyx_23060336_tag(io.in_index)
  io.out_data  := ysyx_23060336_data(io.in_index)
  io.out_valid := ysyx_23060336_valid(io.in_index)
}


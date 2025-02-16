package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_ICACHE(m: Int, n: Int) extends Module{
  val io = IO(new Bundle{
    val master = new ysyx_23060336_AXI4Master()
    val slave  = new ysyx_23060336_AXI4Slave()
    val icache_count      = Output(UInt(32.W))
    val icache_miss_count = Output(UInt(32.W))
    val access_time       = Output(UInt(64.W))
    val miss_penalty      = Output(UInt(64.W))
  })
  
  val icache = Module(new ysyx_23060336_ICACHE_METADATA(m, n))
  val icache_counter = Module(new ICACHE_COUNTER())

  val sram_start = "h0f000000".U(32.W)
  val sram_end   = "h10000000".U(32.W)

  val slave_tag   = Wire(UInt(((1 << (m + 3)) - m - n).W))
  val slave_index = Wire(UInt((1 << n).W))

  val araddr      = RegInit(0.U(32.W))
  val hit_miss    = slave_tag === icache.io.out_tag && icache.io.out_valid
  val skip_addr   = io.slave.araddr >= sram_start && io.slave.araddr <= sram_end

  val s_idle :: s_judge_addr :: s_sent_request :: s_update_data :: s_sent_rvalid :: s_skip :: Nil = Enum(6)
  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle)(List(
    s_idle         -> Mux(io.slave.arvalid, Mux(skip_addr, s_skip, s_judge_addr), s_idle),
    s_judge_addr   -> Mux(hit_miss, s_sent_rvalid, s_sent_request),
    s_sent_request -> Mux(io.master.arready, s_update_data, s_sent_request),
    s_update_data  -> Mux(io.master.rvalid, s_sent_rvalid, s_update_data),
    s_skip         -> Mux(io.master.rvalid, s_idle, s_skip),
    s_sent_rvalid  -> Mux(io.slave.rready, s_idle, s_sent_rvalid)
  ))

  io.master <> io.slave
  io.master.araddr  := araddr
  io.master.arvalid := state === s_sent_request || (io.slave.arvalid && skip_addr)
  io.master.rready  := state === s_sent_request || state === s_update_data || (io.slave.arvalid && skip_addr) || state === s_skip

  io.slave.arready  := state === s_idle
  io.slave.rdata    := Mux(state === s_sent_rvalid ,icache.io.out_data, io.master.rdata)

  slave_tag   := araddr(31, m + n)
  slave_index := araddr(m + n - 1, m)

  icache.io.in_index := slave_index

  when(io.slave.arvalid) {
    araddr := io.slave.araddr
  }

  when(state === s_update_data && io.master.rvalid) {
    icache.io.in_tag   := slave_tag
    icache.io.in_data  := io.master.rdata
    icache.io.in_valid := true.B
    icache.io.wen      := true.B
  } .otherwise {
    icache.io.in_tag   := slave_tag
    icache.io.in_data  := io.master.rdata
    icache.io.in_valid := true.B
    icache.io.wen      := false.B
  }

  when(state === s_sent_rvalid || (state === s_skip && io.master.rvalid)) {
    io.slave.rvalid := true.B
  } .otherwise {
    io.slave.rvalid := false.B
  }

  // icache_counter
  icache_counter.io.clock          := clock
  icache_counter.io.slave_arvalid  := io.slave.arvalid
  icache_counter.io.slave_rvalid   := io.slave.rvalid
  icache_counter.io.master_arvalid := io.master.arvalid
  icache_counter.io.master_rvalid  := io.master.rvalid
  io.icache_count                  := icache_counter.io.icache_count
  io.icache_miss_count             := icache_counter.io.icache_miss_count
  io.access_time                   := icache_counter.io.access_time
  io.miss_penalty                  := icache_counter.io.miss_penalty

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

class ICACHE_COUNTER extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock             = Input(Clock())
    val slave_arvalid     = Input(Bool())
    val slave_rvalid      = Input(Bool())
    val master_arvalid    = Input(Bool())
    val master_rvalid     = Input(Bool())
    val icache_count      = Output(UInt(32.W))
    val icache_miss_count = Output(UInt(32.W))
    val access_time       = Output(UInt(64.W))
    val miss_penalty      = Output(UInt(64.W))
  })

  setInline(
    "icache_counter.sv",
  """
    | module ICACHE_COUNTER(
    |   input clock,
    |   input slave_arvalid,
    |   input slave_rvalid,
    |   input master_arvalid,
    |   input master_rvalid,
    |   output [31:0] icache_count,
    |   output [31:0] icache_miss_count,
    |   output [63:0] access_time,
    |   output [63:0] miss_penalty
    | );
    |
    | `ifdef VERILATOR
    | parameter idle = 0, access_start = 1, miss = 2, access_end = 3;
    |
    | reg [63:0] _access_time, _miss_penalty;
    | reg [31:0] _icache_count, _icache_miss_count;
    | reg [1:0]  state = idle;
    |
    | assign icache_count = _icache_count;
    | assign icache_miss_count = _icache_miss_count;
    | assign access_time = _access_time;
    | assign miss_penalty = _miss_penalty;
    |
    | always@(posedge slave_arvalid) begin
    |   _icache_count++;
    | end
    |   
    | always@(posedge master_arvalid) begin
    |   _icache_miss_count++;
    | end
    |
    | always@(posedge clock) begin
    |   case(state)
    |     idle         : state <= slave_arvalid ? access_start : idle;
    |     access_start : state <= slave_rvalid  ? access_end   : master_arvalid ? miss : access_start;
    |     miss         : state <= master_rvalid ? access_end   : miss;
    |     access_end   : state <= slave_rvalid  ? idle         : access_end;
    |   endcase
    | end
    |
    | always@(posedge clock) begin
    |   if(state != idle) begin
    |     _access_time++;
    |   end
    |
    |   if(state == miss) begin
    |     _miss_penalty++;
    |   end
    | end
    | `endif
    |
    | endmodule
  """.stripMargin)
}
  

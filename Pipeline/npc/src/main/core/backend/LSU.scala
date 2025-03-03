package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_LSU extends Module{
  val io = IO(new Bundle{
    val axi = new ysyx_23060336_AXI4Master()
    val in  = Flipped(Decoupled(new EXU_LSU_DATA()))
    val out = Decoupled(new LSU_WBU_DATA())
    val lsu_rd = Output(UInt(5.W))
  })

  val sram_read = Module(new SRAM_READ())

  val prepare = Wire(Bool())
  val DataOut = Wire(UInt(32.W))
  val rdata   = Wire(UInt(32.W))

  val wdata_b = Wire(UInt(32.W))
  val wdata_h = Wire(UInt(32.W))
  val wstrb_b = Wire(UInt(4.W))
  val wstrb_h = Wire(UInt(4.W))
  
  val rdata_b = Wire(UInt(32.W))
  val rdata_h = Wire(UInt(32.W))

  val regdata   = RegInit(0.U(32.W))
  val csrdata   = RegInit(0.U(32.W))
  val lsu_count = RegInit(0.U(32.W))
  val lsu_clk_count = RegInit(0.U(64.W))

  val s_idle :: s_wait_rslave :: s_wait_wslave :: s_wait_ready :: s_wait_prepare :: s_wait_sign :: Nil = Enum(6)
  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle)(List(
    s_idle         -> Mux(io.in.valid, s_wait_sign, s_idle),
    s_wait_sign    -> Mux(io.in.bits.lsu.MemtoReg, s_wait_rslave, Mux(io.in.bits.lsu.MemWr, s_wait_wslave, s_wait_ready)),
    s_wait_rslave  -> Mux(io.axi.arready, Mux(io.axi.rvalid, Mux(io.out.ready, s_idle, s_wait_ready), s_wait_prepare), s_wait_rslave),
    s_wait_wslave  -> Mux(io.axi.wready, s_wait_prepare, s_wait_wslave),
    s_wait_prepare -> Mux(prepare, Mux(io.out.ready, s_idle, s_wait_ready), s_wait_prepare),
    s_wait_ready   -> Mux(io.out.ready, s_idle, s_wait_ready)
  ))

  io.in.ready  := state === s_idle
  io.out.valid := state === s_wait_ready || ((state === s_wait_prepare && prepare) || (state === s_wait_rslave && io.axi.arready && io.axi.rvalid) && io.out.ready)

  // rdata
  rdata_h := Mux(io.in.bits.result(1,0) === 2.U, io.axi.rdata >> 16,
             Mux(io.in.bits.result(1,0) === 0.U, io.axi.rdata, 0.U))
  rdata_b := Mux(io.in.bits.result(1,0) === 3.U, io.axi.rdata >> 24,
             Mux(io.in.bits.result(1,0) === 2.U, io.axi.rdata >> 16,
             Mux(io.in.bits.result(1,0) === 1.U, io.axi.rdata >> 8, io.axi.rdata)))

  // wdata
  wdata_h := Mux(io.in.bits.result(1,0) === 2.U, io.in.bits.lsu.src2 << 16, 
             Mux(io.in.bits.result(1,0) === 0.U, io.in.bits.lsu.src2, 0.U))
  wdata_b := Mux(io.in.bits.result(1,0) === "b11".U, Cat(io.in.bits.lsu.src2(7,0), Fill(24, 0.U)),
             Mux(io.in.bits.result(1,0) === "b10".U, Cat(Fill(8, 0.U), io.in.bits.lsu.src2(7,0), Fill(16, 0.U)),
             Mux(io.in.bits.result(1,0) === "b01".U, Cat(Fill(16, 0.U), io.in.bits.lsu.src2(7,0), Fill(8, 0.U)), Cat(Fill(24, 0.U), io.in.bits.lsu.src2(7,0)))))


  // wstrb
  wstrb_h := Mux(io.in.bits.result(1,0) === 2.U, io.in.bits.lsu.wstrb << 2, 
             Mux(io.in.bits.result(1,0) === 0.U, io.in.bits.lsu.wstrb, 0.U))
  wstrb_b := Mux(io.in.bits.result(1,0) === 3.U, io.in.bits.lsu.wstrb << 3, Mux(io.in.bits.result(1,0) === 2.U, io.in.bits.lsu.wstrb << 2, Mux(io.in.bits.result(1,0) === 1.U, io.in.bits.lsu.wstrb << 1, io.in.bits.lsu.wstrb)))

  prepare := (io.in.bits.lsu.MemtoReg && io.axi.rvalid) || (io.in.bits.lsu.MemWr && io.axi.bvalid) 
  DataOut := Mux(io.in.bits.lsu.MemtoReg, Mux(io.in.bits.lsu.arsize === 0.U, rdata_b, Mux(io.in.bits.lsu.arsize === 1.U, rdata_h, io.axi.rdata)), io.in.bits.result)

  when(io.axi.rvalid && io.axi.rready){
    regdata := rdata
  }

  // lsu <> wbu
  io.out.bits.wbu <> io.in.bits.lsu.wbu
  io.out.bits.exu <> io.in.bits.exu
  io.out.bits.csrdata := io.in.bits.result
  io.out.bits.regdata := Mux(state === s_wait_rslave || state === s_wait_prepare || (!io.in.bits.lsu.MemtoReg && !io.in.bits.lsu.MemWr), rdata, regdata)
  rdata := Mux(io.in.bits.lsu.wbu.CsrWr, io.in.bits.lsu.csrdata,
           Mux(io.in.bits.lsu.RegNum === "b010".U, DataOut,
           Mux(io.in.bits.lsu.RegNum === "b101".U, DataOut,
           Mux(io.in.bits.lsu.RegNum === "b011".U, Cat(Fill(24, 0.U), DataOut(7, 0)),
           Mux(io.in.bits.lsu.RegNum === "b100".U, Cat(Fill(16, 0.U), DataOut(15, 0)),
           Mux(io.in.bits.lsu.RegNum === "b000".U, Cat(Fill(24, DataOut(7)),  DataOut(7, 0)),
           Mux(io.in.bits.lsu.RegNum === "b001".U, Cat(Fill(16, DataOut(15)), DataOut(15, 0)), DataOut)))))))

  // AXI4
  io.axi.awvalid := Mux(reset.asBool, false.B, io.in.bits.lsu.MemWr && (state === s_wait_wslave))
  io.axi.awaddr  := io.in.bits.result
  io.axi.awid    := "h2".U
  io.axi.awlen   := "h0".U
  io.axi.awsize  := io.in.bits.lsu.awsize
  io.axi.awburst := "h1".U
  io.axi.wvalid  := Mux(reset.asBool, false.B, io.in.bits.lsu.MemWr && (state === s_wait_wslave))
  io.axi.wdata   := Mux(io.in.bits.lsu.awsize === 0.U, wdata_b, Mux(io.in.bits.lsu.awsize === 1.U, wdata_h, io.in.bits.lsu.src2))
  io.axi.wlast   := io.in.bits.lsu.MemWr && (state === s_wait_wslave)
  io.axi.bready  := true.B
  io.axi.arvalid := Mux(reset.asBool, false.B, (state === s_wait_rslave) && io.in.bits.lsu.MemtoReg)
  io.axi.araddr  := io.in.bits.result 
  io.axi.arid    := "h2".U
  io.axi.arlen   := "h0".U
  io.axi.arsize  := io.in.bits.lsu.arsize
  io.axi.arburst := "h1".U
  io.axi.rready  := state === s_idle || state === s_wait_rslave || state === s_wait_prepare
  io.axi.wstrb   := Mux(io.in.bits.lsu.awsize === 0.U, wstrb_b, Mux(io.in.bits.lsu.awsize === 1.U, wstrb_h, io.in.bits.lsu.wstrb))

  // sram_read
  sram_read.io.clock   := clock
  sram_read.io.wstrb   := io.in.bits.lsu.wstrb
  sram_read.io.araddr  := io.axi.araddr
  sram_read.io.awaddr  := io.axi.awaddr
  sram_read.io.wdata   := io.axi.wdata
  sram_read.io.arsize  := io.axi.arsize
  sram_read.io.arvalid := io.axi.arvalid
  sram_read.io.awvalid := io.axi.awvalid
  sram_read.io.arready := io.axi.arready
  sram_read.io.awready := io.axi.awready

  // lsu rd <> idu rd
  io.lsu_rd := io.in.bits.lsu.wbu.rd

  // lsu <> lsu_counter
  val lsu_counter = Module(new LSU_COUNTER())
  lsu_counter.io.clock := clock
  lsu_counter.io.state := state

}


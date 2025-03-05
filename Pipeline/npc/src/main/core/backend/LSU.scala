package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_LSU extends Module{
  val io = IO(new Bundle{
    val exu_lsu_data = Flipped(Decoupled(new EXU_LSU_DATA()))
    val lsu_wbu_data = Decoupled(new LSU_WBU_DATA())
    val lsu_idu_raw  = new LSU_IDU_RAW()
    val axi          = new ysyx_23060336_AXI4Master()
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
    s_idle         -> Mux(io.exu_lsu_data.valid, s_wait_sign, s_idle),
    s_wait_sign    -> Mux(io.exu_lsu_data.bits.idu_lsu_data.MemtoReg, s_wait_rslave, Mux(io.exu_lsu_data.bits.idu_lsu_data.MemWr, s_wait_wslave, s_wait_ready)),
    s_wait_rslave  -> Mux(io.axi.arready, Mux(io.axi.rvalid, Mux(io.lsu_wbu_data.ready, s_idle, s_wait_ready), s_wait_prepare), s_wait_rslave),
    s_wait_wslave  -> Mux(io.axi.wready, s_wait_prepare, s_wait_wslave),
    s_wait_prepare -> Mux(prepare, Mux(io.lsu_wbu_data.ready, s_idle, s_wait_ready), s_wait_prepare),
    s_wait_ready   -> Mux(io.lsu_wbu_data.ready, s_idle, s_wait_ready)
  ))

  io.exu_lsu_data.ready  := state === s_idle
  io.lsu_wbu_data.valid := state === s_wait_ready || ((state === s_wait_prepare && prepare) || (state === s_wait_rslave && io.axi.arready && io.axi.rvalid) && io.lsu_wbu_data.ready)

  // rdata
  rdata_h := Mux(io.exu_lsu_data.bits.result(1,0) === 2.U, io.axi.rdata >> 16,
             Mux(io.exu_lsu_data.bits.result(1,0) === 0.U, io.axi.rdata, 0.U))
  rdata_b := Mux(io.exu_lsu_data.bits.result(1,0) === 3.U, io.axi.rdata >> 24,
             Mux(io.exu_lsu_data.bits.result(1,0) === 2.U, io.axi.rdata >> 16,
             Mux(io.exu_lsu_data.bits.result(1,0) === 1.U, io.axi.rdata >> 8, io.axi.rdata)))

  // wdata
  wdata_h := Mux(io.exu_lsu_data.bits.result(1,0) === 2.U, io.exu_lsu_data.bits.idu_lsu_data.src2 << 16, 
             Mux(io.exu_lsu_data.bits.result(1,0) === 0.U, io.exu_lsu_data.bits.idu_lsu_data.src2, 0.U))
  wdata_b := Mux(io.exu_lsu_data.bits.result(1,0) === "b11".U, Cat(io.exu_lsu_data.bits.idu_lsu_data.src2(7,0), Fill(24, 0.U)),
             Mux(io.exu_lsu_data.bits.result(1,0) === "b10".U, Cat(Fill(8, 0.U), io.exu_lsu_data.bits.idu_lsu_data.src2(7,0), Fill(16, 0.U)),
             Mux(io.exu_lsu_data.bits.result(1,0) === "b01".U, Cat(Fill(16, 0.U), io.exu_lsu_data.bits.idu_lsu_data.src2(7,0), Fill(8, 0.U)), Cat(Fill(24, 0.U), io.exu_lsu_data.bits.idu_lsu_data.src2(7,0)))))


  // wstrb
  wstrb_h := Mux(io.exu_lsu_data.bits.result(1,0) === 2.U, io.exu_lsu_data.bits.idu_lsu_data.wstrb << 2, 
             Mux(io.exu_lsu_data.bits.result(1,0) === 0.U, io.exu_lsu_data.bits.idu_lsu_data.wstrb, 0.U))
  wstrb_b := Mux(io.exu_lsu_data.bits.result(1,0) === 3.U, io.exu_lsu_data.bits.idu_lsu_data.wstrb << 3, Mux(io.exu_lsu_data.bits.result(1,0) === 2.U, io.exu_lsu_data.bits.idu_lsu_data.wstrb << 2, Mux(io.exu_lsu_data.bits.result(1,0) === 1.U, io.exu_lsu_data.bits.idu_lsu_data.wstrb << 1, io.exu_lsu_data.bits.idu_lsu_data.wstrb)))

  prepare := (io.exu_lsu_data.bits.idu_lsu_data.MemtoReg && io.axi.rvalid) || (io.exu_lsu_data.bits.idu_lsu_data.MemWr && io.axi.bvalid) 
  DataOut := Mux(io.exu_lsu_data.bits.idu_lsu_data.MemtoReg, Mux(io.exu_lsu_data.bits.idu_lsu_data.arsize === 0.U, rdata_b, Mux(io.exu_lsu_data.bits.idu_lsu_data.arsize === 1.U, rdata_h, io.axi.rdata)), io.exu_lsu_data.bits.result)

  when(io.axi.rvalid && io.axi.rready){
    regdata := rdata
  }

  // lsu <> wbu
  io.lsu_wbu_data.bits.idu_wbu_data <> io.exu_lsu_data.bits.idu_lsu_data.idu_wbu_data
  io.lsu_wbu_data.bits.exu_wbu_data <> io.exu_lsu_data.bits.exu_wbu_data
  io.lsu_wbu_data.bits.csrdata := io.exu_lsu_data.bits.result
  io.lsu_wbu_data.bits.regdata := Mux(state === s_wait_rslave || state === s_wait_prepare || (!io.exu_lsu_data.bits.idu_lsu_data.MemtoReg && !io.exu_lsu_data.bits.idu_lsu_data.MemWr), rdata, regdata)
  rdata := Mux(io.exu_lsu_data.bits.idu_lsu_data.idu_wbu_data.CsrWr, io.exu_lsu_data.bits.idu_lsu_data.csrdata,
           Mux(io.exu_lsu_data.bits.idu_lsu_data.RegNum === "b010".U, DataOut,
           Mux(io.exu_lsu_data.bits.idu_lsu_data.RegNum === "b101".U, DataOut,
           Mux(io.exu_lsu_data.bits.idu_lsu_data.RegNum === "b011".U, Cat(Fill(24, 0.U), DataOut(7, 0)),
           Mux(io.exu_lsu_data.bits.idu_lsu_data.RegNum === "b100".U, Cat(Fill(16, 0.U), DataOut(15, 0)),
           Mux(io.exu_lsu_data.bits.idu_lsu_data.RegNum === "b000".U, Cat(Fill(24, DataOut(7)),  DataOut(7, 0)),
           Mux(io.exu_lsu_data.bits.idu_lsu_data.RegNum === "b001".U, Cat(Fill(16, DataOut(15)), DataOut(15, 0)), DataOut)))))))

  // AXI4
  io.axi.awvalid := Mux(reset.asBool, false.B, io.exu_lsu_data.bits.idu_lsu_data.MemWr && (state === s_wait_wslave))
  io.axi.awaddr  := io.exu_lsu_data.bits.result
  io.axi.awid    := "h2".U
  io.axi.awlen   := "h0".U
  io.axi.awsize  := io.exu_lsu_data.bits.idu_lsu_data.awsize
  io.axi.awburst := "h1".U
  io.axi.wvalid  := Mux(reset.asBool, false.B, io.exu_lsu_data.bits.idu_lsu_data.MemWr && (state === s_wait_wslave))
  io.axi.wdata   := Mux(io.exu_lsu_data.bits.idu_lsu_data.awsize === 0.U, wdata_b, Mux(io.exu_lsu_data.bits.idu_lsu_data.awsize === 1.U, wdata_h, io.exu_lsu_data.bits.idu_lsu_data.src2))
  io.axi.wlast   := io.exu_lsu_data.bits.idu_lsu_data.MemWr && (state === s_wait_wslave)
  io.axi.bready  := true.B
  io.axi.arvalid := Mux(reset.asBool, false.B, (state === s_wait_rslave) && io.exu_lsu_data.bits.idu_lsu_data.MemtoReg)
  io.axi.araddr  := io.exu_lsu_data.bits.result 
  io.axi.arid    := "h2".U
  io.axi.arlen   := "h0".U
  io.axi.arsize  := io.exu_lsu_data.bits.idu_lsu_data.arsize
  io.axi.arburst := "h1".U
  io.axi.rready  := state === s_idle || state === s_wait_rslave || state === s_wait_prepare
  io.axi.wstrb   := Mux(io.exu_lsu_data.bits.idu_lsu_data.awsize === 0.U, wstrb_b, Mux(io.exu_lsu_data.bits.idu_lsu_data.awsize === 1.U, wstrb_h, io.exu_lsu_data.bits.idu_lsu_data.wstrb))

  // sram_read
  sram_read.io.clock   := clock
  sram_read.io.wstrb   := io.exu_lsu_data.bits.idu_lsu_data.wstrb
  sram_read.io.araddr  := io.axi.araddr
  sram_read.io.awaddr  := io.axi.awaddr
  sram_read.io.wdata   := io.axi.wdata
  sram_read.io.arsize  := io.axi.arsize
  sram_read.io.arvalid := io.axi.arvalid
  sram_read.io.awvalid := io.axi.awvalid
  sram_read.io.arready := io.axi.arready
  sram_read.io.awready := io.axi.awready

  // lsu <> idu 
  io.lsu_idu_raw.lsu_rd       := io.exu_lsu_data.bits.idu_lsu_data.idu_wbu_data.rd
  io.lsu_idu_raw.lsu_valid    := state === s_wait_ready || io.axi.rvalid
  io.lsu_idu_raw.lsu_regdata  := io.lsu_wbu_data.bits.regdata
  io.lsu_idu_raw.lsu_instType := io.lsu_wbu_data.bits.idu_wbu_data.instType

  // lsu <> lsu_counter
  val lsu_counter = Module(new LSU_COUNTER())
  lsu_counter.io.clock := clock
  lsu_counter.io.state := state

}


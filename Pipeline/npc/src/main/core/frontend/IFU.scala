package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_IFU extends Module{
  val io = IO(new Bundle{
    val ifu_idu_data = Decoupled(new IFU_IDU_DATA())
    val exu_ifu_raw  = Flipped(new EXU_IFU_RAW())
    val axi          = new ysyx_23060336_AXI4Master()
  })

  val npc = if(Config.useNPCSim) {"h80000000".U(Base.addrWidth.W)} else {"h30000000".U(Base.addrWidth.W)}
  val PC       = RegInit(npc)
  val finst    = RegInit(0.U(Base.dataWidth.W))
  val araddr   = Wire(UInt(Base.addrWidth.W))
  val predaddr = Wire(UInt(Base.addrWidth.W))

  val s_idle :: s_wait_rvalid :: s_wait_ready :: s_wait_control_arready :: s_begin :: s_wait_exu_valid :: Nil = Enum(6)
  val state = RegInit(s_begin)
  state := MuxLookup(state, s_idle)(List(
    s_begin                -> Mux(io.axi.arready, s_wait_exu_valid, s_begin),
    s_wait_exu_valid       -> Mux(io.exu_ifu_raw.exu_valid, s_wait_rvalid, s_wait_exu_valid),
    s_idle                 -> Mux(io.axi.arready, Mux(io.axi.rvalid, s_wait_ready, s_wait_rvalid), s_idle),
    s_wait_rvalid          -> Mux(io.axi.rvalid, Mux(io.exu_ifu_raw.isRAW_control, s_wait_control_arready, Mux(io.ifu_idu_data.ready, s_idle, s_wait_ready)), s_wait_rvalid),
    s_wait_control_arready -> Mux(io.axi.arready, s_wait_exu_valid, s_wait_control_arready),
    s_wait_ready           -> Mux(io.exu_ifu_raw.isRAW_control, s_wait_control_arready, Mux(io.ifu_idu_data.ready, s_idle, s_wait_ready))
  ))

  io.ifu_idu_data.valid := ((state === s_wait_ready || (state === s_wait_rvalid && io.axi.rvalid && io.ifu_idu_data.ready)) && !io.exu_ifu_raw.isRAW_control) || (state === s_wait_control_arready && io.axi.rvalid && io.ifu_idu_data.ready) || (state === s_wait_exu_valid && io.axi.rvalid)

  io.ifu_idu_data.bits.inst := Mux(io.axi.rvalid && io.ifu_idu_data.ready, io.axi.rdata, finst)
  io.ifu_idu_data.bits.pc   := PC

  PC := Mux(reset.asBool, npc,      
        Mux(io.exu_ifu_raw.exu_valid && state === s_wait_exu_valid, io.exu_ifu_raw.dnpc,
        Mux((state === s_wait_control_arready && io.axi.arready), io.exu_ifu_raw.dnpc,
        Mux(((state === s_wait_ready || (state === s_wait_rvalid && io.axi.rvalid)) && io.ifu_idu_data.ready), predaddr, PC))))

  araddr  := Mux(reset.asBool, npc, 
             Mux(state === s_begin, PC, 
             Mux(state === s_wait_control_arready, io.exu_ifu_raw.dnpc, 
             Mux(state === s_wait_exu_valid && io.exu_ifu_raw.exu_valid, io.exu_ifu_raw.dnpc, PC)))) 

  predaddr := PC + 4.U

  io.axi.araddr  := araddr
  io.axi.rready  := state === s_idle || state === s_wait_rvalid || state === s_wait_exu_valid || state === s_wait_rvalid || state === s_wait_control_arready
  io.axi.arvalid := Mux(reset.asBool, false.B, state === s_idle || state === s_begin || state === s_wait_control_arready || (state === s_wait_exu_valid && io.exu_ifu_raw.exu_valid)) 
  io.axi.awvalid := false.B
  io.axi.awaddr  := 0.U
  io.axi.awid    := "h1".U
  io.axi.awlen   := "h0".U
  io.axi.awsize  := "h3".U
  io.axi.awburst := "h1".U
  io.axi.wvalid  := false.B
  io.axi.wdata   := 0.U
  io.axi.wstrb   := "b11".U
  io.axi.wlast   := false.B
  io.axi.bready  := false.B
  io.axi.arid    := "h1".U
  io.axi.arlen   := "h0".U
  io.axi.arsize  := "h2".U
  io.axi.arburst := "h1".U

  when(io.axi.rvalid) {
    finst := io.axi.rdata
  }

  // useCounter
  if(Config.useCounter) {
    val ifu_counter = Module(new IFU_COUNTER())
    ifu_counter.io.clock   := clock
    ifu_counter.io.state   := state
    ifu_counter.io.araddr  := io.axi.araddr
    ifu_counter.io.arvalid := io.axi.arvalid
  }
}


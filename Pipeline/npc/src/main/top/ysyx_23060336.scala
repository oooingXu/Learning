package npc

import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline
import chisel3.util.experimental.loadMemoryFromFile

class ysyx_23060336 extends Module {
	val io = IO(new Bundle{
    val interrupt = Input(Bool())
    val master    = new ysyx_23060336_AXI4Master()
    val slave     = new ysyx_23060336_AXI4Slave()
})
  val useNPCSim = true

  val ifu     = Module(new ysyx_23060336_IFU(useNPCSim))
  val idu     = Module(new ysyx_23060336_IDU())
  val exu     = Module(new ysyx_23060336_EXU())
  val lsu     = Module(new ysyx_23060336_LSU())
  val wbu     = Module(new ysyx_23060336_WBU())
  val reg     = Module(new ysyx_23060336_REG())
  val csr     = Module(new ysyx_23060336_CSR())
  val arbiter = Module(new ysyx_23060336_ARBITER())
  val xbar    = Module(new ysyx_23060336_XBAR())
  val clint   = Module(new ysyx_23060336_CLINT())
  val icache  = Module(new ysyx_23060336_ICACHE(2, 4))

  // cpu slave
  val awready = Wire(Bool())  
  val awvalid = Wire(Bool())   
  val awaddr  = Wire(UInt(32.W))
  val awid    = Wire(UInt(4.W)) 
  val awlen   = Wire(UInt(8.W))
  val awsize  = Wire(UInt(3.W))
  val awburst = Wire(UInt(2.W))
  val wready  = Wire(Bool())  
  val wvalid  = Wire(Bool())  
  val wdata   = Wire(UInt(32.W))
  val wstrb   = Wire(UInt(4.W)) 
  val wlast   = Wire(Bool())   
  val bready  = Wire(Bool())  
  val bvalid  = Wire(Bool()) 
  val bresp   = Wire(UInt(2.W))
  val bid     = Wire(UInt(4.W)) 
  val arready = Wire(Bool())   
  val arvalid = Wire(Bool())  
  val araddr  = Wire(UInt(32.W)) 
  val arid    = Wire(UInt(4.W)) 
  val arlen   = Wire(UInt(8.W))
  val arsize  = Wire(UInt(3.W))  
  val arburst = Wire(UInt(2.W)) 
  val rready  = Wire(Bool())   
  val rvalid  = Wire(Bool())  
  val rresp   = Wire(UInt(2.W)) 
  val rdata   = Wire(UInt(32.W))
  val rlast   = Wire(Bool())   
  val rid     = Wire(UInt(4.W)) 

  io.slave.awready := awready
  awvalid          := io.slave.awvalid
  awaddr           := io.slave.awaddr
  awid             := io.slave.awid
  awlen            := io.slave.awlen
  awsize           := io.slave.awsize
  awburst          := io.slave.awburst
  io.slave.wready  := wready
  wvalid           := io.slave.wvalid
  wdata            := io.slave.wdata
  wstrb            := io.slave.wstrb
  wlast            := io.slave.wlast
  bready           := io.slave.bready
  io.slave.bvalid  := bvalid
  io.slave.bresp   := bresp
  io.slave.bid     := bid
  io.slave.arready := arready
  arvalid          := io.slave.arvalid
  araddr           := io.slave.araddr
  arid             := io.slave.arid
  arlen            := io.slave.arlen
  arsize           := io.slave.arsize
  arburst          := io.slave.arburst
  rready           := io.slave.rready
  io.slave.rvalid  := rvalid
  io.slave.rresp   := rresp
  io.slave.rdata   := rdata
  io.slave.rlast   := rlast
  io.slave.rid     := rid

  awready := false.B
  wready  := false.B
  bvalid  := false.B
  arready := false.B
  rvalid  := false.B
  bresp   := 0.U
  bid     := 0.U
  rresp   := 0.U
  rdata   := 0.U
  rlast   := 0.U
  rid     := 0.U

  // pipeline
  def pipelineConnect[T <: Data, T2 <: Data](prevOut: DecoupledIO[T], thisIn: DecoupledIO[T]) = {
    prevOut.ready := thisIn.ready
    thisIn.bits   := RegEnable(prevOut.bits, prevOut.valid && thisIn.ready)
    thisIn.valid  := prevOut.valid 
  }

  pipelineConnect(ifu.io.ifu_idu_data, idu.io.ifu_idu_data)
  pipelineConnect(idu.io.idu_exu_data, exu.io.idu_exu_data) 
  pipelineConnect(exu.io.exu_lsu_data, lsu.io.exu_lsu_data)
  pipelineConnect(lsu.io.lsu_wbu_data, wbu.io.lsu_wbu_data)

  if(useNPCSim) {
  // npc_sim <-> xbar
    val npc_sim = Module(new NPC_SIM())
    io.master      <> xbar.io.master
    npc_sim.io.axi <> xbar.io.master
    npc_sim.io.clock := clock
  } else {
  // xbar <-> top 
    io.master      <> xbar.io.master
  }

  // xbar <-> clint <-> arbiter
  xbar.io.clint <> clint.io.axi
  xbar.io.slave <> arbiter.io.axi

  // ifu <-> icache
  ifu.io.axi <> icache.io.slave

  // arbiter <-> icache <-> lsu
  icache.io.master <> arbiter.io.ifu
  lsu.io.axi   <> arbiter.io.lsu

  // icache <-> lsu
  icache.io.awvalid := lsu.io.axi.awvalid
  icache.io.awaddr  := lsu.io.axi.awaddr

  // reg <> idu <> wbu
  idu.io.idu_reg_data <> reg.io.reg_idu_data

  // reg <> wbu
  wbu.io.wbu_reg_data <> reg.io.reg_wbu_data

  // csr <> idu
  idu.io.idu_csr_data <> csr.io.csr_idu_data

  // csr <> wbu
  wbu.io.wbu_csr_data <> csr.io.csr_wbu_data

  // ifu <> exu
  ifu.io.ifu_exu_raw <> exu.io.exu_ifu_raw

  // idu <> exu
  idu.io.idu_exu_raw <> exu.io.exu_idu_raw

  // idu <> lsu
  idu.io.idu_lsu_raw <> lsu.io.lsu_idu_raw

  // idu <> wbu
  idu.io.idu_wbu_raw <> wbu.io.wbu_idu_raw
}


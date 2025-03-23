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
  val ifu       = Module(new ysyx_23060336_IFU)
  val idu       = Module(new ysyx_23060336_IDU())
  val exu       = Module(new ysyx_23060336_EXU())
  val lsu       = Module(new ysyx_23060336_LSU())
  val wbu       = Module(new ysyx_23060336_WBU())
  val reg       = Module(new ysyx_23060336_REG())
  val csr       = Module(new ysyx_23060336_CSR())
  val xbar      = Module(new ysyx_23060336_XBAR())
  val clint     = Module(new ysyx_23060336_CLINT())
  val arbiter   = Module(new ysyx_23060336_ARBITER())
  val top_slave = Module(new ysyx_23060336_TOP_SLAVE())

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

  // NPCSim
  if(Config.useNPCSim) {
    val npc_sim = Module(new NPC_SIM())

    // npc_sim <-> xbar
    io.master      <> xbar.io.master
    npc_sim.io.axi <> xbar.io.master
    npc_sim.io.clock := clock
  } else {
    // xbar <-> top 
    io.master      <> xbar.io.master
  }

  // top <> top_slave
  io.slave <> top_slave.io.slave

  // xbar <-> clint <-> arbiter
  xbar.io.clint <> clint.io.axi
  xbar.io.slave <> arbiter.io.axi

  // ICache
  if(Config.useICache) {
    val icache    = Module(new ysyx_23060336_ICACHE(Base.block, Base.index)) // m = (2/4)  10 >= n >= 0

    // ifu <-> icache
    ifu.io.axi <> icache.io.slave

    // arbiter <-> icache <-> lsu
    icache.io.master <> arbiter.io.ifu

    // icache <-> lsu
    icache.io.coherence_input.awvalid := lsu.io.axi.awvalid
    icache.io.coherence_input.awaddr  := lsu.io.axi.awaddr
  } else {
    ifu.io.axi <> arbiter.io.ifu
  }

  // arbiter <> lsu
  lsu.io.axi <> arbiter.io.lsu

  // reg <> idu 
  idu.io.idu_reg_data <> reg.io.reg_idu_data

  // reg <> wbu
  wbu.io.wbu_reg_data <> reg.io.reg_wbu_data

  // csr <> idu
  idu.io.idu_csr_data <> csr.io.csr_idu_data

  // csr <> wbu
  wbu.io.wbu_csr_data <> csr.io.csr_wbu_data

  // ifu <> exu
  ifu.io.exu_ifu_raw <> exu.io.exu_ifu_raw

  // idu <> exu
  idu.io.exu_idu_raw <> exu.io.exu_idu_raw

  // idu <> lsu
  idu.io.lsu_idu_raw <> lsu.io.lsu_idu_raw

  // idu <> wbu
  idu.io.wbu_idu_raw <> wbu.io.wbu_idu_raw
}


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
  val idu_exu = Module(new ysyx_23060336_IDU_EXU())
  val lsu_wbu = Module(new ysyx_23060336_LSU_WBU())
  val reg     = Module(new ysyx_23060336_REG())
  val csr     = Module(new ysyx_23060336_CSR())
  val arbiter = Module(new ysyx_23060336_ARBITER())
  val xbar    = Module(new ysyx_23060336_XBAR())
  val clint   = Module(new ysyx_23060336_CLINT())
  val icache  = Module(new ysyx_23060336_ICACHE(2, 10))


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

  // arbiter <-> icache <-> lsu_wbu
  icache.io.master <> arbiter.io.ifu
  lsu_wbu.io.axi   <> arbiter.io.lsu

  // ifu <-> idu_exu
  idu_exu.io.inst     := ifu.io.inst
  idu_exu.io.pc       := ifu.io.pc 

  // icache <-> lsu_wbu
  icache.io.awvalid := lsu_wbu.io.axi.awvalid
  icache.io.awaddr  := lsu_wbu.io.axi.awaddr

  // idu_exu <-> lsu_wbu
  lsu_wbu.io.result   := idu_exu.io.result
  lsu_wbu.io.dnpc_in  := idu_exu.io.dnpc
  lsu_wbu.io.Csr      := idu_exu.io.Csr
  lsu_wbu.io.csr_in   := idu_exu.io.csr
  lsu_wbu.io.rd_in    := idu_exu.io.rd
  lsu_wbu.io.wstrb    := idu_exu.io.wstrb
  lsu_wbu.io.awsize   := idu_exu.io.awsize
  lsu_wbu.io.arsize   := idu_exu.io.arsize
  lsu_wbu.io.RegNum   := idu_exu.io.RegNum
  lsu_wbu.io.MemWr    := idu_exu.io.MemWr
  lsu_wbu.io.CsrWr_in := idu_exu.io.CsrWr
  lsu_wbu.io.RegWr_in := idu_exu.io.RegWr
  lsu_wbu.io.ecall_in := idu_exu.io.ecall
  lsu_wbu.io.MemtoReg := idu_exu.io.MemtoReg
  lsu_wbu.io.ebreak   := idu_exu.io.ebreak
  lsu_wbu.io.instType := idu_exu.io.instType

  // ifu <-> lsu_wbu
  ifu.io.dnpc                := lsu_wbu.io.dnpc
  ifu.io.ifu_idle            := lsu_wbu.io.out_valid
  lsu_wbu.io.in_valid        := ifu.io.out_valid
  lsu_wbu.io.ifu_clk_count   := ifu.io.ifu_clk_count
  lsu_wbu.io.ifu_psram_clk   := ifu.io.ifu_psram_clk
  lsu_wbu.io.ifu_flash_clk   := ifu.io.ifu_flash_clk
  lsu_wbu.io.ifu_psram_count := ifu.io.ifu_psram_count
  lsu_wbu.io.ifu_flash_count := ifu.io.ifu_flash_count

  // reg <-> idu_exu
  reg.io.raddr1   := idu_exu.io.rs1
  reg.io.raddr2   := idu_exu.io.rs2
  idu_exu.io.src1 := reg.io.rdata1
  idu_exu.io.src2 := reg.io.rdata2

  // reg <-> lsu_wbu
  reg.io.wdata    := lsu_wbu.io.regdata
  reg.io.waddr    := lsu_wbu.io.rd
  reg.io.wen      := lsu_wbu.io.RegWr 
  lsu_wbu.io.src2 := reg.io.rdata2

  // csr <-> ifu
  csr.io.mepc_in  := ifu.io.pc

  // csr <-> idu_exu
  csr.io.raddr      := idu_exu.io.csr
  idu_exu.io.Csr_in := csr.io.rdata
  idu_exu.io.mepc   := csr.io.mepc
  idu_exu.io.mtvec  := csr.io.mtvec

  // csr <-> lsu_wbu
  csr.io.wdata := lsu_wbu.io.csrdata
  csr.io.waddr := lsu_wbu.io.csr
  csr.io.wen   := lsu_wbu.io.CsrWr 
  csr.io.ecall := lsu_wbu.io.ecall && ifu.io.ifu_idle

}


package npc

import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline
import chisel3.util.experimental.loadMemoryFromFile

/**
  * Compute GCD using subtraction method.
  * Subtracts the smaller from the larger until register y is zero.
  * value in register x is then the GCD
  */
class ysyx_23060336 extends Module {
	val io = IO(new Bundle{
    val interrupt = Input(Bool())
    val master    = new ysyx_23060336_AXI4Master()
    val slave     = new ysyx_23060336_AXI4Slave()
})

  val ifu     = Module(new ysyx_23060336_IFU())
  val idu_exu = Module(new ysyx_23060336_IDU_EXU())
  val lsu_wbu = Module(new ysyx_23060336_LSU_WBU())
  val reg     = Module(new ysyx_23060336_REG())
  val csr     = Module(new ysyx_23060336_CSR())
  val arbiter = Module(new ysyx_23060336_ARBITER())

  //val clint   = Module(new ysyx_23060336_CLINT())
  //val sram_ifu   = Module(new ysyx_23060336_SRAM())
  //val sram_lsu   = Module(new ysyx_23060336_SRAM())
  //val sram   = Module(new ysyx_23060336_SRAM())

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

  // arbiter <-> top <-> ifu <-> lsu_wbu
  io.master      <> arbiter.io.axi
  ifu.io.axi     <> arbiter.io.ifu
  lsu_wbu.io.axi <> arbiter.io.lsu

  // ifu <-> idu_exu
  idu_exu.io.inst := ifu.io.inst
  idu_exu.io.pc   := ifu.io.pc 
  ifu.io.empty    := idu_exu.io.empty

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

  // ifu <-> lsu_wbu
  ifu.io.dnpc      := lsu_wbu.io.dnpc
  ifu.io.ifu_idle  := lsu_wbu.io.out_valid
  lsu_wbu.io.in_valid := ifu.io.out_valid

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
  csr.io.mepc_in    := ifu.io.pc

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

  
  /*
  // Axi4 sram <-> arbiter
  arbiter.io.axi.awready := sram.io.awready
  sram.io.awvalid        := arbiter.io.axi.awvalid
  sram.io.awaddr         := arbiter.io.axi.awaddr
  sram.io.awid           := arbiter.io.axi.awid
  sram.io.awlen          := arbiter.io.axi.awlen
  sram.io.awsize         := arbiter.io.axi.awsize
  sram.io.awburst        := arbiter.io.axi.awburst
  arbiter.io.axi.wready  := sram.io.wready
  sram.io.wvalid         := arbiter.io.axi.wvalid
  sram.io.wdata          := arbiter.io.axi.wdata
  sram.io.wstrb          := arbiter.io.axi.wstrb
  sram.io.wlast          := arbiter.io.axi.wlast
  sram.io.bready         := arbiter.io.axi.bready
  arbiter.io.axi.bvalid  := sram.io.bvalid
  arbiter.io.axi.bresp   := sram.io.bresp
  arbiter.io.axi.bid     := sram.io.bid
  arbiter.io.axi.arready := sram.io.arready
  sram.io.arvalid        := arbiter.io.axi.arvalid
  sram.io.araddr         := arbiter.io.axi.araddr
  sram.io.arid           := arbiter.io.axi.arid
  sram.io.arlen          := arbiter.io.axi.arlen
  sram.io.arsize         := arbiter.io.axi.arsize
  sram.io.arburst        := arbiter.io.axi.arburst
  sram.io.rready         := arbiter.io.axi.rready
  arbiter.io.axi.rvalid  := sram.io.rvalid
  arbiter.io.axi.rresp   := sram.io.rresp
  arbiter.io.axi.rdata   := sram.io.rdata
  arbiter.io.axi.rlast   := sram.io.rlast
  arbiter.io.axi.rid     := sram.io.rid
  sram.io.clock          := clock
  sram.io.reset          := reset

  // Axi4 sram <-> ifu
  ifu.io.axi.awready   := sram_ifu.io.awready
  sram_ifu.io.awvalid := ifu.io.axi.awvalid
  sram_ifu.io.awaddr  := ifu.io.axi.awaddr
  sram_ifu.io.awid    := ifu.io.axi.awid
  sram_ifu.io.awlen   := ifu.io.axi.awlen
  sram_ifu.io.awsize  := ifu.io.axi.awsize
  sram_ifu.io.awburst := ifu.io.axi.awburst
  ifu.io.axi.wready    := sram_ifu.io.wready
  sram_ifu.io.wvalid  := ifu.io.axi.wvalid
  sram_ifu.io.wdata   := ifu.io.axi.wdata
  sram_ifu.io.wstrb   := ifu.io.axi.wstrb
  sram_ifu.io.wlast   := ifu.io.axi.wlast
  sram_ifu.io.bready  := ifu.io.axi.bready
  ifu.io.axi.bvalid    := sram_ifu.io.bvalid
  ifu.io.axi.bresp     := sram_ifu.io.bresp
  ifu.io.axi.bid       := sram_ifu.io.bid
  ifu.io.axi.arready   := sram_ifu.io.arready
  sram_ifu.io.arvalid := ifu.io.axi.arvalid
  sram_ifu.io.araddr  := ifu.io.axi.araddr
  sram_ifu.io.arid    := ifu.io.axi.arid
  sram_ifu.io.arlen   := ifu.io.axi.arlen
  sram_ifu.io.arsize  := ifu.io.axi.arsize
  sram_ifu.io.arburst := ifu.io.axi.arburst
  sram_ifu.io.rready  := ifu.io.axi.rready
  ifu.io.axi.rvalid    := sram_ifu.io.rvalid
  ifu.io.axi.rresp     := sram_ifu.io.rresp
  ifu.io.axi.rdata     := sram_ifu.io.rdata
  ifu.io.axi.rlast     := sram_ifu.io.rlast
  ifu.io.axi.rid       := sram_ifu.io.rid
  sram_ifu.io.clock   := clock
  sram_ifu.io.reset   := reset

  // Axi4 sram <-> lsu
  lsu_wbu.io.axi.awready := sram_lsu.io.awready
  sram_lsu.io.awvalid   := lsu_wbu.io.axi.awvalid
  sram_lsu.io.awaddr    := lsu_wbu.io.axi.awaddr
  sram_lsu.io.awid      := lsu_wbu.io.axi.awid
  sram_lsu.io.awlen     := lsu_wbu.io.axi.awlen
  sram_lsu.io.awsize    := lsu_wbu.io.axi.awsize
  sram_lsu.io.awburst   := lsu_wbu.io.axi.awburst
  lsu_wbu.io.axi.wready  := sram_lsu.io.wready
  sram_lsu.io.wvalid    := lsu_wbu.io.axi.wvalid
  sram_lsu.io.wdata     := lsu_wbu.io.axi.wdata
  sram_lsu.io.wstrb     := lsu_wbu.io.axi.wstrb
  sram_lsu.io.wlast     := lsu_wbu.io.axi.wlast
  sram_lsu.io.bready    := lsu_wbu.io.axi.bready
  lsu_wbu.io.axi.bvalid  := sram_lsu.io.bvalid
  lsu_wbu.io.axi.bresp   := sram_lsu.io.bresp
  lsu_wbu.io.axi.bid     := sram_lsu.io.bid
  lsu_wbu.io.axi.arready := sram_lsu.io.arready
  sram_lsu.io.arvalid   := lsu_wbu.io.axi.arvalid
  sram_lsu.io.araddr    := lsu_wbu.io.axi.araddr
  sram_lsu.io.arid      := lsu_wbu.io.axi.arid
  sram_lsu.io.arlen     := lsu_wbu.io.axi.arlen
  sram_lsu.io.arsize    := lsu_wbu.io.axi.arsize
  sram_lsu.io.arburst   := lsu_wbu.io.axi.arburst
  sram_lsu.io.rready    := lsu_wbu.io.axi.rready
  lsu_wbu.io.axi.rvalid  := sram_lsu.io.rvalid
  lsu_wbu.io.axi.rresp   := sram_lsu.io.rresp
  lsu_wbu.io.axi.rdata   := sram_lsu.io.rdata
  lsu_wbu.io.axi.rlast   := sram_lsu.io.rlast
  lsu_wbu.io.axi.rid     := sram_lsu.io.rid
  sram_lsu.io.clock     := clock
  sram_lsu.io.reset     := reset

  // Axi4 ifu <-> arbiter
  ifu.io.axi.awready     := arbiter.io.ifu.awready
  arbiter.io.ifu.awvalid := ifu.io.axi.awvalid
  arbiter.io.ifu.awaddr  := ifu.io.axi.awaddr
  arbiter.io.ifu.awid    := ifu.io.axi.awid
  arbiter.io.ifu.awlen   := ifu.io.axi.awlen
  arbiter.io.ifu.awsize  := ifu.io.axi.awsize
  arbiter.io.ifu.awburst := ifu.io.axi.awburst
  ifu.io.axi.wready      := arbiter.io.ifu.wready
  arbiter.io.ifu.wvalid  := ifu.io.axi.wvalid
  arbiter.io.ifu.wdata   := ifu.io.axi.wdata
  arbiter.io.ifu.wstrb   := ifu.io.axi.wstrb
  arbiter.io.ifu.wlast   := ifu.io.axi.wlast
  arbiter.io.ifu.bready  := ifu.io.axi.bready
  ifu.io.axi.bvalid      := arbiter.io.ifu.bvalid
  ifu.io.axi.bresp       := arbiter.io.ifu.bresp
  ifu.io.axi.bid         := arbiter.io.ifu.bid
  ifu.io.axi.arready     := arbiter.io.ifu.arready
  arbiter.io.ifu.arvalid := ifu.io.axi.arvalid
  arbiter.io.ifu.araddr  := ifu.io.axi.araddr
  arbiter.io.ifu.arid    := ifu.io.axi.arid
  arbiter.io.ifu.arlen   := ifu.io.axi.arlen
  arbiter.io.ifu.arsize  := ifu.io.axi.arsize
  arbiter.io.ifu.arburst := ifu.io.axi.arburst
  arbiter.io.ifu.rready  := ifu.io.axi.rready
  ifu.io.axi.rvalid      := arbiter.io.ifu.rvalid
  ifu.io.axi.rresp       := arbiter.io.ifu.rresp
  ifu.io.axi.rdata       := arbiter.io.ifu.rdata
  ifu.io.axi.rlast       := arbiter.io.ifu.rlast
  ifu.io.axi.rid         := arbiter.io.ifu.rid

  // Axi4 lsu_wbu <-> arbiter
  lsu_wbu.io.axi.awready := arbiter.io.lsu.awready
  arbiter.io.lsu.awvalid := lsu_wbu.io.axi.awvalid
  arbiter.io.lsu.awaddr  := lsu_wbu.io.axi.awaddr
  arbiter.io.lsu.awid    := lsu_wbu.io.axi.awid
  arbiter.io.lsu.awlen   := lsu_wbu.io.axi.awlen
  arbiter.io.lsu.awsize  := lsu_wbu.io.axi.awsize
  arbiter.io.lsu.awburst := lsu_wbu.io.axi.awburst
  lsu_wbu.io.axi.wready  := arbiter.io.lsu.wready
  arbiter.io.lsu.wvalid  := lsu_wbu.io.axi.wvalid
  arbiter.io.lsu.wdata   := lsu_wbu.io.axi.wdata
  arbiter.io.lsu.wstrb   := lsu_wbu.io.axi.wstrb
  arbiter.io.lsu.wlast   := lsu_wbu.io.axi.wlast
  arbiter.io.lsu.bready  := lsu_wbu.io.axi.bready
  lsu_wbu.io.axi.bvalid  := arbiter.io.lsu.bvalid
  lsu_wbu.io.axi.bresp   := arbiter.io.lsu.bresp
  lsu_wbu.io.axi.bid     := arbiter.io.lsu.bid
  lsu_wbu.io.axi.arready := arbiter.io.lsu.arready
  arbiter.io.lsu.arvalid := lsu_wbu.io.axi.arvalid
  arbiter.io.lsu.araddr  := lsu_wbu.io.axi.araddr
  arbiter.io.lsu.arid    := lsu_wbu.io.axi.arid
  arbiter.io.lsu.arlen   := lsu_wbu.io.axi.arlen
  arbiter.io.lsu.arsize  := lsu_wbu.io.axi.arsize
  arbiter.io.lsu.arburst := lsu_wbu.io.axi.arburst
  arbiter.io.lsu.rready  := lsu_wbu.io.axi.rready
  lsu_wbu.io.axi.rvalid  := arbiter.io.lsu.rvalid
  lsu_wbu.io.axi.rresp   := arbiter.io.lsu.rresp
  lsu_wbu.io.axi.rdata   := arbiter.io.lsu.rdata
  lsu_wbu.io.axi.rlast   := arbiter.io.lsu.rlast
  lsu_wbu.io.axi.rid     := arbiter.io.lsu.rid
  */

}


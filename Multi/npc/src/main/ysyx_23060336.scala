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
    val dnpc      = Output(UInt(32.W))
    val pc        = Output(UInt(32.W))
    val out_valid = Output(Bool())
})

  val ifu     = Module(new ysyx_23060336_IFU())
  val idu_exu = Module(new ysyx_23060336_IDU_EXU())
  val lsu_wbu = Module(new ysyx_23060336_LSU_WBU())
  val reg     = Module(new ysyx_23060336_REG())
  val csr     = Module(new ysyx_23060336_CSR())
  val sdram_ifu   = Module(new ysyx_23060336_SDRAM())
  val sdram_lsu   = Module(new ysyx_23060336_SDRAM())
  //val xbar    = Module(new ysyx_23060336_XBAR())
  //val clint   = Module(new ysyx_23060336_CLINT())

  // Xbar
  //xbar.io.ifu   <> ifu.io.axi
  //xbar.io.lsu   <> lsu_wbu.io.axi
  //xbar.io.clint <> clint.io.axi

  // Axi4 sdram <-> ifu
  ifu.io.axi.awready   := sdram_ifu.io.awready
  sdram_ifu.io.awvalid := ifu.io.axi.awvalid
  sdram_ifu.io.awaddr  := ifu.io.axi.awaddr
  sdram_ifu.io.awid    := ifu.io.axi.awid
  sdram_ifu.io.awlen   := ifu.io.axi.awlen
  sdram_ifu.io.awsize  := ifu.io.axi.awsize
  sdram_ifu.io.awburst := ifu.io.axi.awburst
  ifu.io.axi.wready    := sdram_ifu.io.wready
  sdram_ifu.io.wvalid  := ifu.io.axi.wvalid
  sdram_ifu.io.wdata   := ifu.io.axi.wdata
  sdram_ifu.io.wstrb   := ifu.io.axi.wstrb
  sdram_ifu.io.wlast   := ifu.io.axi.wlast
  sdram_ifu.io.bready  := ifu.io.axi.bready
  ifu.io.axi.bvalid    := sdram_ifu.io.bvalid
  ifu.io.axi.bresp     := sdram_ifu.io.bresp
  ifu.io.axi.bid       := sdram_ifu.io.bid
  ifu.io.axi.arready   := sdram_ifu.io.arready
  sdram_ifu.io.arvalid := ifu.io.axi.arvalid
  sdram_ifu.io.araddr  := ifu.io.axi.araddr
  sdram_ifu.io.arid    := ifu.io.axi.arid
  sdram_ifu.io.arlen   := ifu.io.axi.arlen
  sdram_ifu.io.arsize  := ifu.io.axi.arsize
  sdram_ifu.io.arburst := ifu.io.axi.arburst
  sdram_ifu.io.rready  := ifu.io.axi.rready
  ifu.io.axi.rvalid    := sdram_ifu.io.rvalid
  ifu.io.axi.rresp     := sdram_ifu.io.rresp
  ifu.io.axi.rdata     := sdram_ifu.io.rdata
  ifu.io.axi.rlast     := sdram_ifu.io.rlast
  ifu.io.axi.rid       := sdram_ifu.io.rid
  sdram_ifu.io.clock   := clock
  sdram_ifu.io.reset   := reset

  // Axi4 sdram <-> lsu
  lsu_wbu.io.axi.awready := sdram_lsu.io.awready
  sdram_lsu.io.awvalid   := lsu_wbu.io.axi.awvalid
  sdram_lsu.io.awaddr    := lsu_wbu.io.axi.awaddr
  sdram_lsu.io.awid      := lsu_wbu.io.axi.awid
  sdram_lsu.io.awlen     := lsu_wbu.io.axi.awlen
  sdram_lsu.io.awsize    := lsu_wbu.io.axi.awsize
  sdram_lsu.io.awburst   := lsu_wbu.io.axi.awburst
  lsu_wbu.io.axi.wready  := sdram_lsu.io.wready
  sdram_lsu.io.wvalid    := lsu_wbu.io.axi.wvalid
  sdram_lsu.io.wdata     := lsu_wbu.io.axi.wdata
  sdram_lsu.io.wstrb     := lsu_wbu.io.axi.wstrb
  sdram_lsu.io.wlast     := lsu_wbu.io.axi.wlast
  sdram_lsu.io.bready    := lsu_wbu.io.axi.bready
  lsu_wbu.io.axi.bvalid  := sdram_lsu.io.bvalid
  lsu_wbu.io.axi.bresp   := sdram_lsu.io.bresp
  lsu_wbu.io.axi.bid     := sdram_lsu.io.bid
  lsu_wbu.io.axi.arready := sdram_lsu.io.arready
  sdram_lsu.io.arvalid   := lsu_wbu.io.axi.arvalid
  sdram_lsu.io.araddr    := lsu_wbu.io.axi.araddr
  sdram_lsu.io.arid      := lsu_wbu.io.axi.arid
  sdram_lsu.io.arlen     := lsu_wbu.io.axi.arlen
  sdram_lsu.io.arsize    := lsu_wbu.io.axi.arsize
  sdram_lsu.io.arburst   := lsu_wbu.io.axi.arburst
  sdram_lsu.io.rready    := lsu_wbu.io.axi.rready
  lsu_wbu.io.axi.rvalid  := sdram_lsu.io.rvalid
  lsu_wbu.io.axi.rresp   := sdram_lsu.io.rresp
  lsu_wbu.io.axi.rdata   := sdram_lsu.io.rdata
  lsu_wbu.io.axi.rlast   := sdram_lsu.io.rlast
  lsu_wbu.io.axi.rid     := sdram_lsu.io.rid
  sdram_lsu.io.clock     := clock
  sdram_lsu.io.reset     := reset

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
  lsu_wbu.io.MemNum   := idu_exu.io.MemNum
  lsu_wbu.io.RegNum   := idu_exu.io.RegNum
  lsu_wbu.io.MemWr    := idu_exu.io.MemWr
  lsu_wbu.io.CsrWr_in := idu_exu.io.CsrWr
  lsu_wbu.io.RegWr_in := idu_exu.io.RegWr
  lsu_wbu.io.MemtoReg := idu_exu.io.MemtoReg
  lsu_wbu.io.ebreak   := idu_exu.io.ebreak
  lsu_wbu.io.empty    := idu_exu.io.empty

  // ifu <-> lsu_wbu
  ifu.io.dnpc      := lsu_wbu.io.dnpc
  ifu.io.in_valid  := lsu_wbu.io.out_valid
  lsu_wbu.io.in_valid := ifu.io.out_valid

  // lsu_wbu <-> top
  io.dnpc := lsu_wbu.io.dnpc
  io.out_valid := lsu_wbu.io.out_valid

  // ifu <-> top
  io.pc := ifu.io.pc

  // reg <-> idu_exu
  reg.io.raddr1   := idu_exu.io.rs1
  reg.io.raddr2   := idu_exu.io.rs2
  idu_exu.io.src1 := reg.io.rdata1
  idu_exu.io.src2 := reg.io.rdata2

  // reg <-> lsu_wbu
  reg.io.wdata    := lsu_wbu.io.regdata
  reg.io.waddr    := lsu_wbu.io.rd
  reg.io.wen      := lsu_wbu.io.RegWr && (idu_exu.io.MemtoReg ^ ifu.io.out_valid)
  lsu_wbu.io.src2 := reg.io.rdata2

  // csr <-> ifu
  csr.io.mepc_in    := ifu.io.pc

  // csr <-> idu_exu
  csr.io.raddr      := idu_exu.io.csr
  csr.io.ecall      := idu_exu.io.ecall
  idu_exu.io.Csr_in := csr.io.rdata
  idu_exu.io.mepc   := csr.io.mepc
  idu_exu.io.mtvec  := csr.io.mtvec

  // csr <-> lsu_wbu
  csr.io.wdata := lsu_wbu.io.csrdata
  csr.io.waddr := lsu_wbu.io.csr
  csr.io.wen   := lsu_wbu.io.CsrWr

}


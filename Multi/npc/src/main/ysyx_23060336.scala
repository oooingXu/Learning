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
})

  val ifu     = Module(new ysyx_23060336_IFU())
  val idu_exu = Module(new ysyx_23060336_IDU_EXU())
  val lsu_wbu = Module(new ysyx_23060336_LSU_WBU())
  val reg     = Module(new ysyx_23060336_REG())
  val csr     = Module(new ysyx_23060336_CSR())
  val xbar    = Module(new ysyx_23060336_XBAR())
  val sdram   = Module(new ysyx_23060336_SDRAM())
  val clint   = Module(new ysyx_23060336_CLINT())

  // Xbar
  xbar.io.ifu   <> ifu.io.axi
  xbar.io.lsu   <> lsu_wbu.io.axi
  xbar.io.clint <> clint.io.axi

  // Axi4Sdram
  xbar.io.sdram.awready := sdram.io.awready
  sdram.io.awvalid      := xbar.io.sdram.awvalid
  sdram.io.awaddr       := xbar.io.sdram.awaddr
  sdram.io.awid         := xbar.io.sdram.awid
  sdram.io.awlen        := xbar.io.sdram.awlen
  sdram.io.awsize       := xbar.io.sdram.awsize
  sdram.io.awburst      := xbar.io.sdram.awburst
  xbar.io.sdram.wready  := sdram.io.wready
  sdram.io.wvalid       := xbar.io.sdram.wvalid
  sdram.io.wdata        := xbar.io.sdram.wdata
  sdram.io.wstrb        := xbar.io.sdram.wstrb
  sdram.io.wlast        := xbar.io.sdram.wlast
  sdram.io.bready       := xbar.io.sdram.bready
  xbar.io.sdram.bvalid  := sdram.io.bvalid
  xbar.io.sdram.bresp   := sdram.io.bresp
  xbar.io.sdram.bid     := sdram.io.bid
  xbar.io.sdram.arready := sdram.io.arready
  sdram.io.arvalid      := xbar.io.sdram.arvalid
  sdram.io.araddr       := xbar.io.sdram.araddr
  sdram.io.arid         := xbar.io.sdram.arid
  sdram.io.arlen        := xbar.io.sdram.arlen
  sdram.io.arsize       := xbar.io.sdram.arsize
  sdram.io.arburst      := xbar.io.sdram.arburst
  sdram.io.rready       := xbar.io.sdram.rready
  xbar.io.sdram.rvalid  := sdram.io.rvalid
  xbar.io.sdram.rresp   := sdram.io.rresp
  xbar.io.sdram.rdata   := sdram.io.rdata
  xbar.io.sdram.rlast   := sdram.io.rlast
  xbar.io.sdram.rid     := sdram.io.rid
  sdram.io.clock        := clock
  sdram.io.reset        := reset

  // ifu <-> idu_exu
  idu_exu.io.inst := ifu.io.inst
  idu_exu.io.pc   := ifu.io.pc 

  // idu_exu <-> lsu_wbu
  lsu_wbu.io.result   := idu_exu.io.result
  lsu_wbu.io.dnpc_in  := idu_exu.io.dnpc
  lsu_wbu.io.csr_in   := idu_exu.io.csr
  lsu_wbu.io.rd_in    := idu_exu.io.rd
  lsu_wbu.io.MemNum   := idu_exu.io.MemNum
  lsu_wbu.io.RegNum   := idu_exu.io.RegNum
  lsu_wbu.io.MemWr    := idu_exu.io.MemWr
  lsu_wbu.io.CsrWr_in := idu_exu.io.CsrWr
  lsu_wbu.io.RegWr_in := idu_exu.io.RegWr
  lsu_wbu.io.MemtoReg := idu_exu.io.MemtoReg
  lsu_wbu.io.ebreak   := idu_exu.io.ebreak
  lsu_wbu.io.Csr      := idu_exu.io.Csr

  // ifu <-> lsu_wbu
  ifu.io.dnpc      := lsu_wbu.io.dnpc
  ifu.io.out_valid := lsu_wbu.io.out_valid

  // lsu_wbu <-> top
  io.dnpc := lsu_wbu.io.dnpc

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
  reg.io.wen      := lsu_wbu.io.RegWr
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


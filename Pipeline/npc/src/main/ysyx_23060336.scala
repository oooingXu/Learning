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
    val halt      = Output(Bool())
    val halt_ret  = Output(UInt(32.W))
    val NPC       = Output(UInt(32.W))
    val PC        = Output(UInt(32.W))
    val inst      = Output(UInt(32.W))
    val mcause    = Output(UInt(32.W))
    val mstatus   = Output(UInt(32.W))
    val iduopcode = Output(UInt(7.W))
    val idupcmux  = Output(UInt(2.W))
    val iduinst   = Output(UInt(32.W))
    val exupcmux  = Output(UInt(2.W))
    val ifuvalid  = Output(Bool())
    val ifuready  = Output(Bool())
    val iduvalid  = Output(Bool())
    val iduready  = Output(Bool())
    val exuvalid  = Output(Bool())
    val exuready  = Output(Bool())
    val lsuvalid  = Output(Bool())
    val lsuready  = Output(Bool())
    val lsuarvalid= Output(Bool())
    val lsuarready= Output(Bool())
    val lsuawvalid= Output(Bool())
    val lsuawready= Output(Bool())
    val lsurready = Output(Bool())
    val lsurvalid = Output(Bool())
    val lsuwready = Output(Bool())
    val lsuwvalid = Output(Bool())
    val wbuvalid  = Output(Bool())
    val wbuready  = Output(Bool())
    val MemtoReg  = Output(Bool())
    val iduMemWr  = Output(Bool())
    val exuMemWr  = Output(Bool())
    val lsuMemWr  = Output(Bool())
    val idupc     = Output(UInt(32.W))
    val exupc     = Output(UInt(32.W))
    val alumux    = Output(UInt(4.W))
    val pcadd     = Output(UInt(32.W))
    val pca       = Output(UInt(32.W))
    val pcb       = Output(UInt(32.W))
    val ina       = Output(UInt(32.W))
    val inb       = Output(UInt(32.W))
    val idurs1    = Output(UInt(5.W))
    val idurs2    = Output(UInt(5.W))
    val exurd     = Output(UInt(5.W))
    val lsurd     = Output(UInt(5.W))
    val wburd     = Output(UInt(5.W))
    val lsuaraddr = Output(UInt(32.W))
    val lsurdata  = Output(UInt(32.W))
    val lsuawaddr = Output(UInt(32.W))
    val lsuwdata = Output(UInt(32.W))
    val wburesult= Output(UInt(32.W))
    val regrs1   = Output(UInt(5.W))
    val regrs2   = Output(UInt(5.W))
    val regsrc1  = Output(UInt(32.W))
    val regsrc2  = Output(UInt(32.W))
    val regrd    = Output(UInt(32.W))
    val regwen   = Output(UInt(32.W))
    val regwaddr = Output(UInt(32.W))
    val imm      = Output(UInt(32.W))
})

  val ifu    = Module(new ysyx_23060336_IFU())
  val idu    = Module(new ysyx_23060336_IDU())
  val exu    = Module(new ysyx_23060336_EXU())
  val lsu    = Module(new ysyx_23060336_LSU())
  val wbu    = Module(new ysyx_23060336_WBU())
  val reg    = Module(new ysyx_23060336_REG())
  val csr    = Module(new ysyx_23060336_CSR())
  val xbar   = Module(new ysyx_23060336_XBAR())
  val sdram  = Module(new ysyx_23060336_SDRAM())
  val clint  = Module(new ysyx_23060336_CLINT())
  val ebreak = Module(new ysyx_23060336_EBREAK())

  def pipelineConnect[T <: Data, T2 <: Data](prevOut: DecoupledIO[T], thisIn: DecoupledIO[T], thisOut: DecoupledIO[T2]) = {
    prevOut.ready := thisIn.ready
    thisIn.bits   := RegEnable(prevOut.bits, prevOut.valid && thisIn.ready)
    thisIn.valid  := prevOut.valid && thisIn.ready
  }

  pipelineConnect(ifu.io.out, idu.io.in, idu.io.out)
  pipelineConnect(idu.io.out, exu.io.in, exu.io.out)
  pipelineConnect(exu.io.out, lsu.io.in, lsu.io.out)
  pipelineConnect(lsu.io.out, wbu.io.in, wbu.io.in)

  // Xbar
  xbar.io.ifu   <> ifu.io.axi
  xbar.io.lsu   <> lsu.io.axi
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

  reg.io.raddr1 := idu.io.rs1
  reg.io.raddr2 := idu.io.rs2

  idu.io.src1   := reg.io.rdata1
  idu.io.src2   := reg.io.rdata2
  idu.io.exu_rd := exu.io.rd
  idu.io.lsu_rd := lsu.io.rd
  idu.io.wbu_rd := wbu.io.rd

  io.halt_ret   := reg.io.halt_ret
  io.regrs1     := idu.io.rs1 
  io.regrs2     := idu.io.rs2 
  io.regsrc1    := reg.io.rdata1
  io.regsrc2    := reg.io.rdata2
  io.regrd      := reg.io.wdata
  io.regwen     := reg.io.wen
  io.regwaddr   := reg.io.waddr

  io.imm        := idu.io.imm
  wbu.io.wen    := ifu.io.valid

  reg.io.wen    := wbu.io.RegWr && ifu.io.valid
  reg.io.waddr  := wbu.io.rd
  reg.io.wdata  := wbu.io.DataOut

  idu.io.Csr    := csr.io.rdata
  csr.io.raddr  := idu.io.csr
  csr.io.wdata  := wbu.io.result
  csr.io.waddr  := wbu.io.csr
  csr.io.wen    := wbu.io.CsrWr
  io.mcause     := csr.io.mcause
  io.mstatus    := csr.io.mstatus

  io.wburesult  := wbu.io.result
  ifu.io.dnpc   := exu.io.dnpc
  ifu.io.wen    := lsu.io.wen
  io.inst       := ifu.io.inst

  io.ifuvalid   := ifu.io.valid
  io.ifuready   := ifu.io.ready
  io.iduvalid   := idu.io.valid
  io.iduready   := idu.io.ready
  io.exuvalid   := exu.io.valid
  io.exuready   := exu.io.ready
  io.lsuvalid   := lsu.io.valid
  io.lsuready   := lsu.io.ready
  io.wbuvalid   := wbu.io.valid
  io.wbuready   := wbu.io.ready

  io.idurs1     := idu.io.rs1
  io.idurs2     := idu.io.rs2
  io.exurd      := exu.io.rd
  io.lsurd      := lsu.io.rd
  io.wburd      := wbu.io.rd

  io.idupc      := idu.io.pc
  io.exupc      := exu.io.pc

  io.iduMemWr   := idu.io.iduMemWr
  io.exuMemWr   := exu.io.exuMemWr
  io.lsuMemWr   := lsu.io.lsuMemWr
  io.MemtoReg   := lsu.io.MemtoReg

  io.lsuaraddr  := lsu.io.axi.araddr
  io.lsuawaddr  := lsu.io.axi.awaddr
  io.lsurdata   := lsu.io.rdata
  io.lsuwdata   := lsu.io.axi.wdata
  io.lsuarready := lsu.io.axi.arready
  io.lsuarvalid := lsu.io.axi.arvalid
  io.lsuawvalid := lsu.io.axi.awvalid
  io.lsuawready := lsu.io.axi.awready
  io.lsurready  := lsu.io.axi.rready
  io.lsurvalid  := lsu.io.axi.rvalid
  io.lsuwvalid  := lsu.io.axi.wvalid
  io.lsuwready  := lsu.io.axi.wready

  exu.io.mepc   := csr.io.mepc
  exu.io.mtvec  := csr.io.mtvec

  csr.io.mepc_in := exu.io.mepc_in
  csr.io.ecall  := exu.io.ecall
  
  io.ina        := exu.io.ina
  io.inb        := exu.io.inb
  io.pca        := exu.io.pca
  io.pcb        := exu.io.pcb
  io.alumux     := exu.io.alumux
  io.pcadd      := exu.io.pcadd
  io.idupcmux   := idu.io.pcmux
  io.exupcmux   := exu.io.pcmux
  io.iduopcode  := idu.io.opcode
  io.iduinst    := idu.io.inst
  io.PC         := ifu.io.pc
  io.NPC        := exu.io.dnpc

  ebreak.io.isbreak := ifu.io.pc
  ebreak.io.clock   := clock
  ebreak.io.reset   := reset
  ifu.io.halt       := ebreak.io.halt
  io.halt           := ebreak.io.halt
}

class ysyx_23060336_EBREAK extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock   = Input(Clock())
    val reset   = Input(Bool())
    val isbreak = Input(UInt(32.W))
    val halt    = Output(Bool())
  })

  setInline(
    "ebreak.sv",
    """import "DPI-C" function int set_npc_state(input int isbreak);
      | module ysyx_23060336_EBREAK(
      |   input clock,
      |   input reset,
      |   input [31:0] isbreak,
      |   output reg halt
      | );
      |
      | reg [31:0] tmp_halt;
      |
      | assign halt = tmp_halt[0];
      |
      | always@(posedge clock) begin
      |   if(reset) begin
      |     tmp_halt = 32'b0;
      |   end else begin
      |     tmp_halt = set_npc_state(isbreak);
      |   end 
      | end
      |
      | endmodule
    """.stripMargin)
}


  /*
  StageConnect(ifu.io.out, idu.io.in)
  StageConnect(idu.io.out, exu.io.in)
  StageConnect(exu.io.out, wbu.io.in)
  */

/*
object StageConnect{
  def apply[T <: Data](left: DecoupledIO[T], right: DecoupledIO[T]) = {
  val arch = "multi"

  if      (arch == "single")   { right.bits := left.bits }
  else if (arch == "multi")    { right <> left }
  else if (arch == "pipeline") { right <> RegEnable(left, left.fire) }
  else if (arch == "ooo")      { right <> Queue(left, 16) }

 }
}
*/


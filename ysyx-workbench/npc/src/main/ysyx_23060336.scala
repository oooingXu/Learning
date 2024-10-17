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
    val halt_ret   = Output(UInt(32.W))
    val halt   = Output(Bool())
    val stop   = Output(Bool())
    val NPC    = Output(UInt(32.W))
    val PC     = Output(UInt(32.W))
    val inst   = Output(UInt(32.W))
    val mcause = Output(UInt(32.W))
    val mstatus= Output(UInt(32.W))
    val iduopcode = Output(UInt(7.W))
    val idupcmux  = Output(UInt(2.W))
    val iduinst  = Output(UInt(32.W))
    val exupcmux  = Output(UInt(2.W))
    val ifuvalid = Output(Bool())
    val ifuready = Output(Bool())
    val iduvalid = Output(Bool())
    val iduready = Output(Bool())
    val exuvalid = Output(Bool())
    val exuready = Output(Bool())
    val lsuvalid = Output(Bool())
    val lsuready = Output(Bool())
    val wbuvalid = Output(Bool())
    val wbuready = Output(Bool())
    val idupc  = Output(UInt(32.W))
    val exupc  = Output(UInt(32.W))
    val src1   = Output(UInt(32.W))
    val src2   = Output(UInt(32.W))
		})


  val stop = RegInit("b1".U(1.W))

  val ifu  = Module(new ysyx_23060336_IFU())
  val idu  = Module(new ysyx_23060336_IDU())
  val exu  = Module(new ysyx_23060336_EXU())
  val lsu  = Module(new ysyx_23060336_LSU())
  val wbu  = Module(new ysyx_23060336_WBU())
  val reg  = Module(new ysyx_23060336_REG())
  val csr  = Module(new ysyx_23060336_CSR())
  
  val ebreak  = Module(new ysyx_23060336_EBREAK())
  val axi4ifu = Module(new ysyx_23060336_AXI4IFU())
  val axi4lsu = Module(new ysyx_23060336_AXI4LSU())

  def pipelineConnect[T <: Data, T2 <: Data](prevOut: DecoupledIO[T], thisIn: DecoupledIO[T], thisOut: DecoupledIO[T2]) = {
    prevOut.ready := thisIn.ready
    thisIn.bits   := RegEnable(prevOut.bits, prevOut.valid && thisIn.ready)
    thisIn.valid   := prevOut.valid && thisIn.ready
  }

  pipelineConnect(ifu.io.out, idu.io.in, idu.io.out)
  pipelineConnect(idu.io.out, exu.io.in, exu.io.out)
  pipelineConnect(exu.io.out, lsu.io.in, lsu.io.out)
  pipelineConnect(lsu.io.out, wbu.io.in, wbu.io.in)

  //Axi4IFU
  when(axi4ifu.io.awready && ifu.io.axi.awvalid){
    axi4ifu.io.awaddr := ifu.io.axi.awaddr
    axi4ifu.io.awid   := ifu.io.axi.awid
    axi4ifu.io.awlen  := ifu.io.axi.awlen
    axi4ifu.io.awsize := ifu.io.axi.awburst
  }

  when(axi4ifu.io.wready && ifu.io.axi.wvalid){
    axi4ifu.io.wdata := ifu.io.axi.wdata
    axi4ifu.io.wstrb := ifu.io.axi.wstrb
    axi4ifu.io.wlast := ifu.io.axi.wlast
  }

  when(axi4ifu.io.bvalid && ifu.io.axi.bready){
    ifu.io.axi.bresp := axi4ifu.io.bresp
  }

  when(ifu.io.axi.arvalid && axi4ifu.io.arready){
    axi4ifu.io.araddr := ifu.io.axi.araddr
    axi4ifu.io.arid   := ifu.io.axi.arid
    axi4ifu.io.arlen  := ifu.io.axi.arlen
    axi4ifu.io.arsize := ifu.io.axi.arsize
    axi4ifu.io.arburst:= ifu.io.axi.arburst
  }

  when(ifu.io.axi.rready && axi4ifu.io.rvalid){
    ifu.io.axi.rresp := axi4ifu.io.rresp
    ifu.io.axi.rdata := axi4ifu.io.rdata
    ifu.io.axi.rlast := axi4ifu.io.rlast
    ifu.io.axi.rid   := axi4ifu.io.rid
  }

  //Axi4LSU
  when(axi4lsu.io.awready && lsu.io.axi.awvalid){
    axi4lsu.io.awaddr := lsu.io.axi.awaddr
    axi4lsu.io.awid   := lsu.io.axi.awid
    axi4lsu.io.awlen  := lsu.io.axi.awlen
    axi4lsu.io.awsize := lsu.io.axi.awburst
  }

  when(axi4lsu.io.wready && lsu.io.axi.wvalid){
    axi4lsu.io.wdata := lsu.io.axi.wdata
    axi4lsu.io.wstrb := lsu.io.axi.wstrb
    axi4lsu.io.wlast := lsu.io.axi.wlast
  }

  when(axi4lsu.io.bvalid && lsu.io.axi.bready){
    lsu.io.axi.bresp := axi4lsu.io.bresp
  }

  when(lsu.io.axi.arvalid && axi4lsu.io.arready){
    axi4lsu.io.araddr := lsu.io.axi.araddr
    axi4lsu.io.arid   := lsu.io.axi.arid
    axi4lsu.io.arlen  := lsu.io.axi.arlen
    axi4lsu.io.arsize := lsu.io.axi.arsize
    axi4lsu.io.arburst:= lsu.io.axi.arburst
  }

  when(lsu.io.axi.rready && axi4lsu.io.rvalid){
    lsu.io.axi.rresp := axi4lsu.io.rresp
    lsu.io.axi.rdata := axi4lsu.io.rdata
    lsu.io.axi.rlast := axi4lsu.io.rlast
    lsu.io.axi.rid   := axi4lsu.io.rid
  }

  reg.io.raddr1 := idu.io.rs1
  reg.io.raddr2 := idu.io.rs2

  idu.io.src1   := reg.io.rdata1
  idu.io.src2   := reg.io.rdata2

  io.halt_ret   := reg.io.halt_ret
  io.src1       := reg.io.rdata1
  io.src2       := reg.io.rdata2

  reg.io.wen    := wbu.io.RegWr
  reg.io.waddr  := wbu.io.rd
  reg.io.wdata  := wbu.io.DataOut

  idu.io.Csr    := csr.io.rdata
  csr.io.raddr  := idu.io.csr
  csr.io.wdata  := wbu.io.result
  csr.io.waddr  := wbu.io.csr
  csr.io.wen    := wbu.io.CsrWr
  io.mcause     := csr.io.mcause
  io.mstatus    := csr.io.mstatus

  ifu.io.dnpc   := exu.io.dnpc
  io.inst       := ifu.io.inst

  io.ifuvalid      := ifu.io.valid
  io.ifuready      := ifu.io.ready
  io.iduvalid      := idu.io.valid
  io.iduready      := idu.io.ready
  io.exuvalid      := exu.io.valid
  io.exuready      := exu.io.ready
  io.lsuvalid      := lsu.io.valid
  io.lsuready      := lsu.io.ready
  io.wbuvalid      := wbu.io.valid
  io.wbuready      := wbu.io.ready

  io.idupc      := idu.io.pc
  io.exupc      := exu.io.pc

  exu.io.mepc   := csr.io.mepc
  exu.io.mtvec  := csr.io.mtvec
  
  io.idupcmux   := idu.io.pcmux
  io.exupcmux   := exu.io.pcmux
  io.iduopcode     := idu.io.opcode
  io.iduinst       := idu.io.inst
  io.PC         := ifu.io.pc
  io.NPC        := exu.io.dnpc

  stop          := !ifu.io.halt
  io.halt       := ifu.io.halt

  io.stop       := stop



  ebreak.io.isbreak := exu.io.dnpc
  ebreak.io.clock   := clock
  ebreak.io.stop    := stop
}

class ysyx_23060336_EBREAK extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock   = Input(Clock())
    val stop    = Input(Bool())
    val isbreak = Input(UInt(32.W))
  })

  setInline(
    "ebreak.sv",
    """//import "DPI-C" function void set_npc_state(input int isbreak);
      | module ysyx_23060336_EBREAK(
      |   input clock,
      |   input stop,
      |   input [31:0] isbreak
      | );
      |
      | always@(posedge clock) begin
      | if(stop) begin
      |     //set_npc_state(isbreak);
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


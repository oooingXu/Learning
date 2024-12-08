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
class NPC extends Module {
	val io = IO(new Bundle{
    val reset  = Input(Bool())
    val rd     = Output(UInt(5.W))
    val src1   = Output(UInt(32.W))
    val src2   = Output(UInt(32.W))
    val halt_ret = Output(UInt(32.W))
    val PC     = Output(UInt(32.W))
    val NPC    = Output(UInt(32.W))
    val halt   = Output(UInt(32.W))
    val instType  = Output(UInt(3.W))
    val result = Output(UInt(32.W))
    val ina    = Output(UInt(32.W))
    val inb    = Output(UInt(32.W))
    val inst   = Output(UInt(32.W))
    val DataOut= Output(UInt(32.W))
    val AluMux = Output(UInt(3.W))
    val AluSel = Output(UInt(4.W))
    val PCMux  = Output(UInt(4.W))
    val MemNum = Output(UInt(2.W))
    val RegWr  = Output(Bool())
    val MemWr  = Output(Bool())
    val stop   = Output(Bool())
    val MemtoReg = Output(Bool())
		})

  val stop = RegInit("b1".U(1.W))
  val pc   = RegInit("h80000000".U(32.W))
  val npc  = "h80000000".U(32.W)

  val ifu  = Module(new IFU())
  val idu  = Module(new IDU())
  val exu  = Module(new EXU())
  val wbu  = Module(new WBU())

  exu.io.pc       := pc
  idu.io.pc       := pc

  ifu.io.Maddr    := Mux(io.reset, npc, exu.io.dnpc)
  ifu.io.clock    := clock
  ifu.io.halt     := idu.io.halt
  idu.io.inst     := ifu.io.inst
  idu.io.DataOut  := wbu.io.DataOut

  wbu.io.MemNum   := idu.io.MemNum
  wbu.io.RegNum   := idu.io.RegNum
  wbu.io.MemtoReg := idu.io.MemtoReg
  wbu.io.RegWr    := idu.io.RegWr
  wbu.io.MemWr    := idu.io.MemWr
  wbu.io.src2     := idu.io.src2

  wbu.io.result   := exu.io.result
  idu.io.result   := exu.io.result

  exu.io.ecall    := idu.io.ecall
  exu.io.mret     := idu.io.mret
  exu.io.halt     := idu.io.halt
  exu.io.imm      := idu.io.imm
  exu.io.zimm     := idu.io.zimm
  exu.io.Recsr    := idu.io.Recsr
  exu.io.PcMux    := idu.io.PcMux
  exu.io.AluMux   := idu.io.AluMux
  exu.io.AluSel   := idu.io.AluSel
  exu.io.Branch   := idu.io.Branch
  exu.io.MemtoReg := idu.io.MemtoReg

  exu.io.src1     := idu.io.src1
  exu.io.src2     := idu.io.src2
  exu.io.mtvec    := idu.io.mtvec
  exu.io.mepc     := idu.io.mepc
  exu.io.Csr      := idu.io.Csr

  stop            := !idu.io.halt
  io.halt         := idu.io.halt

  io.stop         := stop
  io.halt_ret     := idu.io.halt_ret
  io.src1         := idu.io.src1
  io.src2         := idu.io.src2
  io.DataOut      := wbu.io.DataOut
  io.MemNum       := idu.io.MemNum
  io.MemtoReg     := idu.io.MemtoReg
  io.AluMux       := idu.io.AluMux
  io.AluSel       := idu.io.AluSel
  io.PCMux        := exu.io.PCMux
  io.result       := exu.io.result
  io.ina          := exu.io.ina
  io.inb          := exu.io.inb
  io.inst         := ifu.io.inst
  io.instType     := idu.io.instType
  io.rd           := idu.io.rd
  io.RegWr        := idu.io.RegWr
  io.MemWr        := idu.io.MemWr

  io.PC           := pc
  pc              := Mux(io.reset, npc, exu.io.dnpc)
  io.NPC          := exu.io.dnpc


  val DpiEbreak = Module(new DpiEbreak)
  DpiEbreak.io.isbreak := Mux(io.reset, npc, exu.io.dnpc)
  DpiEbreak.io.clock   := clock
  DpiEbreak.io.halt    := idu.io.halt
  DpiEbreak.io.stop    := stop
}

class DpiEbreak extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock   = Input(Clock())
    val halt    = Input(Bool())
    val stop    = Input(Bool())
    val isbreak = Input(UInt(32.W))
  })

  setInline(
    "ebreak.sv",
    """import "DPI-C" function void set_npc_state(input int isbreak);
      | module DpiEbreak(
      |   input clock,
      |   input halt,
      |   input stop,
      |   input [31:0] isbreak
      | );
      |
      | always@(posedge clock) begin
      | if(stop) begin
      |     set_npc_state(isbreak);
      |   end
      | end
      |
      | endmodule
    """.stripMargin)
}



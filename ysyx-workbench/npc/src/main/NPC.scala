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
    val halt_ret = Output(UInt(32.W))
    val PC     = Output(UInt(32.W))
    val NPC    = Output(UInt(32.W))
    val halt   = Output(UInt(32.W))
    val stop   = Output(Bool())
		})

  val stop = RegInit("b1".U(1.W))
  val pc   = RegInit("h80000000".U(32.W))
  val npc  = "h80000000".U(32.W)

  val ifu  = Module(new IFU())
  val idu  = Module(new IDU())
  val exu  = Module(new EXU())
  val wbu  = Module(new WBU())

  StageConnect(ifu.io.out, idu.io.in)
  StageConnect(idu.io.out, exu.io.in)
  StageConnect(exu.io.out, wbu.io.in)

  ifu.io.Maddr    := Mux(io.reset, npc, exu.io.dnpc)
  ifu.io.clock    := clock

  stop            := !idu.io.halt
  io.halt         := idu.io.halt

  io.stop         := stop
  io.halt_ret     := wbu.io.halt_ret

  io.PC           := pc
  pc              := Mux(io.reset, npc, 
                     Mux(wbu.io.vaild === idu.io.MemtoReg, exu.io.dnpc, pc))
  io.NPC          := Mux(io.reset, npc, exu.io.dnpc)


  val dpiebreak = Module(new DpiEbreak)
  dpiebreak.io.isbreak := Mux(io.reset, npc, exu.io.dnpc)
  dpiebreak.io.clock   := clock
  dpiebreak.io.halt    := idu.io.halt
  dpiebreak.io.stop    := stop
}

object StageConnect{
  def apply[T <: Data](left: DecoupledIO[T], right: DecoupledIO[T]) = {
  val arch = "multi"

  if      (arch == "single")   { right.bits := left.bits }
  else if (arch == "multi")    { right <> left }
  else if (arch == "pipeline") { right <> RegEnable(left, left.fire) }
  else if (arch == "ooo")      { right <> Queue(left, 16) }

 }
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



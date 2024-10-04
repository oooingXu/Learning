package npc

import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline

class Inst extends Bundle {
  val inst = Output(UInt(32.W))
  val pc   = Output(UInt(32.W))
}

class IFU extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock    = Input(Clock())
    val halt     = Input(Bool())
    val reset    = Input(Bool())
    val out      = Decoupled(new Inst)
    val in       = Flipped(Decoupled(new DATAOut))
  })

  val f_idle :: f_wait_ready :: Nil = Enum(2)
  val state = RegInit(f_idle)

  val pc = RegInit("h80000000".U(32.W))
  val inst = Reg(UInt(32.W))
  val Maddr = (io.reset, pc, io.in.bits.dnpc)

  state := MuxLookup(state, f_idle)(List(
    f_idle       -> Mux(io.out.valid, f_wait_ready, f_idle),
    f_wait_ready -> Mux(io.out.ready, f_idle, f_wait_ready)
  ))

  io.out.valid := (state === f_wait_ready)
  io.out.ready := (state === f_idle)

  io.out.bits.inst := inst

  setInline(
    "ifu.sv",
    """import "DPI-C" function int pmem_read(input int Maddr);
    | module IFU(
    |   input halt,
    |   input clock,
    |   input [31:0] Maddr,
    |   output reg [31:0] inst
    | );
    |
    | always@(posedge clock) begin
    |   if(!halt) begin
    |     inst <= pmem_read(Maddr);
    |   end else begin
    |     inst <= inst;
    |   end
    | end
    |
    | endmodule
  """.stripMargin)
}

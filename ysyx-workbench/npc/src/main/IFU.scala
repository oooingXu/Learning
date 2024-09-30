package npc

import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline

class Inst extends Bundle {
  val inst = Output(UInt(32.W))
  val pc   = Output(UInt(32.W))
  val DataOut = Output(UInt(32.W))
}

class IFU extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock    = Input(Clock())
    val halt     = Input(Bool())
    val out      = Irrevocable(new Inst)
    val in       = Flipped(Irrevocable(new DATAOut))
    //val in       = Flipped(Irrevocable(new DATAOut))
  })

  val inst = Wire(UInt(32.W))
  val f_idle :: f_wait_ready :: Nil = Enum(2)
  val state = RegInit(f_idle)

  val ready = true.B
  val Maddr = io.in.bits.dnpc

  state := MuxLookup(state, f_idle)(List(
    f_idle       -> Mux(io.out.valid, f_wait_ready, f_idle),
    f_wait_ready -> Mux(io.in.ready, f_idle, f_wait_ready)
  ))

  io.out.valid := (state === f_wait_ready)
  io.in.ready  := (state === f_idle)

  io.out.bits.inst := inst
  io.out.bits.DataOut := io.in.bits.DataOut

  setInline(
    "ifu.sv",
    """import "DPI-C" function int pmem_read(input int Maddr);
    | module IFU(
    |   input halt,
    |   input clock,
    |   input valid,
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

package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_WBU extends Module{
  val io = IO(new Bundle{
    val in       = Flipped(Decoupled(new ysyx_23060336_LSUdata))
    val RegWr    = Output(Bool())
    val CsrWr    = Output(Bool())
    val rd       = Output(UInt(5.W))
    val csr      = Output(UInt(12.W))
    val result   = Output(UInt(32.W))
    val DataOut  = Output(UInt(32.W))
    val pc       = Output(UInt(32.W))
    val valid    = Output(Bool())
    val ready    = Output(Bool())
  })

  val ebreak  = Module(new ysyx_23060336_EBREAK())

  ebreak.io.clock  := clock
  ebreak.io.ebreak := io.in.bits.ebreak

  io.valid    := true.B
  io.ready    := io.in.ready
  io.in.ready := true.B

  /*
  val w_idle :: w_wait_ready :: Nil = Enum(2)
  val state = RegInit(w_idle)

  state := MuxLookup(state, w_idle)(List(
    w_idle       -> Mux(io.out.valid, w_wait_ready, w_idle),
    w_wait_ready -> Mux(io.out.ready, w_idle, w_wait_ready)
  ))

  io.out.valid := (state === w_wait_ready)
  io.in.ready := (state === w_idle)
  */


  io.pc     := io.in.bits.pc
  io.rd     := io.in.bits.rd
  io.csr    := io.in.bits.csr
  io.CsrWr  := io.in.bits.CsrWr
  io.RegWr  := io.in.bits.RegWr
  io.result := io.in.bits.result

  io.DataOut := Mux(io.CsrWr, io.in.bits.Csr,
                Mux(io.in.bits.RegNum === "b010".U, io.in.bits.DataOut,
                Mux(io.in.bits.RegNum === "b101".U, io.in.bits.DataOut, 
                Mux(io.in.bits.RegNum === "b011".U, Cat(Fill(24, 0.U), io.in.bits.DataOut(7, 0)),
                Mux(io.in.bits.RegNum === "b100".U, Cat(Fill(16, 0.U), io.in.bits.DataOut(15, 0)),
                Mux(io.in.bits.RegNum === "b000".U, Cat(Fill(24, io.in.bits.DataOut(7)),  io.in.bits.DataOut(7, 0)),
                Mux(io.in.bits.RegNum === "b001".U, Cat(Fill(16, io.in.bits.DataOut(15)), io.in.bits.DataOut(15, 0)), io.in.bits.DataOut)))))))
}

class ysyx_23060336_EBREAK extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock = Input(Clock())
    val ebreak = Input(Bool())
  })

  setInline(
    "ebreak.sv",
  """import "DPI-C" function void set_npc_state(input int ebreak);
    | module ysyx_23060336_EBREAK(
    |   input clock,
    |   input ebreak
    | );
    |
    | always@(posedge clock) begin
    |   set_npc_state({31'b0, ebreak});
    | end
    |
    | endmodule
  """.stripMargin)
}


package npc

import chisel3._
import chisel3.util._

class DATAOut extends Bundle{
  val dnpc     = Output(UInt(32.W))
}

class WBU extends Module{
  val io = IO(new Bundle{
    val in       = Flipped(Decoupled(new MyData))
    val out      = Decoupled(new DATAOut)
    val RegWr    = Output(Bool())
    val rd       = Output(UInt(5.W))
    val DataOut  = Output(UInt(32.W))
  })

  val w_idle :: w_wait_ready :: Nil = Enum(2)
  val state = RegInit(w_idle)

  state := MuxLookup(state, w_idle)(List(
    w_idle       -> Mux(io.out.valid, w_wait_ready, w_idle),
    w_wait_ready -> Mux(io.out.ready, w_idle, w_wait_ready)
  ))

  io.out.valid := (state === w_wait_ready)
  io.out.ready := (state === w_idle)

  io.out.bits.dnpc := io.in.bits.dnpc

  io.rd := io.in.bits.rd

  io.DataOut := Mux(io.in.bits.RegNum === "b010".U, io.in.bits.DataOut,
                Mux(io.in.bits.RegNum === "b101".U, io.in.bits.DataOut, 
                Mux(io.in.bits.RegNum === "b011".U, Cat(Fill(24, 0.U), io.in.bits.DataOut(7, 0)),
                Mux(io.in.bits.RegNum === "b100".U, Cat(Fill(16, 0.U), io.in.bits.DataOut(15, 0)),
                Mux(io.in.bits.RegNum === "b000".U, Cat(Fill(24, io.in.bits.DataOut(7)),  io.in.bits.DataOut(7, 0)),
                Mux(io.in.bits.RegNum === "b001".U, Cat(Fill(16, io.in.bits.DataOut(15)), io.in.bits.DataOut(15, 0)), io.in.bits.DataOut))))))
}


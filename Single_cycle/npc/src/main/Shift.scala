package npc

import chisel3._
import chisel3.util._

class Shift(w: Int) extends Module{
	val io = IO(new Bundle{
		val in = Input(UInt(w.W))
		val shamt = Input(UInt(log2Up(w).W))
		val isLeft = Input(Bool())
		val izArith = Input(Bool())
		val out = Output(UInt(w.W))
	})
	val leftIn = Mux(io.izArith, io.in(w-1), false.B)
	def layer(din: Seq[Bool], n : Int): Seq[Bool] = {
		val s = 1 << n
		def shiftRight(i: Int) = if(i + s >= w) leftIn else din(i + s)
		def shiftLeft (i: Int) = if(i < s) false.B else din(i - s)
		val sel = Cat(io.isLeft, io.shamt(n))
		din.zipWithIndex.map{case(b, i) => 
			VecInit(b, shiftRight(i), b, shiftLeft(i))(sel)}
	}
	def barrelshift(din: Seq[Bool], k: Int): Seq[Bool]=
		if(k == 0) din
		else barrelshift(layer(din, k-1), k-1)
	io.out := Cat(barrelshift(io.in.asBools, log2Up(w)).reverse)
}

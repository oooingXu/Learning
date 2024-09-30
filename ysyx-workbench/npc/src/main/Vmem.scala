package gcd

import chisel3._
import chisel3.util._
import chisel3.util.experimental.loadMemoryFromFile

class Vmem extends Module {
	  val io = IO(new Bundle {
			val h_addr  = Input(UInt(10.W))
			val v_addr  = Input(UInt(9.W))
			val vga_data = Output(UInt(24.W))
	})

	val vga_mem = Mem(524288, UInt(24.W))

	loadMemoryFromFile(vga_mem, "resource/picture.hex")

	io.vga_data := vga_mem(Cat(io.h_addr, io.v_addr))
}


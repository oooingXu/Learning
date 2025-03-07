package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_ALU(n: Int) extends Module {
	val io = IO(new Bundle{
		val sel			 = Input(UInt(Base.AluSelWidth.W))
		val ina			 = Input(UInt(n.W))
		val inb			 = Input(UInt(n.W))
		val result   = Output(UInt(n.W))
	})

  val zero     = Wire(Bool())
  val carry    = Wire(Bool())
  val overflow = Wire(Bool())
	val cin			= io.sel(0) | io.sel(3)

	val out1  = Wire(UInt(n.W))
	val out3  = ~io.ina 
	val out4  = io.ina & io.inb
	val out5  = io.ina | io.inb
	val out6  = io.ina ^ io.inb
	val out7  = Wire(UInt(n.W))
  val out10 = Wire(UInt(n.W)) // a < b
  val out11 = Wire(UInt(n.W)) // a < b (U)
  val out12 = Wire(UInt(n.W)) // a >= b
  val out13 = Wire(UInt(n.W)) // a >= b (U)
  val out14 = Wire(UInt(n.W)) // a == b
  val out15 = Wire(UInt(n.W)) // a != b

	val addsub = Module(new ysyx_23060336_AddSub(n))
	addsub.io.ina := io.ina
	addsub.io.inb := io.inb
	addsub.io.cin := cin
	carry         := addsub.io.carry
	zero          := addsub.io.zero
	overflow      := addsub.io.overflow
	out1          := addsub.io.result
	out11         := Cat(Fill(n-1, 0.U), cin ^ addsub.io.carry)
	out13         := Cat(Fill(n-1, 0.U), ~(cin ^ addsub.io.carry))
	
	val shift = Module(new ysyx_23060336_SHIFT(n))
  shift.io.in      := io.ina
  shift.io.shamt   := io.inb
  shift.io.isLeft  := io.sel(0)
  shift.io.izArith := io.sel(1)
  out7             := shift.io.out

	out10 := Cat(Fill(n-1, 0.U), addsub.io.result(n-1) ^ overflow)    // a < b
	out12 := Cat(Fill(n-1, 0.U), ~(addsub.io.result(n-1) ^ overflow) | zero)               // a >= b
	out14 := Cat(Fill(n-1, 0.U),zero)                     // a == b
	out15 := Cat(Fill(n-1, 0.U),~zero)                    // a != b

  //when(io.sel === 0.U) {
  //  io.result := out1 // a + b
  //}.elsewhen(io.sel === 1.U) {
  //  io.result := out1 // a - b
  //}.elsewhen(io.sel === 2.U) {
  //  io.result := out3 // ~a
  //}.elsewhen(io.sel === 3.U) {
  //  io.result := out4 // a & b
  //}.elsewhen(io.sel === 4.U) {
  //  io.result := out5 // a | b
  //}.elsewhen(io.sel === 5.U) {
  //  io.result := out6 // a ^ b
  //}.elsewhen(io.sel === 6.U) {
  //  io.result := out7 // a >> b
  //}.elsewhen(io.sel === 7.U) {
  //  io.result := out7 // a << b
  //}.elsewhen(io.sel === 8.U) {
  //  io.result := out7 // a >>> b
  //}.elsewhen(io.sel === 9.U) {
  //  io.result := out10 // a < b
  //}.elsewhen(io.sel === 10.U) {
  //  io.result := out11 // a < b u
  //}.elsewhen(io.sel === 11.U) {
  //  io.result := out12 // a >= b
  //}.elsewhen(io.sel === 12.U) {
  //  io.result := out13 // a >= b u
  //}.elsewhen(io.sel === 13.U) {
  //  io.result := out14 // 其他逻辑
  //}.otherwise {
  //  io.result := out15 // 默认值
  //}

	io.result := Mux(io.sel === 0.U,  out1, // a + b
							 Mux(io.sel === 1.U,  out1, // a - b
							 Mux(io.sel === 2.U,  out3, // ~a
							 Mux(io.sel === 3.U,  out4, // a & b
							 Mux(io.sel === 4.U,  out5, // a | b
							 Mux(io.sel === 5.U,  out6, // a ^ b
               Mux(io.sel === 6.U,  out7, // a >> b A
							 Mux(io.sel === 7.U,  out7, // a << b
               Mux(io.sel === 8.U,  out7, // a >>> b L
							 Mux(io.sel === 9.U,  out10,// a < b 
               Mux(io.sel === 10.U, out11,// a < b u
               Mux(io.sel === 11.U, out12,// a>= b 
               Mux(io.sel === 12.U, out13,// a>= b u 
							 Mux(io.sel === 13.U, out14, out15))))))))))))))
} // a == b   // a != b


class ysyx_23060336_AddSub(n: Int) extends Module {
	val io = IO(new Bundle{
		val cin			 = Input(Bool())
		val ina			 = Input(UInt(n.W))
		val inb			 = Input(UInt(n.W))
		val result	 = Output(UInt(n.W))
		val zero		 = Output(Bool())
		val carry		 = Output(Bool())
		val overflow = Output(Bool())
	})

  val t_no_cin  = Wire(UInt(32.W))
  val sum       = Wire(UInt(33.W))
	
	t_no_cin := (Fill(n, io.cin) ^ io.inb) 
	sum      := io.ina +& t_no_cin + io.cin

  io.result   := sum(n-1, 0)
  io.carry    := sum(n)
  io.overflow := (io.ina(n-1) === t_no_cin(n-1) && io.result(n-1) =/= io.ina(n-1))
  io.zero     := (io.result === 0.U)
}


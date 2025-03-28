package gcd

import chisel3._
import chisel3.util._
import chisel3.util.experimental.loadMemoryFromFileInline

class YPC extends Module {
  val io = IO(new Bundle{ val halt = Output(Bool()) })

  val R  = Mem(32, UInt(32.W))
  val PC = RegInit(0.U(32.W))
  val memInterface = Module(new MemoryInterface)

  def Rread(idx: UInt) = Mux(idx === 0.U, 0.U(32.W), R(idx))

  val Ibundle = new Bundle {
    val imm11_0 = UInt(12.W)
    val rs1     = UInt( 5.W)
    val funct3  = UInt( 3.W)
    val rd      = UInt( 5.W)
    val opcode  = UInt( 7.W)
  }
  def SignEXT(imm11_0: UInt) = Cat(Fill(20, imm11_0(11)), imm11_0)

  memInterface.io.addr := PC
	memInterface.io.wdata := 0.U
  memInterface.io.we := false.B
  val inst = memInterface.io.rdata.asTypeOf(Ibundle)
  
  val isAddi = (inst.opcode === "b0010011".U) && (inst.funct3 === "b000".U)
  val isEbreak = inst.asUInt === "x00100073".U
  assert(isAddi || isEbreak, "Invalid instruction 0x%x", inst.asUInt)

  val rs1Val = Rread(Mux(isEbreak, 10.U(5.W), inst.rs1))
  val rs2Val = Rread(Mux(isEbreak, 11.U(5.W), 0.U(5.W)))
  when (isAddi) { R(inst.rd) := rs1Val + SignEXT(inst.imm11_0) }
  when (isEbreak && (rs1Val === 0.U)) { printf("%c", rs2Val(7,0)) }
  io.halt := isEbreak && (rs1Val === 1.U)
  PC := PC + 4.U
}

class MemoryInterface extends BlackBox {
  val io = IO(new Bundle {
    val addr  = Input(UInt(32.W))
    val wdata = Input(UInt(32.W))
    val we    = Input(Bool())
    val rdata = Output(UInt(32.W))
  })
}

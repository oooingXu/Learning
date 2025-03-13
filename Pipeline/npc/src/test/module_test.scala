package npc

import chisel3._
import chisel3.util._
import chiseltest._
import chiseltest.formal._
import org.scalatest.flatspec.AnyFlatSpec

class Sub extends Module {
  val io = IO(new Bundle {
    val a = Input(UInt(4.W))
    val b = Input(UInt(4.W))
    val c = Output(UInt(4.W))
  })
  io.c := io.a + ~io.b + 1.U

  val ref = io.a - io.b
  assert(io.c === ref)
}

class AluTest extends Module {
  val io = IO(new Bundle {
    val ina = Input(UInt(32.W))
    val inb = Input(UInt(32.W))
    val sel = Input(UInt(4.W))   // 支持0-15共16种操作
  })

  // ALU实例化
  val alu = Module(new ysyx_23060336_ALU(32))
  alu.io.ina := io.ina
  alu.io.inb := io.inb
  alu.io.sel := io.sel

  // 参考模型计算结果（关键修改点）
  val ref_add = io.ina + io.inb
  val ref_sub = io.ina - io.inb
  val ref_rev = ~io.ina
  val ref_and = io.ina & io.inb
  val ref_or  = io.ina | io.inb
  val ref_xor = io.ina ^ io.inb
  // 修正移位操作（移除多余括号）
  val shiftAmount = io.inb(4,0) // 0-31
  val ref_sra = (io.ina.asSInt >> shiftAmount).asUInt
  val ref_sll = io.ina << shiftAmount
  val ref_srl = io.ina >> shiftAmount
  // 修正比较操作（Bool转UInt的两种方式）
  val ref_lt_s = Mux(io.ina.asSInt < io.inb.asSInt, 1.U(32.W), 0.U(32.W))
  val ref_lt_u = Mux(io.ina < io.inb, 1.U(32.W), 0.U(32.W))
  val ref_ge_s = Mux(io.ina.asSInt >= io.inb.asSInt, 1.U(32.W), 0.U(32.W))
  val ref_ge_u = Mux(io.ina >= io.inb, 1.U(32.W), 0.U(32.W))
  val ref_beq = Mux(io.ina === io.inb, 1.U(32.W), 0.U(32.W))
  val ref_bne = Mux(io.ina =/= io.inb, 1.U(32.W), 0.U(32.W))

  // 根据选择信号验证结果
  switch(io.sel) {
    is(0.U)  { assert(alu.io.result === ref_add) }
    is(1.U)  { assert(alu.io.result === ref_sub) }
    is(2.U)  { assert(alu.io.result === ref_rev) }
    is(3.U)  { assert(alu.io.result === ref_and) }
    is(4.U)  { assert(alu.io.result === ref_or)  }
    is(5.U)  { assert(alu.io.result === ref_xor) }
    is(6.U)  { assert(alu.io.result === ref_sra) }
    is(7.U)  { assert(alu.io.result === ref_sll) }
    is(8.U)  { assert(alu.io.result === ref_srl) }
    is(9.U)  { assert(alu.io.result === ref_lt_s) }
    is(10.U) { assert(alu.io.result === ref_lt_u) }
    is(11.U) { assert(alu.io.result === ref_ge_s) }
    is(12.U) { assert(alu.io.result === ref_ge_u) }
    is(13.U) { assert(alu.io.result === ref_beq) }
    is(14.U) { assert(alu.io.result === ref_bne) }
    is(15.U) { assert(alu.io.result === ref_bne) }       
  }
}

//class CacheTest extends Module {
//  val io = IO(new Bundle {
//    val slave = new ysyx_23060336_AXI4Slave()
//    val master = new ysyx_23060336_AXI4Master()
//  })
//
//  val memSize = 128  // byte
//  val mem = Mem(memSize / 4, UInt(32.W))
//  val dut = Module(new ysyx_23060336_ICACHE(2, 4))
//
//  dut.io.slave <> io.slave
//  io.master <> dut.io.master
//  dut.io.slave.awvalid := 0.U
//  dut.io.awvalid := 0.U
//  dut.io.awaddr := 0.U
//
//  val dutData = dut.io.slave.rdata
//  val refData = mem(io.slave.araddr)
//  when (dut.io.slave.rvalid) {
//    assert(dutData === refData)
//  }
//}

class FormalTest extends AnyFlatSpec with ChiselScalatestTester with Formal {
  "Test" should "pass" in {
    verify(new Sub, Seq(BoundedCheck(1), BtormcEngineAnnotation))
    verify(new AluTest, Seq(BoundedCheck(1), BtormcEngineAnnotation))
    //verify(new CacheTest, Seq(BoundedCheck(1), BtormcEngineAnnotation))
  }
}

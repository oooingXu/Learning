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

class CacheTest extends Module {
  val io = IO(new Bundle {
    val slave = new ysyx_23060336_AXI4Slave()
    val master = new ysyx_23060336_AXI4Master()
  })

  val memSize = 128  // byte
  val mem = Mem(memSize / 4, UInt(32.W))
  val dut = Module(new ysyx_23060336_ICACHE(2, 4))

  dut.io.slave <> io.slave
  io.master <> dut.io.master
  dut.io.slave.awvalid := 0.U
  dut.io.awvalid := 0.U
  dut.io.awaddr := 0.U

  val dutData = dut.io.slave.rdata
  val refData = mem(io.slave.araddr)
  when (dut.io.slave.rvalid) {
    assert(dutData === refData)
  }
}

class FormalTest extends AnyFlatSpec with ChiselScalatestTester with Formal {
  "Test" should "pass" in {
    verify(new Sub, Seq(BoundedCheck(1), BtormcEngineAnnotation))
    verify(new CacheTest, Seq(BoundedCheck(1), BtormcEngineAnnotation))
  }
}

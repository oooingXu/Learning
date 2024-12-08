package npc

import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline

class WBU extends Module{
  val io = IO(new Bundle{
    val MemNum   = Input(UInt(3.W))
    val RegNum   = Input(UInt(3.W))
    val result   = Input(UInt(32.W))
    val src2     = Input(UInt(32.W))
    val MemtoReg = Input(Bool())
    val MemWr    = Input(Bool())
    val RegWr    = Input(Bool())
    val ecall    = Input(Bool())
    val DataOut  = Output(UInt(32.W))
  })

  val lsu = Module(new LSU())
  lsu.io.clock    := clock
  lsu.io.DataIn   := io.src2
  lsu.io.Maddr    := io.result
  lsu.io.MemWr    := io.MemWr
  lsu.io.wmask    := Cat(Fill(29, 0.U), io.MemNum)
  lsu.io.MemtoReg := io.MemtoReg

  io.DataOut := Mux(io.RegNum === "b010".U, lsu.io.DataOut,
                Mux(io.RegNum === "b101".U, lsu.io.DataOut, lsu.io.DataOut,
                Mux(io.RegNum === "b011".U, Cat(Fill(24, 0.U), lsu.io.DataOut(7, 0)),
                Mux(io.RegNum === "b100".U, Cat(Fill(16, 0.U), lsu.io.DataOut(15, 0)),
                Mux(io.RegNum === "b000".U, Cat(Fill(24, lsu.io.DataOut(7)),  lsu.io.DataOut(7, 0)),
                Mux(io.RegNum === "b001".U, Cat(Fill(16, lsu.io.DataOut(15)), lsu.io.DataOut(15, 0))))))))
}

class LSU extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock    = Input(Clock())
    val Maddr    = Input(UInt(32.W))
    val DataIn   = Input(UInt(32.W))
    val wmask    = Input(UInt(32.W))
    val MemWr    = Input(Bool())
    val MemtoReg = Input(Bool())
    val DataOut  = Output(UInt(32.W))
  })

  setInline(
    "memory.sv",
    """import "DPI-C" function void pmem_write(input int Maddr, input int DataIn, input int wmask); 
      | module LSU(
      |   input [31:0] Maddr,
      |   input [31:0] DataIn,
      |   input [31:0] wmask,
      |   input        MemWr,
      |   input        MemtoReg,
      |   input        clock,
      |   output reg [31:0] DataOut
      | );
      |
      | always@(*) begin
      |   if(MemtoReg) begin
      |     DataOut = pmem_read(Maddr);
      |   end else begin
      |     DataOut = 32'b0;
      |   end
      |   if(MemWr) begin
      |    pmem_write(Maddr, DataIn, wmask);
      |   end
      | end
      |
      | endmodule
    """.stripMargin)

}


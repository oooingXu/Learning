package npc

import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline

class Data extends Bundle{
  val DataOut  = Output(UInt(32.W))
  val result   = Output(UInt(32.W))
  val dnpc     = Output(UInt(32.W))
  val MemNum   = Output(UInt(3.W))
  val RegNum   = Output(UInt(3.W))
  val MemWr    = Output(Bool())
  val RegWr    = Output(Bool())
  val ecall    = Output(Bool())
}

class LSU extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock    = Input(Clock())
    val out      = Decoupled(new Data)
    val in       = Flipped(Decoupled(new Result))
  })

  val DataOut  = Wire(UInt(32.W))
  val wmask    = Wire(UInt(32.W))
  val DataIn   = Wire(UInt(32.W))
  val MemtoReg = Wire(Bool())

  val l_idle :: l_wait_ready :: Nil = Enum(2)
  val state = RegInit(l_idle)

  state = MuxLookup(state, l_idle)(List(
    l_idle       -> Mux(io.out.valid, l_wait_ready, l_idle),
    l_wait_ready -> Mux(io,in,ready, l_idle, l_wait_ready)
  ))

  io.out.valid := (state === l_wait_ready)
  io.in.ready  := (state === l_idle)

  io.out.bits.Dataout  := DataOut
  io.out.bits.MemNum   := io.in.bits.MemNum  
  io.out.bits.RegNum   := io.in.bits.RegNum  
  io.out.bits.MemWr    := io.in.bits.MemWr   
  io.out.bits.RegWr    := io.in.bits.RegWr   
  io.out.bits.result   := io.in.bits.result  
  io.out.bits.dnpc     := io.in.bits.dnpc    
  io.out.bits.ecall    := io.in.bits.ecall   

  MemtoReg := io.in.bits.MemtoReg
  wmask    := io.in.bits.MemNum
  DataIn   := io.in.bits.result

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
      | always@(posedge clock) begin
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


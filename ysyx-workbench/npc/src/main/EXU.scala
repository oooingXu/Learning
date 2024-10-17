package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_EXUdata extends Bundle{
   val result   = Output(UInt(32.W))
   val src2     = Output(UInt(32.W))
   val Csr      = Output(UInt(32.W))
   val csr      = Output(UInt(12.W))
   val MemNum   = Output(UInt(3.W))
   val RegNum   = Output(UInt(3.W))
   val rd       = Output(UInt(5.W))
   val MemtoReg = Output(Bool())
   val MemWr    = Output(Bool())
   val RegWr    = Output(Bool())
   val CsrWr    = Output(Bool())
}

class ysyx_23060336_EXU extends Module{
  val io = IO(new Bundle{
    val in  = Flipped(Decoupled(new ysyx_23060336_IDUdata))
    val out = Decoupled(new ysyx_23060336_EXUdata)
    val mepc = Input(UInt(32.W))
    val mtvec = Input(UInt(32.W))
    val pcmux = Output(UInt(2.W))
    val pc   = Output(UInt(32.W))
    val dnpc = Output(UInt(32.W))
    val valid    = Output(Bool())
    val ready    = Output(Bool())
  })

  val ina   = Wire(UInt(32.W))
  val inb   = Wire(UInt(32.W))
  val rs1   = Wire(UInt(32.W))
  val zimm  = Wire(UInt(32.W))
  val pca   = Wire(UInt(32.W))
  val pcb   = Wire(UInt(32.W))
  val pcadd = Wire(UInt(32.W))
  val PCMux = Wire(UInt(4.W))

  val pc    = "h80000000".U
  val empty = (io.in.bits.pc === 0.U)

  val e_idle :: e_wait_ready :: Nil = Enum(2)
  val state = RegInit(e_idle)

  state := MuxLookup(state, e_idle)(List(
    e_idle       -> Mux(io.out.valid, e_wait_ready, e_idle),
    e_wait_ready -> Mux(io.out.ready, e_idle, e_wait_ready)
  ))

  io.out.valid := true.B
  io.in.ready := true.B

  io.valid  := io.out.valid
  io.ready  := io.in.ready

  rs1  := Mux(io.in.bits.Recsr, ~io.in.bits.src1, io.in.bits.src1)
  zimm := Mux(io.in.bits.Recsr, ~io.in.bits.zimm, io.in.bits.zimm)

  ina := Mux(io.in.bits.AluMux === "b0111".U, io.in.bits.src1,
                Mux(io.in.bits.AluMux === "b0001".U, io.in.bits.src1,
                Mux(io.in.bits.AluMux === "b0010".U, io.in.bits.pc,
                Mux(io.in.bits.AluMux === "b0011".U, 0.U,
                Mux(io.in.bits.AluMux === "b0100".U, io.in.bits.pc, 
                Mux(io.in.bits.AluMux === "b0101".U, rs1,
                Mux(io.in.bits.AluMux === "b1000".U, rs1,
                Mux(io.in.bits.AluMux === "b1001".U, zimm,
                Mux(io.in.bits.AluMux === "b0110".U, zimm, 0.U(32.W))))))))))

  inb := Mux(io.in.bits.AluMux === "b0111".U, io.in.bits.src2,
                Mux(io.in.bits.AluMux === "b0001".U, io.in.bits.imm,
                Mux(io.in.bits.AluMux === "b0010".U, 4.U,
                Mux(io.in.bits.AluMux === "b0011".U, io.in.bits.imm,
                Mux(io.in.bits.AluMux === "b0101".U, io.in.bits.Csr,
                Mux(io.in.bits.AluMux === "b0110".U, io.in.bits.Csr,
                Mux(io.in.bits.AluMux === "b0100".U, io.in.bits.imm, 0.U(32.W))))))))

  io.out.bits.MemtoReg := io.in.bits.MemtoReg
  io.out.bits.MemNum   := io.in.bits.MemNum
  io.out.bits.RegNum   := io.in.bits.RegNum
  io.out.bits.MemWr    := io.in.bits.MemWr
  io.out.bits.RegWr    := io.in.bits.RegWr
  io.out.bits.CsrWr    := io.in.bits.CsrWr
  io.out.bits.Csr      := io.in.bits.Csr  
  io.out.bits.csr      := io.in.bits.csr  
  io.out.bits.src2     := io.in.bits.src2
  io.out.bits.rd       := io.in.bits.rd

  val alu = Module(new ysyx_23060336_ALU(32))
  alu.io.ina    := ina
  alu.io.inb    := inb
  alu.io.sel         := io.in.bits.AluSel
  io.out.bits.result := alu.io.result

  PCMux := Cat(io.in.bits.Branch, io.out.bits.result(0), io.in.bits.PcMux)

  pca   := Mux(PCMux === "b0010".U, io.in.bits.src1,
           Mux(PCMux === "b0110".U, io.in.bits.src1, io.in.bits.pc))

  pcb   := Mux(PCMux === "b0010".U, io.in.bits.imm,
           Mux(PCMux === "b0110".U, io.in.bits.imm,
           Mux(PCMux === "b0001".U, io.in.bits.imm,
           Mux(PCMux === "b0101".U, io.in.bits.imm,
           Mux(PCMux === "b1101".U, io.in.bits.imm, 4.U)))))

  pcadd := pca + pcb
  io.pc := io.in.bits.pc
  io.pcmux := io.in.bits.PcMux

  io.dnpc := Mux(reset.asBool, pc,
             Mux(empty, pc,
             Mux(~io.out.valid, io.in.bits.pc,
             Mux(io.in.bits.halt,  io.in.bits.pc, 
             Mux(io.in.bits.ecall, io.mtvec, 
             Mux(io.in.bits.mret,  io.mepc, pcadd))))))

 /*
  io.dnpc := Mux(io.reset, pc,
             Mux(~io.in.valid, "h80000000".U,
             Mux(io.in.bits.halt,  "h80000008".U, 
             Mux(io.in.bits.ecall, "h8000000c".U, 
             Mux(io.in.bits.mret,  "h80000010".U, "h80000014".U)))))
  */

}



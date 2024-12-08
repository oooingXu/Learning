package npc

import chisel3._
import chisel3.util._

class EXU extends Module{
  val io = IO(new Bundle{
    val MemtoReg= Input(Bool())
    val Branch = Input(Bool())
    val Recsr  = Input(Bool())
    val mret   = Input(Bool())
    val ecall  = Input(Bool())
    val halt   = Input(Bool())
    val pc     = Input(UInt(32.W))
    val imm    = Input(UInt(32.W))
    val zimm   = Input(UInt(32.W))
    val src1   = Input(UInt(32.W))
    val src2   = Input(UInt(32.W))
    val Csr    = Input(UInt(32.W))
    val mtvec  = Input(UInt(32.W))
    val mepc   = Input(UInt(32.W))
    val PcMux  = Input(UInt(2.W))
    val AluMux = Input(UInt(3.W))
    val AluSel = Input(UInt(4.W))
    val result = Output(UInt(32.W))
    val dnpc   = Output(UInt(32.W))
    val ina    = Output(UInt(32.W))
    val inb    = Output(UInt(32.W))
    val PCMux  = Output(UInt(4.W))
  })

  val rs1   = Wire(UInt(32.W))
  val zimm  = Wire(UInt(32.W))
  val pca   = Wire(UInt(32.W))
  val pcb   = Wire(UInt(32.W))
  val pcadd = Wire(UInt(32.W))
  val PCMux = Wire(UInt(4.W))

  rs1  := Mux(io.Recsr, ~io.src1, io.src1)
  zimm := Mux(io.Recsr, ~io.zimm, io.zimm)

  io.ina := Mux(io.AluMux === "b0111".U, io.src1,
            Mux(io.AluMux === "b0001".U, io.src1,
            Mux(io.AluMux === "b0010".U, io.pc,
            Mux(io.AluMux === "b0011".U, 0.U,
            Mux(io.AluMux === "b0100".U, io.pc, 
            Mux(io.AluMux === "b0101".U, rs1,
            Mux(io.AluMux === "b1000".U, rs1,
            Mux(io.AluMux === "b1001".U, zimm,
            Mux(io.AluMux === "b0110".U, zimm, 0.U(32.W))))))))))

  io.inb := Mux(io.AluMux === "b0111".U, io.src2,
            Mux(io.AluMux === "b0001".U, io.imm,
            Mux(io.AluMux === "b0010".U, 4.U,
            Mux(io.AluMux === "b0011".U, io.imm,
            Mux(io.AluMux === "b0101".U, io.Csr,
            Mux(io.AluMux === "b0110".U, io.Csr,
            Mux(io.AluMux === "b0100".U, io.imm, 0.U(32.W))))))))

  val Alu = Module(new Alu(32))
  Alu.io.ina := io.ina
  Alu.io.inb := io.inb
  Alu.io.sel := io.AluSel
  io.result  := Alu.io.result

  PCMux := Cat(io.Branch, io.result(0), io.PcMux)

  pca   := Mux(PCMux === "b0010".U, io.src1,
           Mux(PCMux === "b0110".U, io.src1, io.pc))

  pcb   := Mux(PCMux === "b0010".U, io.imm,
           Mux(PCMux === "b0110".U, io.imm,
           Mux(PCMux === "b0001".U, io.imm,
           Mux(PCMux === "b0101".U, io.imm,
           Mux(PCMux === "b1101".U, io.imm, 4.U)))))

  io.PCMux := PCMux

  pcadd := pca + pcb

  io.dnpc := Mux(io.halt,  io.pc, 
             Mux(io.ecall, io.mtvec, 
             Mux(io.mret,  io.mepc, pcadd)))
}



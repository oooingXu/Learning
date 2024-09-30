package npc

import chisel3._
import chisel3.util._

class Result extends Bundle{
   val result   = Output(UInt(32.W))
   val dnpc     = Output(UInt(32.W))
   val src2     = Output(UInt(32.W))
   val MemNum   = Output(UInt(3.W))
   val RegNum   = Output(UInt(3.W))
   val MemtoReg = Output(Bool())
   val MemWr    = Output(Bool())
   val RegWr    = Output(Bool())
   val ecall    = Output(Bool())
}

class EXU extends Module{
  val io = IO(new Bundle{
    val in  = Flipped(Irrevocable(new Imm))
    val out = Irrevocable(new Result)
  })

  val ina   = Wire(UInt(32.W))
  val inb   = Wire(UInt(32.W))
  val rs1   = Wire(UInt(32.W))
  val zimm  = Wire(UInt(32.W))
  val pca   = Wire(UInt(32.W))
  val pcb   = Wire(UInt(32.W))
  val pcadd = Wire(UInt(32.W))
  val PCMux = Wire(UInt(4.W))

  val e_idle :: e_wait_ready :: Nil = Enum(2)
  val state = RegInit(e_idle)

  state := MuxLookup(state, e_idle)(List(
    e_idle       -> Mux(io.out.valid, e_wait_ready, e_idle),
    e_wait_ready -> Mux(io.out.ready, e_idle, e_wait_ready)
  ))

  io.out.valid := (state === e_wait_ready)
  io.in.ready  := (state === e_idle)

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
  io.out.bits.ecall    := io.in.bits.ecall
  io.out.bits.src2     := io.in.bits.src2

  val Alu = Module(new Alu(32))
  Alu.io.ina    := ina
  Alu.io.inb    := inb
  Alu.io.sel         := io.in.bits.AluSel
  io.out.bits.result := Alu.io.result

  PCMux := Cat(io.in.bits.Branch, io.out.bits.result(0), io.in.bits.PcMux)

  pca   := Mux(PCMux === "b0010".U, io.in.bits.src1,
           Mux(PCMux === "b0110".U, io.in.bits.src1, io.in.bits.pc))

  pcb   := Mux(PCMux === "b0010".U, io.in.bits.imm,
           Mux(PCMux === "b0110".U, io.in.bits.imm,
           Mux(PCMux === "b0001".U, io.in.bits.imm,
           Mux(PCMux === "b0101".U, io.in.bits.imm,
           Mux(PCMux === "b1101".U, io.in.bits.imm, 4.U)))))

  pcadd := pca + pcb

  io.out.bits.dnpc := Mux(io.in.bits.halt,  io.in.bits.pc, 
                 Mux(~(io.out.valid ^ io.out.bits.MemtoReg), io.in.bits.pc,
                 Mux(io.in.bits.ecall, io.in.bits.mtvec, 
                 Mux(io.in.bits.mret,  io.in.bits.mepc, pcadd))))
}



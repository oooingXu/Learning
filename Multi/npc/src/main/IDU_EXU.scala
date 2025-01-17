package npc

import chisel3._
import chisel3.util._
import chisel3.util.BitPat
import chisel3.util.experimental.decode._

class ysyx_23060336_IDU_EXU extends Module{
	val io = IO(new Bundle{
    val pc       = Input(UInt(32.W))
    val inst     = Input(UInt(32.W))
    val src1     = Input(UInt(32.W))
    val src2     = Input(UInt(32.W))
    val Csr_in   = Input(UInt(32.W))
    val mepc     = Input(UInt(32.W))
    val mtvec    = Input(UInt(32.W))
    val result   = Output(UInt(32.W))
    val dnpc     = Output(UInt(32.W))
    val Csr      = Output(UInt(32.W))
    val csr      = Output(UInt(12.W))
    val rd       = Output(UInt(5.W))
    val rs1      = Output(UInt(5.W))
    val rs2      = Output(UInt(5.W))
    val MemNum   = Output(UInt(4.W))
    val RegNum   = Output(UInt(3.W))
    val ecall    = Output(Bool())
    val CsrWr    = Output(Bool())
    val MemWr    = Output(Bool())
    val RegWr    = Output(Bool())
    val MemtoReg = Output(Bool())
    val empty    = Output(Bool())
    val ebreak   = Output(Bool())
	})

  val PcMux = TruthTable(
    Map(
      BitPat("b0110111") -> BitPat("b00"), // U pc += 4 
      BitPat("b0010111") -> BitPat("b00"), // U pc += 4
      BitPat("b0000011") -> BitPat("b00"), // I pc += 4
      BitPat("b0100011") -> BitPat("b00"), // S pc += 4
      BitPat("b0010011") -> BitPat("b00"), // I pc += 4
      BitPat("b0110011") -> BitPat("b00"), // R pc += 4
      BitPat("b0001111") -> BitPat("b00"), // I pc += 4
      BitPat("b1101111") -> BitPat("b01"), // J pc += imm
      BitPat("b1100011") -> BitPat("b01"), // B pc += imm
      BitPat("b1100111") -> BitPat("b10")  // I pc  = imm + rs1  
    ),
  BitPat("b00")) 

  val Ecall = TruthTable(
    Map(
      BitPat("b00000000000000000000000001110011") -> BitPat("b1")
    ),
  BitPat("b0"))

  val Ebreak = TruthTable(
    Map(
      BitPat("b00000000000100000000000001110011") -> BitPat("b1")
    ),
  BitPat("b0"))


  val Mret = TruthTable(
    Map(
      BitPat("b00110000001000000000000001110011") -> BitPat("b1")
    ),
  BitPat("b0"))

  val MemWr = TruthTable(
    Map(
      BitPat("b0100011") -> BitPat("b1")
    ),
  BitPat("b0"))

  val RegWr = TruthTable(
    Map(
      BitPat("b0110011") -> BitPat("b1"),
      BitPat("b0010011") -> BitPat("b1"),
      BitPat("b0000011") -> BitPat("b1"),
      BitPat("b1101111") -> BitPat("b1"),
      BitPat("b1100111") -> BitPat("b1"),
      BitPat("b0110111") -> BitPat("b1"),
      BitPat("b0010111") -> BitPat("b1")
    ),
  BitPat("b0"))

  val ImmNum = TruthTable(
    Map(
      BitPat("b0010010011") -> BitPat("b1"),
      BitPat("b1010010011") -> BitPat("b1")
    ),
  BitPat("b0"))

  val MemtoReg = TruthTable(
    Map(
      BitPat("b0000011") -> BitPat("b1")
    ),
  BitPat("b0"))

  val CsrWr = TruthTable(
    Map(
      BitPat("b0011110011") -> BitPat("b1"), // csrrw
      BitPat("b0101110011") -> BitPat("b1"), // csrrs
      BitPat("b0111110011") -> BitPat("b1"), // csrrc
      BitPat("b1011110011") -> BitPat("b1"), // csrrwi
      BitPat("b1101110011") -> BitPat("b1"), // csrrsi
      BitPat("b1111110011") -> BitPat("b1")  // csrrci
    ),
  BitPat("b0"))
      

  val Branch = TruthTable(
    Map(
      BitPat("b1100011") -> BitPat("b1")
    ),
  BitPat("b0"))

  val MemNum = TruthTable(
    Map(
      BitPat("b0000100011") -> BitPat("b0000"), // sb  
      BitPat("b0010100011") -> BitPat("b0001"), // sh  
      BitPat("b0100100011") -> BitPat("b0011"), // sw  
    ),
  BitPat("b1111"))

  val RegNum = TruthTable(
    Map(
      BitPat("b0000000011") -> BitPat("b000"), // lb  
      BitPat("b0010000011") -> BitPat("b001"), // lh  
      BitPat("b0100000011") -> BitPat("b010"), // lw  
      BitPat("b1000000011") -> BitPat("b011"), // lbu 
      BitPat("b1010000011") -> BitPat("b100"), // lhu
      BitPat("b1100000011") -> BitPat("b101")  // lwu
    ),
  BitPat("b111"))

  val AluSel1 = TruthTable(
    Map(
      BitPat("b00000000000110011") -> BitPat("b0000"), // add   
      BitPat("b01000000000110011") -> BitPat("b0001"), // sub   
      BitPat("b00000000010110011") -> BitPat("b0111"), // sll   
      BitPat("b00000000100110011") -> BitPat("b1001"), // slt   
      BitPat("b00000000110110011") -> BitPat("b1010"), // sltu  
      BitPat("b00000001000110011") -> BitPat("b0101"), // xor   
      BitPat("b00000001010110011") -> BitPat("b1000"), // srl   
      BitPat("b01000001010110011") -> BitPat("b0110"), // sra   
      BitPat("b00000001100110011") -> BitPat("b0100"), // or    
      BitPat("b00000001110110011") -> BitPat("b0011"), // and   
      BitPat("b00000000010010011") -> BitPat("b0111"), // slli  
      BitPat("b00000001010010011") -> BitPat("b1000"), // srli  
      BitPat("b01000001010010011") -> BitPat("b0110")  // srai  

    ),
  BitPat("b0000"))  

  val AluSel2 = TruthTable(
    Map(
      // I
      BitPat("b0000010011") -> BitPat("b0000"), // addi  
      BitPat("b0100010011") -> BitPat("b1001"), // slti  
      BitPat("b0110010011") -> BitPat("b1010"), // sltiu 
      BitPat("b1000010011") -> BitPat("b0101"), // xori  
      BitPat("b1100010011") -> BitPat("b0100"), // ori   
      BitPat("b1110010011") -> BitPat("b0011"), // andi  
      // N
      BitPat("b0011110011") -> BitPat("b0000"), // csrrw 
      BitPat("b0101110011") -> BitPat("b0100"), // csrrs 
      BitPat("b0111110011") -> BitPat("b0011"), // csrrc 
      BitPat("b1011110011") -> BitPat("b0000"), // csrrwi
      BitPat("b1101110011") -> BitPat("b0100"), // csrrsi
      BitPat("b1111110011") -> BitPat("b0011"), // csrrci
      // B
      BitPat("b0001100011") -> BitPat("b1101"), // beq
      BitPat("b0011100011") -> BitPat("b1110"), // bne
      BitPat("b1001100011") -> BitPat("b1001"), // blt
      BitPat("b1011100011") -> BitPat("b1011"), // bge
      BitPat("b1101100011") -> BitPat("b1010"), // bltu
      BitPat("b1111100011") -> BitPat("b1100"), // bgeu
    ),
  BitPat("b0000"))


  val InstType = TruthTable(
    Map(
      BitPat("b0110111") -> BitPat("b011"), // U
      BitPat("b0010111") -> BitPat("b011"), // U
      BitPat("b1101111") -> BitPat("b100"), // J
      BitPat("b1100111") -> BitPat("b000"), // I
      BitPat("b1100011") -> BitPat("b010"), // B
      BitPat("b0000011") -> BitPat("b000"), // I
      BitPat("b0100011") -> BitPat("b001"), // S
      BitPat("b0010011") -> BitPat("b000"), // I
      BitPat("b0110011") -> BitPat("b101"), // R
      BitPat("b0001111") -> BitPat("b000"), // I
      BitPat("b1110011") -> BitPat("b000")  // I
    ),
  BitPat("b111")) // wrong
  
  val AluMux1 = TruthTable(
    Map(
      BitPat("b0110111") -> BitPat("b0011"), // 0   imm
      BitPat("b0010111") -> BitPat("b0100"), // pc  imm
      BitPat("b1101111") -> BitPat("b0010"), // pc  4
      BitPat("b1100111") -> BitPat("b0010"), // pc  4  
      BitPat("b0000011") -> BitPat("b0001"), // rs1 imm
      BitPat("b0100011") -> BitPat("b0001"), // rs1 imm
      BitPat("b0010011") -> BitPat("b0001"), // rs1 imm
      BitPat("b1100011") -> BitPat("b0111"), // rs1 rs2
      BitPat("b0110011") -> BitPat("b0111")  // rs1 rs2
    ),
  BitPat("b0000")) 
  
  val AluMux2 = TruthTable(
    Map(
      BitPat("b0101110011") -> BitPat("b0101"), // srs1  C(imm)
      BitPat("b0111110011") -> BitPat("b0101"), //~srs1  C(imm)
      BitPat("b1101110011") -> BitPat("b0110"), // zimm  C(imm)
      BitPat("b1111110011") -> BitPat("b0110"), //~zimm  C(imm)
      BitPat("b0011110011") -> BitPat("b1000"), // srs1  0 
      BitPat("b1011110011") -> BitPat("b1001"), // zimm  0
    ),
  BitPat("b0000"))

  val Recsr = TruthTable(
    Map(
      BitPat("b0111110011") -> BitPat("b1"), // ~rs1  
      BitPat("b1111110011") -> BitPat("b1"), // ~zimm  
    ),
  BitPat("b0"))

  val alu = Module(new ysyx_23060336_ALU(32))

  val imm      = Wire(UInt(32.W))
  val Imm      = Wire(UInt(32.W))
  val instType = Wire(UInt(4.W))
  val AluSela  = Wire(UInt(4.W))
  val AluSelb  = Wire(UInt(4.W))
  val AluSel   = Wire(UInt(4.W))
  val AluMuxa  = Wire(UInt(4.W))
  val AluMuxb  = Wire(UInt(4.W))
  val AluMux   = Wire(UInt(4.W))
  val PCMux    = Wire(UInt(4.W))
  val immNum   = Wire(Bool())

  val rd       = io.inst(11, 7)
  val rs1      = io.inst(19, 15)
  val rs2      = io.inst(24, 20)
  val func7    = io.inst(31, 25)
  val func3    = io.inst(14, 12)
  val opcode   = io.inst(6, 0)

  val csr    = io.inst(31, 20)
  val immI12 = io.inst(31, 20)
  val immU20 = io.inst(31, 12)
  val immS12 = Cat(io.inst(31, 25), io.inst(11, 7))
  val immB13 = Cat(io.inst(31), io.inst(7), io.inst(30, 25), io.inst(11, 8), 0.U)
  val immJ21 = Cat(io.inst(31), io.inst(19, 12), io.inst(20), io.inst(30, 21), 0.U)

  val immU  = Cat(immU20, Fill(12, 0.U))
  val immI  = Cat(Fill(20, immI12(11)), immI12)
  val immS  = Cat(Fill(20, immS12(11)), immS12)
  val immB  = Cat(Fill(19, immB13(12)), immB13)
  val immJ  = Cat(Fill(11, immJ21(20)), immJ21)

  val ina   = Wire(UInt(32.W))
  val inb   = Wire(UInt(32.W))
  val zimm  = Wire(UInt(32.W))
  val rezimm= Wire(UInt(32.W))
  val rers1 = Wire(UInt(32.W))
  val pca   = Wire(UInt(32.W))
  val pcb   = Wire(UInt(32.W))
  val pcadd = Wire(UInt(32.W))

  val recsr = Wire(Bool())
  val branch= Wire(Bool())
  val mret  = Wire(Bool())
  val pcmux = Wire(UInt(2.W))

  immNum   := decoder(Cat(func3, opcode), ImmNum)
  instType := decoder(opcode, InstType)
  AluMuxa  := decoder(opcode, AluMux1)
  AluMuxb  := decoder(Cat(func3, opcode), AluMux2)
  AluSela  := decoder(Cat(func7, func3, opcode), AluSel1)
  AluSelb  := decoder(Cat(func3, opcode), AluSel2)
  recsr    := decoder(Cat(func3, opcode), Recsr)
  branch   := decoder(io.inst, Branch)
  pcmux    := decoder(opcode, PcMux)

  mret     := decoder(io.inst, Mret)
  io.ecall := decoder(io.inst, Ecall)
  io.ebreak:= decoder(io.inst, Ebreak)

  io.MemNum   := decoder(Cat(func3, opcode), MemNum)
  io.RegNum   := decoder(Cat(func3, opcode), RegNum)
  io.CsrWr    := decoder(Cat(func3, opcode), CsrWr)
  io.MemtoReg := decoder(opcode, MemtoReg)
  io.MemWr    := decoder(opcode, MemWr)
  io.RegWr    := decoder(opcode, RegWr) | decoder(Cat(func3, opcode), CsrWr)

  AluMux   := (AluMuxa | AluMuxb)
  AluSel   := (AluSela | AluSelb)

  Imm := Mux(instType === "b000".U, immI,
         Mux(instType === "b001".U, immS,
         Mux(instType === "b010".U, immB,
         Mux(instType === "b011".U, immU,
         Mux(instType === "b100".U, immJ, 0.U(32.W))))))
  
  imm      := Mux(immNum, Cat(Fill(27, Imm(4)), Imm(4, 0)), Imm)
  zimm     := Cat(Fill(27, 0.U), rs1)

  rers1  := Mux(recsr, ~io.src1, io.src1)
  rezimm := Mux(recsr, ~zimm, zimm)

  ina  := Mux(AluMux === "b0111".U, io.src1,
          Mux(AluMux === "b0001".U, io.src1,
          Mux(AluMux === "b0010".U, io.pc,
          Mux(AluMux === "b0011".U, 0.U,  
          Mux(AluMux === "b0100".U, io.pc,                
          Mux(AluMux === "b0101".U, rers1, 
          Mux(AluMux === "b1000".U, rers1,                     
          Mux(AluMux === "b1001".U, rezimm,                     
          Mux(AluMux === "b0110".U, rezimm, 0.U(32.W))))))))))   

  inb  := Mux(AluMux === "b0111".U, io.src2,
          Mux(AluMux === "b0001".U, imm,
          Mux(AluMux === "b0010".U, 4.U,  
          Mux(AluMux === "b0011".U, imm,
          Mux(AluMux === "b0101".U, io.Csr_in,
          Mux(AluMux === "b0110".U, io.Csr_in, 
          Mux(AluMux === "b0100".U, imm, 0.U(32.W))))))))

  alu.io.ina := ina
  alu.io.inb := inb
  alu.io.sel := AluSel
  io.result  := alu.io.result

  PCMux := Cat(branch, io.result(0), pcmux)

  pca   := Mux(PCMux === "b0010".U, io.src1,
           Mux(PCMux === "b0110".U, io.src1, io.pc))

  pcb   := Mux(PCMux === "b0010".U, imm,
           Mux(PCMux === "b0110".U, imm,
           Mux(PCMux === "b0001".U, imm,
           Mux(PCMux === "b0101".U, imm,
           Mux(PCMux === "b1101".U, imm, 4.U)))))

  pcadd := pca + pcb

  io.dnpc := Mux(reset.asBool, "h80000000".U,
             Mux(io.ecall, io.mtvec,      
             Mux(mret,  io.mepc, pcadd)))

  io.empty    := io.inst === 0.U
  io.Csr      := io.Csr_in
  io.rs1      := rs1
  io.rs2      := rs2
  io.csr      := csr
  io.rd       := rd
}


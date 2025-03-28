package npc

import chisel3._
import chisel3.util._
import chisel3.util.BitPat
import chisel3.util.experimental.decode._


class IDU extends Module{
	val io = IO(new Bundle{
    val inst     = Input(UInt(32.W))
    val pc       = Input(UInt(32.W))
		val result   = Input(UInt(32.W))
		val DataOut  = Input(UInt(32.W))
		val rd			 = Output(UInt(5.W))
		val rs1			 = Output(UInt(5.W))
		val rs2			 = Output(UInt(5.W))
		val zimm		 = Output(UInt(32.W))
		val imm			 = Output(UInt(32.W))
		val src1		 = Output(UInt(32.W))
		val src2		 = Output(UInt(32.W))
		val mepc		 = Output(UInt(32.W))
		val mtvec 	 = Output(UInt(32.W))
		val Csr   	 = Output(UInt(32.W))
		val csr   	 = Output(UInt(32.W))
    val PcMux    = Output(UInt(2.W))
    val AluMux   = Output(UInt(4.W))
    val AluMuxa  = Output(UInt(4.W))
    val AluMuxb  = Output(UInt(4.W))
    val AluSel   = Output(UInt(4.W))
    val AluSela  = Output(UInt(4.W))
    val AluSelb  = Output(UInt(4.W))
    val MemNum   = Output(UInt(3.W))
    val instType = Output(UInt(4.W))
    val RegNum   = Output(UInt(3.W))
    val MemWr    = Output(Bool())
    val RegWr    = Output(Bool())
    val CsrWr    = Output(Bool())
    val MemtoReg = Output(Bool())
    val Branch   = Output(Bool())
    val halt     = Output(Bool())
    val mret     = Output(Bool())
    val ecall    = Output(Bool())
    val Recsr    = Output(Bool())
    val halt_ret = Output(Bool())
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
      BitPat("b0000100011") -> BitPat("b001"), // sb  
      BitPat("b0010100011") -> BitPat("b010"), // sh  
      BitPat("b0100100011") -> BitPat("b100"), // sw  
    ),
  BitPat("b111"))

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


  val imm      = Wire(UInt(32.W))
  val instType = Wire(UInt(4.W))
  val AluSela  = Wire(UInt(4.W))
  val AluSelb  = Wire(UInt(4.W))
  val AluMuxa  = Wire(UInt(4.W))
  val AluMuxb  = Wire(UInt(4.W))
  val immNum   = Wire(Bool())

  val rd  = io.inst(11, 7)
  val rs1 = io.inst(19, 15)
  val rs2 = io.inst(24, 20)
  val func7 = io.inst(31, 25)
  val func3 = io.inst(14, 12)
  val opcode = io.inst(6, 0)

  io.zimm     := Cat(Fill(27, 0.U), rs1)
  immNum      := decoder(Cat(func3, opcode), ImmNum)
  io.Branch   := decoder(io.inst, Branch)
  instType    := decoder(opcode, InstType)
  io.PcMux    := decoder(opcode, PcMux)
  io.MemWr    := decoder(opcode, MemWr)
  io.RegWr    := decoder(opcode, RegWr)
  io.ecall    := decoder(io.inst, Ecall)
  io.mret     := decoder(io.inst, Mret)
  io.MemtoReg := decoder(opcode, MemtoReg)
  io.CsrWr    := decoder(Cat(func3, opcode), CsrWr)
  io.Recsr    := decoder(Cat(func3, opcode), Recsr)
  io.MemNum   := decoder(Cat(func3, opcode), MemNum)
  io.RegNum   := decoder(Cat(func3, opcode), RegNum)
  AluMuxa     := decoder(opcode, AluMux1)
  AluMuxb     := decoder(Cat(func3, opcode), AluMux2)
  AluSela     := decoder(Cat(func7, func3, opcode), AluSel1)
  AluSelb     := decoder(Cat(func3, opcode), AluSel2)

  io.AluMuxa  := AluMuxa
  io.AluMuxb  := AluMuxb
  io.AluSela  := AluSela
  io.AluSelb  := AluSelb

  io.AluMux   := (AluMuxa | AluMuxb)
  io.AluSel   := (AluSela | AluSelb)
  io.instType := instType

  io.halt   := (io.inst === "x00100073".U)

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
  val wrong = 0.U(32.W)

  io.csr := csr
  
  imm := Mux(instType === "b000".U, immI,
         Mux(instType === "b001".U, immS,
         Mux(instType === "b010".U, immB,
         Mux(instType === "b011".U, immU,
         Mux(instType === "b100".U, immJ, wrong)))))
  
  io.imm := Mux(immNum, Cat(Fill(27, imm(4)), imm(4, 0)), imm)

  io.rd     := Mux(instType === "b000".U || 
									 instType === "b011".U || 
									 instType === "b100".U || 
									 instType === "b101".U, rd, 0.U) // R,I,U,J

  io.rs1		:= Mux(instType === "b000".U || 
									 instType === "b001".U || 
									 instType === "b010".U || 
									 instType === "b101".U, rs1, 0.U) // R,I,S,B

  io.rs2    := Mux(instType === "b001".U || 
									 instType === "b010".U || 
									 instType === "b101".U, rs2, 0.U) // R,S,B

  val Ref = Mem(32, UInt(32.W))
  val RegData = Wire(UInt(32.W))
  def Rread(idx: UInt) = Mux(idx === 0.U, 0.U(32.W), Ref(idx))
  def Write(idx: UInt, data: UInt) = Mux(idx === 0.U, 0.U(32.W), data)

  io.src1     := Rread(io.rs1)
  io.src2     := Rread(io.rs2)
  io.halt_ret := Rread(10.U)

  Ref(0.U)    := 0.U
  RegData     := Mux(io.MemtoReg, io.DataOut, io.result)

  Ref(io.rd)  := Mux(io.RegWr, Write(io.rd, RegData),
                 Mux(io.CsrWr, Write(io.rd, io.Csr), Write(io.rd, Ref(io.rd))))

  val Csr     = Mem(4096, UInt(32.W))
  def MTVEC   = "h305".U
  def MEPC    = "h341".U
  def MCAUSE  = "h342".U
  def MSTATUS = "h300".U

  io.Csr       := Csr(csr)
  Csr(csr)     := Mux(io.CsrWr, io.result, Csr(csr))
  Csr(MEPC)    := Mux(io.ecall, io.pc, Csr(MEPC))
  Csr(MSTATUS) := "h1800".U
  Csr(MCAUSE)  := "hb".U

  Csr(MSTATUS) := Mux(io.ecall, 11.U, Csr(MSTATUS))

  io.mtvec := Csr(MTVEC)
  io.mepc  := Csr(MEPC)
  
}

/*
case class InstructionPattern(
  val func7: BitPat = BitPat.dontCare(7),
  val func3: BitPat = BitPat.dontCare(3),
  val opcode: BitPat
) extends DecodePattern{
  def bitPat: BitPat = genPattern
  val genPattern = func7 ## BitPat.dontCare(10) ## func3 ## BitPat.dontCare(5) ## opcode
}

object BreakField extends BoolDecodeField[InstructionPattern] {
  def name: String = "ebreak"
  def genTable(op: InstructionPattern): BitPat = {
    if(
      op.genPattern == BitPat.N(11) ## BitPat.Y(1) ## BitPat.N(13) ## BitPat("b1110011")
    ) BitPat(true.B)
  else BitPat(false.B)
  }
}

object ImmNumField extends BoolDecodeField[InstructionPattern] {
  def name: String = "immnum"
  def genTable(op: InstructionPattern): BitPat = {
    if(
      op.genPattern == BitPat.dontCare(17) ## BitPat("001") ## BitPat.dontCare(5) ## BitPat("0010011")
    ) BitPat(true.B)
  else if(
      op.genPattern == BitPat.dontCare(17) ## BitPat("101") ## BitPat.dontCare(5) ## BitPat("0010011")
    ) BitPat(true.B)
  else BitPat(false.B)
  }
}

object BranchField extends BoolDecodeField[InstructionPattern] {
  def name: String = "branch"
  def genTable(op: InstructionPattern): BitPat = {
    op.opcode.rawString match{
      case "b1100011" => BitPat(true.B)
      case _          => BitPat(false.B)
    }
  }
}

object MemNumField extends DecodeField[InstructionPattern, UInt] {
  def name: String = "memnum"
  def chiselType: UInt = UInt(2.W)
  def genTable(op: InstructionPattern): BitPat = {
    (op.opcode.rawString, op.func3.rawString) match {  
      case ("0100011", "000") => BitPat("00") // sb  
      case ("0100011", "001") => BitPat("01") // sh  
      case ("0100011", "010") => BitPat("10") // sw  
      case ("0000011", "000") => BitPat("00") // lb  
      case ("0000011", "001") => BitPat("01") // lh  
      case ("0000011", "010") => BitPat("10") // lw  
      case ("0000011", "100") => BitPat("11") // lbu  
      case ("0000011", "101") => BitPat("10") // lhu
      case _                  => BitPat("00") // wrong   
    }
  }
}

object MemtoRegField extends BoolDecodeField[InstructionPattern] {
  def name: String = "memtoreg"
  def genTable(op: InstructionPattern): BitPat = {
    op.opcode.rawString match{
      case "b0000011" => BitPat(true.B)
      case _          => BitPat(false.B)
    }
  }
}

object MemWrField extends BoolDecodeField[InstructionPattern] {
  def name: String = "memwr"
  def genTable(op: InstructionPattern): BitPat = {
    op.opcode.rawString match{
      case "b0100011" => BitPat(true.B)
      case _          => BitPat(false.B)
    }
  }
}


object RegWrField extends BoolDecodeField[InstructionPattern] {
  def name: String = "regwr"
  def genTable(op: InstructionPattern): BitPat = {
    op.opcode.rawString match{
      case "b0110011" => BitPat(true.B)
      case "b0010011" => BitPat(true.B)
      case "b0000011" => BitPat(true.B)
      case "b1101111" => BitPat(true.B)
      case "b1100111" => BitPat(true.B)
      case "b0110111" => BitPat(true.B)
      case "b0010111" => BitPat(true.B)
      case _          => BitPat(false.B)
    }
  }
}


object AluSelField extends DecodeField[InstructionPattern, UInt] {
  def name: String = "alusel"
  def chiselType: UInt = UInt(4.W)
  def genTable(op: InstructionPattern): BitPat = {
    (op.opcode.rawString, op.func3.rawString, op.func7.rawString) match {
      case ("0110011", "000", "0000000") => BitPat("0000") // add
      case ("0110011", "000", "0100000") => BitPat("0001") // sub
      case ("0110011", "001", "0000000") => BitPat("0111") // sll
      case ("0110011", "010", "0000000") => BitPat("1001") // slt
      case ("0110011", "011", "0000000") => BitPat("1010") // sltu
      case ("0110011", "100", "0000000") => BitPat("0101") // xor
      case ("0110011", "101", "0000000") => BitPat("1000") // srl
      case ("0110011", "101", "0100000") => BitPat("0110") // sra
      case ("0110011", "110", "0000000") => BitPat("0100") // or
      case ("0110011", "111", "0000000") => BitPat("0011") // and
      case ("0010011", "000", "0000000") => BitPat("0000") // addi  
      case ("0010011", "001", "0000000") => BitPat("0111") // slli  
      case ("0010011", "010", "0000000") => BitPat("1001") // slti  
      case ("0010011", "011", "0000000") => BitPat("1010") // sltui 
      case ("0010011", "100", "0000000") => BitPat("0101") // xori  
      case ("0010011", "101", "0000000") => BitPat("1000") // srli  
      case ("0010011", "110", "0000000") => BitPat("0100") // ori   
      case ("0010011", "111", "0000000") => BitPat("0011") // andi  
      case ("0010011", "101", "0100000") => BitPat("0110") // srai
      case _                             => BitPat("1111") // wrong
    }
  }
}

object InstTypeField extends DecodeField[InstructionPattern, UInt] {
  def name: String = "InstType"
  def chiselType: UInt = UInt(3.W)
  def genTable(op: InstructionPattern): BitPat = {
    op.opcode.rawString match {
      case "0110111" => BitPat("011") // U
      case "0010111" => BitPat("011") // U
      case "1101111" => BitPat("100") // J
      case "1100111" => BitPat("000") // I
      case "1100011" => BitPat("010") // B
      case "0000011" => BitPat("000") // I
      case "0100011" => BitPat("001") // S
      case "0010011" => BitPat("000") // I
      case "0110011" => BitPat("101") // R
      case "0001111" => BitPat("000") // I
      case "1110011" => BitPat("000") // I
      case _         => BitPat("111") // wrong
    }
  }
}

object PcMuxField extends DecodeField[InstructionPattern, UInt] {
  def name: String = "PcMux"
  def chiselType: UInt = UInt(2.W)
  def genTable(op: InstructionPattern): BitPat = {
    op.opcode.rawString match {
      case "0110111" => BitPat("00") // U pc += 4
      case "0010111" => BitPat("00") // U pc += 4
      case "0000011" => BitPat("00") // I pc += 4
      case "0100011" => BitPat("00") // S pc += 4
      case "0010011" => BitPat("00") // I pc += 4
      case "0110011" => BitPat("00") // R pc += 4
      case "0001111" => BitPat("00") // I pc += 4
      case "1101111" => BitPat("01") // J pc += imm
      case "1100011" => BitPat("01") // B pc += imm
      case "1100111" => BitPat("10") // I pc  = imm + rs1
      case _         => BitPat("11") // wrong
    }
  }
}

object AluMuxField extends DecodeField[InstructionPattern, UInt] {
  def name: String = "alumux"
  def chiselType: UInt = UInt(3.W)
  def genTable(op: InstructionPattern): BitPat = {
    op.opcode.rawString match {
      case "0110111" => BitPat("011") // 0   imm
      case "0010111" => BitPat("100") // pc  imm
      case "1101111" => BitPat("010") // pc  4
      case "1100111" => BitPat("010") // pc  4
      case "1100011" => BitPat("000") // rs1 imm
      case "0000011" => BitPat("001") // rs1 imm
      case "0100011" => BitPat("001") // rs1 imm
      case "0010011" => BitPat("001") // rs1 imm
      case "0110011" => BitPat("000") // rs1 rs2
      case _         => BitPat("111") // wrong
    }
  }
}
*/


  /*
  val immGen = Module(new immGen())
  immGen.io.inst     := io.inst
  immGen.io.instType := instType
  imm                := immGen.io.imm

	val table = TruthTable(
		Map(
			BitPat("b0110011") -> BitPat("b0000"),
      BitPat("b1100111") -> BitPat("b0001"),
      BitPat("b0000011") -> BitPat("b0010"),
      BitPat("b0010011") -> BitPat("b0011"),
      BitPat("b0001111") -> BitPat("b0100"),
      BitPat("b1110011") -> BitPat("b0101"),
      BitPat("b0100011") -> BitPat("b0110"),
      BitPat("b1100011") -> BitPat("b0111"),
      BitPat("b0110111") -> BitPat("b1000"),
      BitPat("b0010111") -> BitPat("b1001"),
      BitPat("b1101111") -> BitPat("b1010")
			),
			BitPat("b0000"))
  val opcode = io.inst(6, 0)
	io.InstType := decoder(opcode, table)
*/



  /*
  val possiblePattern = Seq(
    InstructionPattern(
      //genPattern = BitPat("b?????????????????????????0110111")
      opcode = BitPat("b0110111") // lui
    ),


    InstructionPattern(
      //genPattern = BitPat("b?????????????????000?????1100111")
      opcode = BitPat("b1100111"), // jalr
      func3  = BitPat("b000")
    ),

    InstructionPattern(
      //genPattern = BitPat("b0000000??????????001?????0010011")
      opcode = BitPat("b0010011"), // slli
      func3  = BitPat("b001"),
      func7  = BitPat("b0000000")
    ),

    InstructionPattern(
      //genPattern = BitPat("b?????????????????????????0010111")
      opcode = BitPat("b0010111")  // auipc
    ),

    InstructionPattern(
      //genPattern = BitPat("b?????????????????????????1101111")
      opcode = BitPat("b1101111") // jal
    ),

    InstructionPattern(
      //genPattern = BitPat("b?????????????????000?????1100011")
      opcode = BitPat("b1100011"),// beq
      func3  = BitPat("b000")
    ),

    InstructionPattern(
      //genPattern = BitPat("b?????????????????001?????1100011")
      opcode = BitPat("b1100011"),  // bne
      func3  = BitPat("b001")
    ),

    InstructionPattern(
      //genPattern = BitPat("b?????????????????100?????1100011")
      opcode = BitPat("b1100011"), // blt
      func3  = BitPat("b100")
    ),

    InstructionPattern(
      //genPattern = BitPat("b?????????????????101?????1100011")
      opcode = BitPat("b110011"), // bge
      func3  = BitPat("b101")
    ),

    InstructionPattern(
      //genPattern = BitPat("b?????????????????110?????1100011")
      opcode = BitPat("b1100011"), // bltu
      func3  = BitPat("b110")
    ),

    InstructionPattern(
      //genPattern = BitPat("b?????????????????111?????1100011")
      opcode = BitPat("b1100011"), // bgeu
      func3  = BitPat("b111")
    ),

    InstructionPattern(
      //genPattern = BitPat("b?????????????????000?????0000011")
      opcode = BitPat("b0000011"), // lb
      func3  = BitPat("b000")
    ),

    InstructionPattern(
      //genPattern = BitPat("b?????????????????001?????0000011")
      opcode = BitPat("b0000011"), // lh
      func3  = BitPat("b001")
    ),

    InstructionPattern(
      //genPattern = BitPat("b?????????????????100?????0000011")
      opcode = BitPat("b0000011"), // lbu
      func3  = BitPat("b100")
    ),

    InstructionPattern(
      //genPattern = BitPat("b?????????????????101?????0000011")
      opcode = BitPat("b0000011"), // lhu
      func3  = BitPat("b101")
    ),

    InstructionPattern(
      //genPattern = BitPat("b?????????????????000?????0100011")
      opcode = BitPat("b0100011"), // sb
      func3  = BitPat("b000")
    ),

    InstructionPattern(
      //genPattern = BitPat("b?????????????????001?????0100011")
      opcode = BitPat("b0100011"), // sh
      func3  = BitPat("b001")
    ),

    InstructionPattern(
      //genPattern = BitPat("b?????????????????010?????0100011")
      opcode = BitPat("b0100011"), // sw
      func3  = BitPat("b010")
    ),

    InstructionPattern(
      //genPattern = BitPat("b?????????????????000?????0010011")
      opcode = BitPat("b0010011"), // addi
      func3  = BitPat("b000")
    ),

    InstructionPattern(
      //genPattern = BitPat("b?????????????????010?????0010011")
      opcode = BitPat("b0010011"), // slti
      func3  = BitPat("b010")
    ),

    InstructionPattern(
      //genPattern = BitPat("b?????????????????011?????0010011")
      opcode = BitPat("b0010011"), // sltiu
      func3  = BitPat("b011")
    ),

    InstructionPattern(
      //genPattern = BitPat("b?????????????????100?????0010011")
      opcode = BitPat("b0010011"), // xori
      func3  = BitPat("b100")
    ),

    InstructionPattern(
      //genPattern = BitPat("b?????????????????110?????0010011")
      opcode = BitPat("b0010011"), // ori
      func3  = BitPat("b110")
    ),

    InstructionPattern(
      //genPattern = BitPat("b?????????????????111?????0010011")
      opcode = BitPat("b0010011"), // andi
      func3  = BitPat("b111")
    ),


    InstructionPattern(
      //genPattern = BitPat("b0000000??????????101?????0010011")
      opcode = BitPat("b0010011"), // srli
      func3  = BitPat("b101"),
      func7  = BitPat("b0000000") 
    ),

    InstructionPattern(
      //genPattern = BitPat("b0100000??????????101?????0010011")
      opcode = BitPat("b0010011"), // srai
      func3  = BitPat("b101"),
      func7  = BitPat("b0100000") 
    ),

    InstructionPattern(
      //genPattern = BitPat("b0000000??????????000?????0110011")
      opcode = BitPat("b0110011"), // add
      func3  = BitPat("b000"),
      func7  = BitPat("b0000000")
    ),

    InstructionPattern(
      //genPattern = BitPat("b0100000??????????000?????0110011")
      opcode = BitPat("b0110011"), // sub
      func3  = BitPat("b000"),
      func7  = BitPat("b0100000")
    ),

    InstructionPattern(
      //genPattern = BitPat("b0000000??????????001?????0110011")
      opcode = BitPat("b0110011"), // sll
      func3  = BitPat("b001"),
      func7  = BitPat("b0000000")
    ),

    InstructionPattern(
      //genPattern = BitPat("b0000000??????????010?????0110011")
      opcode = BitPat("b0110011"), // slt
      func3  = BitPat("b010"),
      func7  = BitPat("b0000000")
    ),

    InstructionPattern(
      //genPattern = BitPat("b0000000??????????011?????0110011")
      opcode = BitPat("b0110011"), // sltu
      func3  = BitPat("b011"),
      func7  = BitPat("b0000000")
    ),

    InstructionPattern(
      //genPattern = BitPat("b0000000??????????100?????0110011")
      opcode = BitPat("b0110011"), // xor
      func3  = BitPat("b100"),
      func7  = BitPat("b0000000")
    ),

    InstructionPattern(
      //genPattern = BitPat("b0000000??????????101?????0110011")
      opcode = BitPat("b0110011"), // srl
      func3  = BitPat("b101"),
      func7  = BitPat("b0000000")
    ),

    InstructionPattern(
      //genPattern = BitPat("b0100000??????????101?????0110011")
      opcode = BitPat("b0110011"), // sra
      func3  = BitPat("b101"),
      func7  = BitPat("b0100000")
    ),

    InstructionPattern(
      //genPattern = BitPat("b0000000??????????110?????0110011")
      opcode = BitPat("b0110011"), // or
      func3  = BitPat("b110"),
      func7  = BitPat("b0000000")
    ),

    InstructionPattern(
      //genPattern = BitPat("b0000000??????????111?????0110011")
      opcode = BitPat("b0110011"), // and
      func3  = BitPat("b111"),
      func7  = BitPat("b0000000")
    )
  )

  val allFields = Seq(
    MemtoRegField,
    InstTypeField,
    AluMuxField,
    AluSelField,
    ImmNumField,
    MemNumField,
    BranchField,
    MemWrField,
    RegWrField,
    PcMuxField,
    BreakField
  )

  val decodeTable  = new DecodeTable(possiblePattern, allFields)
  val decodeResult = decodeTable.decode(io.inst)
  */


  /*
  immNum      := false.B
  instType    := 0.U(4.W)
  io.PcMux    := decoder(opcode, PcMux)
  io.MemWr    := false.B
  io.RegWr    := false.B
  io.Branch   := false.B
  io.AluMux   := 0.U(3.W)
  io.MemtoReg := false.B
  io.MemNum   := 0.U(2.W)
  io.AluSel   := 0.U(4.W)

  immNum      := decodeResult(ImmNumField)
  instType    := decodeResult(InstTypeField)
  io.PcMux    := decodeResult(PcMuxField)
  io.MemWr    := decodeResult(MemWrField)
  io.RegWr    := decodeResult(RegWrField)
  io.Branch   := decodeResult(BranchField)
  io.AluMux   := decodeResult(AluMuxField)
  io.MemtoReg := decodeResult(MemtoRegField)
  io.MemNum   := decodeResult(MemNumField)
  io.AluSel   := decodeResult(AluSelField)
  */

/*
class immGen extends Module{
  val io = IO(new Bundle{
    val instType = Input(UInt(3.W))
    val inst     = Input(UInt(32.W))
    val imm      = Output(UInt(32.W))
  })

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
  val wrong = 0.U(32.W)

  io.imm := Mux(io.instType === "b000".U, immI,
            Mux(io.instType === "b001".U, immS,
            Mux(io.instType === "b010".U, immB,
            Mux(io.instType === "b011".U, immU,
            Mux(io.instType === "b100".U, immJ, wrong)))))
}
            
*/

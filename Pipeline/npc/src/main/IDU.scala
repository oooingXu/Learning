package npc

import chisel3._
import chisel3.util._
import chisel3.util.BitPat
import chisel3.util.experimental.decode._

class ysyx_23060336_IDUdata extends Bundle{
 val rd       = Output(UInt(5.W))
 val pc       = Output(UInt(32.W))
 val imm      = Output(UInt(32.W))
 val zimm     = Output(UInt(32.W))
 val src1     = Output(UInt(32.W))
 val src2     = Output(UInt(32.W))
 val csr      = Output(UInt(12.W))
 val Csr      = Output(UInt(32.W))
 val PcMux    = Output(UInt(2.W))
 val AluMux   = Output(UInt(4.W))
 val AluSel   = Output(UInt(4.W))
 val MemNum   = Output(UInt(4.W))
 val RegNum   = Output(UInt(3.W))
 val Check    = Output(Bool())
 val CsrWr    = Output(Bool())
 val MemWr    = Output(Bool())
 val RegWr    = Output(Bool())
 val MemtoReg = Output(Bool())
 val Branch   = Output(Bool())
 val mret     = Output(Bool())
 val ecall    = Output(Bool())
 val ebreak   = Output(Bool())
 val Recsr    = Output(Bool())
}

class ysyx_23060336_IDU extends Module{
	val io = IO(new Bundle{
    val in       = Flipped(Decoupled(new ysyx_23060336_IFUdata))
    val out      = Decoupled(new ysyx_23060336_IDUdata)
    val Csr      = Input(UInt(32.W))
    val src1     = Input(UInt(32.W))
    val src2     = Input(UInt(32.W))
    val exu_rd   = Input(UInt(5.W))
    val lsu_rd   = Input(UInt(5.W))
    val wbu_rd   = Input(UInt(5.W))
    val exu_pc   = Input(UInt(32.W))
    val checkfail= Input(Bool())
    val ebreak   = Input(Bool())
    val rs1      = Output(UInt(5.W))
    val rs2      = Output(UInt(5.W))
    val csr      = Output(UInt(12.W))
    val pc       = Output(UInt(32.W))
    val pcmux    = Output(UInt(2.W))
    val opcode   = Output(UInt(7.W))
    val inst     = Output(UInt(32.W))
    val imm      = Output(UInt(32.W))
    val isRAW    = Output(Bool())
    val valid    = Output(Bool())
    val ready    = Output(Bool())
    val iduMemWr = Output(Bool())
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


  val d_idle :: d_wait_ready :: Nil = Enum(2)
  val state = RegInit(d_idle)

  state := MuxLookup(state, d_idle)(List(
    d_idle       -> Mux(io.out.valid, d_wait_ready, d_idle),
    d_wait_ready -> Mux(io.out.ready, d_idle, d_wait_ready)
  ))

  val imm      = Wire(UInt(32.W))
  val instType = Wire(UInt(4.W))
  val AluSela  = Wire(UInt(4.W))
  val AluSelb  = Wire(UInt(4.W))
  val AluMuxa  = Wire(UInt(4.W))
  val AluMuxb  = Wire(UInt(4.W))
  val immNum   = Wire(Bool())

  val rd       = io.in.bits.inst(11, 7)
  val rs1      = io.in.bits.inst(19, 15)
  val rs2      = io.in.bits.inst(24, 20)
  val func7    = io.in.bits.inst(31, 25)
  val func3    = io.in.bits.inst(14, 12)
  val opcode   = io.in.bits.inst(6, 0)

  immNum               := decoder(Cat(func3, opcode), ImmNum)
  instType             := decoder(opcode, InstType)

  io.rs1               := rs1
  io.rs2               := rs2

  io.out.bits.rd       := rd
  io.out.bits.zimm     := Cat(Fill(27, 0.U), rs1)
  io.out.bits.ecall    := decoder(io.in.bits.inst, Ecall)
  io.out.bits.ebreak   := decoder(io.in.bits.inst, Ebreak)
  io.out.bits.mret     := decoder(io.in.bits.inst, Mret)
  io.out.bits.Branch   := decoder(io.in.bits.inst, Branch)
  io.out.bits.PcMux    := decoder(opcode, PcMux)
  io.out.bits.MemWr    := decoder(opcode, MemWr)
  io.out.bits.MemtoReg := decoder(opcode, MemtoReg)
  io.out.bits.RegWr    := decoder(opcode, RegWr) | decoder(Cat(func3, opcode), CsrWr)
  io.out.bits.CsrWr    := decoder(Cat(func3, opcode), CsrWr)
  io.out.bits.Recsr    := decoder(Cat(func3, opcode), Recsr)
  io.out.bits.MemNum   := decoder(Cat(func3, opcode), MemNum)
  io.out.bits.RegNum   := decoder(Cat(func3, opcode), RegNum)
  io.out.bits.src1     := io.src1
  io.out.bits.src2     := io.src2

  AluMuxa              := decoder(opcode, AluMux1)
  AluMuxb              := decoder(Cat(func3, opcode), AluMux2)
  AluSela              := decoder(Cat(func7, func3, opcode), AluSel1)
  AluSelb              := decoder(Cat(func3, opcode), AluSel2)

  io.out.bits.AluMux   := (AluMuxa | AluMuxb)
  io.out.bits.AluSel   := (AluSela | AluSelb)

  val csr    = io.in.bits.inst(31, 20)
  val immI12 = io.in.bits.inst(31, 20)
  val immU20 = io.in.bits.inst(31, 12)
  val immS12 = Cat(io.in.bits.inst(31, 25), io.in.bits.inst(11, 7))
  val immB13 = Cat(io.in.bits.inst(31), io.in.bits.inst(7), io.in.bits.inst(30, 25), io.in.bits.inst(11, 8), 0.U)
  val immJ21 = Cat(io.in.bits.inst(31), io.in.bits.inst(19, 12), io.in.bits.inst(20), io.in.bits.inst(30, 21), 0.U)

  val immU  = Cat(immU20, Fill(12, 0.U))
  val immI  = Cat(Fill(20, immI12(11)), immI12)
  val immS  = Cat(Fill(20, immS12(11)), immS12)
  val immB  = Cat(Fill(19, immB13(12)), immB13)
  val immJ  = Cat(Fill(11, immJ21(20)), immJ21)

  io.csr := csr
  
  imm := Mux(instType === "b000".U, immI,
         Mux(instType === "b001".U, immS,
         Mux(instType === "b010".U, immB,
         Mux(instType === "b011".U, immU,
         Mux(instType === "b100".U, immJ, 0.U(32.W))))))
  
  io.out.bits.imm   := Mux(immNum, Cat(Fill(27, imm(4)), imm(4, 0)), imm)
  io.out.bits.pc    := io.in.bits.pc
  io.out.bits.Csr   := io.Csr
  io.out.bits.csr   := csr
  io.out.bits.Check := (instType === "b010".U || instType === "b100".U || (instType === "b000".U && opcode === "b1100111".U))

  io.iduMemWr := io.out.bits.MemWr
  io.pcmux    := io.out.bits.PcMux
  io.opcode   := io.in.bits.inst(6, 0)
  io.inst     := io.in.bits.inst
  io.pc       := io.in.bits.pc
  io.imm      := imm

  val isRAWn = RegInit(0.U(1.W))
  val isRAW  = Wire(Bool())
  val isRAWN = Wire(Bool())
  val israwn = Wire(Bool())
  def conflict(rs: UInt, rd: UInt) = (rs === rd) && !(rs === 0.U)

  val isRAWa = ((conflict(rs1, io.exu_rd)  ||
                 conflict(rs1, io.lsu_rd)  ||
                 conflict(rs1, io.wbu_rd)) &&
                (instType === "b000".U   || 
                 instType === "b001".U   ||
                 instType === "b010".U   ||
                 instType === "b101".U)) 

  val isRAWb = ((conflict(rs2, io.exu_rd)  ||
                 conflict(rs2, io.lsu_rd)  ||
                 conflict(rs2, io.wbu_rd)) &&
                (instType === "b001".U   ||
                 instType === "b010".U   ||
                 instType === "b101".U)) 

  israwn := (conflict(rs2, io.wbu_rd) || conflict(rs1, io.wbu_rd))

  io.out.valid := !isRAW && !io.checkfail || io.in.bits.checkright && !io.ebreak
  io.in.ready  := !isRAW // israwn -> isRAWN

  io.valid     := io.out.valid
  io.ready     := io.in.ready

  isRAWn       := israwn
  isRAWN       := isRAWn

  isRAW        := (isRAWa || isRAWb) && !isRAWN && !io.checkfail
  io.isRAW     := (isRAWa || isRAWb) && !israwn && !io.checkfail

}

/*
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
*/

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
  immGen.io.in.bits.t     := io.in.bits.t
  immGen.io.in.bits.tType := instType
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
  val opcode = io.in.bits.t(6, 0)
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
  val decodeResult = decodeTable.decode(io.in.bits.t)
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

  val immI12 = io.in.bits.t(31, 20)
  val immU20 = io.in.bits.t(31, 12)
  val immS12 = Cat(io.in.bits.t(31, 25), io.in.bits.t(11, 7))
  val immB13 = Cat(io.in.bits.t(31), io.in.bits.t(7), io.in.bits.t(30, 25), io.in.bits.t(11, 8), 0.U)
  val immJ21 = Cat(io.in.bits.t(31), io.in.bits.t(19, 12), io.in.bits.t(20), io.in.bits.t(30, 21), 0.U)

  val immU  = Cat(immU20, Fill(12, 0.U))
  val immI  = Cat(Fill(20, immI12(11)), immI12)
  val immS  = Cat(Fill(20, immS12(11)), immS12)
  val immB  = Cat(Fill(19, immB13(12)), immB13)
  val immJ  = Cat(Fill(11, immJ21(20)), immJ21)
  val wrong = 0.U(32.W)

  io.imm := Mux(io.in.bits.tType === "b000".U, immI,
            Mux(io.in.bits.tType === "b001".U, immS,
            Mux(io.in.bits.tType === "b010".U, immB,
            Mux(io.in.bits.tType === "b011".U, immU,
            Mux(io.in.bits.tType === "b100".U, immJ, wrong)))))
}
            
*/

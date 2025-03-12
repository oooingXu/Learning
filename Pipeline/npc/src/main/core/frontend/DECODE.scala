package npc

import chisel3._
import chisel3.util._
import chisel3.util.BitPat
import chisel3.util.experimental.decode._
import org.chipsalliance.rvdecoderdb

case class InstructionPattern(val inst: rvdecoderdb.Instruction) extends DecodePattern {
  override def bitPat: BitPat = BitPat("b" + inst.encoding.toString())
}

object InstructionPattern {
  implicit class AddMethodsToInsn(i: InstructionPattern) {
    def hasArg(arg: String): Boolean = i.inst.args.map(_.name).contains(arg)
  }
}

object PcMuxField extends DecodeField[InstructionPattern, UInt] {
  override def name = "pcmux"
  override def chiselType = UInt(Base.pcmuxWidth.W)
  override def genTable(i: InstructionPattern): BitPat = i.inst.name match {
    case "jal"    => BitPat("b01")   // J-type pc += imm
    case "jalr"   => BitPat("b10")   // I-type pc =  imm + src1
    case "beq" | "bne" | "blt" | "bge" | "bltu" | "bgeu" => BitPat("b01") // B-type pc =  imm + src1
    case _ => BitPat("b00")          // Default PC+4
  }
}

object EcallField extends BoolDecodeField[InstructionPattern] {
  override def name = "ecall"
  override def genTable(i: InstructionPattern): BitPat = i.inst.name match {
    case "ecall" => BitPat("b1")
    case _       => BitPat("b0")
  }
}

object EbreakField extends BoolDecodeField[InstructionPattern] {
  override def name = "ebreak"
  override def genTable(i: InstructionPattern): BitPat = i.inst.name match {
    case "ebreak" => BitPat("b1")
    case _        => BitPat("b0")
  }
}

object MretField extends BoolDecodeField[InstructionPattern] {
  override def name = "mret"
  override def genTable(i: InstructionPattern): BitPat = i.inst.name match {
    case "mret" => BitPat("b1")
    case _      => BitPat("b0")
  }
}

object MemWrField extends BoolDecodeField[InstructionPattern] {
  override def name = "memwr"
  override def genTable(i: InstructionPattern): BitPat = i.inst.name match {
    case "sb" | "sh" | "sw" => BitPat("b1")
    case _                  => BitPat("b0") 
  }
}

object RegWrField extends BoolDecodeField[InstructionPattern] {
  override def name = "regwr"
  override def genTable(i: InstructionPattern): BitPat = i.inst.name match {
    case "add" | "sub" | "sll" | "slt" | "sltu" | "xor" | "srl" | "sra" | "or" | "and" | "addi" | "slti" | "slli" | "srli" | "srai" | "sltiu" | "xori" | "ori" | "andi" | "lui" | "auipc" | "jal" | "jalr" | "lb" | "lh" | "lw" | "lbu" | "lhu" | "csrrw" | "csrrs" | "csrrc" | "csrrwi" | "csrrsi" | "csrrci" => BitPat("b1")
    case _ => BitPat("b0")
  }
}

object MemtoRegField extends BoolDecodeField[InstructionPattern] {
  override def name = "memtoreg"
  override def genTable(i: InstructionPattern): BitPat = i.inst.name match {
    case "lb" | "lh" | "lw" | "lbu" | "lhu" => BitPat("b1")
    case _                                  => BitPat("b0")
  }
}

object CsrWrField extends BoolDecodeField[InstructionPattern] {
  override def name = "csrwr"
  override def genTable(i: InstructionPattern): BitPat = i.inst.name match {
    case "csrrw" | "csrrs" | "csrrc" | "csrrwi" | "csrrsi" | "csrrci" => BitPat("b1")
    case _                                                            => BitPat("b0")
  }
}

object BranchField extends BoolDecodeField[InstructionPattern] {
  override def name = "branch"
  override def genTable(i: InstructionPattern): BitPat = i.inst.name match {
    case "beq" | "bne" | "blt" | "bge" | "bltu" | "bgeu" => BitPat("b1")
    case _                                               => BitPat("b0")
  }
}

object WstrbField extends DecodeField[InstructionPattern, UInt] {
  override def name = "wstrb"
  override def chiselType = UInt(Base.wstrbWidth.W)
  override def genTable(i: InstructionPattern): BitPat = i.inst.name match {
    case "sb" => BitPat("b0001")
    case "sh" => BitPat("b0011")
    case "sw" => BitPat("b1111")
    case _    => BitPat("b1111")
  }
}

object AwsizeField extends DecodeField[InstructionPattern, UInt] {
  override def name = "awsize"
  override def chiselType = UInt(Base.sizeWidth.W)
  override def genTable(i: InstructionPattern): BitPat = i.inst.name match {
    case "sb" => BitPat("b000")
    case "sh" => BitPat("b001")
    case "sw" => BitPat("b010")
    case _    => BitPat("b111")
  }
}

object RegNumField extends DecodeField[InstructionPattern, UInt] {
  override def name = "regnum"
  override def chiselType = UInt(Base.RegNumWidth.W)
  override def genTable(i: InstructionPattern): BitPat = i.inst.name match {
    case "lb"  => BitPat("b000")
    case "lh"  => BitPat("b001")
    case "lw"  => BitPat("b010")
    case "lbu" => BitPat("b011")
    case "lhu" => BitPat("b100")
    case _     => BitPat("b111")
  }
}

object ArsizeField extends DecodeField[InstructionPattern, UInt] {
  override def name = "arsize"
  override def chiselType = UInt(Base.sizeWidth.W)
  override def genTable(i: InstructionPattern): BitPat = i.inst.name match {
    case "lb" | "lbu" => BitPat("b000")
    case "lh" | "lhu" => BitPat("b001")
    case "lw"         => BitPat("b010")
    case _            => BitPat("b111")
  }
}

object AluSelField extends DecodeField[InstructionPattern, UInt] {
  override def name = "alusel"
  override def chiselType = UInt(Base.AluSelWidth.W)
  override def genTable(i: InstructionPattern): BitPat = i.inst.name match {
    case "add"  | "addi" | "csrrw" | "csrrwi" => BitPat("b0000") // +
    case "sub"                                => BitPat("b0001") // -
    case "and"  | "andi" | "csrrc" | "csrrci" => BitPat("b0011") // &
    case "or"   | "ori"  | "csrrs" | "csrrsi" => BitPat("b0100") // |
    case "xor"  | "xori"                      => BitPat("b0101") // ^
    case "sra"  | "srai"                      => BitPat("b0110") // >a
    case "sll"  | "slli"                      => BitPat("b0111") // <
    case "srl"  | "srli"                      => BitPat("b1000") // >l
    case "slt"  | "slti"  | "blt"             => BitPat("b1001") // ><
    case "sltu" | "sltiu" | "bltu"            => BitPat("b1010") // ><u
    case "bge"                                => BitPat("b1011") // >
    case "bgeu"                               => BitPat("b1100") // >u
    case "beq"                                => BitPat("b1101") // ==
    case "bne"                                => BitPat("b1110") // !=
    case _                                    => BitPat("b0000") // +
  }
}
    
object InstTypeField extends DecodeField[InstructionPattern, UInt] {
  override def name = "insttype"
  override def chiselType = UInt(Base.instTypeWidth.W)

  override def genTable(i: InstructionPattern): BitPat = i.inst.name match {
    case  "jalr" | "addi" | "slti" | "sltiu" | "xori" | "ori" | "andi" | "slli" | "srli" | "srai" | "fence.i" => BitPat("b000") // I
    case  "sb"  | "sh"  | "sw"                            => BitPat("b001") // S
    case  "beq" | "bne" | "blt" | "bge" | "bltu" | "bgeu" => BitPat("b010") // B
    case  "lui" | "auipc"                                 => BitPat("b011") // U
    case  "jal"                                           => BitPat("b100") // J
    case "add" | "sub" | "sll" | "slt" | "sltu" | "xor" | "srl" | "sra" | "or" | "and" => BitPat("b101") // R
    case  "csrrw" | "csrrs" | "csrrc" | "csrrwi" | "csrrsi" | "csrrci" | "ecall" | "ebreak" => BitPat("b110") // csr
    case "lb" | "lh" | "lw" | "lbu" | "lhu" => BitPat("b111") // I load
    case _ => BitPat("b101")
  }
}

object ImmTypeField extends DecodeField[InstructionPattern, UInt] {
  override def name = "immtype"
  override def chiselType = UInt(Base.immTypeWidth.W)
  override def genTable(i: InstructionPattern): BitPat = {
    val immType = i.inst.args
    .map(_.name match {
      case "imm12"                 => BitPat("b000")
      case "imm12hi"  | "imm12lo"  => BitPat("b001")
      case "bimm12hi" | "bimm12lo" => BitPat("b010")
      case "imm20"                 => BitPat("b011")
      case "jimm20"                => BitPat("b100")
      case "shamtw"                => BitPat("b101")
      case _                       => BitPat("b111")
    })
    .filterNot(_.value == BitPat("b111").value)
    .headOption
    .getOrElse(BitPat("b111"))

    immType
  }
}

object AluMuxField extends DecodeField[InstructionPattern, UInt] {
  override def name = "alumux"
  override def chiselType = UInt(Base.AluMuxWidth.W)
  override def genTable(i: InstructionPattern): BitPat = i.inst.name match {
    case "lb" | "lh" | "lw" | "lbu" | "lhu" | "sb" | "sh" | "sw" | "addi" | "slti" | "sltiu" | "xori" | "ori" | "andi" | "slli" | "srli" | "srai" | "fence.i" => BitPat("b0001") // src1 imm
    case "beq" | "bne" | "blt" | "bge" | "bltu" | "bgeu" | "add" | "sub" | "sll" | "slt" | "sltu" | "xor" | "srl" | "sra" | "or" | "and" => BitPat("b0111") // src1 src2
    case "jal"    | "jalr"   => BitPat("b0010") // pc 4
    case "lui"               => BitPat("b0011") // 0 imm
    case "auipc"             => BitPat("b0100") // pc imm
    case "csrrs"  | "csrrc"  => BitPat("b0101") // src1 C(csr)
    case "csrrsi" | "csrrci" => BitPat("b0110") // zimm C(csr)
    case "csrrw"             => BitPat("b1000") // src1 0
    case "csrrwi"            => BitPat("b1001") // zimm 0
    case _                   => BitPat("b0000")
  }
}
    
object RecsrField extends BoolDecodeField[InstructionPattern] {
  override def name = "recsr"
  override def genTable(i: InstructionPattern): BitPat = i.inst.name match {
    case "csrrc" | "csrrci" => BitPat("b1")
    case _                  => BitPat("b0")
  }
}

class ysyx_23060336_DECODE extends Module {
  val io = IO(new Bundle{
    val decode_idu_data = new DECODE_IDU_DATA()
  })

  // immgen
  val immgen = Module(new ysyx_23060336_IMMGEN())

  val MemWr      = Wire(Bool())
  val MemtoReg   = Wire(Bool())
  val CsrWr      = Wire(Bool())
  val recsr      = Wire(Bool())
  val isRAW_data = Wire(Bool())
  val rd         = Wire(UInt(Base.rdWidth.W))
  val csr        = Wire(UInt(Base.csrWidth.W))
  val AluSel     = Wire(UInt(Base.AluSelWidth.W))
  val instType   = Wire(UInt(Base.instTypeWidth.W))
  val immType    = Wire(UInt(Base.immTypeWidth.W))
  val AluMux     = Wire(UInt(Base.AluMuxWidth.W))
  val inst       = Wire(UInt(Base.dataWidth.W))

  // rvdecodedb
  val instTable:Iterable[rvdecoderdb.Instruction] = rvdecoderdb.instructions(os.pwd / "rvdecoderdb" / "rvdecoderdbtest" / "jvm" / "riscv-opcodes")

  val rviExceptInstructions      = Set("fence")
  val rv32iExceptInstructions    = Set("slli_rv32", "srli_rv32", "srai_rv32")
  val rvsystemExceptInstructions = Set("wfi")

  val rviTargetSets      = Set("rv_i")
  val rv32iTargetSets    = Set("rv32_i")
  val rvzicsrTargetSets  = Set("rv_zicsr")
  val rvsystemTargetSets = Set("rv_system")
  
  // add implemented instructions here
  val rviInstList = instTable
  .filter(instr => rviTargetSets.contains(instr.instructionSet.name))
  .filter(instr => !rviExceptInstructions.contains(instr.name))
  .filter(_.pseudoFrom.isEmpty)
  .map(InstructionPattern(_))
  .toSeq
  
  val rv32iInstList = instTable
  .filter(instr => rv32iTargetSets.contains(instr.instructionSet.name))
  .filter(instr => !rv32iExceptInstructions.contains(instr.name))
  .map(InstructionPattern(_))
  .toSeq
  
  val rvzicsrInstList = instTable
  .filter(_.pseudoFrom.isEmpty)
  .filter(instr => rvzicsrTargetSets.contains(instr.instructionSet.name))
  .map(InstructionPattern(_))
  .toSeq
  
  val rvsystemInstList = instTable
  .filter(_.pseudoFrom.isEmpty)
  .filter(instr => rvsystemTargetSets.contains(instr.instructionSet.name))
  .filter(instr => !rvsystemExceptInstructions.contains(instr.name))
  .map(InstructionPattern(_))
  .toSeq
  
  val instList = rviInstList ++ rv32iInstList ++ rvzicsrInstList ++ rvsystemInstList
  //println(s"The length of instList is: ${instList.length}")

  // decodefield
  val allfield = Seq(PcMuxField, EcallField, EbreakField, MretField, MemWrField, RegWrField, MemtoRegField, CsrWrField, BranchField, WstrbField, AwsizeField, RegNumField, ArsizeField, AluSelField, InstTypeField, AluMuxField, RecsrField, ImmTypeField) 
  val decodeTable   = new DecodeTable(instList, allfield) 
  val decodeBundle = decodeTable.decode(inst)

  inst     := io.decode_idu_data.inst
  rd       := inst(11, 7)
  csr      := inst(31, 20)

  MemWr    := decodeBundle(MemWrField)
  MemtoReg := decodeBundle(MemtoRegField)
  CsrWr    := decodeBundle(CsrWrField)
  AluSel   := decodeBundle(AluSelField)
  AluMux   := decodeBundle(AluMuxField)
  instType := decodeBundle(InstTypeField)
  immType  := decodeBundle(ImmTypeField)
  recsr    := decodeBundle(RecsrField)

  // idu <> exu
  io.decode_idu_data.idu_exu_data.pc     := io.decode_idu_data.pc
  io.decode_idu_data.idu_exu_data.AluSel := Mux(isRAW_data, 0.U, AluSel)
  io.decode_idu_data.idu_exu_data.AluMux := Mux(isRAW_data, "b0011".U, AluMux)
  io.decode_idu_data.idu_exu_data.branch := decodeBundle(BranchField)
  io.decode_idu_data.idu_exu_data.mret   := decodeBundle(MretField)
  io.decode_idu_data.idu_exu_data.pcmux  := decodeBundle(PcMuxField)
  io.decode_idu_data.idu_exu_data.rezimm := immgen.io.immgen_decode_data.rezimm
  io.decode_idu_data.idu_exu_data.zimm   := immgen.io.immgen_decode_data.zimm
  io.decode_idu_data.idu_exu_data.rers1  := immgen.io.immgen_decode_data.rers1
  io.decode_idu_data.idu_exu_data.imm    := immgen.io.immgen_decode_data.imm
  io.decode_idu_data.idu_exu_data.src1   := immgen.io.immgen_decode_data.src1

  // idu <> lsu
  io.decode_idu_data.idu_exu_data.idu_lsu_data.wstrb    := decodeBundle(WstrbField)
  io.decode_idu_data.idu_exu_data.idu_lsu_data.awsize   := decodeBundle(AwsizeField)
  io.decode_idu_data.idu_exu_data.idu_lsu_data.arsize   := decodeBundle(ArsizeField)
  io.decode_idu_data.idu_exu_data.idu_lsu_data.RegNum   := decodeBundle(RegNumField)
  io.decode_idu_data.idu_exu_data.idu_lsu_data.MemWr    := Mux(isRAW_data, 0.U, MemWr)
  io.decode_idu_data.idu_exu_data.idu_lsu_data.MemtoReg := Mux(isRAW_data, 0.U, MemtoReg)
  io.decode_idu_data.idu_exu_data.idu_lsu_data.src2     := immgen.io.immgen_decode_data.src2

  // idu <> wbu
  io.decode_idu_data.idu_exu_data.idu_lsu_data.idu_wbu_data.rd         := Mux(isRAW_data, 0.U, rd)
  io.decode_idu_data.idu_exu_data.idu_lsu_data.idu_wbu_data.CsrWr      := Mux(isRAW_data, 0.U, CsrWr)
  io.decode_idu_data.idu_exu_data.idu_lsu_data.idu_wbu_data.RegWr      := decodeBundle(RegWrField)
  io.decode_idu_data.idu_exu_data.idu_lsu_data.idu_wbu_data.ecall      := decodeBundle(EcallField)
  io.decode_idu_data.idu_exu_data.idu_lsu_data.idu_wbu_data.ebreak     := decodeBundle(EbreakField)
  io.decode_idu_data.idu_exu_data.idu_lsu_data.idu_wbu_data.instType   := instType
  io.decode_idu_data.idu_exu_data.idu_lsu_data.idu_wbu_data.isRAW_data := isRAW_data
  io.decode_idu_data.idu_exu_data.idu_lsu_data.idu_wbu_data.csr        := csr

  // idu <> reg
  io.decode_idu_data.idu_reg_data <> immgen.io.immgen_decode_data.idu_reg_data

  // idu <> csr
  io.decode_idu_data.idu_csr_data.csr                  := csr
  io.decode_idu_data.idu_exu_data.mepc                 := io.decode_idu_data.idu_csr_data.mepc
  io.decode_idu_data.idu_exu_data.mtvec                := io.decode_idu_data.idu_csr_data.mtvec
  io.decode_idu_data.idu_exu_data.idu_lsu_data.csrdata := io.decode_idu_data.idu_csr_data.csrdata

  // decode <> immgen
  immgen.io.immgen_decode_data.inst      := inst
  immgen.io.immgen_decode_data.recsr     := recsr
  immgen.io.immgen_decode_data.instType  := instType
  immgen.io.immgen_decode_data.immType   := immType
  isRAW_data                             := immgen.io.immgen_decode_data.isRAW_data

  // idu <> immgen
  immgen.io.immgen_decode_data.idu_valid := io.decode_idu_data.idu_valid
  immgen.io.immgen_decode_data.immgen_decode_raw <> io.decode_idu_data.immgen_decode_raw

}


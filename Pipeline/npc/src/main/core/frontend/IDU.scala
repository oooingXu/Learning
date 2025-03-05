package npc

import chisel3._
import chisel3.util._
import chisel3.util.BitPat
import chisel3.util.experimental.decode._

class ysyx_23060336_IDU extends Module{
	val io = IO(new Bundle{
    val ifu_idu_data = Flipped(Decoupled(new IFU_IDU_DATA()))
    val idu_exu_data = Decoupled(new IDU_EXU_DATA())
    val idu_reg_data = new IDU_REG_DATA()
    val idu_csr_data = new IDU_CSR_DATA()
    val idu_exu_raw  = new IDU_EXU_RAW()
    val idu_lsu_raw  = new IDU_LSU_RAW()
    val idu_wbu_raw  = new IDU_WBU_RAW()
	})

  val PcMux = TruthTable(
    Map(
      BitPat("b0110111") -> BitPat("b00"), // U pc += 4 
      BitPat("b0010111") -> BitPat("b00"), // U pc += 4
      BitPat("b0000011") -> BitPat("b00"), // I pc += 4
      BitPat("b0001111") -> BitPat("b00"), // C pc += 4 fence.i
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

  val Wstrb = TruthTable(
    Map(
      BitPat("b0000100011") -> BitPat("b0001"), // sb  
      BitPat("b0010100011") -> BitPat("b0011"), // sh  
      BitPat("b0100100011") -> BitPat("b1111"), // sw  
    ),
  BitPat("b1111"))

  val Awsize = TruthTable(
    Map(
      BitPat("b0000100011") -> BitPat("b000"), // sb  
      BitPat("b0010100011") -> BitPat("b001"), // sh  
      BitPat("b0100100011") -> BitPat("b010"), // sw  
    ),
  BitPat("b111"))

  val RegNum = TruthTable(
    Map(
      BitPat("b0000000011") -> BitPat("b000"), // lb  
      BitPat("b0010000011") -> BitPat("b001"), // lh  
      BitPat("b0100000011") -> BitPat("b010"), // lw  
      BitPat("b1000000011") -> BitPat("b011"), // lbu 
      BitPat("b1010000011") -> BitPat("b100"), // lhu
    ),
  BitPat("b111"))

  val Arsize = TruthTable(
    Map(
      BitPat("b0000000011") -> BitPat("b000"), // lb  
      BitPat("b0010000011") -> BitPat("b001"), // lh  
      BitPat("b0100000011") -> BitPat("b010"), // lw  
      BitPat("b1000000011") -> BitPat("b000"), // lbu 
      BitPat("b1010000011") -> BitPat("b001"), // lhu
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
      BitPat("b0000011") -> BitPat("b111"), // I load
      BitPat("b0100011") -> BitPat("b001"), // S
      BitPat("b0010011") -> BitPat("b000"), // I
      BitPat("b0110011") -> BitPat("b101"), // R
      BitPat("b0001111") -> BitPat("b000"), // I
      BitPat("b1110011") -> BitPat("b110")  // I csr
    ),
  BitPat("b000")) 
  
  val AluMux1 = TruthTable(
    Map(
      BitPat("b0110111") -> BitPat("b0011"), // 0   imm
      BitPat("b0010111") -> BitPat("b0100"), // pc  imm
      BitPat("b1101111") -> BitPat("b0010"), // pc  4
      BitPat("b1100111") -> BitPat("b0010"), // pc  4  
      BitPat("b0000011") -> BitPat("b0001"), // rs1 imm
      BitPat("b0100011") -> BitPat("b0001"), // rs1 imm
      BitPat("b0010011") -> BitPat("b0001"), // rs1 imm
      BitPat("b0001111") -> BitPat("b0001"), // rs1 imm
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

  val src1     = Wire(UInt(32.W)) 
  val src2     = Wire(UInt(32.W)) 
  val Imm      = Wire(UInt(32.W))
  val instType = Wire(UInt(4.W))
  val AluSela  = Wire(UInt(4.W))
  val AluSelb  = Wire(UInt(4.W))
  val AluSel   = Wire(UInt(4.W))
  val AluMuxa  = Wire(UInt(4.W))
  val AluMuxb  = Wire(UInt(4.W))
  val AluMux   = Wire(UInt(4.W))
  val immNum   = Wire(Bool())

  val rd       = io.ifu_idu_data.bits.inst(11, 7)
  val rs1      = io.ifu_idu_data.bits.inst(19, 15)
  val rs2      = io.ifu_idu_data.bits.inst(24, 20)
  val func7    = io.ifu_idu_data.bits.inst(31, 25)
  val func3    = io.ifu_idu_data.bits.inst(14, 12)
  val opcode   = io.ifu_idu_data.bits.inst(6, 0)

  val csr    = io.ifu_idu_data.bits.inst(31, 20)
  val immI12 = io.ifu_idu_data.bits.inst(31, 20)
  val immU20 = io.ifu_idu_data.bits.inst(31, 12)
  val immS12 = Cat(io.ifu_idu_data.bits.inst(31, 25), io.ifu_idu_data.bits.inst(11, 7))
  val immB13 = Cat(io.ifu_idu_data.bits.inst(31), io.ifu_idu_data.bits.inst(7), io.ifu_idu_data.bits.inst(30, 25), io.ifu_idu_data.bits.inst(11, 8), 0.U)
  val immJ21 = Cat(io.ifu_idu_data.bits.inst(31), io.ifu_idu_data.bits.inst(19, 12), io.ifu_idu_data.bits.inst(20), io.ifu_idu_data.bits.inst(30, 21), 0.U)

  val immU  = Cat(immU20, Fill(12, 0.U))
  val immI  = Cat(Fill(20, immI12(11)), immI12)
  val immS  = Cat(Fill(20, immS12(11)), immS12)
  val immB  = Cat(Fill(19, immB13(12)), immB13)
  val immJ  = Cat(Fill(11, immJ21(20)), immJ21)

  val recsr = Wire(Bool())
  val branch= Wire(Bool())
  val mret  = Wire(Bool())
  val pcmux = Wire(UInt(2.W))

  // def conflict israw_data
  def conflict(rs: UInt, rd: UInt) = (rs === rd) && (rs =/= 0.U)
  def israw_data_load(rs: UInt, rd: UInt, instType: UInt) = conflict(rs, rd) && (instType === "b111".U) 
  def israw_data_lsu(rs: UInt, rd: UInt, instType: UInt, valid: UInt) = israw_data_load(rs, rd, instType) && !valid 

  // def no_bypass_instType B/S
  def no_bypass_instType(instType: UInt) = !(instType === "b001".U || instType === "b010".U) 

  // def bypass 
  def bypass_exu(rs: UInt, rd: UInt, instType: UInt) = conflict(rs, rd) && !(instType === "b111".U) && no_bypass_instType(instType)
  def bypass_lsu(rs: UInt, rd: UInt, instType: UInt, valid: UInt) = !israw_data_lsu(rs, rd, instType, valid) && conflict(rs, rd) && no_bypass_instType(instType)
  def bypass_wbu(rs: UInt, rd: UInt, instType: UInt) = conflict(rs, rd) && no_bypass_instType(instType)

  // def bypass src1/src2
  def bypass_instType_idu_src1(instType: UInt) = (instType === "b000".U || instType === "b001".U || instType === "b010".U || instType === "b110".U || instType === "b101".U)
  def bypass_instType_idu_src2(instType: UInt) = (instType === "b001".U || instType === "b010".U || instType === "b101".U)
  
  val isRAW_data      = Wire(Bool())
  val isRAW_data_src1 = Wire(Bool())
  val isRAW_data_src2 = Wire(Bool())

  val s_idle :: s_wait_ready :: Nil = Enum(2)
  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle)(List(
    s_idle       -> Mux(io.ifu_idu_data.valid, s_wait_ready, s_idle),
    s_wait_ready -> Mux(isRAW_data, s_wait_ready, Mux(io.idu_exu_data.ready, s_idle, s_wait_ready))
  ))

  io.idu_exu_data.valid := state === s_wait_ready
  io.ifu_idu_data.ready  := state === s_idle

  // data raw
  isRAW_data_src1 := bypass_instType_idu_src1(instType) && (israw_data_load(rs1, io.idu_exu_raw.exu_rd, io.idu_exu_raw.exu_instType) || israw_data_lsu(rs1, io.idu_lsu_raw.lsu_rd, io.idu_lsu_raw.lsu_instType, io.idu_lsu_raw.lsu_valid))
  isRAW_data_src2 := bypass_instType_idu_src2(instType) && (israw_data_load(rs2, io.idu_exu_raw.exu_rd, io.idu_exu_raw.exu_instType) || israw_data_lsu(rs2, io.idu_lsu_raw.lsu_rd, io.idu_lsu_raw.lsu_instType, io.idu_lsu_raw.lsu_valid))
  isRAW_data := (isRAW_data_src1 || isRAW_data_src2) && state === s_wait_ready

  src1 := Mux(bypass_exu(rs1, io.idu_exu_raw.exu_rd, io.idu_exu_raw.exu_instType), io.idu_exu_raw.exu_regdata,
          Mux(bypass_lsu(rs1, io.idu_lsu_raw.lsu_rd, io.idu_lsu_raw.lsu_instType, io.idu_lsu_raw.lsu_valid), io.idu_lsu_raw.lsu_regdata,
          Mux(bypass_wbu(rs1, io.idu_wbu_raw.wbu_rd, io.idu_wbu_raw.wbu_instType), io.idu_wbu_raw.wbu_regdata, io.idu_reg_data.src1)))

  src2 := Mux(bypass_exu(rs2, io.idu_exu_raw.exu_rd, io.idu_exu_raw.exu_instType), io.idu_exu_raw.exu_regdata,
          Mux(bypass_lsu(rs2, io.idu_lsu_raw.lsu_rd, io.idu_lsu_raw.lsu_instType, io.idu_lsu_raw.lsu_valid), io.idu_lsu_raw.lsu_regdata,
          Mux(bypass_wbu(rs2, io.idu_wbu_raw.wbu_rd, io.idu_wbu_raw.wbu_instType), io.idu_wbu_raw.wbu_regdata, io.idu_reg_data.src2)))

  immNum   := decoder(Cat(func3, opcode), ImmNum)
  instType := decoder(opcode, InstType)
  AluMuxa  := decoder(opcode, AluMux1)
  AluMuxb  := decoder(Cat(func3, opcode), AluMux2)
  AluSela  := decoder(Cat(func7, func3, opcode), AluSel1)
  AluSelb  := decoder(Cat(func3, opcode), AluSel2)
  recsr    := decoder(Cat(func3, opcode), Recsr)
  branch   := decoder(io.ifu_idu_data.bits.inst, Branch)
  mret     := decoder(io.ifu_idu_data.bits.inst, Mret)
  pcmux    := Mux(isRAW_data, 0.U, decoder(opcode, PcMux))

  AluMux   := (AluMuxa | AluMuxb)
  AluSel   := (AluSela | AluSelb)

  Imm := Mux(instType === "b000".U, immI,
         Mux(instType === "b001".U, immS,
         Mux(instType === "b010".U, immB,
         Mux(instType === "b011".U, immU,
         Mux(instType === "b100".U, immJ, 
         Mux(instType === "b111".U, immI, 0.U(32.W)))))))

  // idu <> exu
  io.idu_exu_data.bits.mret   := mret
  io.idu_exu_data.bits.pcmux  := pcmux
  io.idu_exu_data.bits.branch := branch
  io.idu_exu_data.bits.AluMux := Mux(isRAW_data, "b0011".U, AluMux)
  io.idu_exu_data.bits.AluSel := Mux(isRAW_data, 0.U, AluSel)
  io.idu_exu_data.bits.pc     := io.ifu_idu_data.bits.pc
  io.idu_exu_data.bits.imm    := Mux(isRAW_data, 0.U, Mux(immNum, Cat(Fill(27, Imm(4)), Imm(4, 0)), Imm))
  io.idu_exu_data.bits.zimm   := Cat(Fill(27, 0.U), rs1)
  io.idu_exu_data.bits.rers1  := Mux(recsr, ~src1, src1)
  io.idu_exu_data.bits.rezimm := Mux(recsr, ~io.idu_exu_data.bits.zimm, io.idu_exu_data.bits.zimm)

  // idu <> lsu
  io.idu_exu_data.bits.idu_lsu_data.MemWr    := Mux(isRAW_data, 0.U, decoder(opcode, MemWr))
  io.idu_exu_data.bits.idu_lsu_data.MemtoReg := Mux(isRAW_data, 0.U, decoder(opcode, MemtoReg))
  io.idu_exu_data.bits.idu_lsu_data.wstrb    := decoder(Cat(func3, opcode), Wstrb)
  io.idu_exu_data.bits.idu_lsu_data.awsize   := decoder(Cat(func3, opcode), Awsize)
  io.idu_exu_data.bits.idu_lsu_data.arsize   := decoder(Cat(func3, opcode), Arsize)
  io.idu_exu_data.bits.idu_lsu_data.RegNum   := decoder(Cat(func3, opcode), RegNum)

  // idu <> wbu
  io.idu_exu_data.bits.idu_lsu_data.idu_wbu_data.csr        := csr
  io.idu_exu_data.bits.idu_lsu_data.idu_wbu_data.instType   := instType
  io.idu_exu_data.bits.idu_lsu_data.idu_wbu_data.isRAW_data := isRAW_data
  io.idu_exu_data.bits.idu_lsu_data.idu_wbu_data.rd         := Mux(isRAW_data, 0.U, rd)
  io.idu_exu_data.bits.idu_lsu_data.idu_wbu_data.ecall      := Mux(isRAW_data, 0.U, decoder(io.ifu_idu_data.bits.inst, Ecall))
  io.idu_exu_data.bits.idu_lsu_data.idu_wbu_data.ebreak     := Mux(isRAW_data, 0.U, decoder(io.ifu_idu_data.bits.inst, Ebreak))
  io.idu_exu_data.bits.idu_lsu_data.idu_wbu_data.RegWr      := Mux(isRAW_data, 0.U, decoder(opcode, RegWr) | decoder(Cat(func3, opcode), CsrWr))
  io.idu_exu_data.bits.idu_lsu_data.idu_wbu_data.CsrWr      := Mux(isRAW_data, 0.U, decoder(Cat(func3, opcode), CsrWr))

  // idu <> csr
  io.idu_csr_data.csr               := csr
  io.idu_exu_data.bits.mepc         := io.idu_csr_data.mepc
  io.idu_exu_data.bits.mtvec        := io.idu_csr_data.mtvec
  io.idu_exu_data.bits.idu_lsu_data.csrdata  := io.idu_csr_data.csrdata

  // exu <> reg
  io.idu_exu_data.bits.src1     := src1
  io.idu_exu_data.bits.idu_lsu_data.src2 := src2

  // idu <> reg
  io.idu_reg_data.rs1  := rs1
  io.idu_reg_data.rs2  := rs2

  // idu <> idu_counter
  val idu_counter = Module(new IDU_COUNTER())
  idu_counter.io.clock      := clock
  idu_counter.io.state      := state
  idu_counter.io.isRAW_data := isRAW_data

}


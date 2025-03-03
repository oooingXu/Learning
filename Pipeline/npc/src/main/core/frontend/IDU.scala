package npc

import chisel3._
import chisel3.util._
import chisel3.util.BitPat
import chisel3.util.experimental.decode._

class ysyx_23060336_IDU extends Module{
	val io = IO(new Bundle{
    val in         = Flipped(Decoupled(new IFU_IDU_DATA()))
    val out        = Decoupled(new IDU_EXU_DATA())
    val reg        = new IDU_REG_DATA()
    val csr        = new IDU_CSR_DATA()
    val exu_rd     = Input(UInt(5.W))
    val lsu_rd     = Input(UInt(5.W))
    val wbu_rd     = Input(UInt(5.W))
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
      BitPat("b0000011") -> BitPat("b000"), // I
      BitPat("b0100011") -> BitPat("b001"), // S
      BitPat("b0010011") -> BitPat("b000"), // I
      BitPat("b0110011") -> BitPat("b101"), // R
      BitPat("b0001111") -> BitPat("b000"), // I
      BitPat("b1110011") -> BitPat("b110")  // I csr
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

  val Imm      = Wire(UInt(32.W))
  val instType = Wire(UInt(4.W))
  val AluSela  = Wire(UInt(4.W))
  val AluSelb  = Wire(UInt(4.W))
  val AluSel   = Wire(UInt(4.W))
  val AluMuxa  = Wire(UInt(4.W))
  val AluMuxb  = Wire(UInt(4.W))
  val AluMux   = Wire(UInt(4.W))
  val immNum   = Wire(Bool())

  val rd       = io.in.bits.inst(11, 7)
  val rs1      = io.in.bits.inst(19, 15)
  val rs2      = io.in.bits.inst(24, 20)
  val func7    = io.in.bits.inst(31, 25)
  val func3    = io.in.bits.inst(14, 12)
  val opcode   = io.in.bits.inst(6, 0)

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

  val recsr = Wire(Bool())
  val branch= Wire(Bool())
  val mret  = Wire(Bool())
  val pcmux = Wire(UInt(2.W))

  def conflict(rs: UInt, rd: UInt) = (rs === rd) && (rs =/= 0.U)
  val isRAW_data   = Wire(Bool())
  val isRAW_data_a = Wire(Bool())
  val isRAW_data_b = Wire(Bool())

  val s_idle :: s_wait_ready :: Nil = Enum(2)
  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle)(List(
    s_idle       -> Mux(io.in.valid, s_wait_ready, s_idle),
    s_wait_ready -> Mux(isRAW_data, s_wait_ready, Mux(io.out.ready, s_idle, s_wait_ready))
  ))

  io.out.valid := state === s_wait_ready
  io.in.ready  := state === s_idle

  // data raw
  isRAW_data_a := ((conflict(rs1, io.exu_rd)  ||
                    conflict(rs1, io.lsu_rd)  ||
                    conflict(rs1, io.wbu_rd)) &&
                   (instType === "b000".U ||
                    instType === "b001".U ||
                    instType === "b010".U ||
                    instType === "b110".U ||
                    instType === "b101".U))

  isRAW_data_b := ((conflict(rs2, io.exu_rd)  ||
                    conflict(rs2, io.lsu_rd)  ||
                    conflict(rs2, io.wbu_rd)) &&
                   (instType === "b001".U ||
                    instType === "b010".U ||
                    instType === "b101".U))

  isRAW_data := (isRAW_data_a || isRAW_data_b) && state === s_wait_ready

  immNum   := decoder(Cat(func3, opcode), ImmNum)
  instType := decoder(opcode, InstType)
  AluMuxa  := decoder(opcode, AluMux1)
  AluMuxb  := decoder(Cat(func3, opcode), AluMux2)
  AluSela  := decoder(Cat(func7, func3, opcode), AluSel1)
  AluSelb  := decoder(Cat(func3, opcode), AluSel2)
  recsr    := decoder(Cat(func3, opcode), Recsr)
  branch   := decoder(io.in.bits.inst, Branch)
  mret     := decoder(io.in.bits.inst, Mret)
  pcmux    := Mux(isRAW_data, 0.U, decoder(opcode, PcMux))

  AluMux   := (AluMuxa | AluMuxb)
  AluSel   := (AluSela | AluSelb)

  Imm := Mux(instType === "b000".U, immI,
         Mux(instType === "b001".U, immS,
         Mux(instType === "b010".U, immB,
         Mux(instType === "b011".U, immU,
         Mux(instType === "b100".U, immJ, 0.U(32.W))))))

  // idu <> exu
  io.out.bits.mret   := mret
  io.out.bits.pcmux  := pcmux
  io.out.bits.branch := branch
  io.out.bits.AluMux := Mux(isRAW_data, "b0011".U, AluMux)
  io.out.bits.AluSel := Mux(isRAW_data, 0.U, AluSel)
  io.out.bits.pc     := io.in.bits.pc
  io.out.bits.imm    := Mux(isRAW_data, 0.U, Mux(immNum, Cat(Fill(27, Imm(4)), Imm(4, 0)), Imm))
  io.out.bits.zimm   := Cat(Fill(27, 0.U), rs1)
  io.out.bits.rers1  := Mux(recsr, ~io.reg.src1, io.reg.src1)
  io.out.bits.rezimm := Mux(recsr, ~io.out.bits.zimm, io.out.bits.zimm)

  // idu <> lsu
  io.out.bits.lsu.MemWr    := Mux(isRAW_data, 0.U, decoder(opcode, MemWr))
  io.out.bits.lsu.MemtoReg := Mux(isRAW_data, 0.U, decoder(opcode, MemtoReg))
  io.out.bits.lsu.wstrb    := decoder(Cat(func3, opcode), Wstrb)
  io.out.bits.lsu.awsize   := decoder(Cat(func3, opcode), Awsize)
  io.out.bits.lsu.arsize   := decoder(Cat(func3, opcode), Arsize)
  io.out.bits.lsu.RegNum   := decoder(Cat(func3, opcode), RegNum)

  // idu <> wbu
  io.out.bits.lsu.wbu.csr        := csr
  io.out.bits.lsu.wbu.instType   := instType
  io.out.bits.lsu.wbu.isRAW_data := isRAW_data
  io.out.bits.lsu.wbu.rd         := Mux(isRAW_data, 0.U, rd)
  io.out.bits.lsu.wbu.ecall      := Mux(isRAW_data, 0.U, decoder(io.in.bits.inst, Ecall))
  io.out.bits.lsu.wbu.ebreak     := Mux(isRAW_data, 0.U, decoder(io.in.bits.inst, Ebreak))
  io.out.bits.lsu.wbu.RegWr      := Mux(isRAW_data, 0.U, decoder(opcode, RegWr) | decoder(Cat(func3, opcode), CsrWr))
  io.out.bits.lsu.wbu.CsrWr      := Mux(isRAW_data, 0.U, decoder(Cat(func3, opcode), CsrWr))

  // idu <> csr
  io.csr.csr               := csr
  io.out.bits.mepc         := io.csr.mepc
  io.out.bits.mtvec        := io.csr.mtvec
  io.out.bits.lsu.csrdata  := io.csr.csrdata

  // exu <> reg
  io.out.bits.src1     := io.reg.src1
  io.out.bits.lsu.src2 := io.reg.src2

  // idu <> reg
  io.reg.rs1  := rs1
  io.reg.rs2  := rs2

  // idu <> idu_counter
  val idu_counter = Module(new IDU_COUNTER())
  idu_counter.io.clock      := clock
  idu_counter.io.state      := state
  idu_counter.io.isRAW_data := isRAW_data

}


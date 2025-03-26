package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_EXU extends Module {
  val io = IO(new Bundle{
    val idu_exu_data = Flipped(Decoupled(new IDU_EXU_DATA()))
    val exu_lsu_data = Decoupled(new EXU_LSU_DATA())
    val exu_ifu_raw  = new EXU_IFU_RAW()
    val exu_idu_raw  = new EXU_IDU_RAW()
  })

  val alu = Module(new ysyx_23060336_ALU(Base.dataWidth))

  val ina   = Wire(UInt(Base.dataWidth.W))
  val inb   = Wire(UInt(Base.dataWidth.W))
  val pca   = Wire(UInt(Base.pcWidth.W))
  val pcb   = Wire(UInt(Base.pcWidth.W))
  val pcadd = Wire(UInt(Base.pcWidth.W))
  val PCMux = Wire(UInt(Base.PCMuxWidth.W))

  val dnpc  = Wire(UInt(Base.pcWidth.W))
  val isRAW_control = Wire(Bool())

  // state machine
  val s_idle :: s_wait_ready :: s_wait_ready_control :: Nil = Enum(3)
  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle)(List(
    s_idle               -> Mux(io.idu_exu_data.valid, Mux(isRAW_control, s_wait_ready_control, s_wait_ready), s_idle),
    s_wait_ready         -> Mux(io.exu_lsu_data.ready, s_idle, s_wait_ready),
    s_wait_ready_control -> Mux(io.exu_lsu_data.ready, s_idle, s_wait_ready_control)
    //s_wait_ready -> Mux(io.exu_lsu_data.ready && !io.idu_exu_data.valid, s_idle, s_wait_ready)
  ))

  io.exu_lsu_data.valid := state === s_wait_ready || state === s_wait_ready_control
  io.idu_exu_data.ready := state === s_idle 
  //io.idu_exu_data.ready := state === s_idle || (io.exu_lsu_data.valid && io.idu_exu_data.valid)

  // exu <> lsu
  io.exu_lsu_data.bits.idu_lsu_data  <> io.idu_exu_data.bits.idu_lsu_data
  io.exu_lsu_data.bits.exu_wbu_data.pc   := io.idu_exu_data.bits.pc
  io.exu_lsu_data.bits.exu_wbu_data.dnpc := dnpc

  // exu <> alu
  ina := MuxLookup(io.idu_exu_data.bits.AluMux, 0.U)(
    Seq(
      "b0111".U(Base.AluMuxWidth.W) -> io.idu_exu_data.bits.src1,
      "b0001".U(Base.AluMuxWidth.W) -> io.idu_exu_data.bits.src1,
      "b0010".U(Base.AluMuxWidth.W) -> io.idu_exu_data.bits.pc,
      "b0011".U(Base.AluMuxWidth.W) -> 0.U,  
      "b0100".U(Base.AluMuxWidth.W) -> io.idu_exu_data.bits.pc,                
      "b0101".U(Base.AluMuxWidth.W) -> io.idu_exu_data.bits.rers1, 
      "b1000".U(Base.AluMuxWidth.W) -> io.idu_exu_data.bits.rers1,                     
      "b1001".U(Base.AluMuxWidth.W) -> io.idu_exu_data.bits.rezimm,                     
      "b0110".U(Base.AluMuxWidth.W) -> io.idu_exu_data.bits.rezimm   
    )
  )

  inb := MuxLookup(io.idu_exu_data.bits.AluMux, 0.U)(
    Seq(
      "b0111".U(Base.AluMuxWidth.W) -> io.idu_exu_data.bits.idu_lsu_data.src2,
      "b0001".U(Base.AluMuxWidth.W) -> io.idu_exu_data.bits.imm,
      "b0010".U(Base.AluMuxWidth.W) -> 4.U,  
      "b0011".U(Base.AluMuxWidth.W) -> io.idu_exu_data.bits.imm,
      "b0101".U(Base.AluMuxWidth.W) -> io.idu_exu_data.bits.idu_lsu_data.csrdata,
      "b0110".U(Base.AluMuxWidth.W) -> io.idu_exu_data.bits.idu_lsu_data.csrdata, 
      "b0100".U(Base.AluMuxWidth.W) -> io.idu_exu_data.bits.imm
    )
  )

  alu.io.ina         := ina
  alu.io.inb         := inb
  alu.io.sel         := io.idu_exu_data.bits.AluSel
  io.exu_lsu_data.bits.result := alu.io.result

  // exu <> pc_add
  PCMux := Cat(io.idu_exu_data.bits.branch, io.exu_lsu_data.bits.result(0), io.idu_exu_data.bits.pcmux)

  pca := MuxLookup(PCMux, io.idu_exu_data.bits.pc)(
    Seq(
      "b0010".U(Base.PCMuxWidth.W) -> io.idu_exu_data.bits.src1,
      "b0110".U(Base.PCMuxWidth.W) -> io.idu_exu_data.bits.src1
    )
  )

  pcb := MuxLookup(PCMux, 4.U)(
    Seq(
      "b0010".U(Base.PCMuxWidth.W) -> io.idu_exu_data.bits.imm,
      "b0110".U(Base.PCMuxWidth.W) -> io.idu_exu_data.bits.imm,
      "b0001".U(Base.PCMuxWidth.W) -> io.idu_exu_data.bits.imm,
      "b0101".U(Base.PCMuxWidth.W) -> io.idu_exu_data.bits.imm,
      "b1101".U(Base.PCMuxWidth.W) -> io.idu_exu_data.bits.imm
    )
  )

  pcadd := pca + pcb

  dnpc := Mux(reset.asBool, "h80000000".U,
          Mux(io.idu_exu_data.bits.idu_lsu_data.idu_wbu_data.ecall, io.idu_exu_data.bits.mtvec,      
          Mux(io.idu_exu_data.bits.mret,  io.idu_exu_data.bits.mepc, pcadd)))

  io.exu_ifu_raw.dnpc := dnpc
  isRAW_control := (io.idu_exu_data.bits.pc + 4.U) =/= dnpc

  // exu_idu_raw
  io.exu_idu_raw.exu_regdata   := alu.io.result
  io.exu_idu_raw.exu_rd        := io.idu_exu_data.bits.idu_lsu_data.idu_wbu_data.rd
  io.exu_idu_raw.exu_rden      := io.idu_exu_data.bits.idu_lsu_data.idu_wbu_data.rden
  io.exu_idu_raw.exu_MemtoReg  := io.idu_exu_data.bits.idu_lsu_data.MemtoReg
  //io.exu_idu_raw.exu_isRAW_control := isRAW_control

  // exu_ifu_raw
  io.exu_ifu_raw.exu_valid     := (state === s_wait_ready && !isRAW_control) || state === s_wait_ready_control
  io.exu_ifu_raw.isRAW_control := isRAW_control

  // useCounter
  if(Config.useCounter) {
    val exu_counter = Module(new EXU_COUNTER())
    exu_counter.io.clock         := clock
    exu_counter.io.state         := state
    exu_counter.io.isRAW_control := isRAW_control
  }

}

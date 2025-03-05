package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_EXU extends Module {
  val io = IO(new Bundle{
    val in            = Flipped(Decoupled(new IDU_EXU_DATA()))
    val out           = Decoupled(new EXU_LSU_DATA())
    val dnpc          = Output(UInt(32.W))
    val exu_instType  = Output(UInt(5.W))
    val exu_rd        = Output(UInt(5.W))
    val exu_regdata   = Output(UInt(32.W))
    val exu_valid     = Output(Bool())
    val isRAW_control = Output(Bool())
  })

  val alu = Module(new ysyx_23060336_ALU(32))

  val ina   = Wire(UInt(32.W))
  val inb   = Wire(UInt(32.W))
  val pca   = Wire(UInt(32.W))
  val pcb   = Wire(UInt(32.W))
  val pcadd = Wire(UInt(32.W))
  val PCMux = Wire(UInt(4.W))

  val s_idle :: s_wait_ready :: Nil = Enum(2)
  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle)(List(
    s_idle -> Mux(io.in.valid, s_wait_ready, s_idle),
    s_wait_ready -> Mux(io.out.ready, s_idle, s_wait_ready)
  ))

  io.out.valid := state === s_wait_ready
  io.in.ready  := state === s_idle

  // exu <> lsu
  io.out.bits.lsu  <> io.in.bits.lsu
  io.out.bits.exu.pc   := io.in.bits.pc
  io.out.bits.exu.dnpc := io.dnpc

  // exu <> alu
  ina  := Mux(io.in.bits.AluMux === "b0111".U, io.in.bits.src1,
          Mux(io.in.bits.AluMux === "b0001".U, io.in.bits.src1,
          Mux(io.in.bits.AluMux === "b0010".U, io.in.bits.pc,
          Mux(io.in.bits.AluMux === "b0011".U, 0.U,  
          Mux(io.in.bits.AluMux === "b0100".U, io.in.bits.pc,                
          Mux(io.in.bits.AluMux === "b0101".U, io.in.bits.rers1, 
          Mux(io.in.bits.AluMux === "b1000".U, io.in.bits.rers1,                     
          Mux(io.in.bits.AluMux === "b1001".U, io.in.bits.rezimm,                     
          Mux(io.in.bits.AluMux === "b0110".U, io.in.bits.rezimm, 0.U(32.W))))))))))   

  inb  := Mux(io.in.bits.AluMux === "b0111".U, io.in.bits.lsu.src2,
          Mux(io.in.bits.AluMux === "b0001".U, io.in.bits.imm,
          Mux(io.in.bits.AluMux === "b0010".U, 4.U,  
          Mux(io.in.bits.AluMux === "b0011".U, io.in.bits.imm,
          Mux(io.in.bits.AluMux === "b0101".U, io.in.bits.lsu.csrdata,
          Mux(io.in.bits.AluMux === "b0110".U, io.in.bits.lsu.csrdata, 
          Mux(io.in.bits.AluMux === "b0100".U, io.in.bits.imm, 0.U(32.W))))))))

  alu.io.ina         := ina
  alu.io.inb         := inb
  alu.io.sel         := io.in.bits.AluSel
  io.out.bits.result := alu.io.result

  // exu <> pc_add
  PCMux := Cat(io.in.bits.branch, io.out.bits.result(0), io.in.bits.pcmux)

  pca   := Mux(PCMux === "b0010".U, io.in.bits.src1,
           Mux(PCMux === "b0110".U, io.in.bits.src1, io.in.bits.pc))

  pcb   := Mux(PCMux === "b0010".U, io.in.bits.imm,
           Mux(PCMux === "b0110".U, io.in.bits.imm,
           Mux(PCMux === "b0001".U, io.in.bits.imm,
           Mux(PCMux === "b0101".U, io.in.bits.imm,
           Mux(PCMux === "b1101".U, io.in.bits.imm, 4.U)))))

  pcadd := pca + pcb

  io.dnpc := Mux(reset.asBool, "h80000000".U,
             Mux(io.in.bits.lsu.wbu.ecall, io.in.bits.mtvec,      
             Mux(io.in.bits.mret,  io.in.bits.mepc, pcadd)))

  io.exu_rd := io.in.bits.lsu.wbu.rd
  io.exu_instType := io.in.bits.lsu.wbu.instType
  io.exu_regdata := alu.io.result
  io.exu_valid := state === s_wait_ready
  io.isRAW_control := (io.in.bits.pc + 4.U) =/= io.dnpc

  // exu <> exu_counter
  val exu_counter = Module(new EXU_COUNTER())
  exu_counter.io.clock         := clock
  exu_counter.io.state         := state
  exu_counter.io.isRAW_control := io.isRAW_control

}

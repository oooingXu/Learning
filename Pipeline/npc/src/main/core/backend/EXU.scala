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
    s_idle -> Mux(io.idu_exu_data.valid, s_wait_ready, s_idle),
    s_wait_ready -> Mux(io.exu_lsu_data.ready, s_idle, s_wait_ready)
  ))

  io.exu_lsu_data.valid := state === s_wait_ready
  io.idu_exu_data.ready  := state === s_idle

  // exu <> lsu
  io.exu_lsu_data.bits.idu_lsu_data  <> io.idu_exu_data.bits.idu_lsu_data
  io.exu_lsu_data.bits.exu_wbu_data.pc   := io.idu_exu_data.bits.pc
  io.exu_lsu_data.bits.exu_wbu_data.dnpc := io.exu_ifu_raw.dnpc

  // exu <> alu
  ina  := Mux(io.idu_exu_data.bits.AluMux === "b0111".U, io.idu_exu_data.bits.src1,
          Mux(io.idu_exu_data.bits.AluMux === "b0001".U, io.idu_exu_data.bits.src1,
          Mux(io.idu_exu_data.bits.AluMux === "b0010".U, io.idu_exu_data.bits.pc,
          Mux(io.idu_exu_data.bits.AluMux === "b0011".U, 0.U,  
          Mux(io.idu_exu_data.bits.AluMux === "b0100".U, io.idu_exu_data.bits.pc,                
          Mux(io.idu_exu_data.bits.AluMux === "b0101".U, io.idu_exu_data.bits.rers1, 
          Mux(io.idu_exu_data.bits.AluMux === "b1000".U, io.idu_exu_data.bits.rers1,                     
          Mux(io.idu_exu_data.bits.AluMux === "b1001".U, io.idu_exu_data.bits.rezimm,                     
          Mux(io.idu_exu_data.bits.AluMux === "b0110".U, io.idu_exu_data.bits.rezimm, 0.U(32.W))))))))))   

  inb  := Mux(io.idu_exu_data.bits.AluMux === "b0111".U, io.idu_exu_data.bits.idu_lsu_data.src2,
          Mux(io.idu_exu_data.bits.AluMux === "b0001".U, io.idu_exu_data.bits.imm,
          Mux(io.idu_exu_data.bits.AluMux === "b0010".U, 4.U,  
          Mux(io.idu_exu_data.bits.AluMux === "b0011".U, io.idu_exu_data.bits.imm,
          Mux(io.idu_exu_data.bits.AluMux === "b0101".U, io.idu_exu_data.bits.idu_lsu_data.csrdata,
          Mux(io.idu_exu_data.bits.AluMux === "b0110".U, io.idu_exu_data.bits.idu_lsu_data.csrdata, 
          Mux(io.idu_exu_data.bits.AluMux === "b0100".U, io.idu_exu_data.bits.imm, 0.U(32.W))))))))

  alu.io.ina         := ina
  alu.io.inb         := inb
  alu.io.sel         := io.idu_exu_data.bits.AluSel
  io.exu_lsu_data.bits.result := alu.io.result

  // exu <> pc_add
  PCMux := Cat(io.idu_exu_data.bits.branch, io.exu_lsu_data.bits.result(0), io.idu_exu_data.bits.pcmux)

  pca   := Mux(PCMux === "b0010".U, io.idu_exu_data.bits.src1,
           Mux(PCMux === "b0110".U, io.idu_exu_data.bits.src1, io.idu_exu_data.bits.pc))

  pcb   := Mux(PCMux === "b0010".U, io.idu_exu_data.bits.imm,
           Mux(PCMux === "b0110".U, io.idu_exu_data.bits.imm,
           Mux(PCMux === "b0001".U, io.idu_exu_data.bits.imm,
           Mux(PCMux === "b0101".U, io.idu_exu_data.bits.imm,
           Mux(PCMux === "b1101".U, io.idu_exu_data.bits.imm, 4.U)))))

  pcadd := pca + pcb

  io.exu_ifu_raw.dnpc := Mux(reset.asBool, "h80000000".U,
             Mux(io.idu_exu_data.bits.idu_lsu_data.idu_wbu_data.ecall, io.idu_exu_data.bits.mtvec,      
             Mux(io.idu_exu_data.bits.mret,  io.idu_exu_data.bits.mepc, pcadd)))

  io.exu_idu_raw.exu_rd := io.idu_exu_data.bits.idu_lsu_data.idu_wbu_data.rd
  io.exu_idu_raw.exu_instType := io.idu_exu_data.bits.idu_lsu_data.idu_wbu_data.instType
  io.exu_idu_raw.exu_regdata := alu.io.result
  io.exu_ifu_raw.exu_valid := state === s_wait_ready
  io.exu_ifu_raw.isRAW_control := (io.idu_exu_data.bits.pc + 4.U) =/= io.exu_ifu_raw.dnpc

  // exu <> exu_counter
  val exu_counter = Module(new EXU_COUNTER())
  exu_counter.io.clock         := clock
  exu_counter.io.state         := state
  exu_counter.io.isRAW_control := io.exu_ifu_raw.isRAW_control

}

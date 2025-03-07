package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_WBU extends Module {
  val io = IO(new Bundle{
    val lsu_wbu_data = Flipped(Decoupled(new LSU_WBU_DATA()))
    val wbu_reg_data = new WBU_REG_DATA()
    val wbu_csr_data = new WBU_CSR_DATA()
    val wbu_idu_raw  = new WBU_IDU_RAW()
  })

  // state machine
  val s_idle :: s_reg :: Nil = Enum(2)
  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle)(List(
    s_idle      -> Mux(io.lsu_wbu_data.valid, s_reg, s_idle),
    s_reg       -> s_idle
  ))

  io.lsu_wbu_data.ready := state === s_idle

  // ebreak
  val ebreak    = Module(new ysyx_23060336_EBREAK())
  ebreak.io.clock      := clock
  ebreak.io.ebreak     := io.lsu_wbu_data.bits.idu_wbu_data.ebreak
  ebreak.io.instType   := io.lsu_wbu_data.bits.idu_wbu_data.instType
  ebreak.io.state      := state

  // diff pipeline pc/dnpc
  val seepc = Module(new SEEPC())
  seepc.io.clock := clock
  seepc.io.pc    := io.lsu_wbu_data.bits.exu_wbu_data.pc
  seepc.io.dnpc  := io.lsu_wbu_data.bits.exu_wbu_data.dnpc
  seepc.io.valid := state === s_reg && !io.lsu_wbu_data.bits.idu_wbu_data.isRAW_data

  // wbu <> reg
  io.wbu_reg_data.wen   := io.lsu_wbu_data.bits.idu_wbu_data.RegWr && state === s_reg
  io.wbu_reg_data.waddr := io.lsu_wbu_data.bits.idu_wbu_data.rd
  io.wbu_reg_data.wdata := io.lsu_wbu_data.bits.regdata

  // wbu <> csr
  io.wbu_csr_data.wen   := io.lsu_wbu_data.bits.idu_wbu_data.CsrWr && state === s_reg
  io.wbu_csr_data.waddr := io.lsu_wbu_data.bits.idu_wbu_data.csr
  io.wbu_csr_data.ecall := io.lsu_wbu_data.bits.idu_wbu_data.ecall
  io.wbu_csr_data.wdata := io.lsu_wbu_data.bits.csrdata
  io.wbu_csr_data.mepc  := io.lsu_wbu_data.bits.exu_wbu_data.pc

  // wbu <> idu
  io.wbu_idu_raw.wbu_rd       := io.lsu_wbu_data.bits.idu_wbu_data.rd
  io.wbu_idu_raw.wbu_instType := io.lsu_wbu_data.bits.idu_wbu_data.instType
  io.wbu_idu_raw.wbu_regdata  := io.lsu_wbu_data.bits.regdata
}

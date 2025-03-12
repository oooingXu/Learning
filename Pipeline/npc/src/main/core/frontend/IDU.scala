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

  val decode = Module(new ysyx_23060336_DECODE())
  val isRAW_data = Wire(Bool())

  // state machine
  val s_idle :: s_wait_ready :: Nil = Enum(2)
  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle)(List(
    s_idle       -> Mux(io.ifu_idu_data.valid, s_wait_ready, s_idle),
    s_wait_ready -> Mux(isRAW_data, s_wait_ready, Mux(io.idu_exu_data.ready, s_idle, s_wait_ready))
  ))

  io.idu_exu_data.valid := state === s_wait_ready
  io.ifu_idu_data.ready := state === s_idle

  // idu <> exu
  io.idu_exu_data.bits := decode.io.decode_idu_data.idu_exu_data

  // idu <> decode
  decode.io.decode_idu_data.pc   := io.ifu_idu_data.bits.pc
  decode.io.decode_idu_data.inst := io.ifu_idu_data.bits.inst
  decode.io.decode_idu_data.idu_valid := state === s_wait_ready

  // idu <> immgen
  decode.io.decode_idu_data.immgen_decode_raw.idu_exu_raw <> io.idu_exu_raw
  decode.io.decode_idu_data.immgen_decode_raw.idu_lsu_raw <> io.idu_lsu_raw
  decode.io.decode_idu_data.immgen_decode_raw.idu_wbu_raw <> io.idu_wbu_raw
  isRAW_data := decode.io.decode_idu_data.idu_exu_data.idu_lsu_data.idu_wbu_data.isRAW_data

  // idu <> reg
  io.idu_reg_data <> decode.io.decode_idu_data.idu_reg_data

  // idu <> csr
  io.idu_csr_data <> decode.io.decode_idu_data.idu_csr_data

  // useCounter
  if(Config.useCounter) {
    val idu_counter = Module(new IDU_COUNTER())
    idu_counter.io.clock      := clock
    idu_counter.io.state      := state
    idu_counter.io.isRAW_data := isRAW_data
  }
}


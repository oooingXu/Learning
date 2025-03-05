package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_WBU extends Module {
  val io = IO(new Bundle{
    val in         = Flipped(Decoupled(new LSU_WBU_DATA()))
    val reg        = new WBU_REG_DATA()
    val csr        = new WBU_CSR_DATA()
    val wbu_instType = Output(UInt(4.W))
    val wbu_rd       = Output(UInt(5.W))
    val wbu_regdata  = Output(UInt(32.W))
  })

  val s_idle :: s_reg :: Nil = Enum(2)
  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle)(List(
    s_idle      -> Mux(io.in.valid, s_reg, s_idle),
    s_reg       -> s_idle
  ))

  io.in.ready := state === s_idle

  // ebreak
  val ebreak    = Module(new ysyx_23060336_EBREAK())
  ebreak.io.clock      := clock
  ebreak.io.ebreak     := io.in.bits.wbu.ebreak
  ebreak.io.instType   := io.in.bits.wbu.instType
  ebreak.io.state      := state

  // diff pipeline pc/dnpc
  val seepc = Module(new SEEPC())
  seepc.io.clock := clock
  seepc.io.pc    := io.in.bits.exu.pc
  seepc.io.dnpc  := io.in.bits.exu.dnpc
  seepc.io.valid := state === s_reg && !io.in.bits.wbu.isRAW_data

  // wbu <> reg
  io.reg.wen   := io.in.bits.wbu.RegWr && state === s_reg
  io.reg.waddr := io.in.bits.wbu.rd
  io.reg.wdata := io.in.bits.regdata

  // wbu <> csr
  io.csr.wen   := io.in.bits.wbu.CsrWr && state === s_reg
  io.csr.waddr := io.in.bits.wbu.csr
  io.csr.ecall := io.in.bits.wbu.ecall
  io.csr.wdata := io.in.bits.csrdata
  io.csr.mepc  := io.in.bits.exu.pc

  // wbu <> idu
  io.wbu_rd := io.in.bits.wbu.rd
  io.wbu_instType := io.in.bits.wbu.instType
  io.wbu_regdata := io.in.bits.regdata
}

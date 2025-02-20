package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_REG extends Module{
  val io = IO(new Bundle{
    val reg_idu_data = new REG_IDU_DATA()
    val reg_wbu_data = new REG_WBU_DATA()
  })

  val ysyx_23060336_regs = Mem(16,UInt(32.W))

  io.reg_idu_data.src1 := Mux(io.reg_idu_data.rs1.orR, ysyx_23060336_regs(io.reg_idu_data.rs1), 0.U)
  io.reg_idu_data.src2 := Mux(io.reg_idu_data.rs2.orR, ysyx_23060336_regs(io.reg_idu_data.rs2), 0.U)

  when(io.reg_wbu_data.wen && io.reg_wbu_data.waddr.orR){
    ysyx_23060336_regs(io.reg_wbu_data.waddr) := io.reg_wbu_data.wdata
  }
}
  

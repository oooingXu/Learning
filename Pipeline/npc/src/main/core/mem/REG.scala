package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_REG extends Module{
  val io = IO(new Bundle{
    val reg_idu_data = new REG_IDU_DATA()
    val reg_wbu_data = new REG_WBU_DATA()
  })

  val ysyx_23060336_regs = Mem(Base.regNumber,UInt(Base.dataWidth.W))

  io.reg_idu_data.src1 := ysyx_23060336_regs(io.reg_idu_data.rs1)
  io.reg_idu_data.src2 := ysyx_23060336_regs(io.reg_idu_data.rs2)

  when(io.reg_wbu_data.wen){
    ysyx_23060336_regs(io.reg_wbu_data.waddr) := io.reg_wbu_data.wdata
  }
  ysyx_23060336_regs(0) := 0.U
}
  

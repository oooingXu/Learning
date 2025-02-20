package npc

import chisel3._
import chisel3.util._

class IFU_IDU_DATA extends Bundle {
  val pc   = Output(UInt(32.W))
  val inst = Output(UInt(32.W))
}

class IDU_EXU_DATA extends Bundle {
  val pc       = Output(UInt(32.W))
  val src1     = Output(UInt(32.W))
  val rezimm   = Output(UInt(32.W))
  val zimm     = Output(UInt(32.W))
  val rers1    = Output(UInt(32.W))
  val imm      = Output(UInt(32.W))
  val mtvec    = Output(UInt(32.W))
  val mepc     = Output(UInt(32.W))
  val pcmux    = Output(UInt(2.W))
  val AluSel   = Output(UInt(4.W))
  val AluMux   = Output(UInt(4.W))
  val branch   = Output(Bool())
  val mret     = Output(Bool())
  val lsu      = new IDU_LSU_DATA()
}

class IDU_LSU_DATA extends Bundle {
  val MemWr    = Output(Bool())
  val MemtoReg = Output(Bool())
  val awsize   = Output(UInt(3.W))
  val arsize   = Output(UInt(3.W))
  val RegNum   = Output(UInt(3.W))
  val wstrb    = Output(UInt(4.W))
  val src2     = Output(UInt(32.W))
  val csrdata  = Output(UInt(32.W))
  val wbu      = new IDU_WBU_DATA()
}

class IDU_WBU_DATA extends Bundle {
  val ebreak     = Output(Bool())
  val ecall      = Output(Bool())
  val RegWr      = Output(Bool())
  val CsrWr      = Output(Bool())
  val isRAW_data = Output(Bool())
  val instType   = Output(UInt(3.W))
  val rd         = Output(UInt(5.W))
  val csr        = Output(UInt(12.W))
}

class EXU_LSU_DATA extends Bundle {
  val result = Output(UInt(32.W))
  val lsu    = new IDU_LSU_DATA()
  val exu    = new EXU_WBU_DATA()
}

class EXU_WBU_DATA extends Bundle {
  val pc   = Output(UInt(32.W))
  val dnpc = Output(UInt(32.W))
}

class LSU_WBU_DATA extends Bundle {
  val regdata = Output(UInt(32.W))
  val csrdata = Output(UInt(32.W))
  val wbu     = new IDU_WBU_DATA()
  val exu     = new EXU_WBU_DATA()
}

class IDU_REG_DATA extends Bundle {
  val rs1  = Output(UInt(5.W))
  val rs2  = Output(UInt(5.W))
  val src1 = Input(UInt(32.W))
  val src2 = Input(UInt(32.W))
}

class REG_IDU_DATA extends Bundle {
  val rs1  = Input(UInt(5.W))
  val rs2  = Input(UInt(5.W))
  val src1 = Output(UInt(32.W))
  val src2 = Output(UInt(32.W))
}

class WBU_REG_DATA extends Bundle {
  val wen   = Output(Bool())
  val waddr = Output(UInt(5.W))
  val wdata = Output(UInt(32.W))
}

class REG_WBU_DATA extends Bundle {
  val wen   = Input(Bool())
  val waddr = Input(UInt(5.W))
  val wdata = Input(UInt(32.W))
}

class IDU_CSR_DATA extends Bundle {
  val mepc     = Input(UInt(32.W))
  val mtvec    = Input(UInt(32.W))
  val csrdata  = Input(UInt(32.W))
  val csr      = Output(UInt(12.W))
}

class CSR_IDU_DATA extends Bundle {
  val mepc     = Output(UInt(32.W))
  val mtvec    = Output(UInt(32.W))
  val csrdata  = Output(UInt(32.W))
  val csr      = Input(UInt(12.W))
}

class WBU_CSR_DATA extends Bundle {
  val wen   = Output(Bool())
  val ecall = Output(Bool())
  val waddr = Output(UInt(32.W))
  val wdata = Output(UInt(32.W))
  val mepc  = Output(UInt(32.W))
}

class CSR_WBU_DATA extends Bundle {
  val wen   = Input(Bool())
  val ecall = Input(Bool())
  val waddr = Input(UInt(32.W))
  val wdata = Input(UInt(32.W))
  val mepc  = Input(UInt(32.W))
}

  

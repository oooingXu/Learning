package npc

import chisel3._
import chisel3.util._

class IFU_IDU_DATA extends Bundle {
  val pc   = Output(UInt(Base.pcWidth.W))
  val inst = Output(UInt(Base.dataWidth.W))
}

class IDU_EXU_DATA extends Bundle {
  val branch   = Output(Bool())
  val mret     = Output(Bool())
  val pc       = Output(UInt(Base.pcWidth.W))
  val mepc     = Output(UInt(Base.pcWidth.W))
  val src1     = Output(UInt(Base.dataWidth.W))
  val rezimm   = Output(UInt(Base.dataWidth.W))
  val zimm     = Output(UInt(Base.dataWidth.W))
  val rers1    = Output(UInt(Base.dataWidth.W))
  val imm      = Output(UInt(Base.dataWidth.W))
  val mtvec    = Output(UInt(Base.dataWidth.W))
  val pcmux    = Output(UInt(Base.pcmuxWidth.W))
  val AluSel   = Output(UInt(Base.AluSelWidth.W))
  val AluMux   = Output(UInt(Base.AluMuxWidth.W))
  val idu_lsu_data = new IDU_LSU_DATA()
}

class IDU_LSU_DATA extends Bundle {
  val MemWr    = Output(Bool())
  val MemtoReg = Output(Bool())
  val awsize   = Output(UInt(Base.sizeWidth.W))
  val arsize   = Output(UInt(Base.sizeWidth.W))
  val wstrb    = Output(UInt(Base.wstrbWidth.W))
  val src2     = Output(UInt(Base.dataWidth.W))
  val csrdata  = Output(UInt(Base.dataWidth.W))
  val RegNum   = Output(UInt(Base.RegNumWidth.W))
  val idu_wbu_data = new IDU_WBU_DATA()
}

class IDU_WBU_DATA extends Bundle {
  val ebreak     = Output(Bool())
  val ecall      = Output(Bool())
  val RegWr      = Output(Bool())
  val CsrWr      = Output(Bool())
  val isRAW_data = Output(Bool())
  val instType   = Output(UInt(Base.instTypeWidth.W))
  val rd         = Output(UInt(Base.rdWidth.W))
  val csr        = Output(UInt(Base.csrWidth.W))
}

class EXU_LSU_DATA extends Bundle {
  val result = Output(UInt(Base.dataWidth.W))
  val idu_lsu_data = new IDU_LSU_DATA()
  val exu_wbu_data = new EXU_WBU_DATA()
}

class EXU_WBU_DATA extends Bundle {
  val pc   = Output(UInt(Base.pcWidth.W))
  val dnpc = Output(UInt(Base.pcWidth.W))
}

class LSU_WBU_DATA extends Bundle {
  val regdata = Output(UInt(Base.dataWidth.W))
  val csrdata = Output(UInt(Base.dataWidth.W))
  val idu_wbu_data = new IDU_WBU_DATA()
  val exu_wbu_data = new EXU_WBU_DATA()
}

class IFU_EXU_RAW extends Bundle {
  val exu_valid     = Input(Bool())
  val isRAW_control = Input(Bool())
  val dnpc          = Input(UInt(Base.pcWidth.W))
}

class EXU_IFU_RAW extends Bundle {
  val exu_valid     = Output(Bool())
  val isRAW_control = Output(Bool())
  val dnpc          = Output(UInt(Base.pcWidth.W))
}

class IDU_EXU_RAW extends Bundle {
  val exu_instType = Input(UInt(Base.instTypeWidth.W))
  val exu_rd       = Input(UInt(Base.rdWidth.W))
  val exu_regdata  = Input(UInt(Base.dataWidth.W))
}

class EXU_IDU_RAW extends Bundle {
  val exu_instType = Output(UInt(Base.instTypeWidth.W))
  val exu_rd       = Output(UInt(Base.rdWidth.W))
  val exu_regdata  = Output(UInt(Base.dataWidth.W))
}

class IDU_LSU_RAW extends Bundle {
  val lsu_valid    = Input(Bool())
  val lsu_instType = Input(UInt(Base.instTypeWidth.W))
  val lsu_rd       = Input(UInt(Base.rdWidth.W))
  val lsu_regdata  = Input(UInt(Base.dataWidth.W))
}

class LSU_IDU_RAW extends Bundle {
  val lsu_valid    = Output(Bool())
  val lsu_instType = Output(UInt(Base.instTypeWidth.W))
  val lsu_rd       = Output(UInt(Base.rdWidth.W))
  val lsu_regdata  = Output(UInt(Base.dataWidth.W))
}

class IDU_WBU_RAW extends Bundle {
  val wbu_instType = Input(UInt(Base.instTypeWidth.W))
  val wbu_rd       = Input(UInt(Base.rdWidth.W))
  val wbu_regdata  = Input(UInt(Base.dataWidth.W))
}

class WBU_IDU_RAW extends Bundle {
  val wbu_instType = Output(UInt(Base.instTypeWidth.W))
  val wbu_rd       = Output(UInt(Base.rdWidth.W))
  val wbu_regdata  = Output(UInt(Base.dataWidth.W))
}

class IDU_REG_DATA extends Bundle {
  val rs1  = Output(UInt(Base.rdWidth.W))
  val rs2  = Output(UInt(Base.rdWidth.W))
  val src1 = Input(UInt(Base.dataWidth.W))
  val src2 = Input(UInt(Base.dataWidth.W))
}

class REG_IDU_DATA extends Bundle {
  val rs1  = Input(UInt(Base.rdWidth.W))
  val rs2  = Input(UInt(Base.rdWidth.W))
  val src1 = Output(UInt(Base.dataWidth.W))
  val src2 = Output(UInt(Base.dataWidth.W))
}

class WBU_REG_DATA extends Bundle {
  val wen   = Output(Bool())
  val waddr = Output(UInt(Base.rdWidth.W))
  val wdata = Output(UInt(Base.dataWidth.W))
}

class REG_WBU_DATA extends Bundle {
  val wen   = Input(Bool())
  val waddr = Input(UInt(Base.rdWidth.W))
  val wdata = Input(UInt(Base.dataWidth.W))
}

class IDU_CSR_DATA extends Bundle {
  val mepc     = Input(UInt(Base.pcWidth.W))
  val mtvec    = Input(UInt(Base.dataWidth.W))
  val csrdata  = Input(UInt(Base.dataWidth.W))
  val csr      = Output(UInt(Base.csrWidth.W))
}

class CSR_IDU_DATA extends Bundle {
  val mepc     = Output(UInt(Base.pcWidth.W))
  val mtvec    = Output(UInt(Base.dataWidth.W))
  val csrdata  = Output(UInt(Base.dataWidth.W))
  val csr      = Input(UInt(Base.csrWidth.W))
}

class WBU_CSR_DATA extends Bundle {
  val wen   = Output(Bool())
  val ecall = Output(Bool())
  val waddr = Output(UInt(Base.addrWidth.W))
  val wdata = Output(UInt(Base.dataWidth.W))
  val mepc  = Output(UInt(Base.pcWidth.W))
}

class CSR_WBU_DATA extends Bundle {
  val wen   = Input(Bool())
  val ecall = Input(Bool())
  val waddr = Input(UInt(Base.addrWidth.W))
  val wdata = Input(UInt(Base.dataWidth.W))
  val mepc  = Input(UInt(Base.pcWidth.W))
}

class ICACHE_IFU_DATA extends Bundle {
  val arready = Output(Bool())
  val arvalid = Input(Bool())
  val araddr  = Input(UInt(Base.addrWidth.W))
  val coherence_input = new COHERENCE_INPUT()
}

class ICACHE_IFU_LSU_DATA extends Bundle {
  val araddr  = Output(UInt(Base.addrWidth.W))
  val coherence_output = new COHERENCE_OUTPUT()
}

class ICACHE_LSU_ARBITER_DATA extends Bundle {
  val arvalid = Output(Bool())
  val rready  = Output(Bool())
  val araddr  = Output(UInt(Base.addrWidth.W))
  val arready = Input(Bool())
  val rvalid  = Input(Bool())
  val rdata   = Input(UInt(Base.dataWidth.W))
}

class ICACHE_LSU_ISSUE_DATA extends Bundle {
  val icache_out_data = Output(UInt(Base.dataWidth.W))
}

class COHERENCE_INPUT extends Bundle {
  val awvalid = Input(Bool())
  val awaddr  = Input(UInt(Base.addrWidth.W))
}

class COHERENCE_OUTPUT extends Bundle {
  val awvalid = Output(Bool())
  val awaddr  = Output(UInt(Base.addrWidth.W))
}


package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_IMMGEN extends Module {
  val io = IO(new Bundle{
    val immgen_decode_data = new IMMGEN_DECODE_DATA()
  })

  val recsr    = Wire(Bool())
  val inst     = Wire(UInt(Base.dataWidth.W))
  val src1     = Wire(UInt(Base.dataWidth.W))
  val src2     = Wire(UInt(Base.dataWidth.W))
  val Imm      = Wire(UInt(Base.dataWidth.W))
  val zimm     = Wire(UInt(Base.dataWidth.W))
  val instType = Wire(UInt(Base.instTypeWidth.W))
  
  val rd  = inst(11, 7)
  val rs1 = inst(19, 15)
  val rs2 = inst(24, 20)

  val immU = Cat(inst(31, 20), Fill(12, 0.U))
  val immI = Cat(Fill(20, inst(31)), inst(31, 20))
  val immS = Cat(Fill(20, inst(31)), Cat(inst(31,25), inst(11, 7)))
  val immB = Cat(Fill(19, inst(31)), Cat(inst(31), inst(7), inst(30, 25), inst(11, 8), 0.U))
  val immJ = Cat(Fill(11, inst(31)), Cat(inst(31), inst(19, 12), inst(20), inst(30, 21), 0.U))
  
  // def conflict israw_data
  def conflict(rs: UInt, rd: UInt) = (rs === rd) && (rs =/= 0.U)
  def israw_data_load(rs: UInt, rd: UInt, instType: UInt) = conflict(rs, rd) && (instType === "b111".U) 
  def israw_data_lsu(rs: UInt, rd: UInt, instType: UInt, valid: UInt) = israw_data_load(rs, rd, instType) && !valid 

  // def no_bypass_instType B/S
  def no_bypass_instType(instType: UInt) = !(instType === "b001".U || instType === "b010".U) 

  // def bypass 
  def bypass_exu(rs: UInt, rd: UInt, instType: UInt) = conflict(rs, rd) && !(instType === "b111".U) && no_bypass_instType(instType)
  def bypass_lsu(rs: UInt, rd: UInt, instType: UInt, valid: UInt) = !israw_data_lsu(rs, rd, instType, valid) && conflict(rs, rd) && no_bypass_instType(instType)
  def bypass_wbu(rs: UInt, rd: UInt, instType: UInt) = conflict(rs, rd) && no_bypass_instType(instType)

  // def bypass src1/src2
  def bypass_instType_idu_src1(instType: UInt) = (instType === "b000".U || instType === "b001".U || instType === "b010".U || instType === "b110".U || instType === "b101".U)
  def bypass_instType_idu_src2(instType: UInt) = (instType === "b001".U || instType === "b010".U || instType === "b101".U)
  
  val isRAW_data      = Wire(Bool())
  val isRAW_data_src1 = Wire(Bool())
  val isRAW_data_src2 = Wire(Bool())

  // data raw
  isRAW_data_src1 := bypass_instType_idu_src1(instType) && (israw_data_load(rs1, io.immgen_decode_data.immgen_decode_raw.idu_exu_raw.exu_rd, io.immgen_decode_data.immgen_decode_raw.idu_exu_raw.exu_instType) || israw_data_lsu(rs1, io.immgen_decode_data.immgen_decode_raw.idu_lsu_raw.lsu_rd, io.immgen_decode_data.immgen_decode_raw.idu_lsu_raw.lsu_instType, io.immgen_decode_data.immgen_decode_raw.idu_lsu_raw.lsu_valid))
  isRAW_data_src2 := bypass_instType_idu_src2(instType) && (israw_data_load(rs2, io.immgen_decode_data.immgen_decode_raw.idu_exu_raw.exu_rd, io.immgen_decode_data.immgen_decode_raw.idu_exu_raw.exu_instType) || israw_data_lsu(rs2, io.immgen_decode_data.immgen_decode_raw.idu_lsu_raw.lsu_rd, io.immgen_decode_data.immgen_decode_raw.idu_lsu_raw.lsu_instType, io.immgen_decode_data.immgen_decode_raw.idu_lsu_raw.lsu_valid))
  isRAW_data := (isRAW_data_src1 || isRAW_data_src2) && io.immgen_decode_data.idu_valid

  src1 := Mux(bypass_exu(rs1, io.immgen_decode_data.immgen_decode_raw.idu_exu_raw.exu_rd, io.immgen_decode_data.immgen_decode_raw.idu_exu_raw.exu_instType), io.immgen_decode_data.immgen_decode_raw.idu_exu_raw.exu_regdata,
          Mux(bypass_lsu(rs1, io.immgen_decode_data.immgen_decode_raw.idu_lsu_raw.lsu_rd, io.immgen_decode_data.immgen_decode_raw.idu_lsu_raw.lsu_instType, io.immgen_decode_data.immgen_decode_raw.idu_lsu_raw.lsu_valid), io.immgen_decode_data.immgen_decode_raw.idu_lsu_raw.lsu_regdata,
          Mux(bypass_wbu(rs1, io.immgen_decode_data.immgen_decode_raw.idu_wbu_raw.wbu_rd, io.immgen_decode_data.immgen_decode_raw.idu_wbu_raw.wbu_instType), io.immgen_decode_data.immgen_decode_raw.idu_wbu_raw.wbu_regdata, src1)))

  src2 := Mux(bypass_exu(rs2, io.immgen_decode_data.immgen_decode_raw.idu_exu_raw.exu_rd, io.immgen_decode_data.immgen_decode_raw.idu_exu_raw.exu_instType), io.immgen_decode_data.immgen_decode_raw.idu_exu_raw.exu_regdata,
          Mux(bypass_lsu(rs2, io.immgen_decode_data.immgen_decode_raw.idu_lsu_raw.lsu_rd, io.immgen_decode_data.immgen_decode_raw.idu_lsu_raw.lsu_instType, io.immgen_decode_data.immgen_decode_raw.idu_lsu_raw.lsu_valid), io.immgen_decode_data.immgen_decode_raw.idu_lsu_raw.lsu_regdata,
          Mux(bypass_wbu(rs2, io.immgen_decode_data.immgen_decode_raw.idu_wbu_raw.wbu_rd, io.immgen_decode_data.immgen_decode_raw.idu_wbu_raw.wbu_instType), io.immgen_decode_data.immgen_decode_raw.idu_wbu_raw.wbu_regdata, src2)))

  instType := io.immgen_decode_data.instType

  Imm := MuxLookup(instType, 0.U(32.W))(
    Seq(
      "b000".U -> immI,
      "b001".U -> immS,
      "b010".U -> immB,
      "b011".U -> immU,
      "b100".U -> immJ,
      "b111".U -> immI
    )
  )

  zimm  := Cat(Fill(27, 0.U), rs1)
  recsr := io.immgen_decode_data.recsr


  // immgen <> reg 
  io.immgen_decode_data.idu_reg_data.rs1 := rs1
  io.immgen_decode_data.idu_reg_data.rs2 := rs2
  src1 := io.immgen_decode_data.idu_reg_data.src1
  src2 := io.immgen_decode_data.idu_reg_data.src2

  // decode <> immgen
  inst := io.immgen_decode_data.inst
  io.immgen_decode_data.src1 := src1
  io.immgen_decode_data.src2 := src2
  io.immgen_decode_data.isRAW_data := isRAW_data
  io.immgen_decode_data.zimm   := zimm
  io.immgen_decode_data.rers1  := Mux(recsr, ~src1, src1)
  io.immgen_decode_data.rezimm := Mux(recsr, ~zimm, zimm)
  io.immgen_decode_data.imm    := Mux(isRAW_data, 0.U, Mux(io.immgen_decode_data.immNum, Cat(Fill(27, Imm(4)), Imm(4, 0)), Imm))

}


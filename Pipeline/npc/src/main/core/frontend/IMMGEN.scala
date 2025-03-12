package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_IMMGEN extends Module {
  val io = IO(new Bundle{
    val immgen_decode_data = new IMMGEN_DECODE_DATA()
  })

  val recsr    = Wire(Bool())
  val inst     = Wire(UInt(Base.dataWidth.W))
  val imm      = Wire(UInt(Base.dataWidth.W))
  val zimm     = Wire(UInt(Base.dataWidth.W))
  val immType  = Wire(UInt(Base.immTypeWidth.W))
  val instType = Wire(UInt(Base.instTypeWidth.W))
  val src1     = Wire(UInt(Base.dataWidth.W))
  val src2     = Wire(UInt(Base.dataWidth.W))
  val reg_src1 = Wire(UInt(Base.dataWidth.W))
  val reg_src2 = Wire(UInt(Base.dataWidth.W))
  
  val rd  = inst(11, 7)
  val rs1 = inst(19, 15)
  val rs2 = inst(24, 20)

  val exu_rd = Wire(UInt(Base.rdWidth.W))
  val lsu_rd = Wire(UInt(Base.rdWidth.W))
  val wbu_rd = Wire(UInt(Base.rdWidth.W))

  val exu_instType = Wire(UInt(Base.instTypeWidth.W))
  val lsu_instType = Wire(UInt(Base.instTypeWidth.W))
  val wbu_instType = Wire(UInt(Base.instTypeWidth.W))

  val exu_regdata = Wire(UInt(Base.dataWidth.W))
  val lsu_regdata = Wire(UInt(Base.dataWidth.W))
  val wbu_regdata = Wire(UInt(Base.dataWidth.W))

  val lsu_valid = Wire(Bool())

  // imm
  val imm_u = Cat(inst(31, 12), Fill(12, 0.U))
  val imm_i = Cat(Fill(20, inst(31)), inst(31, 20))
  val imm_s = Cat(Fill(20, inst(31)), Cat(inst(31,25), inst(11, 7)))
  val imm_b = Cat(Fill(19, inst(31)), Cat(inst(31), inst(7), inst(30, 25), inst(11, 8), 0.U))
  val imm_j = Cat(Fill(11, inst(31)), Cat(inst(31), inst(19, 12), inst(20), inst(30, 21), 0.U))
  val imm_shamtw = Cat(Fill(27, 0.U), inst(24, 20))
  
  // conflict 
  val conflict_exu_rs1 = rs1 === exu_rd && rs1 =/= 0.U 
  val conflict_exu_rs2 = rs2 === exu_rd && rs2 =/= 0.U

  val conflict_lsu_rs1 = rs1 === lsu_rd && rs1 =/= 0.U   
  val conflict_lsu_rs2 = rs2 === lsu_rd && rs2 =/= 0.U

  val conflict_wbu_rs1 = rs1 === wbu_rd && rs1 =/= 0.U 
  val conflict_wbu_rs2 = rs2 === wbu_rd && rs2 =/= 0.U

  // bypass 
  val bypass_exu = exu_instType =/= "b111".U && exu_instType =/= "b001".U && exu_instType =/= "b010".U
  val bypass_lsu = ((lsu_instType === "b111".U && lsu_valid) || lsu_instType =/= "b111".U) && lsu_instType =/= "b001".U && lsu_instType =/= "b010".U
  val bypass_wbu = wbu_instType =/= "b001".U && wbu_instType =/= "b010".U

  val bypass_exu_rs1 = conflict_exu_rs1 && bypass_exu
  val bypass_lsu_rs1 = conflict_lsu_rs1 && bypass_lsu
  val bypass_wbu_rs1 = conflict_wbu_rs1 && bypass_wbu

  val bypass_exu_rs2 = conflict_exu_rs2 && bypass_exu
  val bypass_lsu_rs2 = conflict_lsu_rs2 && bypass_lsu
  val bypass_wbu_rs2 = conflict_wbu_rs2 && bypass_wbu

  // has src1/src2
  val bypass_instType_idu_src1 = (instType === "b000".U || instType === "b001".U || instType === "b010".U || instType === "b110".U || instType === "b101".U || instType === "b111".U)
  val bypass_instType_idu_src2 = (instType === "b001".U || instType === "b010".U || instType === "b101".U)
  
  val isRAW_data      = Wire(Bool())
  val isRAW_data_src1 = Wire(Bool())
  val isRAW_data_src2 = Wire(Bool())

  // data raw
  isRAW_data_src1 := bypass_instType_idu_src1 && (conflict_exu_rs1 || conflict_lsu_rs1 || conflict_wbu_rs1) && !(bypass_exu || bypass_lsu || bypass_wbu)
  isRAW_data_src2 := bypass_instType_idu_src2 && (conflict_exu_rs2 || conflict_lsu_rs2 || conflict_wbu_rs2) && !(bypass_exu || bypass_lsu || bypass_wbu)
  isRAW_data := (isRAW_data_src1 || isRAW_data_src2) && io.immgen_decode_data.idu_valid

  src1 := Mux(bypass_exu_rs1, exu_regdata,
          Mux(bypass_lsu_rs1, lsu_regdata,
          Mux(bypass_wbu_rs1, wbu_regdata, reg_src1)))

  src2 := Mux(bypass_exu_rs2, exu_regdata,
          Mux(bypass_lsu_rs2, lsu_regdata,
          Mux(bypass_wbu_rs2, wbu_regdata, reg_src2)))

  instType := io.immgen_decode_data.instType
  immType  := io.immgen_decode_data.immType

  // immgen_decode_raw
  exu_rd       := io.immgen_decode_data.immgen_decode_raw.idu_exu_raw.exu_rd
  lsu_rd       := io.immgen_decode_data.immgen_decode_raw.idu_lsu_raw.lsu_rd
  wbu_rd       := io.immgen_decode_data.immgen_decode_raw.idu_wbu_raw.wbu_rd

  exu_instType := io.immgen_decode_data.immgen_decode_raw.idu_exu_raw.exu_instType
  lsu_instType := io.immgen_decode_data.immgen_decode_raw.idu_lsu_raw.lsu_instType
  wbu_instType := io.immgen_decode_data.immgen_decode_raw.idu_wbu_raw.wbu_instType

  exu_regdata  := io.immgen_decode_data.immgen_decode_raw.idu_exu_raw.exu_regdata
  lsu_regdata  := io.immgen_decode_data.immgen_decode_raw.idu_lsu_raw.lsu_regdata
  wbu_regdata  := io.immgen_decode_data.immgen_decode_raw.idu_wbu_raw.wbu_regdata

  lsu_valid    := io.immgen_decode_data.immgen_decode_raw.idu_lsu_raw.lsu_valid

  // imm
  imm := MuxLookup(immType, 0.U)(
     Seq(
       "b000".U(3.W) -> imm_i,  
       "b001".U(3.W) -> imm_s,
       "b010".U(3.W) -> imm_b,
       "b011".U(3.W) -> imm_u,
       "b100".U(3.W) -> imm_j,
       "b101".U(3.W) -> imm_shamtw
     )
   )
  zimm  := Cat(Fill(27, 0.U), rs1)
  recsr := io.immgen_decode_data.recsr

  // immgen <> reg 
  io.immgen_decode_data.idu_reg_data.rs1 := rs1
  io.immgen_decode_data.idu_reg_data.rs2 := rs2
  reg_src1 := io.immgen_decode_data.idu_reg_data.src1
  reg_src2 := io.immgen_decode_data.idu_reg_data.src2

  // decode <> immgen
  inst := io.immgen_decode_data.inst
  io.immgen_decode_data.src1 := src1
  io.immgen_decode_data.src2 := src2
  io.immgen_decode_data.isRAW_data := isRAW_data
  io.immgen_decode_data.zimm   := zimm
  io.immgen_decode_data.rers1  := Mux(recsr, ~src1, src1)
  io.immgen_decode_data.rezimm := Mux(recsr, ~zimm, zimm)
  io.immgen_decode_data.imm    := Mux(isRAW_data, 0.U, imm)

}


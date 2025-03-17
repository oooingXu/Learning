package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_IMMGEN extends Module {
  val io = IO(new Bundle{
    val immgen_decode_data = new IMMGEN_DECODE_DATA()
  })

  val recsr    = Wire(Bool())
  val rs1en    = Wire(Bool())
  val rs2en    = Wire(Bool())
  val inst     = Wire(UInt(Base.dataWidth.W))
  val imm      = Wire(UInt(Base.dataWidth.W))
  val zimm     = Wire(UInt(Base.dataWidth.W))
  val immType  = Wire(UInt(Base.immTypeWidth.W))
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

  val exu_rden = Wire(Bool())
  val lsu_rden = Wire(Bool())
  val wbu_rden = Wire(Bool())

  val exu_regdata = Wire(UInt(Base.dataWidth.W))
  val lsu_regdata = Wire(UInt(Base.dataWidth.W))
  val wbu_regdata = Wire(UInt(Base.dataWidth.W))

  val exu_MemtoReg = Wire(Bool())
  val lsu_MemtoReg = Wire(Bool())

  val lsu_valid = Wire(Bool())

  // imm
  val imm_u = Cat(inst(31, 12), Fill(12, 0.U))
  val imm_i = Cat(Fill(20, inst(31)), inst(31, 20))
  val imm_s = Cat(Fill(20, inst(31)), Cat(inst(31,25), inst(11, 7)))
  val imm_b = Cat(Fill(19, inst(31)), Cat(inst(31), inst(7), inst(30, 25), inst(11, 8), 0.U))
  val imm_j = Cat(Fill(11, inst(31)), Cat(inst(31), inst(19, 12), inst(20), inst(30, 21), 0.U))
  val imm_shamtw = Cat(Fill(27, 0.U), inst(24, 20))
  
  // has src1/src2
  val conflict_idu_src1 = rs1en
  val conflict_idu_src2 = rs2en 

  // conflict 
  val conflict_exu_rs1 = rs1 === exu_rd && rs1 =/= 0.U && exu_rden && conflict_idu_src1
  val conflict_exu_rs2 = rs2 === exu_rd && rs2 =/= 0.U && exu_rden && conflict_idu_src2

  val conflict_lsu_rs1 = rs1 === lsu_rd && rs1 =/= 0.U && lsu_rden && conflict_idu_src1  
  val conflict_lsu_rs2 = rs2 === lsu_rd && rs2 =/= 0.U && lsu_rden && conflict_idu_src2

  val conflict_wbu_rs1 = rs1 === wbu_rd && rs1 =/= 0.U && wbu_rden && conflict_idu_src1
  val conflict_wbu_rs2 = rs2 === wbu_rd && rs2 =/= 0.U && wbu_rden && conflict_idu_src2

  // bypass 
  val bypass_exu = !exu_MemtoReg
  val bypass_lsu = ((lsu_MemtoReg && lsu_valid) || !lsu_MemtoReg) 

  val bypass_exu_rs1 = conflict_exu_rs1 && bypass_exu
  val bypass_lsu_rs1 = conflict_lsu_rs1 && bypass_lsu && !conflict_exu_rs1
  val bypass_wbu_rs1 = conflict_wbu_rs1 && !conflict_exu_rs1 && !conflict_lsu_rs1

  val bypass_exu_rs2 = conflict_exu_rs2 && bypass_exu
  val bypass_lsu_rs2 = conflict_lsu_rs2 && bypass_lsu && !conflict_exu_rs2
  val bypass_wbu_rs2 = conflict_wbu_rs2 && !conflict_exu_rs2 && !conflict_lsu_rs2

  val isRAW_data      = Wire(Bool())
  val isRAW_data_src1 = Wire(Bool())
  val isRAW_data_src2 = Wire(Bool())

  // data raw
  isRAW_data_src1 := (conflict_exu_rs1 && !bypass_exu_rs1) || (conflict_lsu_rs1 && !bypass_lsu_rs1)
  isRAW_data_src2 := (conflict_exu_rs2 && !bypass_exu_rs2) || (conflict_lsu_rs2 && !bypass_lsu_rs2)
  isRAW_data := (isRAW_data_src1 || isRAW_data_src2) && io.immgen_decode_data.idu_valid

  src1 := Mux(bypass_exu_rs1, exu_regdata,
          Mux(bypass_lsu_rs1, lsu_regdata,
          Mux(bypass_wbu_rs1, wbu_regdata, reg_src1)))

  src2 := Mux(bypass_exu_rs2, exu_regdata,
          Mux(bypass_lsu_rs2, lsu_regdata,
          Mux(bypass_wbu_rs2, wbu_regdata, reg_src2)))

  rs1en    := io.immgen_decode_data.rs1en
  rs2en    := io.immgen_decode_data.rs2en
  immType  := io.immgen_decode_data.immType

  // immgen_decode_raw
  exu_rd       := io.immgen_decode_data.immgen_decode_raw.idu_exu_raw.exu_rd
  lsu_rd       := io.immgen_decode_data.immgen_decode_raw.idu_lsu_raw.lsu_rd
  wbu_rd       := io.immgen_decode_data.immgen_decode_raw.idu_wbu_raw.wbu_rd

  exu_rden     := io.immgen_decode_data.immgen_decode_raw.idu_exu_raw.exu_rden
  lsu_rden     := io.immgen_decode_data.immgen_decode_raw.idu_lsu_raw.lsu_rden
  wbu_rden     := io.immgen_decode_data.immgen_decode_raw.idu_wbu_raw.wbu_rden

  exu_regdata  := io.immgen_decode_data.immgen_decode_raw.idu_exu_raw.exu_regdata
  lsu_regdata  := io.immgen_decode_data.immgen_decode_raw.idu_lsu_raw.lsu_regdata
  wbu_regdata  := io.immgen_decode_data.immgen_decode_raw.idu_wbu_raw.wbu_regdata

  lsu_valid    := io.immgen_decode_data.immgen_decode_raw.idu_lsu_raw.lsu_valid
  lsu_MemtoReg := io.immgen_decode_data.immgen_decode_raw.idu_lsu_raw.lsu_MemtoReg
  exu_MemtoReg := io.immgen_decode_data.immgen_decode_raw.idu_exu_raw.exu_MemtoReg

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
  io.immgen_decode_data.src1       := src1
  io.immgen_decode_data.src2       := src2
  io.immgen_decode_data.zimm       := zimm
  io.immgen_decode_data.isRAW_data := isRAW_data
  io.immgen_decode_data.rers1  := Mux(recsr, ~src1, src1)
  io.immgen_decode_data.rezimm := Mux(recsr, ~zimm, zimm)
  io.immgen_decode_data.imm    := Mux(isRAW_data, 0.U, imm)

}


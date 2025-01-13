package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_IFUdata extends Bundle {
  val inst = Output(UInt(32.W))
  val pc   = Output(UInt(32.W))
  val checkright = Output(Bool())
}

class ysyx_23060336_IFU extends Module{
  val io = IO(new Bundle{
    val ebreak   = Input(Bool())
    val checkfail= Input(Bool())
    val isRAW    = Input(Bool())
    val out      = Decoupled(new ysyx_23060336_IFUdata)
    val inst     = Output(UInt(32.W))
    val pc       = Output(UInt(32.W))
    val dnpc     = Input(UInt(32.W))
    val valid    = Output(Bool())
    val ready    = Output(Bool())
    val checkright = Output(Bool())
    val axi      = new ysyx_23060336_AXI4Master()
  })

  def npc = "h80000000".U
  val PC = RegInit(npc)
  val Checkright = RegInit(0.U(32.W))
  val CheckRight = Wire(Bool())

  /*
  val f_idle :: f_wait_ready :: Nil = Enum(2)
  val state = RegInit(f_idle)

  state := MuxLookup(state, f_idle)(List(
    f_idle       -> Mux(io.out.valid, f_wait_ready, f_idle),
    f_wait_ready -> Mux(io.out.ready, f_idle, f_wait_ready)
  ))
  */

 Checkright := Mux(io.checkfail, Checkright + 1.U, 0.U) 
 CheckRight := (Checkright > 0.U) && io.checkfail 

  PC := Mux(reset.asBool, npc,      
        Mux(io.checkfail && !CheckRight, io.dnpc,
        Mux(io.ebreak, io.dnpc,
        Mux(!io.out.valid || !io.out.ready, PC, PC + 4.U))))

  io.axi.araddr  := Mux(reset.asBool, npc, 
                    Mux(io.checkfail && !CheckRight, io.dnpc,
                    Mux(io.ebreak, io.dnpc,
                    Mux(!io.out.ready, PC, PC + 4.U))))

  io.axi.awvalid := false.B
  io.axi.awaddr  := npc
  io.axi.awid    := "h1".U
  io.axi.awlen   := "h0".U
  io.axi.awsize  := "h3".U
  io.axi.awburst := "h1".U
  io.axi.wvalid  := false.B
  io.axi.wdata   := npc
  io.axi.wstrb   := "b11".U
  io.axi.wlast   := true.B
  io.axi.bready  := false.B
  io.axi.arid    := "h1".U
  io.axi.arlen   := "h0".U
  io.axi.arsize  := "h2".U
  io.axi.arburst := "h1".U
  io.axi.rready  := io.out.ready
  io.axi.arvalid := Mux(reset.asBool, false.B, 
                    Mux(io.isRAW, false.B, true.B))

  io.out.valid           := (!io.checkfail || CheckRight) && io.axi.rvalid && ~io.ebreak
  io.out.bits.pc         := PC
  io.out.bits.inst       := Mux(io.axi.rvalid && io.axi.rready, io.axi.rdata, 0.U)
  io.out.bits.checkright := CheckRight

  io.checkright    := CheckRight
  io.valid         := io.out.valid
  io.ready         := io.axi.rready
  io.inst          := io.out.bits.inst
  io.pc            := PC
}


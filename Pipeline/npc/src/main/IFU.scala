package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_IFUdata extends Bundle {
  val inst = Output(UInt(32.W))
  val pc   = Output(UInt(32.W))
  val halt = Output(Bool())
}

class ysyx_23060336_IFU extends Module{
  val io = IO(new Bundle{
    val halt     = Input(Bool())
    val wen      = Input(Bool())
    val out      = Decoupled(new ysyx_23060336_IFUdata)
    val inst     = Output(UInt(32.W))
    val pc       = Output(UInt(32.W))
    val dnpc     = Input(UInt(32.W))
    val valid    = Output(Bool())
    val ready    = Output(Bool())
    val axi      = new ysyx_23060336_AXI4Master()
  })

  val f_idle :: f_wait_ready :: Nil = Enum(2)

  def npc = "h80000000".U
  val state = RegInit(f_idle)

  val delay1 = RegInit(0.U(1.W))
  val delay2 = RegInit(0.U(1.W))
  val delay3 = RegInit(0.U(1.W))
  val delay  = Wire(Bool())

  delay1 := io.axi.rvalid
  delay2 := delay1
  delay3 := delay2
  delay  := delay3

  val PC = RegInit(npc)

  state := MuxLookup(state, f_idle)(List(
    f_idle       -> Mux(io.out.valid, f_wait_ready, f_idle),
    f_wait_ready -> Mux(io.out.ready, f_idle, f_wait_ready)
  ))

  PC := Mux(reset.asBool, npc,      
        Mux(io.dnpc === 4.U, PC,
        Mux(!io.out.valid, PC, 
        Mux(io.halt, PC, io.dnpc))))

  io.axi.araddr := Mux(reset.asBool, npc, 
                   Mux(io.dnpc === 4.U, PC, io.dnpc))

  io.out.bits.pc := Mux(reset.asBool, npc, 
                    Mux(io.dnpc === 4.U, PC, io.dnpc))

  io.axi.awvalid := false.B
  io.axi.awaddr  := npc
  io.axi.awid    := "h1".U
  io.axi.awlen   := "h0".U
  io.axi.awsize  := "h3".U
  io.axi.awburst := "h1".U
  io.axi.wvalid  := false.B
  io.axi.wdata   := npc
  io.axi.wstrb   := false.B
  io.axi.wlast   := true.B
  io.axi.bready  := false.B
  io.axi.arvalid := true.B
  io.axi.arid    := "h1".U
  io.axi.arlen   := "h0".U
  io.axi.arsize  := "h2".U
  io.axi.arburst := "h1".U
  io.axi.rready  := true.B && ~io.halt

  io.out.valid     := ((!io.wen && io.axi.rvalid) || (io.wen && io.axi.wready && delay) || (io.wen && io.axi.rvalid && delay)) && ~io.halt
  io.out.bits.inst := Mux(io.out.valid, io.axi.rdata, 0.U)
  io.out.bits.halt := io.halt
  io.valid         := io.out.valid
  io.ready         := io.axi.rready
  io.inst          := Mux(io.out.valid, io.axi.rdata, 0.U)
  io.pc            := PC
}


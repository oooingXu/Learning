package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_LSU_WBU extends Module{
  val io = IO(new Bundle{
    val result    = Input(UInt(32.W))
    val dnpc_in   = Input(UInt(32.W))
    val src2      = Input(UInt(32.W))
    val Csr       = Input(UInt(32.W))
    val csr_in    = Input(UInt(12.W))
    val rd_in     = Input(UInt(5.W))
    val wstrb     = Input(UInt(4.W))
    val awsize    = Input(UInt(3.W))
    val RegNum    = Input(UInt(3.W))
    val arsize    = Input(UInt(3.W))
    val CsrWr_in  = Input(Bool())
    val RegWr_in  = Input(Bool())
    val ecall_in  = Input(Bool())
    val MemWr     = Input(Bool())
    val MemtoReg  = Input(Bool())
    val ebreak    = Input(Bool())
    val in_valid  = Input(Bool())
    val dnpc      = Output(UInt(32.W))
    val regdata   = Output(UInt(32.W))
    val csrdata   = Output(UInt(32.W))
    val csr       = Output(UInt(12.W))
    val rd        = Output(UInt(5.W))
    val CsrWr     = Output(Bool())
    val RegWr     = Output(Bool())
    val ecall     = Output(Bool())
    val out_valid = Output(Bool())
    val axi       = new ysyx_23060336_AXI4Master()
  })

  val ebreak  = Module(new ysyx_23060336_EBREAK())
  val prepare = Wire(Bool())
  val DataOut = Wire(UInt(32.W))

  val wdata_b = Wire(UInt(32.W))
  val wdata_h = Wire(UInt(32.W))
  val wstrb_b = Wire(UInt(4.W))
  val wstrb_h = Wire(UInt(4.W))
  
  val rdata_b = Wire(UInt(32.W))
  val rdata_h = Wire(UInt(32.W))

  val rdata   = RegInit(0.U(32.W))

  val s_idle :: s_wait_rslave :: s_wait_wslave :: s_wait_ready :: csr_state :: reg_state :: Nil = Enum(6)
  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle)(List(
    s_idle        -> Mux(io.in_valid, Mux(!io.MemtoReg , Mux(!io.MemWr, Mux(io.CsrWr_in, csr_state, reg_state), s_wait_wslave), s_wait_rslave), s_idle),
    s_wait_rslave -> Mux(io.axi.arready, Mux(io.axi.rvalid, Mux(io.CsrWr_in, csr_state, reg_state), s_wait_ready), s_wait_rslave),
    s_wait_wslave -> Mux(io.axi.wready, s_wait_ready, s_wait_wslave),
    s_wait_ready  -> Mux(prepare, Mux(io.CsrWr_in, csr_state, reg_state), s_wait_ready),
    csr_state     -> Mux(io.RegWr_in, reg_state, s_idle),
    reg_state     -> s_idle
  ))

  io.out_valid := state === reg_state 

  rdata_h := Mux(io.result(1,0) === 2.U, Cat(Fill(16, 0.U), io.axi.rdata(31,16)), io.axi.rdata)
  rdata_b := Mux(io.result(1,0) === 3.U, Cat(Fill(24, 0.U), io.axi.rdata(31,24)),
             Mux(io.result(1,0) === 2.U, Cat(Fill(24, 0.U), io.axi.rdata(23,16)),
             Mux(io.result(1,0) === 1.U, Cat(Fill(24, 0.U), io.axi.rdata(15, 8)), io.axi.rdata)))

  wdata_h := Mux(io.result(1,0) === 2.U, io.src2 << 16, io.src2)
  wdata_b := Mux(io.result(1,0) === "b11".U, Cat(io.src2(7,0), Fill(24, 0.U)),
             Mux(io.result(1,0) === "b10".U, Cat(Fill(8, 0.U), io.src2(7,0), Fill(16, 0.U)),
             Mux(io.result(1,0) === "b01".U, Cat(Fill(16, 0.U), io.src2(7,0), Fill(8, 0.U)), Cat(Fill(24, 0.U), io.src2(7,0)))))


  wstrb_h := Mux(io.result(1,0) === 2.U, io.wstrb << 2, io.wstrb)
  wstrb_b := Mux(io.result(1,0) === 3.U, io.wstrb << 3, Mux(io.result(1,0) === 2.U, io.wstrb << 2, Mux(io.result(1,0) === 1.U, io.wstrb << 1, io.wstrb)))

  prepare := (io.MemtoReg && io.axi.rvalid) || (io.MemWr && io.axi.bvalid) 
  DataOut := Mux(state === reg_state && io.MemtoReg, rdata, io.result)

  io.rd      := io.rd_in
  io.csr     := io.csr_in
  io.CsrWr   := io.CsrWr_in && (state === csr_state)
  io.RegWr   := io.RegWr_in && (state === reg_state) 
  io.ecall   := io.ecall_in   
  io.dnpc    := io.dnpc_in
  io.csrdata := io.result

  io.regdata := Mux(io.CsrWr_in, io.Csr,
                Mux(io.RegNum === "b010".U, DataOut,
                Mux(io.RegNum === "b101".U, DataOut,
                Mux(io.RegNum === "b011".U, Cat(Fill(24, 0.U), DataOut(7, 0)),
                Mux(io.RegNum === "b100".U, Cat(Fill(16, 0.U), DataOut(15, 0)),
                Mux(io.RegNum === "b000".U, Cat(Fill(24, DataOut(7)),  DataOut(7, 0)),
                Mux(io.RegNum === "b001".U, Cat(Fill(16, DataOut(15)), DataOut(15, 0)), DataOut)))))))

  ebreak.io.clock := clock
  ebreak.io.ebreak := io.ebreak

  // AXI4
  io.axi.awvalid := Mux(reset.asBool, false.B, io.MemWr && (state === s_wait_wslave))
  io.axi.awaddr  := io.result
  io.axi.awid    := "h2".U
  io.axi.awlen   := "h0".U
  io.axi.awsize  := io.awsize
  io.axi.awburst := "h1".U
  io.axi.wvalid  := Mux(reset.asBool, false.B, io.MemWr && (state === s_wait_wslave))
  io.axi.wdata   := Mux(io.awsize === 0.U, wdata_b, Mux(io.awsize === 1.U, wdata_h, io.src2))
  io.axi.wlast   := io.MemWr && (state === s_wait_wslave)
  io.axi.bready  := true.B
  io.axi.arvalid := Mux(reset.asBool, false.B, (state === s_wait_rslave) && io.MemtoReg)
  io.axi.araddr  := io.result 
  io.axi.arid    := "h2".U
  io.axi.arlen   := "h0".U
  io.axi.arsize  := io.arsize
  io.axi.arburst := "h1".U
  io.axi.rready  := state === s_idle || state === s_wait_rslave || state === s_wait_ready
  io.axi.wstrb   := Mux(io.awsize === 0.U, wstrb_b, Mux(io.awsize === 1.U, wstrb_h, io.wstrb))

  when(io.axi.rvalid){
    rdata := Mux(io.arsize === 0.U, rdata_b, Mux(io.arsize === 1.U, rdata_h, io.axi.rdata))
  }

}

class ysyx_23060336_EBREAK extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock = Input(Clock())
    val ebreak = Input(Bool())
  })

  setInline(
    "ebreak.sv",
  """import "DPI-C" function void set_npc_state(input int ebreak);
    | module ysyx_23060336_EBREAK(
    |   input clock,
    |   input ebreak
    | );
    |
    | always@(posedge clock) begin
    |   set_npc_state({31'b0, ebreak});
    | end
    |
    | endmodule
  """.stripMargin)
}



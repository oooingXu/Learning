package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_LSU_WBU extends Module{
  val io = IO(new Bundle{
    val axi               = new ysyx_23060336_AXI4Master()
    val ifu_clk_count     = Input(UInt(64.W))
    val ifu_psram_count   = Input(UInt(32.W))
    val ifu_flash_count   = Input(UInt(32.W))
    val ifu_psram_clk     = Input(UInt(64.W))
    val ifu_flash_clk     = Input(UInt(64.W))
    val result            = Input(UInt(32.W))
    val dnpc_in           = Input(UInt(32.W))
    val src2              = Input(UInt(32.W))
    val Csr               = Input(UInt(32.W))
    val csr_in            = Input(UInt(12.W))
    val rd_in             = Input(UInt(5.W))
    val instType          = Input(UInt(4.W))
    val wstrb             = Input(UInt(4.W))
    val awsize            = Input(UInt(3.W))
    val RegNum            = Input(UInt(3.W))
    val arsize            = Input(UInt(3.W))
    val CsrWr_in          = Input(Bool())
    val RegWr_in          = Input(Bool())
    val ecall_in          = Input(Bool())
    val MemWr             = Input(Bool())
    val MemtoReg          = Input(Bool())
    val ebreak            = Input(Bool())
    val in_valid          = Input(Bool())
    val dnpc              = Output(UInt(32.W))
    val regdata           = Output(UInt(32.W))
    val csrdata           = Output(UInt(32.W))
    val csr               = Output(UInt(12.W))
    val rd                = Output(UInt(5.W))
    val CsrWr             = Output(Bool())
    val RegWr             = Output(Bool())
    val ecall             = Output(Bool())
    val out_valid         = Output(Bool())
  })

  val ebreak    = Module(new ysyx_23060336_EBREAK())
  val sram_read = Module(new SRAM_READ())

  val prepare = Wire(Bool())
  val DataOut = Wire(UInt(32.W))

  val wdata_b = Wire(UInt(32.W))
  val wdata_h = Wire(UInt(32.W))
  val wstrb_b = Wire(UInt(4.W))
  val wstrb_h = Wire(UInt(4.W))
  
  val rdata_b = Wire(UInt(32.W))
  val rdata_h = Wire(UInt(32.W))

  val rdata     = RegInit(0.U(32.W))
  val lsu_count = RegInit(0.U(32.W))
  val lsu_clk_count = RegInit(0.U(64.W))

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

  rdata_h := Mux(io.result(1,0) === 2.U, Cat(Fill(16, 0.U), io.axi.rdata(31,16)),
             Mux(io.result(1,0) === 0.U, io.axi.rdata, 0.U))
  rdata_b := Mux(io.result(1,0) === 3.U, Cat(Fill(24, 0.U), io.axi.rdata(31,24)),
             Mux(io.result(1,0) === 2.U, Cat(Fill(24, 0.U), io.axi.rdata(23,16)),
             Mux(io.result(1,0) === 1.U, Cat(Fill(24, 0.U), io.axi.rdata(15, 8)), io.axi.rdata)))

  wdata_h := Mux(io.result(1,0) === 2.U, io.src2 << 16, 
             Mux(io.result(1,0) === 0.U, io.src2, 0.U))
  wdata_b := Mux(io.result(1,0) === "b11".U, Cat(io.src2(7,0), Fill(24, 0.U)),
             Mux(io.result(1,0) === "b10".U, Cat(Fill(8, 0.U), io.src2(7,0), Fill(16, 0.U)),
             Mux(io.result(1,0) === "b01".U, Cat(Fill(16, 0.U), io.src2(7,0), Fill(8, 0.U)), Cat(Fill(24, 0.U), io.src2(7,0)))))


  wstrb_h := Mux(io.result(1,0) === 2.U, io.wstrb << 2, 
             Mux(io.result(1,0) === 0.U, io.wstrb, 0.U))
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

  // sram_read
  sram_read.io.clock   := clock
  sram_read.io.wstrb   := io.wstrb
  sram_read.io.araddr  := io.axi.araddr
  sram_read.io.awaddr  := io.axi.awaddr
  sram_read.io.wdata   := io.axi.wdata
  sram_read.io.arsize  := io.axi.arsize
  sram_read.io.arvalid := io.axi.arvalid
  sram_read.io.awvalid := io.axi.awvalid
  sram_read.io.arready := io.axi.arready
  sram_read.io.awready := io.axi.awready


  // ebreak
  ebreak.io.clock             := clock
  ebreak.io.ebreak            := io.ebreak
  ebreak.io.instType          := io.instType
  ebreak.io.in_valid          := io.in_valid
  ebreak.io.out_valid         := io.out_valid
  ebreak.io.ifu_clk_count     := io.ifu_clk_count
  ebreak.io.ifu_psram_count   := io.ifu_psram_count
  ebreak.io.ifu_flash_count   := io.ifu_flash_count
  ebreak.io.ifu_psram_clk     := io.ifu_psram_clk
  ebreak.io.ifu_flash_clk     := io.ifu_flash_clk
  ebreak.io.state             := state
  ebreak.io.axi_rvalid        := io.axi.rvalid
}

class ysyx_23060336_EBREAK extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock             = Input(Clock())
    val ebreak            = Input(Bool())
    val in_valid          = Input(Bool())
    val out_valid         = Input(Bool())
    val axi_rvalid        = Input(Bool())
    val state             = Input(UInt(3.W))
    val instType          = Input(UInt(4.W))
    val ifu_psram_count   = Input(UInt(32.W))
    val ifu_flash_count   = Input(UInt(32.W))
    val ifu_clk_count     = Input(UInt(64.W))
    val ifu_psram_clk     = Input(UInt(64.W))
    val ifu_flash_clk     = Input(UInt(64.W))
  })

  setInline(
    "ebreak.sv",
  """`ifdef VERILATOR
    |import "DPI-C" function void set_npc_state(input int ebreak, input int ifu_count, input int lsu_count, input int i_type_count, input int s_type_count, input int u_type_count, input int b_type_count, input int r_type_count, input int j_type_count, input int c_type_count, input int w_type_count, input int ifu_clk_count_h, input int ifu_clk_count_l, input int lsu_clk_count_h, input int lsu_clk_count_l, input int ifu_psram_clk_h, input int ifu_psram_clk_l, input int ifu_flash_clk_h, input int ifu_flash_clk_l, input int i_clk, input int s_clk, input int u_clk, input int b_clk, input int r_clk, input int j_clk, input int c_clk, input int w_clk, input int backend_clk_h, input int backend_clk_l, input int ifu_flash_count, input int ifu_psram_count);
    |`endif
    | module ysyx_23060336_EBREAK(
    |   input        clock,
    |   input        ebreak,
    |   input        in_valid,
    |   input        out_valid,
    |   input        axi_rvalid,
    |   input [2:0]  state,
    |   input [3:0]  instType,
    |   input [31:0] ifu_psram_count,
    |   input [31:0] ifu_flash_count,
    |   input [63:0] ifu_psram_clk,
    |   input [63:0] ifu_flash_clk,
    |   input [63:0] ifu_clk_count
    | );
    |
    |`ifdef VERILATOR
    | parameter idle = 0, work = 1;
    |
    | reg [31:0] ifu_count, lsu_count; 
    | reg [31:0] i_type_count, s_type_count, u_type_count, b_type_count, r_type_count, j_type_count, c_type_count, w_type_count;
    | reg [31:0] i_clk, s_clk, u_clk, b_clk, r_clk, j_clk, c_clk, w_clk;
    | reg [63:0] lsu_clk_count, backend_clk;
    | reg        clk_state = idle;
    |
    | always@(posedge clock) begin
    |   case(clk_state)
    |     idle: clk_state <= in_valid  ? work : idle;
    |     work: clk_state <= out_valid ? idle : work;
    |   endcase
    | end
    |
    | always@(posedge clock) begin 
    |   if(clk_state == work) begin
    |     backend_clk++;
    |
    |     if(instType == 0) i_clk++;
    |     else if(instType == 1) s_clk++;
    |     else if(instType == 2) b_clk++;
    |     else if(instType == 3) u_clk++;
    |     else if(instType == 4) j_clk++;
    |     else if(instType == 5) r_clk++;
    |     else if(instType == 6) c_clk++;
    |     else w_clk++;
    |
    |   end
    | end
    |
    | always@(posedge axi_rvalid) begin
    |   lsu_count++;
    | end
    |
    | always@(posedge clock) begin
    |   if(state == 1 || state == 2) begin
    |     lsu_clk_count++;
    |   end
    | end
    |
    | always@(posedge in_valid) begin
    |   ifu_count++;
    |   if(instType == 0) i_type_count++;
    |   else if(instType == 1) s_type_count++;
    |   else if(instType == 2) b_type_count++;
    |   else if(instType == 3) u_type_count++;
    |   else if(instType == 4) j_type_count++;
    |   else if(instType == 5) r_type_count++;
    |   else if(instType == 6) c_type_count++;
    |   else w_type_count++;
    | end
    |
    | always@(posedge clock) begin
    |   set_npc_state({31'b0, ebreak}, ifu_count, lsu_count, i_type_count, s_type_count, u_type_count, b_type_count, r_type_count, j_type_count, c_type_count, w_type_count, ifu_clk_count[63:32], ifu_clk_count[31:0], lsu_clk_count[63:32], lsu_clk_count[31:0], ifu_psram_clk[63:32], ifu_psram_clk[31:0], ifu_flash_clk[63:32], ifu_flash_clk[31:0], i_clk, s_clk, b_clk, u_clk, j_clk, r_clk, c_clk, w_clk, backend_clk[63:32], backend_clk[31:0], ifu_flash_count, ifu_psram_count);
    | end
    |`endif
    |
    | endmodule
  """.stripMargin)
}

class SRAM_READ extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock   = Input(Clock())
    val araddr  = Input(UInt(32.W))
    val awaddr  = Input(UInt(32.W))
    val wdata   = Input(UInt(32.W))
    val arsize  = Input(UInt(4.W))
    val wstrb   = Input(UInt(4.W))
    val arvalid = Input(Bool())
    val awvalid = Input(Bool())
    val arready = Input(Bool())
    val awready = Input(Bool())
  })

  setInline(
    "sram_read.sv",
  """`ifdef VERILATOR
    |import "DPI-C" function void sram_read(input int araddr, input int arvalid, input int arready, input int arsize, input int awaddr, input int wdata, input int awvalid, input int awready, input int wstrb);
    | `endif
    | module SRAM_READ(
    |   input clock,
    |   input [31:0] araddr,
    |   input [31:0] awaddr,
    |   input [31:0] wdata,
    |   input [3:0]  arsize,
    |   input [3:0]  wstrb,
    |   input        arready,
    |   input        awready,
    |   input        arvalid,
    |   input        awvalid
    | );
    |
    |`ifdef VERILATOR
    | always@(posedge clock) begin
    |   sram_read(araddr, {31'b0, arvalid}, {31'b0, arready}, {28'b0, arsize}, awaddr, wdata, {31'b0, awvalid}, {31'b0, awready}, {28'b0, wstrb});
    | end
    |`endif
    |
    | endmodule
  """.stripMargin)

}


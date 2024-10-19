package npc

import chisel3._
import chisel3.util._

class XBAR extends Module{
  val io = IO(new Bundle{
    val ifu = new ysyx_23060336_AXI4Slave()
    val lsu = new ysyx_23060336_AXI4Slave()
    val sdram = new ysyx_23060336_AXI4Master()
    val clint = new ysyx_23060336_AXI4Master()
  })

  def DEVICE_BASE      = "ha0000000".U
  def RTC_ADDR_LEFT    = DEVICE_BASE + "h00000048".U
  def SDRAM_ADDR_LEFT  = "h80000000".U
  def SDRAM_ADDR_RIGHT = "h80ffffff".U

  val awready = Wire(Bool())
  val awvalid = Wire(Bool()) 
  val awaddr  = Wire(UInt(32.W)) 
  val awid    = Wire(UInt(4.W)) 
  val awlen   = Wire(UInt(8.W)) 
  val awsize  = Wire(UInt(3.W)) 
  val awburst = Wire(UInt(2.W)) 
  val wready  = Wire(Bool())
  val wvalid  = Wire(Bool()) 
  val wdata   = Wire(UInt(32.W)) 
  val wstrb   = Wire(UInt(4.W)) 
  val wlast   = Wire(Bool()) 
  val bready  = Wire(Bool()) 
  val bvalid  = Wire(Bool())
  val bresp   = Wire(UInt(2.W))
  val bid     = Wire(UInt(4.W))
  val arready = Wire(Bool())
  val arvalid = Wire(Bool()) 
  val araddr  = Wire(UInt(32.W)) 
  val arid    = Wire(UInt(4.W)) 
  val arlen   = Wire(UInt(8.W)) 
  val arsize  = Wire(UInt(3.W)) 
  val arburst = Wire(UInt(2.W)) 
  val rready  = Wire(Bool()) 
  val rvalid  = Wire(Bool())
  val rresp   = Wire(UInt(2.W))
  val rdata   = Wire(UInt(32.W))
  val rlast   = Wire(Bool())
  val rid     = Wire(UInt(4.W))

  val arid_halt = RegInit(io.ifu.arid)
  val awid_halt = RegInit(io.lsu.awid)

  // ********** Arbiter **********
  
  // AR
  when(io.ifu.arvalid && io.lsu.arvalid) {
    if(arid_halt === io.ifu.arid) {
      arid      := io.ifu.arid
      arlen     := io.ifu.arlen
      araddr    := io.ifu.araddr
      arsize    := io.ifu.arsize
      arready   := io.ifu.arready
      arvalid   := io.ifu.arvalid
      arburst   := io.ifu.arburst
      
      io.ifu.rvalid := rvalid && true.B
      io.lsu.rvalid := rvalid && false.B 
  } else {
      arid      := io.lsu.arid
      arlen     := io.lsu.arlen
      araddr    := io.lsu.araddr
      arsize    := io.lsu.arsize
      arready   := io.lsu.arready
      arvalid   := io.lsu.arvalid
      arburst   := io.lsu.arburst

      io.ifu.rvalid := rvalid && false.B
      io.lsu.rvalid := rvalid && true.B 
    } 
  }.elsewhen(io.ifu.arvalid && ~io.lsu.arvalid) {
      arid          := io.ifu.arid
      arlen         := io.ifu.arlen
      araddr        := io.ifu.araddr
      arsize        := io.ifu.arsize
      arready       := io.ifu.arready
      arvalid       := io.ifu.arvalid
      arburst       := io.ifu.arburst
      arid_halt     := io.ifu.arid
      io.ifu.rvalid := rvalid && true.B
      io.lsu.rvalid := rvalid && false.B
  } .otherwhen(~io.ifu.arvalid && io.lsu.arvalid) {
      arid          := io.lsu.arid
      arlen         := io.lsu.arlen
      araddr        := io.lsu.araddr
      arsize        := io.lsu.arsize
      arready       := io.lsu.arready
      arvalid       := io.lsu.arvalid
      arburst       := io.lsu.arburst
      arid_halt     := io.lsu.arid
      io.ifu.rvalid := rvalid && false.B
      io.lsu.rvalid := rvalid && true.B
  }

  // R
  when(arid_halt === io.ifu.arid && io.ifu.rready && rvalid){
      rready        := io.ifu.rready
      arid_halt     := io.lsu.arid
      io.ifu.rid    := rid
      io.ifu.rresp  := rresp
      io.ifu.rdata  := rdata
      io.ifu.rlast  := rlast
  } .elsewhen(arid_halt === io.lsu.arid && io.lsu.rready && rvalid){
      rready        := io.lsu.rready
      arid_halt     := io.ifu.arid
      io.lsu.rid    := rid
      io.lsu.rresp  := rresp
      io.lsu.rdata  := rdata
      io.lsu.rlast  := rlast
  }

  // AW
  when(io.lsu.awvalid) {
    awid           := io.lsu.awid
    awlen          := io.lsu.awlen
    awaddr         := io.lsu.awaddr
    awsize         := io.lsu.awsize
    awvalid        := io.lsu.awvalid
    awburst        := io.lsu.awburst
    awid_halt      := io.lsu.awid
    io.lsu.awready := awready
  } .elsewhen(io.ifu.awvalid) {
    awid           := io.ifu.awid
    awlen          := io.ifu.awlen
    awaddr         := io.ifu.awaddr
    awsize         := io.ifu.awsize
    awvalid        := io.ifu.awvalid
    awburst        := io.ifu.awburst
    awid_halt      := io.ifu.awid
    io.ifu.awready := awready
  }
    
  // W
  when(io.lsu.wvalid) {
    wvalid        := io.lsu.wvalid
    wdata         := io.lsu.wdata
    wstrb         := io.lsu.wstrb
    wlast         := io.lsu.wlasu
    io.lsu.wready := wready
  } .elsewhen(io.ifu.wvalid) {
    wvalid        := io.ifu.wvalid
    wdata         := io.ifu.wdata
    wstrb         := io.ifu.wstrb
    wlast         := io.ifu.wlasu
    io.ifu.wready := wready
  }

  // B
  when(awid_halt && io.lsu.bready){
    bready        := io.lsu.bready
    io.lsu.bid    := bid
    io.lsu.bresp  := bresp
    io.lsu.bvalid := bvalid
  } .elsewhen(awid_halt && io.ifu.bready) {
    bready        := io.ifu.bready
    io.ifu.bid    := bid
    io.ifu.bresp  := bresp
    io.ifu.bvalid := bvalid
  }


  // ********** Xbar **********

  // AR R
  if(araddr >= SDRAM_ADDR_LEFT && araddr <= SDRAM_ADDR_RIGHT) {
    arready          := io.sdram.arready
    rvalid           := io.sdram.rvalid
    rresp            := io.sdram.rresp
    rdata            := io.sdram.rdata
    rlast            := io.sdram.rlast
    rid              := io.sdram.rid
    io.sdram.rready  := rready && true.B
    io.clint.rready  := rready && false.B
    io.sdram.arvalid := arvalid && true.B
    io.clint.arvalid := arvalid && false.B
  } else if(addr >= CLINT_ADDR_LEFT && addr <= CLINT_ADDR_RIGHT) {
    arready          := io.clint.arready
    rvalid           := io.clint.rvalid
    rresp            := io.clint.rresp
    rdata            := io.clint.rdata
    rlast            := io.clint.rlast
    rid              := io.clint.rid
    io.sdram.rready  := rready && false.B
    io.clint.rready  := rready && true.B
    io.sdram.arvalid := arvalid && false.B
    io.clint.arvalid := arvalid && true.B
  } else {
    arready          := false.B
    rvalid           := false.B
    rresp            := io.sdram.rresp
    rdata            := io.sdram.rdata
    rlast            := io.sdram.rlast
    rid              := io.sdram.rid
    io.sdram.rready  := rready && false.B
    io.clint.rready  := rready && false.B
    io.sdram.arvalid := arvalid && false.B
    io.clint.arvalid := arvalid && false.B
  }

  sdram.io.arid    := arid
  sdram.io.arlen   := arlen
  sdram.io.arsize  := arsize
  sdram.io.araddr  := araddr
  sdram.io.arburst := arburst

  clint.io.arid    := arid
  clint.io.arlen   := arlen
  clint.io.arsize  := arsize
  clint.io.araddr  := araddr
  clint.io.arburst := arburst

  // AW W B
  if(awaddr >= SDRAM_ADDR_LEFT && awaddr <= SDRAM_ADDR_RIGHT) {
    awready          := io.sdram.awready
    wready           := io.sdram.wready
    bvalid           := io.sdram.bvalid
    bresp            := io.sdram.bresp
    bid              := io.sdram.bid
    io.sdram.bready  := bready && true.B
    io.clint.bready  := bready && false.B
    io.sdram.wvalid  := wvalid && true.B
    io.clint.wvalid  := wvalid && false.B
    io.sdram.awvalid := awvalid && true.B
    io.clint.awvalid := awvalid && false.B
  } else if(awaddr >= CLINT_ADDR_LEFT && awaddr <= CLINT_ADDR_RIGHT) {
    awready          := io.clint.awready
    wready           := io.clint.wready
    bvalid           := io.clint.bvalid
    bresp            := io.clint.bresp
    bid              := io.clint.bid
    io.sdram.bready  := bready && false.B
    io.clint.bready  := bready && true.B
    io.sdram.wvalid  := wvalid && false.B
    io.clint.wvalid  := wvalid && true.B
    io.sdram.awvalid := awvalid && false.B
    io.clint.awvalid := awvalid && true.B
  } else {
    awready          := false.B
    wready           := io.sdram.wready
    bvalid           := io.sdram.bvalid
    bresp            := io.sdram.bresp
    bid              := io.sdram.bid
    io.sdram.bready  := false.B
    io.clint.bready  := false.B
    io.sdram.wvalid  := false.B
    io.clint.wvalid  := false.B
    io.sdram.awvalid := awvalid && false.B
    io.clint.awvalid := awvalid && false.B
  }

    io.sdram.awaddr  := awaddr
    io.sdram.awid    := awid
    io.sdram.awlen   := awlen
    io.sdram.awsize  := awsize
    io.sdram.awburst := awburst
    io.sdram.wdata   := wdata
    io.sdram.wstrb   := wstrb
    io.sdram.wlast   := wlast
    
    io.clint.awaddr  := awaddr
    io.clint.awid    := awid
    io.clint.awlen   := awlen
    io.clint.awsize  := awsize
    io.clint.awburst := awburst
    io.clint.wdata   := wdata
    io.clint.wstrb   := wstrb
    io.clint.wlast   := wlast

}


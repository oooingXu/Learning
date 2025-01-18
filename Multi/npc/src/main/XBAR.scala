package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_XBAR extends Module{
  val io = IO(new Bundle{
    val ifu   = new ysyx_23060336_AXI4Slave()
    val lsu   = new ysyx_23060336_AXI4Slave()
    val sram  = new ysyx_23060336_AXI4Master()
    val clint = new ysyx_23060336_AXI4Master()
  })

  def CLINT_ADDR_LEFT  = DEVICE_BASE + "h00000048".U
  def CLINT_ADDR_RIGHT = CLINT_ADDR_LEFT + "h00000040".U
  def DEVICE_BASE      = "ha0000000".U
  def SRAM_ADDR_LEFT   = "h80000000".U
  def SRAM_ADDR_RIGHT  = "h80ffffff".U

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

  val arid_halt = RegInit(1.U(4.W))
  val awid_halt = RegInit(1.U(4.W))

  // ********** Arbiter **********
  
  // AR R
   /*
  when(io.lsu.arvalid) {
      arid          := io.lsu.arid
      arlen         := io.lsu.arlen
      araddr        := io.lsu.araddr
      arsize        := io.lsu.arsize
      arvalid       := io.lsu.arvalid
      arburst       := io.lsu.arburst
      io.ifu.rvalid := rvalid && false.B
      io.lsu.rvalid := rvalid && true.B
  }.elsewhen(io.ifu.arvalid) {
      arid          := io.ifu.arid
      arlen         := io.ifu.arlen
      araddr        := io.ifu.araddr
      arsize        := io.ifu.arsize
      arvalid       := io.ifu.arvalid
      arburst       := io.ifu.arburst
      io.ifu.rvalid := rvalid && true.B
      io.lsu.rvalid := rvalid && false.B
  } .otherwise {
      arid          := io.ifu.arid
      arlen         := io.ifu.arlen
      araddr        := io.ifu.araddr
      arsize        := io.ifu.arsize
      arvalid       := false.B
      arburst       := io.ifu.arburst
      arid_halt     := io.ifu.arid
      io.ifu.rvalid := rvalid && false.B
      io.lsu.rvalid := rvalid && false.B
  }
  */

 ///*
  when(io.ifu.arvalid && io.lsu.arvalid) {
    when(arid_halt === io.lsu.arid) {
      arid          := io.lsu.arid
      arlen         := io.lsu.arlen
      araddr        := io.lsu.araddr
      arsize        := io.lsu.arsize
      arvalid       := io.lsu.arvalid
      arburst       := io.lsu.arburst
      rready        := io.lsu.rready
      io.ifu.rvalid := false.B
      io.lsu.rvalid := rvalid && true.B
  } .otherwise {
      arid          := io.ifu.arid
      arlen         := io.ifu.arlen
      araddr        := io.ifu.araddr
      arsize        := io.ifu.arsize
      arvalid       := io.ifu.arvalid
      arburst       := io.ifu.arburst
      rready        := io.ifu.rready
      io.ifu.rvalid := rvalid && true.B
      io.lsu.rvalid := false.B
    } 
  }.elsewhen(io.ifu.arvalid && ~io.lsu.arvalid) {
      arid          := io.ifu.arid
      arlen         := io.ifu.arlen
      araddr        := io.ifu.araddr
      arsize        := io.ifu.arsize
      arvalid       := io.ifu.arvalid
      arburst       := io.ifu.arburst
      arid_halt     := io.ifu.arid
      rready        := io.ifu.rready
      io.ifu.rvalid := rvalid && true.B
      io.lsu.rvalid := false.B
  } .elsewhen(~io.ifu.arvalid && io.lsu.arvalid) {
      arid          := io.lsu.arid
      arlen         := io.lsu.arlen
      araddr        := io.lsu.araddr
      arsize        := io.lsu.arsize
      arvalid       := io.lsu.arvalid
      arburst       := io.lsu.arburst
      arid_halt     := io.lsu.arid
      rready        := io.lsu.rready
      io.ifu.rvalid := false.B
      io.lsu.rvalid := rvalid && true.B
  } .otherwise {
      arid          := io.ifu.arid
      arlen         := io.ifu.arlen
      araddr        := io.ifu.araddr
      arsize        := io.ifu.arsize
      arvalid       := false.B
      arburst       := io.ifu.arburst
      arid_halt     := io.ifu.arid
      rready        := false.B
      io.ifu.rvalid := false.B
      io.lsu.rvalid := false.B
  }

      io.ifu.arready:= arready 
      io.lsu.arready:= arready 
//  */

  // R
  when(arid_halt === io.ifu.arid && io.ifu.rready && rvalid){
      //rready        := io.ifu.rready
      arid_halt     := io.lsu.arid
  } .elsewhen(arid_halt === io.lsu.arid && io.lsu.rready && rvalid){
      //rready        := io.lsu.rready
      arid_halt     := io.ifu.arid
  } .otherwise {
      //rready        := false.B
      //arid_halt     := Mux(arid_halt === io.ifu.arid, io.lsu.arid, io.ifu.arid)
      arid_halt     := arid_halt
  }

  io.ifu.rid    := rid       
  io.ifu.rresp  := rresp     
  io.ifu.rdata  := Mux(io.ifu.rready && io.ifu.rvalid, rdata, 0.U)     
  io.ifu.rlast  := rlast     
                         
  io.lsu.rid    := rid       
  io.lsu.rresp  := rresp     
  io.lsu.rdata  := Mux(io.lsu.rready && io.lsu.rvalid, rdata, 0.U)     
  io.lsu.rlast  := rlast     

  // AW
  when(io.lsu.awvalid) {
    awid           := io.lsu.awid
    awlen          := io.lsu.awlen
    awaddr         := io.lsu.awaddr
    awsize         := io.lsu.awsize
    awvalid        := io.lsu.awvalid
    awburst        := io.lsu.awburst
    awid_halt      := io.lsu.awid
  } .elsewhen(io.ifu.awvalid) {
    awid           := io.ifu.awid
    awlen          := io.ifu.awlen
    awaddr         := io.ifu.awaddr
    awsize         := io.ifu.awsize
    awvalid        := io.ifu.awvalid
    awburst        := io.ifu.awburst
    awid_halt      := io.ifu.awid
  } .otherwise {
    awid           := io.lsu.awid
    awlen          := io.lsu.awlen
    awaddr         := io.lsu.awaddr
    awsize         := io.lsu.awsize
    awvalid        := false.B
    awburst        := io.lsu.awburst
    awid_halt      := io.lsu.awid
  }

  io.lsu.awready := awready  
  io.ifu.awready := awready  
    
  // W
  when(io.lsu.wvalid) {
    wvalid        := io.lsu.wvalid
    wdata         := io.lsu.wdata
    wstrb         := io.lsu.wstrb
    wlast         := io.lsu.wlast
  } .elsewhen(io.ifu.wvalid) {
    wvalid        := io.ifu.wvalid
    wdata         := io.ifu.wdata
    wstrb         := io.ifu.wstrb
    wlast         := io.ifu.wlast
  } .otherwise {
    wvalid        := false.B
    wdata         := io.lsu.wdata
    wstrb         := io.lsu.wstrb
    wlast         := io.lsu.wlast
  }

  io.lsu.wready := wready  
  io.ifu.wready := wready  

  // B
  when(awid_halt === io.lsu.awid && io.lsu.bready){
    bready        := io.lsu.bready
  } .elsewhen(awid_halt === io.ifu.awid && io.ifu.bready) {
    bready        := io.ifu.bready
  } .otherwise {
    bready        := false.B
  }
    
  io.lsu.bid    := bid     
  io.lsu.bresp  := bresp   
  io.lsu.bvalid := bvalid
                            
  io.ifu.bid    := bid     
  io.ifu.bresp  := bresp   
  io.ifu.bvalid := false.B

  // ********** Xbar **********

  // AR R
  when(araddr >= SRAM_ADDR_LEFT && araddr <= SRAM_ADDR_RIGHT) {
    arready          := io.sram.arready
    rvalid           := io.sram.rvalid
    rresp            := io.sram.rresp
    rdata            := io.sram.rdata
    rlast            := io.sram.rlast
    rid              := io.sram.rid
    io.sram.rready   := rready && true.B
    io.clint.rready  := false.B
    io.sram.arvalid  := arvalid && true.B
    io.clint.arvalid := false.B
  } .elsewhen(araddr >= CLINT_ADDR_LEFT && araddr <= CLINT_ADDR_RIGHT) {
    arready          := io.clint.arready
    rvalid           := io.clint.rvalid
    rresp            := io.clint.rresp
    rdata            := io.clint.rdata
    rlast            := io.clint.rlast
    rid              := io.clint.rid
    io.sram.rready   := false.B
    io.clint.rready  := rready && true.B
    io.sram.arvalid  := false.B
    io.clint.arvalid := arvalid && true.B
  } .otherwise {
    arready          := false.B
    rvalid           := false.B
    rresp            := "b11".U// wrong
    rdata            := io.sram.rdata
    rlast            := io.sram.rlast
    rid              := io.sram.rid
    io.sram.rready   := false.B
    io.clint.rready  := false.B
    io.sram.arvalid  := false.B
    io.clint.arvalid := false.B
  }

  io.sram.arid    := arid
  io.sram.arlen   := arlen
  io.sram.arsize  := arsize
  io.sram.araddr  := araddr
  io.sram.arburst := arburst

  io.clint.arid    := arid
  io.clint.arlen   := arlen
  io.clint.arsize  := arsize
  io.clint.araddr  := araddr
  io.clint.arburst := arburst

  // AW W B
  when(awaddr >= SRAM_ADDR_LEFT && awaddr <= SRAM_ADDR_RIGHT) {
    awready          := io.sram.awready
    wready           := io.sram.wready
    bvalid           := io.sram.bvalid
    bresp            := io.sram.bresp
    bid              := io.sram.bid
    io.sram.bready   := bready && true.B
    io.clint.bready  := false.B
    io.sram.wvalid   := wvalid && true.B
    io.clint.wvalid  := false.B
    io.sram.awvalid  := awvalid && true.B
    io.clint.awvalid := false.B
  } .elsewhen(awaddr >= CLINT_ADDR_LEFT && awaddr <= CLINT_ADDR_RIGHT) {
    awready          := io.clint.awready
    wready           := io.clint.wready
    bvalid           := io.clint.bvalid
    bresp            := io.clint.bresp
    bid              := io.clint.bid
    io.sram.bready   := false.B
    io.clint.bready  := bready && true.B
    io.sram.wvalid   := false.B
    io.clint.wvalid  := wvalid && true.B
    io.sram.awvalid  := false.B
    io.clint.awvalid := awvalid && true.B
  } .otherwise {
    awready          := false.B
    wready           := io.sram.wready
    bvalid           := io.sram.bvalid
    bresp            := io.sram.bresp
    bid              := io.sram.bid
    io.sram.bready   := false.B
    io.clint.bready  := false.B
    io.sram.wvalid   := false.B
    io.clint.wvalid  := false.B
    io.sram.awvalid  := false.B
    io.clint.awvalid := false.B
  }

    io.sram.awaddr  := awaddr
    io.sram.awid    := awid
    io.sram.awlen   := awlen
    io.sram.awsize  := awsize
    io.sram.awburst := awburst
    io.sram.wdata   := wdata
    io.sram.wstrb   := wstrb
    io.sram.wlast   := wlast
    
    io.clint.awaddr  := awaddr
    io.clint.awid    := awid
    io.clint.awlen   := awlen
    io.clint.awsize  := awsize
    io.clint.awburst := awburst
    io.clint.wdata   := wdata
    io.clint.wstrb   := wstrb
    io.clint.wlast   := wlast

}


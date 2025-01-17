package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_ARBITER extends Module{
  val io = IO(new Bundle{
    val ifu = new ysyx_23060336_AXI4Slave()
    val lsu = new ysyx_23060336_AXI4Slave()
    val axi = new ysyx_23060336_AXI4Master()
  })

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
  io.axi.awvalid := awvalid
  io.axi.awaddr  := awaddr
  io.axi.awid    := awid
  io.axi.awlen   := awlen
  io.axi.awsize  := awsize
  io.axi.awburst := awburst
  io.axi.wvalid  := wvalid
  io.axi.wdata   := wdata
  io.axi.wlast   := wlast
  io.axi.bready  := bready
  io.axi.arid    := arid
  io.axi.arlen   := arlen
  io.axi.arsize  := arsize
  io.axi.arburst := arburst
  io.axi.rready  := rready
  io.axi.arvalid := arvalid
  awready        := io.axi.awready
  wready         := io.axi.wready
  bvalid         := io.axi.bvalid
  rresp          := io.axi.rresp
  bresp          := io.axi.bresp
  rvalid         := io.axi.rvalid

  // AR
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

  // R
  when(arid_halt === io.ifu.arid && io.ifu.rready && rvalid){
      arid_halt     := io.lsu.arid
  } .elsewhen(arid_halt === io.lsu.arid && io.lsu.rready && rvalid){
      arid_halt     := io.ifu.arid
  } .otherwise {
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


}


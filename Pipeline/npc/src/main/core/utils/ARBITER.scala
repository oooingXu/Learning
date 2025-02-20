package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_ARBITER extends Module{
  val io = IO(new Bundle{
    val ifu = new ysyx_23060336_AXI4Slave()
    val lsu = new ysyx_23060336_AXI4Slave()
    val axi = new ysyx_23060336_AXI4Master()
  })

  //val awready = RegInit(0.U(1.W))
  //val awvalid = RegInit(0.U(1.W)) 
  //val awaddr  = RegInit(0.U(32.W)) 
  //val awid    = RegInit(0.U(4.W)) 
  //val awlen   = RegInit(0.U(8.W)) 
  //val awsize  = RegInit(0.U(3.W)) 
  //val wready  = RegInit(0.U(1.W))
  //val wvalid  = RegInit(0.U(1.W)) 
  //val wdata   = RegInit(0.U(32.W)) 
  //val wstrb   = RegInit(0.U(4.W)) 
  //val wlast   = RegInit(0.U(1.W)) 
  //val bready  = RegInit(0.U(1.W)) 
  //val bvalid  = RegInit(0.U(1.W))
  //val bid     = RegInit(0.U(4.W))
  //val arready = RegInit(0.U(1.W))
  //val arvalid = RegInit(0.U(1.W)) 
  //val araddr  = RegInit(0.U(32.W)) 
  //val arid    = RegInit(0.U(4.W)) 
  //val arlen   = RegInit(0.U(8.W)) 
  //val arsize  = RegInit(0.U(3.W)) 
  //val rready  = RegInit(0.U(1.W)) 
  //val rvalid  = RegInit(0.U(1.W))
  //val awburst = RegInit(0.U(2.W)) 
  //val bresp   = RegInit(0.U(2.W))
  //val arburst = RegInit(0.U(2.W)) 
  //val rresp   = RegInit(0.U(2.W))
  //val rdata   = RegInit(0.U(32.W))
  //val rlast   = RegInit(0.U(1.W))
  //val rid     = RegInit(0.U(4.W))

  val awready = Wire(Bool())
  val awvalid = Wire(Bool()) 
  val awaddr  = Wire(UInt(32.W)) 
  val awid    = Wire(UInt(4.W)) 
  val awlen   = Wire(UInt(8.W)) 
  val awsize  = Wire(UInt(3.W)) 
  val wready  = Wire(Bool())
  val wvalid  = Wire(Bool()) 
  val wdata   = Wire(UInt(32.W)) 
  val wstrb   = Wire(UInt(4.W)) 
  val wlast   = Wire(Bool()) 
  val bready  = Wire(Bool()) 
  val bvalid  = Wire(Bool())
  val bid     = Wire(UInt(4.W))
  val arready = Wire(Bool())
  val arvalid = Wire(Bool()) 
  val araddr  = Wire(UInt(32.W)) 
  val arid    = Wire(UInt(4.W)) 
  val arlen   = Wire(UInt(8.W)) 
  val arsize  = Wire(UInt(3.W)) 
  val rready  = Wire(Bool()) 
  val rvalid  = Wire(Bool())
  val awburst = Wire(UInt(2.W)) 
  val bresp   = Wire(UInt(2.W))
  val arburst = Wire(UInt(2.W)) 
  val rresp   = Wire(UInt(2.W))
  val rdata   = Wire(UInt(32.W))
  val rlast   = Wire(Bool())
  val rid     = Wire(UInt(4.W))

  val s_lsu :: s_ifu :: s_wait :: Nil = Enum(3)
  val state = RegInit(s_ifu)
  state := MuxLookup(state, s_wait)(List(
    s_wait     -> Mux(io.lsu.arvalid, s_lsu, Mux(io.ifu.arvalid, s_ifu, s_wait)),
    s_lsu      -> Mux(rvalid === 1.U, s_wait, s_lsu),
    s_ifu      -> Mux(rvalid === 1.U, s_wait, s_ifu)
  ))

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
  io.axi.wstrb   := wstrb
  io.axi.bready  := bready
  io.axi.arid    := arid
  io.axi.arlen   := arlen
  io.axi.araddr  := araddr
  io.axi.arsize  := arsize
  io.axi.arburst := arburst
  io.axi.arvalid := arvalid && (state === s_lsu || state === s_ifu)
  io.axi.rready  := rready
  awready        := io.axi.awready
  arready        := io.axi.arready
  wready         := io.axi.wready
  bvalid         := io.axi.bvalid
  bresp          := io.axi.bresp
  bid            := io.axi.bid
  rid            := io.axi.rid
  rdata          := io.axi.rdata
  rlast          := io.axi.rlast
  rresp          := io.axi.rresp
  rvalid         := io.axi.rvalid

  // AR
  when((state === s_lsu) || (state === s_wait && io.lsu.arvalid)) {
      arid          := io.lsu.arid
      arlen         := io.lsu.arlen
      araddr        := io.lsu.araddr
      arsize        := io.lsu.arsize
      arvalid       := io.lsu.arvalid
      arburst       := io.lsu.arburst
      rready        := io.lsu.rready
      io.ifu.rvalid := false.B
      io.lsu.rvalid := rvalid 
  } .otherwise {
      arid          := io.ifu.arid
      arlen         := io.ifu.arlen
      araddr        := io.ifu.araddr
      arsize        := io.ifu.arsize
      arvalid       := io.ifu.arvalid
      arburst       := io.ifu.arburst
      rready        := io.ifu.rready
      io.ifu.rvalid := rvalid
      io.lsu.rvalid := false.B
  }

  io.ifu.arready := arready && state === s_ifu
  io.lsu.arready := arready && state === s_lsu 

  io.ifu.rid    := rid       
  io.ifu.rresp  := rresp     
  io.ifu.rdata  := rdata
  io.ifu.rlast  := rlast     
                         
  io.lsu.rid    := rid       
  io.lsu.rresp  := rresp     
  io.lsu.rdata  := rdata  
  io.lsu.rlast  := rlast     

  // AW
  awid           := io.lsu.awid
  awlen          := io.lsu.awlen
  awaddr         := io.lsu.awaddr
  awsize         := io.lsu.awsize
  awvalid        := io.lsu.awvalid
  awburst        := io.lsu.awburst
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
  bready        := io.lsu.bready

  // B
  io.lsu.bid    := bid     
  io.lsu.bresp  := bresp   
  io.lsu.bvalid := bvalid
                            
  io.ifu.bid    := bid     
  io.ifu.bresp  := bresp   
  io.ifu.bvalid := false.B


}


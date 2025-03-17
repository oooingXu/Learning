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
  val awaddr  = Wire(UInt(Base.addrWidth.W)) 
  val awid    = Wire(UInt(Base.idWidth.W)) 
  val awlen   = Wire(UInt(Base.lenWidth.W)) 
  val awsize  = Wire(UInt(Base.sizeWidth.W)) 
  val wready  = Wire(Bool())
  val wvalid  = Wire(Bool()) 
  val wdata   = Wire(UInt(Base.dataWidth.W)) 
  val wstrb   = Wire(UInt(Base.wstrbWidth.W)) 
  val wlast   = Wire(Bool()) 
  val bready  = Wire(Bool()) 
  val bvalid  = Wire(Bool())
  val bid     = Wire(UInt(Base.idWidth.W))
  val arready = Wire(Bool())
  val arvalid = Wire(Bool()) 
  val araddr  = Wire(UInt(Base.addrWidth.W)) 
  val arid    = Wire(UInt(Base.idWidth.W)) 
  val arlen   = Wire(UInt(Base.lenWidth.W)) 
  val arsize  = Wire(UInt(Base.sizeWidth.W)) 
  val rready  = Wire(Bool()) 
  val rvalid  = Wire(Bool())
  val awburst = Wire(UInt(Base.burstWidth.W)) 
  val bresp   = Wire(UInt(Base.respWidth.W))
  val arburst = Wire(UInt(Base.burstWidth.W)) 
  val rresp   = Wire(UInt(Base.respWidth.W))
  val rdata   = Wire(UInt(Base.dataWidth.W))
  val rlast   = Wire(Bool())
  val rid     = Wire(UInt(Base.idWidth.W))

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
  arready        := io.axi.arready && state =/= s_wait
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


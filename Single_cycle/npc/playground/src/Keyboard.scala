package gcd

import chisel3._
import chisel3.util._

class Keyboard extends Module{
	val io = IO(new Bundle{
		val clk				 = Input(Bool())
		val clrn			 = Input(Bool())
		val ps2_clk		 = Input(Bool())
		val ps2_data	 = Input(Bool())
		val nextdata_n = Output(Bool())
		val data			 = Output(UInt(8.W))
		val ready			 = Output(Bool())
		val overflow	 = Output(Bool())
	})

	val buffer			 = RegInit(0.U(10.W))
	val fifo				 = Reg(Vec(8, UInt(8.W)))
	val w_ptr				 = RegInit(0.U(3.W))
	val r_ptr				 = RegInit(0.U(3.W))
	val count				 = RegInit(0.U(4.W))
	val ps2_clk_sync = Reg(UInt(3.W))

	val ready		 = RegInit(false.B)
	val overflow = RegInit(false.B)

	ps2_clk_sync := Cat(ps2_clk_sync(1, 0), io.ps2_clk)

	val sampling = ps2_clk_sync(2) && !ps2_clk_sync(1)

	when(!io.clrn){
		count		 := 0.U
		w_ptr		 := 0.U
		r_ptr		 := 0.U
		overflow := false.B
		ready		 := false.B
	} .otherwise {
		when(ready) {
			when(!io.nextdata_n) {
				r_ptr := r_ptr + 1.U
				when(w_ptr === (r_ptr + 1.U)) {
					ready := false.B
				}
			}
		}
		when(sampling){
			when(count === 10.U){
				when(buffer(0) === 0.U && io.ps2_data && buffer(9, 1).xorR) {
					fifo(w_ptr) := buffer(8, 1)
					w_ptr := w_ptr + 1.U
					ready := true.B
					overflow := overflow || (r_ptr === (w_ptr + 1.U))
				}
				count := 0.U
			} .otherwise {
				buffer := Cat(io.ps2_data, buffer(9, 1))
				count := count + 1.U
			}
		}
	}

	io.data				:= fifo(r_ptr)
  io.ready			:= ready
	io.overflow		:= overflow
	io.nextdata_n := !ready
}





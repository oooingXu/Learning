package gcd

import chisel3._
import chisel3.util._

class VgaCtrl extends Module {
  val io = IO(new Bundle {
    val pclk     = Input(Bool())
    val reset    = Input(Bool())
    val vga_data = Input(UInt(24.W))
    val h_addr   = Output(UInt(10.W))
    val v_addr   = Output(UInt(10.W))
    val hsync    = Output(Bool())
    val vsync    = Output(Bool())
    val valid    = Output(Bool())
    val vga_r    = Output(UInt(8.W))
    val vga_g    = Output(UInt(8.W))
    val vga_b    = Output(UInt(8.W))
  })

  // Parameters
  val h_frontporch = 96.U
  val h_active = 144.U
  val h_backporch = 784.U
  val h_total = 800.U

  val v_frontporch = 2.U
  val v_active = 35.U
  val v_backporch = 515.U
  val v_total = 525.U

  // Registers
  val x_cnt = RegInit(1.U(10.W))
  val y_cnt = RegInit(1.U(10.W))

  // Horizontal and vertical counters
  when(io.reset) {
    x_cnt := 1.U
    y_cnt := 1.U
  } .otherwise {
    when(x_cnt === h_total) {
      x_cnt := 1.U
      when(y_cnt === v_total) {
        y_cnt := 1.U
      } .otherwise {
        y_cnt := y_cnt + 1.U
      }
    } .otherwise {
      x_cnt := x_cnt + 1.U
    }
  }

  // Generate sync signals
  io.hsync := x_cnt > h_frontporch
  io.vsync := y_cnt > v_frontporch

  // Generate blanking signals
  val h_valid = x_cnt > h_active && x_cnt <= h_backporch
  val v_valid = y_cnt > v_active && y_cnt <= v_backporch
  io.valid := h_valid && v_valid

  // Calculate current valid pixel coordinates
  io.h_addr := Mux(h_valid, x_cnt - 145.U, 0.U)
  io.v_addr := Mux(v_valid, y_cnt - 36.U, 0.U)

  // Set output color values
  io.vga_r := io.vga_data(23, 16)
  io.vga_g := io.vga_data(15, 8)
  io.vga_b := io.vga_data(7, 0)
}


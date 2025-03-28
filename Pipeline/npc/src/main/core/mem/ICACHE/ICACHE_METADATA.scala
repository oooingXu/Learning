package npc

import chisel3._
import chisel3.util._

class ysyx_23060336_ICACHE_METADATA(m: Int, n: Int) extends Module {
  val io = IO(new Bundle {
    val wen       = Input(Bool())
    val in_index  = Input(UInt(n.W))
    val in_data   = Input(UInt(32.W))
    val in_tag    = Input(UInt((32- m - n).W))
    val in_valid  = Input(Bool())
    val in_offset = Input(UInt(m.W))
    val out_data  = Output(UInt(32.W))
    val out_tag   = Output(UInt((32 - m - n).W))
    val out_valid = Output(Bool())
  })

  if(m == 4) {
    // 参数计算
    val icachedataWidth = 1 << (m + 3)   // 数据总位宽
    val icachetagWidth = 32 - m - n

    // 使用Reg实现同步读-修改-写
    val ysyx_23060336_tag   = SyncReadMem(1 << n, UInt(icachetagWidth.W))
    val ysyx_23060336_data  = SyncReadMem(1 << n, UInt(icachedataWidth.W))
    val ysyx_23060336_valid = SyncReadMem(1 << n, UInt(1.W))

    // 当前数据通路
    val currentData = ysyx_23060336_data(io.in_index)

    // 写入逻辑
    val offsetBits = io.in_offset(3,2) * 32.U

    // 修正掩码生成逻辑（核心修复点）
    val segmentMask = (~0.U(32.W)).pad(icachedataWidth) << offsetBits
    val maskedData = currentData & ~segmentMask
    val newData = maskedData | (io.in_data.pad(icachedataWidth) << offsetBits)

    // 有效位更新
    when(io.wen) {
      ysyx_23060336_data(io.in_index)  := newData
      ysyx_23060336_valid(io.in_index) := io.in_valid
      ysyx_23060336_tag(io.in_index)   := io.in_tag
    }

    // 输出逻辑
    val outSegmentMask = (~0.U(32.W)).pad(icachedataWidth) << offsetBits
    val maskedOutdata = (currentData & outSegmentMask) >> offsetBits

    io.out_tag   := ysyx_23060336_tag(io.in_index)
    io.out_valid := ysyx_23060336_valid(io.in_index)  
    io.out_data  := maskedOutdata(31, 0)
  } else {
    val ysyx_23060336_tag   = Mem(1 << n, UInt((32 - m - n).W))
    val ysyx_23060336_data  = Mem(1 << n, UInt(Base.dataWidth.W))
    val ysyx_23060336_valid = Mem(1 << n, UInt(1.W))

    // 有效位更新
    when(io.wen) {
      ysyx_23060336_data(io.in_index)  := io.in_data
      ysyx_23060336_valid(io.in_index) := io.in_valid
      ysyx_23060336_tag(io.in_index)   := io.in_tag
    }

    // 输出逻辑
    io.out_tag   := ysyx_23060336_tag(io.in_index)
    io.out_valid := ysyx_23060336_valid(io.in_index)  
    io.out_data  := ysyx_23060336_data(io.in_index)
  }
}


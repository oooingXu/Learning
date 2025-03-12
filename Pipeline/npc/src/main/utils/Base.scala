package npc 

object Base {
  // riscv32e
  val regNumber     = 16

  // idu sign
  val pcmuxWidth    = 2
  val instTypeWidth = 3
  val immTypeWidth  = 3
  val RegNumWidth   = 3
  val PCMuxWidth    = 4
  val AluSelWidth   = 4
  val AluMuxWidth   = 4
  val rdWidth       = 5
  val csrWidth      = 12
  val pcWidth       = 32

  // axi
  val burstWidth = 2
  val respWidth  = 2
  val sizeWidth  = 3
  val idWidth    = 4
  val wstrbWidth = 4
  val lenWidth   = 8
  val addrWidth  = 32
  val dataWidth  = 32
}

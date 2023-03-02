package main.WBU

import chisel3._
import chisel3.util._

class WBUInterface extends Bundle {
  val npc   = Output(UInt(64.W))
  val valid = Output(Bool())
}

class WBU extends Module {
  val ioWBU = IO(new WBUInterface)
}

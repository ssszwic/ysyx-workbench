package main.WBU

import chisel3._
import chisel3.util._

class WBUInterface extends Bundle {
  val ready = Input(Bool())
  val valid = Output(Bool())
  val npc   = Output(UInt(64.W))
}

class WBU extends Module {
  val ioWBU = IO(new WBUInterface)
}

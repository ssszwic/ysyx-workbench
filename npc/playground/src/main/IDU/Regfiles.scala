package main.IDU

import chisel3._
import chisel3.util._

class RegCtrlInterface extends Bundle {
  val wen   = Input(Bool())
  val wAddr = Input(UInt(5.W))
}

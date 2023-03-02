package main.EXU

import chisel3._
import chisel3.util._

class CSRCtrlInterface extends Bundle {
  val ecallSel  = Input(Bool())
  val mretSel   = Input(Bool())
  val csrSel    = Input(Bool())
  val addr      = Input(UInt(12.W))
  val op        = Input(UInt(3.W))
}

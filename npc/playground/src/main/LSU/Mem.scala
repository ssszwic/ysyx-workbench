package main.LSU

import chisel3._
import chisel3.util._

class MemCtrlInterface extends Bundle {
  val ren     = Input(Bool())
  // write
  val wen     = Input(Bool())
  // control
  val length  = Input(UInt(2.W))
  val unsign  = Input(Bool())
}

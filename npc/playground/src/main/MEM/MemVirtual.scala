package main.MEM

import chisel3._
import chisel3.util._

class MemInterface extends Bundle {
  // read
  val ren   = Input(Bool())
  val addr  = Input(UInt(64.W))
  val rData = Output(UInt(64.W))
  // write
  val wen   = Input(Bool())
  val wData = Input(UInt(64.W))
  val wMask = Input(UInt(8.W))
}

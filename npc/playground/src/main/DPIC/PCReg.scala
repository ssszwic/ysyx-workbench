package main.DPIC

import chisel3._
import chisel3.util._

// dugbu pc value by DPI-C
class PCReg extends BlackBox with HasBlackBoxResource {
  val io = IO(new Bundle {
    val clock = Input(Clock())
    val reset = Input(Bool())
    val wen   = Input(Bool())
    val wData = Input(UInt(64.W))
    val value = Output(UInt(64.W))
  })

  addResource("/PCReg.v")
}

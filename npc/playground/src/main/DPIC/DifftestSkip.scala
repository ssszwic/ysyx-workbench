package main.DPIC

import chisel3._
import chisel3.util._

class DifftestSkip extends BlackBox with HasBlackBoxResource {
  val io = IO(new Bundle {
    val skip = Input(Bool())
  })
  addResource("/DifftestSkip.v")
}
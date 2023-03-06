package main.DPIC

import chisel3._
import chisel3.util._

class Ebreak extends BlackBox with HasBlackBoxResource {
  val io = IO(new Bundle {
    val ebreak = Input(Bool())
  })
  addResource("/Ebreak.v")
}

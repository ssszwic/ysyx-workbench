package main.MEM

import chisel3._
import chisel3.util._

class SRAM extends BlackBox with HasBlackBoxResource {
  val io = IO(new Bundle {
    // read
    val clock = Input(Clock())
    val reset = Input(Bool())
    val axi   = new AXI_LITE_SLAVE(32, 64, 8)
  })
  addResource("/SRAM.v")
}

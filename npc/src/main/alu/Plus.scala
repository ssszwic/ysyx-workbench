package main.alu

import chisel3._
import chisel3.util._

class Plus extends Module {
  val io = IO(new Bundle {
    val data1     = Input(UInt(64.W))
    val data2     = Input(UInt(64.W))
    val result    = Output(UInt(64.W))
  })

  io.result := io.data1 + io.data2
}


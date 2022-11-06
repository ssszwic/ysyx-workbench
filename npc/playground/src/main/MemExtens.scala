package main

import chisel3._
import chisel3.util._

class MemExtends extends Module {
  val io = IO(new Bundle {
    // control
    val lengthMem = Input(Bool())
    val unsignMem = Input(Bool())
    // data flow
    val data      = Input(UInt(64.W))
    val result    = Output(UInt(64.W))
  })

  when(io.lengthMem === 0.U) {
    io.result := Mux(io.unsignMem, Cat(Fill(56, 0.U), io.data(7, 0)), Cat(Fill(56, io.data(7)), io.data(7, 0)))
  }.elsewhen(io.lengthMem === 1.U) {
    io.result := Mux(io.unsignMem, Cat(Fill(48, 0.U), io.data(15, 0)), Cat(Fill(48, io.data(15)), io.data(15, 0)))
  }.elsewhen(io.lengthMem === 2.U) {
    io.result := Mux(io.unsignMem, Cat(Fill(32, 0.U), io.data(31, 0)), Cat(Fill(32, io.data(31)), io.data(31, 0)))
  }.elsewhen(io.lengthMem === 3.U) {
    io.result := io.data
  }.otherwise {
    io.result := 0.U
  }
}

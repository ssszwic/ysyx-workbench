package main.alu

import chisel3._
import chisel3.util._

class Div extends Module {
  val io = IO(new Bundle {
    // control
    val unsignSel = Input(Bool())
    val wordSel   = Input(Bool())
    // data flow
    val data1     = Input(UInt(64.W))
    val data2     = Input(UInt(64.W))
    val result    = Output(UInt(64.W))
  })

  val data1Tmp = Wire(UInt(65.W))
  val data2Tmp = Wire(UInt(65.W))

  when(io.wordSel) {
    when(io.unsignSel) {
      data1Tmp := Cat(Fill(33, 0.U(1.W)), io.data1(31, 0))
      data2Tmp := Cat(Fill(33, 0.U(1.W)), io.data2(31, 0))
    }.otherwise {
      data1Tmp := Cat(Fill(33, io.data1(31)), io.data1(31, 0))
      data2Tmp := Cat(Fill(33, io.data2(31)), io.data2(31, 0))
    }
  }.otherwise{
    when(io.unsignSel) {
      data1Tmp := Cat(0.U(1.W), io.data1(63, 0))
      data2Tmp := Cat(0.U(1.W), io.data2(63, 0))
    }.otherwise {
      data1Tmp := Cat(io.data1(63), io.data1(63, 0))
      data2Tmp := Cat(io.data2(63), io.data2(63, 0))
    }
  }

  val result = Wire(UInt(65.W))
  result := data1Tmp.asSInt / data2Tmp.asSInt

  when(io.wordSel) {
    io.result := Cat(Fill(32, result(32)), result(31, 0))
  }.otherwise {
    io.result := result(63, 0)
  }

}

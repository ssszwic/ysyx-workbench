package main.alu

import chisel3._
import chisel3.util._

class Mul extends Module {
  val io = IO(new Bundle {
    // control
    val mulOp     = Input(UInt(2.W))
    val wordSel   = Input(Bool())
    // data flow
    val data1     = Input(UInt(64.W))
    val data2     = Input(UInt(64.W))
    val result    = Output(UInt(64.W))
  })

  val data1Tmp = Wire(UInt(65.W))
  val data2Tmp = Wire(UInt(65.W))

  when(io.mulOp === "b11".U) {
    // unsigned expend
    data1Tmp := Cat(0.U(1.W), io.data1)
  }.otherwise{
    data1Tmp := Cat(io.data1(63), io.data1)
  }

  when(io.mulOp(1) === 1.U) {
    // unsigned expend
    data2Tmp := Cat(0.U(1.W), io.data2)
  }.otherwise{
    data2Tmp := Cat(io.data1(63), io.data2)
  }

  val result = Wire(SInt(130.W))
  result := data1Tmp.asSInt * data2Tmp.asSInt

  when(io.wordSel) {
    io.result := Cat(Fill(32, result(32)), result(31, 0))
  }.elsewhen(io.mulOp === "b00".U) {
    io.result := result(63, 0)
  }.otherwise {
    io.result := result(127, 64)
  }

}


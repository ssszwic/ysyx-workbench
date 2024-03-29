package main.EXU.alu

import chisel3._
import chisel3.util._

class Shift extends Module {
  val io = IO(new Bundle {
    // control
    val rightSel  = Input(Bool())
    val arithSel  = Input(Bool())
    val wordSel   = Input(Bool())
    // data flow
    val data1     = Input(UInt(64.W))
    val data2     = Input(UInt(64.W))
    val result    = Output(UInt(64.W))
  })

  val result = Wire(UInt(64.W))
  val data1 = Wire(UInt(64.W))

  when(io.wordSel) {
    data1 := Mux(io.arithSel, Cat(Fill(32, io.data1(31)), io.data1(31, 0)), Cat(Fill(32, 0.U(1.W)), io.data1(31, 0)))
  }.otherwise {
    data1 := io.data1
  }

  when(io.rightSel) {
    when(io.arithSel) {
      result := (data1.asSInt >> Mux(io.wordSel, io.data2(4, 0), io.data2(5, 0))).asUInt
    }.otherwise {
      result := data1 >> Mux(io.wordSel, io.data2(4, 0), io.data2(5, 0))
    }
  }.otherwise {
    result := data1 << Mux(io.wordSel, io.data2(4, 0), io.data2(5, 0))
  }

  io.result := Mux(io.wordSel, Cat(Fill(32, result(31)), result(31, 0)), result)
}


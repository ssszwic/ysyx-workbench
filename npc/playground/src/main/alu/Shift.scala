package main.alu

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

  when(io.rightSel) {
    when(io.arithSel) {
      io.result := io.data1 >> io.data2(5, 0)
    }.otherwise {
      io.result := io.data1.asSInt >> io.data2(5, 0)
    }
  }.otherwise {
    io.result := io.data1 << io.data2(5, 0)
  }

}


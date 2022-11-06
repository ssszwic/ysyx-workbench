package main.alu

import chisel3._
import chisel3.util._

class Less extends Module {
  val io = IO(new Bundle {
    // control
    val geSel     = Input(Bool())
    val unsignSel = Input(Bool())
    // data flow
    val data1     = Input(UInt(64.W))
    val data2     = Input(UInt(64.W))
    val result    = Output(Bool())
  })

  val lessResult = Wire(Bool())

  // unsigned
  val unsignResult = Wire(Bool())
  unsignResult := (io.data1 < io.data2)
  
  // signed
  val signedResult = Wire(Bool())
  // when sign is different, inverse the result
  signedResult := (io.data1(63) ^ io.data2(63)) ^ unsignResult
  
  lessResult  := Mux(io.unsignSel, unsignResult, signedResult)
  io.result   := Mux(io.geSel, !lessResult, lessResult)
}


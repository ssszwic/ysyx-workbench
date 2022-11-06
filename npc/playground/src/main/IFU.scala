package main

import chisel3._
import chisel3.util._

class IFU extends Module {
  val io = IO(new Bundle {
    val nextpc    = Input(UInt(64.W))
    val instGet   = Input(UInt(32.W))
    val pc        = Output(UInt(64.W))
    val inst      = Output(UInt(32.W))
  })

  val pc = RegInit("h80000000".U(64.W))
  pc := io.nextpc

  io.pc := pc
  io.inst := io.instGet
}

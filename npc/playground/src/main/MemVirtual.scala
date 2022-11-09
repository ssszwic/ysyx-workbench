package main

import chisel3._
import chisel3.util._

class MemVirtual extends BlackBox with HasBlackBoxResource {
  val io = IO(new Bundle {
    // read
    val ren       = Input(Bool())
    val addr      = Input(UInt(64.W))
    val rData     = Output(UInt(64.W))
    // write
    val wen       = Input(Bool())
    val wData     = Input(UInt(64.W))
    // control
    val wMask     = Input(UInt(8.W))
  })
  addResource("/Mem.v")
}
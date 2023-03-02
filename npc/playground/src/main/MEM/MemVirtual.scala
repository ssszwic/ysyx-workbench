package main.MEM

import chisel3._
import chisel3.util._

class MemInterface extends Bundle {
  // read
  val ren   = Input(Bool())
  val addr  = Input(UInt(64.W))
  val rData = Output(UInt(64.W))
  // write
  val wen   = Input(Bool())
  val wData = Input(UInt(64.W))
  val wMask = Input(UInt(8.W))
}

class Raw extends Module {
  val io = IO(new MemInterface)
  val MemVirtualInst = Module(new MemVirtual)
  io <> MemVirtualInst.ios
}

class MemVirtual extends BlackBox with HasBlackBoxResource {
  // val io = IO(new Bundle {
  //   // read
  //   val ren       = Input(Bool())
  //   val addr      = Input(UInt(64.W))
  //   val rData     = Output(UInt(64.W))
  //   // write
  //   val wen       = Input(Bool())
  //   val wData     = Input(UInt(64.W))
  //   // control
  //   val wMask     = Input(UInt(8.W))
  // })
  val ios = IO(new MemInterface)
  addResource("/MemVirtual.v")
}

package main

import chisel3._
import chisel3.util._

class RegFiles extends BlackBox with HasBlackBoxResource {
  val io = IO(new Bundle{
    val clock   = Input(Clock())
    val reset   = Input(Bool())
    val rs1Addr = Input(UInt(5.W))
    val rs2Addr = Input(UInt(5.W))
    val wen     = Input(Bool())
    val wAddr   = Input(UInt(5.W))
    // data
    val wData   = Input(UInt(64.W))
    val rs1Data = Output(UInt(64.W))
    val rs2Data = Output(UInt(64.W))
  })

  addResource("/RegFiles.v")
}
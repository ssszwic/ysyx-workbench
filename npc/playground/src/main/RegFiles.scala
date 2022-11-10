package main

import chisel3._
import chisel3.util._

class RegFiles extends Module {
  val io = IO(new Bundle{
    val rs1Addr = Input(UInt(5.W))
    val rs2Addr = Input(UInt(5.W))
    val wen     = Input(Bool())
    val wAddr   = Input(UInt(5.W))
    // data
    val wData   = Input(UInt(64.W))
    val rs1Data = Output(UInt(64.W))
    val rs2Data = Output(UInt(64.W))
  })

  val regFiles = RegInit(VecInit(Seq.fill(32)(0.U(64.W))))

  io.rs1Data := Mux(io.rs1Addr === 0.U, 0.U, regFiles(io.rs1Addr))
  io.rs2Data := Mux(io.rs2Addr === 0.U, 0.U, regFiles(io.rs2Addr))

  when(io.wen) {
    regFiles(io.wAddr) := io.wData
  }
}
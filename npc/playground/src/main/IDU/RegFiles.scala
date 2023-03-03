package main.IDU

import chisel3._
import chisel3.util._

class RegCtrlInterface extends Bundle {
  val wen     = Input(Bool())
  val rdAddr  = Input(UInt(5.W))
}

class RegFiles extends BlackBox with HasBlackBoxResource {
  val io = IO(new Bundle{
    val clock   = Input(Clock())
    val reset   = Input(Bool())
    val rs1Addr = Input(UInt(5.W))
    val rs2Addr = Input(UInt(5.W))
    // data
    val rdData  = Input(UInt(64.W))
    val rs1Data = Output(UInt(64.W))
    val rs2Data = Output(UInt(64.W))
    // control
    val regCtrl = new RegCtrlInterface
    val valid   = Input(Bool())
  })

  addResource("/RegFiles.v")
}

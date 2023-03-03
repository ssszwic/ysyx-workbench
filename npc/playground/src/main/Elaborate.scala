package main
import circt.stage._
import chisel3.stage.ChiselStage

import main.IFU
import main.IDU
import main.EXU
import main.LSU
import main.MEM
import main.WBU

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

object Elaborate extends App {
  val a = new MemInterface
  print(a)

  // def top = new IDU.IDU
  // val useMFC = true // use MLIR-based firrtl compiler
  // val generator = Seq(chisel3.stage.ChiselGeneratorAnnotation(() => top))
  // if (useMFC) {
  //   (new ChiselStage).execute(args, generator :+ CIRCTTargetAnnotation(CIRCTTarget.Verilog))
  // } else {
  //   (new chisel3.stage.ChiselStage).execute(args, generator)
  // }
  // (new ChiselStage).emitVerilog(top, args)
}

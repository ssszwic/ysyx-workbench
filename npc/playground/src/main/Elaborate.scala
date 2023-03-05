package main
import circt.stage._
import chisel3.stage.ChiselStage

import main.IFU
import main.IDU
import main.EXU
import main.LSU
import main.MEM
import main.WBU

object Elaborate extends App {
  def top = new Top
  val useMFC = true // use MLIR-based firrtl compiler
  val generator = Seq(chisel3.stage.ChiselGeneratorAnnotation(() => top))
  if (useMFC) {
    (new ChiselStage).execute(args, generator :+ CIRCTTargetAnnotation(CIRCTTarget.Verilog))
  } else {
    (new chisel3.stage.ChiselStage).execute(args, generator)
  }
  // (new ChiselStage).emitVerilog(top, args)
}

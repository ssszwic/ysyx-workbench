package main

import chisel3._
import chisel3.util._

class RegCtrlInterface extends Bundle {
  val wen     = Input(Bool())
  val rdAddr  = Input(UInt(5.W))
}

object a extends App {
  val regCtrl_src = new RegCtrlInterface
  val regCtrl_dest = new RegCtrlInterface

  for (i <- 0 until regCtrl_src.elements.toList.length) {
    print(regCtrl_src.getElements(i).getClass() == classOf[chisel3.UInt])
  }

}

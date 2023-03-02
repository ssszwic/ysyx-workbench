package main.LSU

import chisel3._
import chisel3.util._

import main.EXU
import main.IDU
import main.LSU

class LSU extends Module {
  val io = new Bundle {
    val npc     = Output(UInt(64.W))
    val rdData  = Output(UInt(64.W))
    val regCtrl = Flipped(new IDU.RegCtrlInterface)
    val valid   = Output(Bool())
  }
}

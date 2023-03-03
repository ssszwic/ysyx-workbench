package main.LSU

import chisel3._
import chisel3.util._

import main.EXU
import main.IDU
import main.LSU

import main.IDU.RegCtrlInterface
class LSU extends Module {
  val io = new Bundle {
    val ready   = Input(Bool())
    val valid   = Output(Bool())
    val npc     = Output(UInt(64.W))
    val rdData  = Output(UInt(64.W))
    val regCtrl = Flipped(new IDU.RegCtrlInterface)
  }
}

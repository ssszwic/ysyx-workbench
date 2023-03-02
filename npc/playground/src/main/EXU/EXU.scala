package main.EXU

import chisel3._
import chisel3.util._

import main.EXU
import main.IDU
import main.LSU

class EXUInterface extends Bundle {
  val result    = Output(UInt(64.W))
  val pc4       = Output(UInt(64.W))
  val csrpc     = Output(UInt(64.W))
  val regCtrl   = Flipped(new IDU.RegCtrlInterface)
  val memCtrl   = Flipped(new LSU.MemCtrlInterface)
  // control
  val npcSel    = Output(Bool())
  val interrupt = Output(Bool())
  val valid     = Output(Bool())
}

class EXU extends Module{
  // from clint
  val io = new Bundle {
    val timeCmp = Input(Bool())
  }
  val ioIDU       = IO(Flipped(new IDU.IDUInterface))
  val ioEXU       = IO(new IDU.IDUInterface)
}

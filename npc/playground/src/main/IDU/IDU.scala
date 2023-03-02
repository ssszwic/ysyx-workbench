package main.IDU

import chisel3._
import chisel3.util._

import main.EXU
import main.IDU
import main.LSU
import main.IFU

class IDUInterface extends Bundle {
  val rs1Data = Output(UInt(64.W))
  val rs2Data = Output(UInt(64.W))
  val imme    = Output(UInt(64.W))
  val pc      = Output(UInt(64.W))
  val pc4     = Output(UInt(64.W))
  val aluCtrl = Flipped(new EXU.AluCtrlInterface)
  val regCtrl = Flipped(new IDU.RegCtrlInterface)
  val memCtrl = Flipped(new LSU.MemCtrlInterface)
  val csrCtrl = Flipped(new EXU.CSRCtrlInterface)
  val valid   = Output(Bool())
}

class IDU extends Module{
  val ioIFU       = IO(Flipped(new IFU.IFUInterface))
  val ioIDU       = IO(new IDUInterface)
  // from LSU
  val ioLSU = new Bundle {
    val regCtrl = IO(new IDU.RegCtrlInterface)
    val rdData  = Input(UInt(64.W))
  }
}


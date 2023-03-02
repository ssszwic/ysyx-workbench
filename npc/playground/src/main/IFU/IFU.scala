package main.IFU

import chisel3._
import chisel3.util._

import main.MEM
import main.WBU

class IFUInterface extends Bundle {
  val inst  = Output(UInt(32.W))
  val pc    = Output(UInt(64.W))
  val pc4   = Output(UInt(64.W))
  val valid = Output(Bool())
}

class IFU extends Module {
  val ioWBU = IO(new WBU.WBUInterface)
  val ioIFU = IO(new IFUInterface)
  val ioMem = IO(Flipped(new MEM.MemInterface))
}


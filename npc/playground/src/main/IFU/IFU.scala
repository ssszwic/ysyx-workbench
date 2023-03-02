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
  val ioMem = Flipped(new MEM.MemInterface)
}

class IFU extends Module {
  val ioWBU = IO(Flipped(new WBU.WBUInterface))
  val ioIFU = IO(new IFUInterface)
//   val ioMem = IO(Flipped(new MEM.MemInterface))

  ioIFU.inst := 0.U
  ioIFU.pc := 0.U
  ioIFU.pc4 := 0.U
  ioIFU.valid := 0.B

  ioIFU.ioMem.ren   := 0.B
  ioIFU.ioMem.addr  := 0.U
  ioIFU.ioMem.wen   := 0.B
  ioIFU.ioMem.wData := 0.U
  ioIFU.ioMem.wMask:= 0.U

}


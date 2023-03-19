package main.WBU

import chisel3._
import chisel3.util._

import main.LSU
import main.IDU
import main.DPIC

class WBUInterface extends Bundle {
  val valid   = Output(Bool())
  val npc     = Output(UInt(64.W))
}

class WBU extends Module {
  val ioWBU = IO(new WBUInterface)
  val ioLSU = IO(Flipped(new LSU.LSUInterface))
  val ioReg = IO(Flipped(new IDU.RegInterface))

  val NPCReg_u = Module(new DPIC.NPCReg)
  
  ioWBU.npc             := NPCReg_u.io.value
  ioWBU.valid           := RegNext(ioLSU.valid, false.B) 
  ioReg.regCtrl.wen     := ioLSU.valid && ioLSU.regCtrl.wen
  ioReg.regCtrl.rdAddr  := ioLSU.regCtrl.rdAddr
  ioReg.rdData          := ioLSU.result

  // DIP-C in NPCReg_u
  NPCReg_u.io.clock := clock
  NPCReg_u.io.reset := reset
  NPCReg_u.io.wen   := ioLSU.valid
  NPCReg_u.io.wData := ioLSU.npc
}

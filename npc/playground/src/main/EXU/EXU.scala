package main.EXU

import chisel3._
import chisel3.util._

import main.EXU
import main.IDU
import main.LSU
import main.Tools

import main.LSU.MemLSCtrlInterface
class EXUInterface extends Bundle {
  val valid     = Output(Bool())
  val result    = Output(UInt(64.W))
  val npc       = Output(UInt(64.W))
  val pc        = Output(UInt(64.W))
  val rs1Data   = Output(UInt(64.W))
  val rs2Data   = Output(UInt(64.W))
  val imme      = Output(UInt(64.W))
  val regCtrl   = Flipped(new IDU.RegCtrlInterface)
  val memCtrl   = Flipped(new LSU.MemLSCtrlInterface)
  val csrCtrl   = Flipped(new LSU.CSRCtrlInterface)
}

class EXU extends Module{
  val ioIDU       = IO(Flipped(new IDU.IDUInterface))
  val ioEXU       = IO(new EXU.EXUInterface)

  val ALU_u = Module(new ALU)
  ALU_u.io.rs1  := ioIDU.rs1Data
  ALU_u.io.rs2  := ioIDU.rs2Data
  ALU_u.io.imme := ioIDU.imme
  ALU_u.io.pc   := ioIDU.pc
  ALU_u.aluCtrl <> ioIDU.aluCtrl

  val jumpSel = ioIDU.aluCtrl.jalrSel || ioIDU.aluCtrl.typeJSel

  ioEXU.valid := RegNext(ioIDU.valid, false.B)
  ioEXU.result  := RegEnable(Mux(jumpSel, ioIDU.pc4, ALU_u.io.result), 0.U, ioIDU.valid)
  ioEXU.npc     := RegEnable(Mux(jumpSel || ALU_u.io.npcSel, ALU_u.io.result, ioIDU.pc4), 0.U, ioIDU.valid)
  ioEXU.pc      := RegEnable(ioIDU.pc, 0.U, ioIDU.valid)
  ioEXU.imme    := RegEnable(ioIDU.imme, 0.U, ioIDU.valid)
  ioEXU.rs1Data := RegEnable(ioIDU.rs1Data, 0.U, ioIDU.valid)
  ioEXU.rs2Data := RegEnable(ioIDU.rs2Data, 0.U, ioIDU.valid)
  Tools.myRegEnable(ioEXU.regCtrl, ioIDU.regCtrl, ioIDU.valid)
  Tools.myRegEnable(ioEXU.memCtrl, ioIDU.memCtrl, ioIDU.valid)
  Tools.myRegEnable(ioEXU.csrCtrl, ioIDU.csrCtrl, ioIDU.valid)
}

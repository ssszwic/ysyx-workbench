package main.EXU

import chisel3._
import chisel3.util._

import main.EXU
import main.IDU
import main.LSU
import main.Tools

class EXUInterface extends Bundle {
  val ready     = Input(Bool())
  val valid     = Output(Bool())
  val result    = Output(UInt(64.W))
  val npc       = Output(UInt(64.W))
  val pc        = Output(UInt(64.W))
  val rs2Data   = Output(UInt(64.W))
  val regCtrl   = Flipped(new IDU.RegCtrlInterface)
  val memCtrl   = Flipped(new LSU.MemCtrlInterface)
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

  // FSM
  val sIDLE :: sFINISH :: Nil = Enum(2)
  val state = RegInit(sIDLE)
  val ioEXU_valid_reg = RegInit(false.B)
  val ioIDU_ready_reg = RegInit(true.B)

  val jumpSel = Wire(Bool())
  val regEn   = Wire(Bool())
  jumpSel     := ioIDU.aluCtrl.jalrSel || ioIDU.aluCtrl.typeJSel
  regEn       := ((state === sIDLE) && ioIDU.valid)

  ioEXU.result  := RegEnable(Mux(jumpSel, ioIDU.pc4, ALU_u.io.result), 0.U, regEn)
  ioEXU.npc     := RegEnable(Mux(jumpSel || ALU_u.io.npcSel, ALU_u.io.result, ioIDU.pc4), 0.U, regEn)
  ioEXU.pc      := RegEnable(ioIDU.pc, 0.U, regEn)
  ioEXU.rs2Data := RegEnable(ioIDU.rs2Data, 0.U, regEn)
  Tools.myRegEnable(ioEXU.regCtrl, ioIDU.regCtrl, regEn)
  Tools.myRegEnable(ioEXU.memCtrl, ioIDU.memCtrl, regEn)
  Tools.myRegEnable(ioEXU.csrCtrl, ioIDU.csrCtrl, regEn)

  // FSM
  ioEXU.valid := ioEXU_valid_reg
  ioIDU.ready := ioIDU_ready_reg

  switch(state) {
    is(sIDLE) {
      when(ioIDU.valid) {
        state := sFINISH
        ioIDU_ready_reg := false.B
        ioEXU_valid_reg := true.B
      }.otherwise {
        state := sIDLE
        ioIDU_ready_reg := true.B
        ioEXU_valid_reg := false.B
      }
    }
    is(sFINISH) {
      when(ioEXU.ready){
        state := sIDLE
        ioIDU_ready_reg := true.B
        ioEXU_valid_reg := false.B
      }.otherwise {
        state := sFINISH
        ioIDU_ready_reg := false.B
        ioEXU_valid_reg := true.B
      }
    }
  }


}

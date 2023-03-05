package main.WBU

import chisel3._
import chisel3.util._

import main.LSU
import main.IDU

class WBUInterface extends Bundle {
  val ready   = Input(Bool())
  val valid   = Output(Bool())
  val npc     = Output(UInt(64.W))
  val ioReg   = Flipped(new IDU.RegInterface)
}

class WBU extends Module {
  val ioWBU = IO(new WBUInterface)
  val ioLSU = IO(Flipped(new LSU.LSUInterface))
  
  // FSM
  val sIDLE :: sFINISH :: Nil = Enum(2)
  val state           = RegInit(sIDLE)
  val ioLSU_ready_reg = RegInit(true.B)
  val ioWBU_valid_reg = RegInit(false.B)

  val regEn = Wire(Bool())
  regEn := (state === sIDLE) && ioLSU.valid
  ioWBU.npc := RegEnable(ioLSU.npc, 0x80000000.U, regEn)
  ioWBU.ioReg.regCtrl.wen   := Mux(regEn, ioLSU.regCtrl.wen, false.B)
  ioWBU.ioReg.regCtrl.wAddr := regCtrl.wAddr
  when(ioLSU.csrSel) {
    ioWBU.ioReg.rdData := ioLSU.csrData
  }.elsewhen(ioLSU.memSel) {
    ioWBU.ioReg.rdData := ioLSU.rData
  }.otherwise {
    ioWBU.ioReg.rdData := ioLSU.result
  }

  ioLSU.ready := ioLSU_ready_reg
  ioWBU.valid := ioWBU_valid_reg

  switch(state) {
    is(sIDLE) {
      when(ioLSU.valid) {
        state := sFINISH
        ioLSU_ready_reg := false.B
        ioWBU_valid_reg := true.B
      }.otherwise {
        state := sIDLE
        ioLSU_ready_reg := true.B
        ioWBU_valid_reg := false.B
      }
    }
    is(sFINISH) {
      when(ioWBU.ready) {
        state := sIDLE
        ioLSU_ready_reg := true.B
        ioWBU_valid_reg := false.B
      }.otherwise {
        state := sFINISH
        ioLSU_ready_reg := false.B
        ioWBU_valid_reg := true.B
      }
    }
  }

}

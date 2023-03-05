package main.LSU

import chisel3._
import chisel3.util._

import main.EXU
import main.IDU
import main.LSU
import main.MEM
import main.Tools

import main.LSU.MemLS

class LSUInterface extends Bundle {
  val ready     = Input(Bool())
  val valid     = Output(Bool())
  val result    = Output(UInt(64.W))
  val rData     = Output(UInt(64.W))
  val csrData   = Output(UInt(64.W))
  val memSel    = Output(Bool())
  val csrSel    = Output(Bool())
  val npc       = Input(UInt(64.W))
  val regCtrl   = Flipped(new IDU.RegCtrlInterface)
}

class LSU extends Module {
  val ioLSU   = IO(new LSUInterface)
  val ioEXU   = IO(Flipped(new EXU.EXUInterface))
  val ioMem   = IO(Flipped(new MEM.MemInterface))

  val CSR_u   = Module(new CSR)
  val MemLS_u = Module(new MemLS)
  val CLINT_u = Module(new CLINT)

  // FSM
  val sIDLE :: sWORK :: sFINISH :: Nil = Enum(3)
  val state = RegInit(sIDLE)
  val ioLSU_valid_reg = RegInit(false.B)
  val ioEXU_ready_reg = RegInit(true.B)

  val finish  = Wire(Bool())
  val regEn   = Wire(Bool())

  regEn           := ((state === sIDLE) && ioEXU.valid)
  ioLSU.valid     := ioLSU_valid_reg
  ioEXU.ready     := ioEXU_ready_reg
  ioLSU.result    := RegEnable(ioEXU.result, 0.U, regEn)
  ioLSU.memSel    := RegEnable(ioEXU.memCtrl.ren, false.B, regEn)
  ioLSU.csrSel    := RegEnable(ioEXU.csrCtrl.csrSel, false.B, regEn)
  ioLSU.rData     := MemLS_u.io.rData
  ioLSU.csrData   := RegEnable(CSR_u.io.csrData, 0.U, regEn)
  ioLSU.npc       := RegEnable(CSR_u.io.finalPC, 0.U, regEn)
  Tools.myRegEnable(ioLSU.regCtrl, ioEXU.regCtrl, regEn)

  MemLS_u.io.addr         := ioEXU.result
  MemLS_u.io.wData        := ioEXU.rs2Data
  MemLS_u.memCtrl.ren     := ioEXU.memCtrl.ren && regEn
  MemLS_u.memCtrl.wen     := ioEXU.memCtrl.wen && regEn
  MemLS_u.memCtrl.length  := ioEXU.memCtrl.length
  MemLS_u.memCtrl.unsign  := ioEXU.memCtrl.unsign

  CSR_u.io.rs1      := ioEXU.rs1Data
  CSR_u.io.imme     := ioEXU.imme
  CSR_u.io.pc       := ioEXU.pc
  CSR_u.io.npc      := ioEXU.npc
  CSR_u.io.timeCmp  := CLINT_u.io.timeCmp
  CSR_u.csrCtrl     <> ioEXU.csrCtrl

  CLINT_u.clintCtrl <> MemLS_u.clintCtrl
  ioMem <> MemLS_u.ioMem

  // FSM
  finish := MemLS_u.io.valid

  switch(state) {
    is(sIDLE) {
      when(ioEXU.valid) {
        when(ioEXU.memCtrl.ren && (!MemLS_u.io.hit_and_clint)) {
          state := sWORK
          ioEXU_ready_reg := false.B
          ioLSU_valid_reg := false.B
        }.otherwise {
          state := sFINISH
          ioEXU_ready_reg := false.B
          ioLSU_valid_reg := true.B
        }
      }.otherwise {
        state := sIDLE
        ioEXU_ready_reg := true.B
        ioLSU_valid_reg := false.B
      }
    }
    is(sWORK) {
      when(finish){
        state := sFINISH
        ioEXU_ready_reg := false.B
        ioLSU_valid_reg := true.B
      }.otherwise {
        state := sWORK
        ioEXU_ready_reg := false.B
        ioLSU_valid_reg := false.B
      }
    }
    is(sFINISH) {
      when(ioLSU.ready){
        state := sIDLE
        ioEXU_ready_reg := true.B
        ioLSU_valid_reg := false.B
      }.otherwise {
        state := sFINISH
        ioEXU_ready_reg := false.B
        ioLSU_valid_reg := true.B
      }
    }
  }



}



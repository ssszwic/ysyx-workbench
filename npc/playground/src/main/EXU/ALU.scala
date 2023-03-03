package main.EXU

import chisel3._
import chisel3.util._


class AluCtrlInterface extends Bundle {
  // operation
  val aluSel      = Input(UInt(4.W))
  // data flow
  val typeBSel    = Input(Bool())
  val typeJSel    = Input(Bool())
  val aupicSel    = Input(Bool())
  val immeSel     = Input(Bool())
  // branch
  val typeBEqSel  = Input(Bool())
  val jalrSel     = Input(Bool())
  // add
  val subSel      = Input(Bool()) 
  // less
  val geSel       = Input(Bool())
  val unsignSel   = Input(Bool())
  // neq
  val neqSel      = Input(Bool())
  // shift
  val rightSel    = Input(Bool())
  val arithSel    = Input(Bool())
  val wordSel     = Input(Bool())
  // mul
  val mulOp       = Input(UInt(2.W))
}
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

class ALU extends Module {
  val io = IO(new Bundle {
    val rs1       = Input(UInt(64.W))
    val rs2       = Input(UInt(64.W))
    val imme      = Input(UInt(64.W))
    val pc        = Input(UInt(64.W))
    val result    = Output(UInt(64.W))
    val npcSel    = Output(Bool())
  })
  val aluCtrl = IO(new AluCtrlInterface)

  val plusResult  = Wire(UInt(64.W))
  val lessResult  = Wire(Bool())
  val shiftResult = Wire(UInt(64.W))
  val andResult   = Wire(UInt(64.W))
  val orResult    = Wire(UInt(64.W))
  val xorResult   = Wire(UInt(64.W))
  val equalResult = Wire(Bool())

  val src2 = Wire(UInt(64.W))
  src2 := Mux(aluCtrl.immeSel, io.imme, io.rs2)

  // plus alu
  val plusResultTmp1 = Wire(UInt(64.W))
  val plusResultTmp2 = Wire(UInt(64.W))
  val plusInst = Module(new alu.Plus)
  plusInst.io.data1 := Mux(aluCtrl.typeBSel || aluCtrl.typeJSel || aluCtrl.aupicSel, io.pc, io.rs1)
  plusInst.io.data2 := Mux(aluCtrl.subSel, ~src2 + 1.U, src2)
  plusResultTmp1    := plusInst.io.result
  plusResultTmp2    := Mux(aluCtrl.wordSel, Cat(Fill(32, plusResultTmp1(31)), plusResultTmp1(31, 0)), plusResultTmp1)
  plusResult        := Mux(aluCtrl.jalrSel, Cat(plusResultTmp2(63, 1), 0.U(1.W)), plusResultTmp2)

  // less alu
  val lessInst = Module(new alu.Less)
  lessInst.io.geSel     := aluCtrl.geSel
  lessInst.io.unsignSel := aluCtrl.unsignSel
  lessInst.io.data1     := io.rs1
  lessInst.io.data2     := Mux(aluCtrl.typeBSel, io.rs2, src2)
  lessResult := lessInst.io.result

  // shift alu
  val shiftInst = Module(new alu.Shift)
  shiftInst.io.rightSel  := aluCtrl.rightSel
  shiftInst.io.arithSel  := aluCtrl.arithSel
  shiftInst.io.wordSel   := aluCtrl.wordSel
  shiftInst.io.data1     := io.rs1
  shiftInst.io.data2     := src2
  shiftResult := shiftInst.io.result

  // mul alu
  val mulInst = Module(new alu.Mul)
  mulInst.io.mulOp    := aluCtrl.mulOp
  mulInst.io.wordSel  := aluCtrl.wordSel
  mulInst.io.data1    := io.rs1
  mulInst.io.data2    := io.rs2

  // div alu
  val divInst = Module(new alu.Div)
  divInst.io.unsignSel  := aluCtrl.unsignSel
  divInst.io.wordSel    := aluCtrl.wordSel
  divInst.io.data1      := io.rs1
  divInst.io.data2      := io.rs2

  // rem alu
  val remInst = Module(new alu.Rem)
  remInst.io.unsignSel  := aluCtrl.unsignSel
  remInst.io.wordSel    := aluCtrl.wordSel
  remInst.io.data1      := io.rs1
  remInst.io.data2      := io.rs2

  // and or xor
  andResult := io.rs1 & src2
  orResult  := io.rs1 | src2
  xorResult := io.rs1 ^ src2

  // equal alu
  val equalResultTmp = Wire(Bool())
  equalResultTmp := (io.rs1 === io.rs2)
  equalResult := Mux(aluCtrl.neqSel, !equalResultTmp, equalResultTmp)

  // npcSel
  io.npcSel := aluCtrl.typeBSel && Mux(aluCtrl.typeBEqSel, equalResult, lessResult)

  // result
  when(aluCtrl.aluSel === 0.U) {
    // plus
    io.result := plusResult
  }.elsewhen(aluCtrl.aluSel === 1.U) {
    // less
    io.result := Cat(Fill(63, 0.U), lessResult.asUInt)
  }.elsewhen(aluCtrl.aluSel === 2.U) {
    // shift
    io.result := shiftResult
  }.elsewhen(aluCtrl.aluSel === 3.U) {
    // and
    io.result := andResult
  }.elsewhen(aluCtrl.aluSel === 4.U) {
    // or
    io.result := orResult
  }.elsewhen(aluCtrl.aluSel === 5.U) {
    // xor
    io.result := xorResult
  }.elsewhen(aluCtrl.aluSel === 6.U) {
    // imme
    io.result := io.imme
  }.elsewhen(aluCtrl.aluSel === 7.U) {
    // mul
    io.result := mulInst.io.result
  }.elsewhen(aluCtrl.aluSel === 8.U) {
    // imme
    io.result := divInst.io.result
  }.elsewhen(aluCtrl.aluSel === 9.U) {
    // imme
    io.result := remInst.io.result
  }.otherwise {
    // less
    io.result := 0.U
  }
}
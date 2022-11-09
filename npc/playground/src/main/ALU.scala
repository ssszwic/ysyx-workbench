package main

import chisel3._
import chisel3.util._

class ALU extends Module {
  val io = IO(new Bundle {
    val rs1       = Input(UInt(64.W))
    val rs2       = Input(UInt(64.W))
    val imme      = Input(UInt(64.W))
    val pc        = Input(UInt(64.W))
    val result    = Output(UInt(64.W))
    val nextpcSel = Output(Bool())
  })
  val io_alu = IO(Flipped(new ALUControl))

  val plusResult  = Wire(UInt(64.W))
  val lessResult  = Wire(Bool())
  val shiftResult = Wire(UInt(64.W))
  val andResult   = Wire(UInt(64.W))
  val orResult    = Wire(UInt(64.W))
  val xorResult   = Wire(UInt(64.W))
  val equalResult = Wire(Bool())

  val src2 = Wire(UInt(64.W))
  src2 := Mux(io_alu.immeSel, io.imme, io.rs2)

  // plus alu
  val plusResultTmp1 = Wire(UInt(64.W))
  val plusResultTmp2 = Wire(UInt(64.W))
  val plusInst = Module(new alu.Plus)
  plusInst.io.data1 := Mux(io_alu.typeBSel || io_alu.typeJSel || io_alu.aupicSel, io.pc, io.rs1)
  plusInst.io.data2 := Mux(io_alu.subSel, ~src2 + 1.U, src2)
  plusResultTmp1    := plusInst.io.result
  plusResultTmp2    := Mux(io_alu.wordSel, Cat(Fill(32, plusResultTmp1(31)), plusResultTmp1(31, 0)), plusResultTmp1)
  plusResult        := Mux(io_alu.jalrSel, Cat(plusResultTmp2(63, 1), 0.U(1.W)), plusResultTmp2)

  // less alu
  val lessInst = Module(new alu.Less)
  lessInst.io.geSel     := io_alu.geSel
  lessInst.io.unsignSel := io_alu.unsignSel
  lessInst.io.data1     := io.rs1
  lessInst.io.data2     := Mux(io_alu.typeBSel, io.rs2, src2)
  lessResult := lessInst.io.result

  // shift alu
  val shiftInst = Module(new alu.Shift)
  shiftInst.io.rightSel  := io_alu.rightSel
  shiftInst.io.arithSel  := io_alu.arithSel
  shiftInst.io.wordSel   := io_alu.wordSel
  shiftInst.io.data1     := io.rs1
  shiftInst.io.data2     := src2
  shiftResult := shiftInst.io.result

  // and or xor
  andResult := io.rs1 & src2
  orResult  := io.rs1 | src2
  xorResult := io.rs1 ^ src2

  // equal alu
  val equalResultTmp = Wire(Bool())
  equalResultTmp := (io.rs1 === io.rs2)
  equalResult := Mux(io_alu.neqSel, !equalResultTmp, equalResultTmp)

  // nextpcSel
  io.nextpcSel := io_alu.typeBSel && Mux(io_alu.typeBEqSel, equalResult, lessResult)

  // result
  when(io_alu.aluSel === 0.U) {
    // plus
    io.result := plusResult
  }.elsewhen(io_alu.aluSel === 1.U) {
    // less
    io.result := Cat(Fill(63, 0.U), lessResult.asUInt)
  }.elsewhen(io_alu.aluSel === 2.U) {
    // shift
    io.result := shiftResult
  }.elsewhen(io_alu.aluSel === 3.U) {
    // and
    io.result := andResult
  }.elsewhen(io_alu.aluSel === 4.U) {
    // or
    io.result := orResult
  }.elsewhen(io_alu.aluSel === 5.U) {
    // xor
    io.result := xorResult
  }.elsewhen(io_alu.aluSel === 6.U) {
    // imme
    io.result := io.imme
  }.otherwise {
    // less
    io.result := 0.U
  }
}
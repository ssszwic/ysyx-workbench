package main.IDU

import chisel3._
import chisel3.util._

import main.EXU
import main.IDU
import main.LSU
import main.IFU
import main.Tools

import main.LSU.CSRCtrlInterface

import main.LSU.MemLSCtrlInterface
class InstDecode extends Module {
  val io = IO(new Bundle {
    val inst      = Input(UInt(32.W))
    // RegFiles
    val rs1Addr   = Output(UInt(5.W))
    val rs2Addr   = Output(UInt(5.W))
    // data
    val imme      = Output(UInt(64.W))  // immediate with sign expandsion
  })
  // ALU control bundle
  val regCtrl = IO(Flipped(new RegCtrlInterface))
  val csrCtrl = IO(Flipped(new LSU.CSRCtrlInterface))
  val aluCtrl = IO(Flipped(new EXU.AluCtrlInterface))
  val memCtrl = IO(Flipped(new LSU.MemLSCtrlInterface))

  // determine the type of instruction RISBUJ
  val typeR   = Wire(Bool())
  val typeI   = Wire(Bool())
  val typeS   = Wire(Bool())
  val typeB   = Wire(Bool())
  val typeU   = Wire(Bool())
  val typeJ   = Wire(Bool())
  val typeCSR = Wire(Bool())

  val typeII  = Wire(Bool()) // imme
  val typeIL  = Wire(Bool()) // load
  val typeIJ  = Wire(Bool()) // jump

  val funct3  = Wire(UInt(3.W))
  val funct7  = Wire(UInt(7.W))
  val op5     = Wire(UInt(5.W))

  
  val ecall   = Wire(Bool())
  val ebreak  = Wire(Bool())
  val mret    = Wire(Bool())

  ecall   := (io.inst === "b0000_0000_0000_0000_0000_0000_0111_0011".U)
  ebreak  := (io.inst === "b0000_0000_0001_0000_0000_0000_0111_0011".U)
  mret    := (io.inst === "b0011_0000_0010_0000_0000_0000_0111_0011".U)

  funct3 := io.inst(14, 12)
  funct7 := io.inst(31, 25)
  op5    := io.inst(6, 2)

  typeII := (op5(4, 2) === "b001".U && op5(0) === "b0".U)
  typeIL := (op5 === "b00000".U) && (io.inst(1, 0) === "b11".U) // avoid empty inst
  typeIJ := (op5 === "b11001".U)

  typeR   := (op5(4, 2) === "b011".U) && (op5(0) === "b0".U)
  typeI   := typeII || typeIL || typeIJ
  typeS   := (op5 === "b01000".U)
  typeB   := (op5 === "b11000".U)
  typeU   := (op5(4) === "b0".U && op5(2, 0) === "b101".U)
  typeJ   := (op5 === "b11011".U)
  typeCSR := (op5 === "b11100".U && funct3(1, 0) =/= "b00".U )

  // immediate
  io.imme := Tools.Immediate(io.inst, typeR, typeI, typeS, typeB, typeU, typeJ, typeCSR)

  // RegFiles
  regCtrl.wen  := typeR || typeI || typeU || typeJ || typeCSR
  io.rs1Addr := io.inst(19, 15)
  io.rs2Addr := io.inst(24, 20)
  regCtrl.rdAddr  := io.inst(11, 7)

  // ALU control signal
  when((typeII && (funct3(2, 1) === "b01".U)) || (typeR && (funct3(2, 1) === "b01".U) && (funct7 === "b0000000".U))) {
    // I:SLTI/SLTIU R:SLT/SLTU
    aluCtrl.aluSel := 1.U
  }.elsewhen((typeII && (funct3(1, 0) === "b01".U)) || (typeR && (funct3(1, 0) === "b01".U) && (funct7(6) === "b0".U) && (funct7(4, 0) === "b00000".U))) {
    // I:SLLI/SRLI/SRAI/SRLIW/SLLIW/SRAIW R:SLL/SRL/SRA/SLLW/SRLW/SRAW
    aluCtrl.aluSel := 2.U
  }.elsewhen((typeII && (funct3 === "b111".U)) || (typeR && (funct3 === "b111".U) && (funct7 === "b0000000".U))) {
    // 	I:ANDI R:AND
    aluCtrl.aluSel := 3.U
  }.elsewhen((typeII && (funct3 === "b110".U)) || (typeR && (funct3 === "b110".U) && (funct7 === "b0000000".U))) {
    // 	I:ORI R:OR
    aluCtrl.aluSel := 4.U
  }.elsewhen((typeII && (funct3 === "b100".U)) || (typeR && (funct3 === "b100".U) && (funct7 === "b0000000".U))) {
    // 	I:XORI R:XOR
    aluCtrl.aluSel := 5.U
  }.elsewhen(op5 === "b01101".U) {
    // LUI
    aluCtrl.aluSel := 6.U
  }.elsewhen(typeR && (funct7 === "b0000001".U) && (funct3(2) === 0.U)) {
    // MUL
    aluCtrl.aluSel := 7.U
  }.elsewhen(typeR && (funct7 === "b0000001".U) && (funct3(2, 1) === "b10".U)) {
    // DIV
    aluCtrl.aluSel := 8.U
  }.elsewhen(typeR && (funct7 === "b0000001".U) && (funct3(2, 1) === "b11".U)) {
    // REM
    aluCtrl.aluSel := 9.U
  }.otherwise {
    aluCtrl.aluSel := 0.U
  }

  aluCtrl.typeBSel := typeB
  aluCtrl.typeJSel := typeJ
  aluCtrl.aupicSel := (op5 === "b00101".U)
  aluCtrl.immeSel := ~typeR
  // BEQ/BNE
  aluCtrl.typeBEqSel := typeB && (funct3(2, 1) === "b00".U)
  // JARL
  aluCtrl.jalrSel := (op5 === "b11001".U) && (funct3 === "b000".U)
  // SUB/SUBW
  aluCtrl.subSel := typeR && (funct3 === "b000".U) && (funct7 === "b0100000".U)
  // BGE/BGEU
  aluCtrl.geSel := typeB && (funct3(2) === "b1".U && funct3(0) === "b1".U)
  // R:SLTU/DIVU/DIVUW/REMU/REMUW I:SLTIU B:BLTU/BGEU 
  aluCtrl.unsignSel := (typeB && (funct3(1) === 1.U)) || (typeII && (funct3 === "b011".U)) || (typeR && (funct3 === "b011".U) && (funct7 === "b0000000".U)) || 
                      (typeR && (funct3(2) === 1.U) && (funct3(0) === 1.U) && (funct7 === "b0000001".U))
  // BNE
  aluCtrl.neqSel := typeB && (funct3 === "b001".U)
  // I:SRLI/SRLIW/SRAI/SRAIW R:SRL/SRLW/SRA/SRAW
  aluCtrl.rightSel := (typeII && (funct3 === "b101".U)) || (typeR && (funct3 === "b101".U) && (funct7(6) === "b0".U) && (funct7(4, 0) === "b00000".U))
  // I:SRAI/SRAIW R:SRA/SRAW
  aluCtrl.arithSel := (typeII && (funct3 === "b101".U) && funct7(5)) || (typeR && (funct3 === "b101".U) && (funct7 === "b0100000".U))
  // I:ADDIW/SLLIW/SRAIW/SRLIW R:ADDW/SUBW/SLLW/SRAW/SRLW/MULW/DIVW/DIVUW/REMW/REMUW
  aluCtrl.wordSel := (typeII  && op5(1)) || (typeR  && op5(1))
  // mulOP
  aluCtrl.mulOp := funct3(1, 0);

  // CSR control signal
  csrCtrl.ecallSel := ecall
  csrCtrl.mretSel  := mret
  csrCtrl.addr     := io.inst(31, 20)
  csrCtrl.op       := funct3;
  csrCtrl.csrSel   := typeCSR

  // Mem control
  memCtrl.wen := typeS
  memCtrl.ren := typeIL
  // 0=>LB/LBU 1=>LH/LHU 2=>LW/LWU 3=>LD
  memCtrl.length := funct3(1, 0)
  // LWU/LHU/LBU
  memCtrl.unsign := funct3(2)

  // tell sim break when inst is ebreak
  val EbreakInst = Module(new Ebreak)
  EbreakInst.io.ebreak := ebreak
}

class Ebreak extends BlackBox with HasBlackBoxResource {
  val io = IO(new Bundle {
    val ebreak = Input(Bool())
  })
  addResource("/Ebreak.v")
}

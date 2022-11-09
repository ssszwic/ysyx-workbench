package main

import chisel3._
import chisel3.util._

object MyTools {
  def Immediate(inst: UInt, typeR: Bool, typeI: Bool, typeS: Bool, typeB: Bool, typeU: Bool, typeJ: Bool): UInt = {
    require(inst.getWidth == 32)
    val imme0 = Wire(UInt(33.W))
    val imme1 = Wire(UInt(11.W))
    val imme2 = Wire(UInt(8.W))
    val imme3 = Wire(UInt(1.W))
    val imme4 = Wire(UInt(6.W))
    val imme5 = Wire(UInt(4.W))
    val imme6 = Wire(UInt(1.W))

    imme0 := Fill(33, inst(31))

    when(typeU) {
      imme1 := inst(31, 20)
    }.otherwise{
      imme1 := Fill(11, inst(31))
    }

    when(typeU || typeJ) {
      imme2 := inst(19, 12)
    }.otherwise{
      imme2 := Fill(8, inst(31))
    }

    when(typeJ) {
      imme3 := inst(20)
    }.elsewhen(typeU) {
      imme3 := 0.U
    }.elsewhen(typeB) {
      imme3 := inst(7)
    }.otherwise{
      imme3 := inst(31)
    }

    when(typeU) {
      imme4 := Fill(6, 0.U)
    }.otherwise{
      imme4 := inst(30, 25)
    }

    when(typeJ || typeI) {
      imme5 := inst(24, 21)
    }.elsewhen(typeU) {
      imme5 := Fill(4, 0.U)
    }.otherwise{
      imme5 := inst(11, 8)
    }

    when(typeI) {
      imme6 := inst(20)
    }.elsewhen(typeS) {
      imme6 := inst(7)
    }.otherwise{
      imme6 := 0.U
    }

    Seq(imme0, imme1, imme2, imme3, imme4, imme5, imme6).reduceLeft(Cat(_, _))
  }

}

class ALUControl extends Bundle {
  // operation
  val aluSel      = Output(UInt(3.W))
  // data flow
  val typeBSel    = Output(Bool())
  val typeJSel    = Output(Bool())
  val aupicSel    = Output(Bool())
  val immeSel     = Output(Bool())
  // branch
  val typeBEqSel  = Output(Bool())
  val jalrSel     = Output(Bool())
  // add
  val subSel      = Output(Bool()) 
  // less
  val geSel       = Output(Bool())
  val unsignSel   = Output(Bool())
  // neq
  val neqSel      = Output(Bool())
  // shift
  val rightSel    = Output(Bool())
  val arithSel    = Output(Bool())
  val wordSel     = Output(Bool())
}

class IDU extends Module {
  val io = IO(new Bundle {
    val inst      = Input(UInt(32.W))
    // RegFiles
    val rs1Addr   = Output(UInt(5.W))
    val rs2Addr   = Output(UInt(5.W))
    val rdAddr    = Output(UInt(5.W))
    val wenReg    = Output(Bool())      // write enable to RegFiles
    // data
    val imme      = Output(UInt(64.W))  // immediate with sign expandsion
    // Mem control
    val wenMem    = Output(Bool())
    val renMem   = Output(Bool())
    val lengthMem = Output(UInt(2.W))
    val unsignMem = Output(Bool())
    // Unconditional Jump for jal or jarl
    val jumpSel   = Output(Bool())
  })
  // ALU control bundle
  val io_alu = IO(new ALUControl)

  // determine the type of instruction RISBUJ
  val typeR   = Wire(Bool())
  val typeI   = Wire(Bool())
  val typeS   = Wire(Bool())
  val typeB   = Wire(Bool())
  val typeU   = Wire(Bool())
  val typeJ   = Wire(Bool())

  val typeII  = Wire(Bool()) // imme
  val typeIL  = Wire(Bool()) // load
  val typeIJ  = Wire(Bool()) // jump

  val funct3  = Wire(UInt(3.W))
  val funct7  = Wire(UInt(7.W))
  val op5     = Wire(UInt(5.W))

  funct3 := io.inst(14, 12)
  funct7 := io.inst(31, 25)
  op5    := io.inst(6, 2)

  typeII := (op5(4, 2) === "b001".U && op5(0) === "b0".U)
  typeIL := (op5 === "b00000".U)
  typeIJ := (op5 === "b11011".U)

  typeR := (op5(4, 2) === "b011".U) && (op5(0) === "b0".U)
  typeI := typeII || typeIL || typeIJ
  typeS := (op5 === "b01000".U)
  typeB := (op5 === "b11000".U)
  typeU := (op5(4) === "b0".U && op5(2, 0) === "b101".U)
  typeJ := (op5 === "b11011".U)

  // immediate
  io.imme := MyTools.Immediate(io.inst, typeR, typeI, typeS, typeB, typeU, typeJ)

  // RegFiles
  io.wenReg  := typeR || typeI || typeU || typeJ
  io.rs1Addr := io.inst(19, 15)
  io.rs2Addr := io.inst(24, 20)
  io.rdAddr  := io.inst(11, 7)

  // ALU control signal
  when((typeII && (funct3(2, 1) === "b01".U)) || (typeR && (funct3(2, 1) === "b01".U) && (funct7 === "b0000000".U))) {
    // I:SLTI/SLTIU R:SLT/SLTU
    io_alu.aluSel := 1.U
  }.elsewhen((typeII && (funct3(1, 0) === "b01".U)) || (typeR && (funct3(1, 0) === "b01".U) && (funct7(6) === "b0".U) && (funct7(4, 0) === "b00000".U))) {
    // I:SLLI/SRLI/SRAI/SRLIW/SLLIW/SRAIW R:SLL/SRL/SRA/SLLW/SRLW/SRAW
    io_alu.aluSel := 2.U
  }.elsewhen((typeII && (funct3 === "b111".U)) || (typeR && (funct3 === "b111".U) && (funct7 === "b0000000".U))) {
    // 	I:ANDI R:AND
    io_alu.aluSel := 3.U
  }.elsewhen((typeII && (funct3 === "b110".U)) || (typeR && (funct3 === "b110".U) && (funct7 === "b0000000".U))) {
    // 	I:ORI R:OR
    io_alu.aluSel := 4.U
  }.elsewhen((typeII && (funct3 === "b100".U)) || (typeR && (funct3 === "b100".U) && (funct7 === "b0000000".U))) {
    // 	I:XORI R:XOR
    io_alu.aluSel := 5.U
  }.elsewhen(op5 === "b01101".U) {
    // LUI
    io_alu.aluSel := 6.U
  }.otherwise {
    io_alu.aluSel := 0.U
  }

  io_alu.typeBSel := typeB
  io_alu.typeJSel := typeJ
  io_alu.aupicSel := (op5 === "b00101".U)
  io_alu.immeSel := ~typeR
  // BEQ/BNE
  io_alu.typeBEqSel := typeB && (funct3(2, 1) === "b00".U)
  // JARL
  io_alu.jalrSel := (op5 === "b11001".U) && (funct3 === "b000".U)
  // SUB/SUBW
  io_alu.subSel := typeR && (funct3 === "b000".U) && (funct7 === "b0100000".U)
  // BGE/BGEU
  io_alu.geSel := typeB && (funct3(2) === "b1".U && funct3(0) === "b1".U)
  // R:SLTU I:SLTIU B:BLTU/BGEU
  io_alu.unsignSel := (typeB && (funct3 === "b011".U)) || (typeII && (funct3 === "b011".U)) || (typeR && (funct3 === "b011".U) && (funct7 === "b0000000".U))
  // BNE
  io_alu.neqSel := typeB && (funct3 === "b001".U)
  // I:SRLI/SRLIW/SRAI/SRAIW R:SRL/SRLW/SRA/SRAW
  io_alu.rightSel := (typeII && (funct3 === "b101".U)) || (typeR && (funct3 === "b101".U) && (funct7(6) === "b0".U) && (funct7(4, 0) === "b00000".U))
  // I:SRAI/SRAIW R:SRA/SRAW
  io_alu.arithSel := (typeII && (funct3 === "b101".U) && funct7(5)) || (typeR && (funct3 === "b101".U) && (funct7 === "b0100000".U))
  // I:ADDIW/SLLIW/SRAIW/SRLIW R:ADDW/SUBW/SLLW/SRAW/SRLW
  io_alu.wordSel := (typeII  && op5(1)) || (typeR  && op5(1))

  // Mem control
  io.wenMem := typeS
  io.renMem := typeIL
  // 0=>LB/LBU 1=>LH/LHU 2=>LW/LWU 3=>LD
  io.lengthMem := funct3(1, 0)
  // LWU/LHU/LBU
  io.unsignMem := funct3(2)

  // other control
  io.jumpSel := typeJ || typeIJ

  val EbreakInst = Module(new Ebreak)
  EbreakInst.io.b := io.jumpSel
}

class Ebreak extends BlackBox with HasBlackBoxResource {
  val io = IO(new Bundle {
    val b = Input(Bool())
  })

  addResource("/home/ssszw/Work/ysyx-workbench/npc/playground/src/resource/Ebreak.v")

}
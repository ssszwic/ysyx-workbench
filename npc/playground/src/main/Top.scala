package main

import chisel3._
import chisel3.util._

class Top extends Module {
  val io = IO(new Bundle {
    // control 
    val cpuEn     = Input(Bool())
    // inst Memory
    val instData  = Input(UInt(64.W))
    val instAddr  = Output(UInt(64.W))
  })

  // declare module
  val IFUInst = Module(new IFU)
  val IDUInst = Module(new IDU)
  val RegFilesInst = Module(new RegFiles)
  val ALUInst = Module(new ALU)
  val MemCtrlInst = Module(new MemCtrl)

  // default nextpc = pc + 4
  val nextpcDefault = Wire(UInt(64.W))
  nextpcDefault := IFUInst.io.pc + 4.U

  // IO
  io.instAddr := IFUInst.io.pc

  // MemCtrlInst
  MemCtrlInst.io.wData  := RegFilesInst.io.rs2Data
  MemCtrlInst.io.addr   := ALUInst.io.result
  MemCtrlInst.io.wen    := IDUInst.io.wenMem
  MemCtrlInst.io.ren    := IDUInst.io.renMem
  MemCtrlInst.io.length := IDUInst.io.lengthMem
  MemCtrlInst.io.unsign := IDUInst.io.unsignMem

  // IFU
  IFUInst.io.nextpc   := Mux(ALUInst.io.nextpcSel || IDUInst.io.jumpSel, ALUInst.io.result, nextpcDefault)
  IFUInst.io.instGet  := io.instData
  IFUInst.io.pcEn     := io.cpuEn

  // IDU
  IDUInst.io.inst := IFUInst.io.inst

  // RegFiles
  RegFilesInst.io.rs1Addr := IDUInst.io.rs1Addr
  RegFilesInst.io.rs2Addr := IDUInst.io.rs2Addr
  RegFilesInst.io.wen     := IDUInst.io.wenReg
  RegFilesInst.io.wAddr   := IDUInst.io.rdAddr
  RegFilesInst.io.wData   := Mux(IDUInst.io.jumpSel, nextpcDefault, 
                                  Mux(IDUInst.io.renMem, MemCtrlInst.io.rData, ALUInst.io.result))

  // ALU
  ALUInst.io.rs1  := RegFilesInst.io.rs1Data
  ALUInst.io.rs2  := RegFilesInst.io.rs2Data
  ALUInst.io.imme := IDUInst.io.imme
  ALUInst.io.pc   := IFUInst.io.pc
  ALUInst.io_alu  <> IDUInst.io_alu
}
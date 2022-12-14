package main

import chisel3._
import chisel3.util._

class Top extends Module {
  val io = IO(new Bundle {
    // control 
    val cpuEn       = Input(Bool())
    // verilator debug
    val jalSel      = Output(Bool()) // jal
    val jalrSel     = Output(Bool()) // jalr
    val csrOrInter = Output(Bool()) // csrSel and interrupt
    val nextPC      = Output(UInt(64.W))
    val regWen      = Output(Bool())
    val regAddr     = Output(UInt(5.W))
    val regWData    = Output(UInt(64.W))
    val clintWR     = Output(Bool())
  })

  // declare module
  val IFUInst       = Module(new IFU)
  val IDUInst       = Module(new IDU)
  val RegFilesInst  = Module(new RegFiles)
  val ALUInst       = Module(new ALU)
  val MemCtrlInst   = Module(new MemCtrl)
  val MemVirtual    = Module(new MemVirtual)
  val CSRInst       = Module(new CSR)
  val CLINTInst     = Module(new CLINT)

  // default nextpc = pc + 4
  val nextpcDefault = Wire(UInt(64.W))
  nextpcDefault := IFUInst.io.pc + 4.U

  val regWData = Wire(UInt(64.W))
  regWData := Mux(IDUInst.io_csr.csrSel, CSRInst.io.csrData,
                      Mux(IDUInst.io.jumpSel, nextpcDefault, 
                          Mux(IDUInst.io.renMem, MemCtrlInst.io.rData, ALUInst.io.result)))

  // IO
  io.jalSel     := IDUInst.io_alu.typeJSel
  io.jalrSel    := IDUInst.io_alu.jalrSel
  io.nextPC     := CSRInst.io.finalPC
  // difftest
  io.regWen     := IDUInst.io.wenReg
  io.regAddr    := IDUInst.io.rdAddr
  io.regWData   := regWData
  io.csrOrInter := IDUInst.io_csr.csrSel || CSRInst.io.interrupt
  io.clintWR    := CLINTInst.io.clintWR

  // MemCtrlInst
  MemCtrlInst.io.wData  := RegFilesInst.io.rs2Data
  MemCtrlInst.io.addr   := ALUInst.io.result
  MemCtrlInst.io.wen    := IDUInst.io.wenMem
  MemCtrlInst.io.ren    := IDUInst.io.renMem
  MemCtrlInst.io.length := IDUInst.io.lengthMem
  MemCtrlInst.io.unsign := IDUInst.io.unsignMem
  MemCtrlInst.io_virtualMem.rData := MemVirtual.io.rData

  // MemVirtual
  MemVirtual.io.ren     := MemCtrlInst.io_virtualMem.ren
  MemVirtual.io.addr    := MemCtrlInst.io_virtualMem.addr
  MemVirtual.io.wen     := MemCtrlInst.io_virtualMem.wen
  MemVirtual.io.wData   := MemCtrlInst.io_virtualMem.wData
  MemVirtual.io.wMask   := MemCtrlInst.io_virtualMem.wMask

  // IFU
  IFUInst.io.clock    := clock
  IFUInst.io.reset    := reset
  IFUInst.io.nextpc   := CSRInst.io.finalPC
  IFUInst.io.pcEn     := io.cpuEn

  // IDU
  IDUInst.io.inst := IFUInst.io.inst

  // RegFiles
  RegFilesInst.io.clock   := clock
  RegFilesInst.io.reset   := reset
  RegFilesInst.io.rs1Addr := IDUInst.io.rs1Addr
  RegFilesInst.io.rs2Addr := IDUInst.io.rs2Addr
  RegFilesInst.io.wen     := IDUInst.io.wenReg
  RegFilesInst.io.wAddr   := IDUInst.io.rdAddr
  RegFilesInst.io.wData   := regWData

  // ALU
  ALUInst.io.rs1  := RegFilesInst.io.rs1Data
  ALUInst.io.rs2  := RegFilesInst.io.rs2Data
  ALUInst.io.imme := IDUInst.io.imme
  ALUInst.io.pc   := IFUInst.io.pc
  ALUInst.io_alu  <> IDUInst.io_alu

  // CSR
  CSRInst.io.rs1            := RegFilesInst.io.rs1Data
  CSRInst.io.pc             := IFUInst.io.pc
  CSRInst.io.nextpcNoExcep  := Mux(ALUInst.io.nextpcSel || IDUInst.io.jumpSel, ALUInst.io.result, nextpcDefault)
  CSRInst.io.imme           := IDUInst.io.imme
  CSRInst.io.timeCmp        := CLINTInst.io.timeCmp
  CSRInst.io_csr            <> IDUInst.io_csr

  // CLINT
  CLINTInst.io_mem <> MemCtrlInst.io_clint
}
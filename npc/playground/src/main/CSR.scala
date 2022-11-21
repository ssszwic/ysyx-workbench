package main

import chisel3._
import chisel3.util._

class CSR extends Module {
  val io = IO(new Bundle {
    val pc        = Input(UInt(64.W))
    val rs1       = Input(UInt(64.W))
    val imme      = Input(UInt(64.W))
    val csrData   = Output(UInt(64.W))
    val excepSel  = Output(Bool())
  })
  val io_csr = IO(Flipped(new CSRControl))

  val MSTATUS = 0x300
  val MTVEC   = 0x305
  val MEPC    = 0x341
  val MCAUSE  = 0x342

  val mstatus = RegInit("xa0000_1800".U(64.W))
  val mtvec   = RegInit(0.U(64.W))
  val mepc    = RegInit(0.U(64.W))
  val mcause  = RegInit(0.U(64.W))
  // default open MTIM
  val mie     = RegInit("b0000_0000_1000_0000".U(64.W))
  val mip     = RegInit("b0000_0000_0000_0000".U(64.W))

  val csr     = Wire(UInt(64.W))
  val src     = Wire(UInt(64.W))
  val dest    = Wire(UInt(64.W))

  src := Mux(io_csr.op(2) === 1.U, io.imme, io.rs1)

  when(io_csr.addr === MSTATUS.U) {
    csr := mstatus
  }.elsewhen(io_csr.addr === MTVEC.U) {
    csr := mtvec
  }.elsewhen(io_csr.addr === MEPC.U) {
    csr := mepc
  }.elsewhen(io_csr.addr === MCAUSE.U) {
    csr := mcause
  }.otherwise{
    csr := 0.U
  }

  // read csr
  when(io_csr.ecallSel) {
    io.csrData := mtvec
  }.elsewhen(io_csr.mretSel) {
    io.csrData := mepc
  }.otherwise {
    io.csrData := csr
  }

  io.excepSel := io_csr.ecallSel || io_csr.mretSel

  // calculate
  when(io_csr.op(1, 0) === "b01".U) {
    // write
    dest := src
  }.elsewhen(io_csr.op(1, 0)  === "b10".U) {
    // set
    dest := csr | src
  }.otherwise{
    // clear
    dest := csr & (~src)
  }
  
  // write csr
  when(io_csr.addr === MSTATUS.U) {
    mstatus := dest
  }.otherwise {
    mstatus := mstatus
  }

  when(io_csr.addr === MTVEC.U) {
    mtvec := dest
  }.otherwise {
    mtvec := mtvec
  }

  when(io_csr.ecallSel) {
    mepc := io.pc
  }.elsewhen(io_csr.addr === MEPC.U) {
    mepc := dest
  }.otherwise {
    mepc := mepc
  }

  when(io_csr.ecallSel) {
    // enviroment call from M-mode
    mcause := "xb".U
  }.elsewhen(io_csr.addr === MCAUSE.U) {
    mcause := dest
  }.otherwise {
    mcause := mcause
  }

}
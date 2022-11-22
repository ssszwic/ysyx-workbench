package main

import chisel3._
import chisel3.util._

class CSR extends Module {
  val io = IO(new Bundle {
    // timer interrupt
    val timeCmp       = Input(Bool())
    val pc            = Input(UInt(64.W))
    // the next pc without exception
    val nextpcNoExcep = Input(UInt(64.W))
    val rs1           = Input(UInt(64.W))
    val imme          = Input(UInt(64.W))
    val csrData       = Output(UInt(64.W))
    val finalPC       = Output(UInt(64.W))
    // verilator debug for difftest
    val interrupt     = Output(Bool())
  })
  val io_csr = IO(Flipped(new CSRControl))

  val MSTATUS = 0x300
  val MTVEC   = 0x305
  val MEPC    = 0x341
  val MCAUSE  = 0x342
  val MIE     = 0x304
  val MIP     = 0x344

  val mstatus = RegInit("xa0000_1808".U(64.W))
  val mtvec   = RegInit(0.U(64.W))
  val mepc    = RegInit(0.U(64.W))
  val mcause  = RegInit(0.U(64.W))
  // default close MTIM
  val mie     = RegInit("b0000_0000_0000_0000".U(64.W))
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
  }.elsewhen(io_csr.addr === MIE.U) {
    csr := mie
  }.elsewhen(io_csr.addr === MIP.U) {
    csr := mip
  }.otherwise{
    csr := 0.U
  }

  // write wo generate reg
  io.csrData := csr

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

  when(io_csr.addr === MIP.U) {
    mip := dest
  }.elsewhen(io.timeCmp) {
    mip := "x_80".U
  }.otherwise {
    mip := 0.U
  }

  // intrrupt
  when(io_csr.ecallSel) {
    mstatus       := Seq(mstatus(63, 8), mstatus(3), mstatus(6, 4), 0.U(1.W), mstatus(2, 0)).reduceLeft(Cat(_, _))
    mepc          := io.pc
    mcause        := "x_b".U
    mtvec         := Mux(io_csr.addr === MTVEC.U || , dest, mtvec)
    mie           := Mux(io_csr.addr === MIE.U, dest, mie)
    io.finalPC    := mtvec
    io.interrupt  := true.B
  }.elsewhen(io_csr.mretSel) {
    mstatus       := Seq(mstatus(63, 4), mstatus(7), mstatus(2, 0)).reduceLeft(Cat(_, _))
    mepc          := Mux(io_csr.addr === MEPC.U, dest, mepc)
    mcause        := Mux(io_csr.addr === MCAUSE.U, dest, mcause)
    mtvec         := Mux(io_csr.addr === MTVEC.U, dest, mtvec)
    mie           := Mux(io_csr.addr === MIE.U, dest, mie)
    io.finalPC    := mepc
    io.interrupt  := true.B
  }.elsewhen((mstatus(3) === 1.U) && (mip(7) === 1.U) && (mie(7) === 1.U)) {
    mstatus       := Seq(mstatus(63, 8), mstatus(3), mstatus(6, 4), 0.U(1.W), mstatus(2, 0)).reduceLeft(Cat(_, _))
    mepc          := io.nextpcNoExcep
    mcause        := "x_7".U
    mtvec         := Mux(io_csr.addr === MTVEC.U, dest, mtvec)
    mie           := Mux(io_csr.addr === MIE.U, dest, mie)
    io.finalPC    := mtvec
    io.interrupt  := true.B
  }.otherwise {
    mstatus       := Mux(io_csr.addr === MSTATUS.U, dest, mstatus)
    mepc          := Mux(io_csr.addr === MEPC.U, dest, mepc)
    mcause        := Mux(io_csr.addr === MCAUSE.U, dest, mcause)
    mtvec         := Mux(io_csr.addr === MTVEC.U, dest, mtvec)
    mie           := Mux(io_csr.addr === MIE.U, dest, mie)
    io.finalPC    := io.nextpcNoExcep
    io.interrupt  := false.B
  }
}
package main.LSU

import chisel3._
import chisel3.util._

class CSRCtrlInterface extends Bundle {
  val ecallSel  = Input(Bool())
  val mretSel   = Input(Bool())
  val csrSel    = Input(Bool())
  val addr      = Input(UInt(12.W))
  val op        = Input(UInt(3.W))
}

class CSR extends Module {
  val io = IO(new Bundle {
    // timer interrupt
    val timeCmp       = Input(Bool())
    val pc            = Input(UInt(64.W))
    // the next pc without exception
    val npc           = Input(UInt(64.W))
    val rs1           = Input(UInt(64.W))
    val imme          = Input(UInt(64.W))
    val csrData       = Output(UInt(64.W))
    val finalPC       = Output(UInt(64.W))
    // verilator debug for difftest
    // val interrupt     = Output(Bool())
  })
  val csrCtrl = IO(new CSRCtrlInterface)

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

  src := Mux(csrCtrl.op(2) === 1.U, io.imme, io.rs1)

  when(csrCtrl.addr === MSTATUS.U) {
    csr := mstatus
  }.elsewhen(csrCtrl.addr === MTVEC.U) {
    csr := mtvec
  }.elsewhen(csrCtrl.addr === MEPC.U) {
    csr := mepc
  }.elsewhen(csrCtrl.addr === MCAUSE.U) {
    csr := mcause
  }.elsewhen(csrCtrl.addr === MIE.U) {
    csr := mie
  }.elsewhen(csrCtrl.addr === MIP.U) {
    csr := mip
  }.otherwise{
    csr := 0.U
  }

  // write wo generate reg
  io.csrData := csr

  // calculate
  when(csrCtrl.op(1, 0) === "b01".U) {
    // write
    dest := src
  }.elsewhen(csrCtrl.op(1, 0)  === "b10".U) {
    // set
    dest := csr | src
  }.otherwise{
    // clear
    dest := csr & (~src)
  }

  when(csrCtrl.addr === MIP.U) {
    mip := dest
  }.elsewhen(io.timeCmp) {
    mip := "x_80".U
  }.otherwise {
    mip := 0.U
  }

  // intrrupt
  when(csrCtrl.ecallSel) {
    mstatus       := Seq(mstatus(63, 8), mstatus(3), mstatus(6, 4), 0.U(1.W), mstatus(2, 0)).reduceLeft(Cat(_, _))
    mepc          := io.pc
    mcause        := "x_b".U
    mtvec         := Mux(csrCtrl.addr === MTVEC.U && csrCtrl.csrSel, dest, mtvec)
    mie           := Mux(csrCtrl.addr === MIE.U && csrCtrl.csrSel, dest, mie)
    io.finalPC    := mtvec
    // io.interrupt  := true.B
  }.elsewhen(csrCtrl.mretSel) {
    mstatus       := Seq(mstatus(63, 4), mstatus(7), mstatus(2, 0)).reduceLeft(Cat(_, _))
    mepc          := Mux(csrCtrl.addr === MEPC.U && csrCtrl.csrSel, dest, mepc)
    mcause        := Mux(csrCtrl.addr === MCAUSE.U && csrCtrl.csrSel, dest, mcause)
    mtvec         := Mux(csrCtrl.addr === MTVEC.U && csrCtrl.csrSel, dest, mtvec)
    mie           := Mux(csrCtrl.addr === MIE.U && csrCtrl.csrSel, dest, mie)
    io.finalPC    := mepc
    // io.interrupt  := true.B
  }.elsewhen((mstatus(3) === 1.U) && (mip(7) === 1.U) && (mie(7) === 1.U)) {
    mstatus       := Seq(mstatus(63, 8), mstatus(3), mstatus(6, 4), 0.U(1.W), mstatus(2, 0)).reduceLeft(Cat(_, _))
    mepc          := io.npc
    mcause        := "x_7".U
    mtvec         := Mux(csrCtrl.addr === MTVEC.U && csrCtrl.csrSel, dest, mtvec)
    mie           := Mux(csrCtrl.addr === MIE.U && csrCtrl.csrSel, dest, mie)
    io.finalPC    := mtvec
    // io.interrupt  := true.B
  }.otherwise {
    mstatus       := Mux(csrCtrl.addr === MSTATUS.U && csrCtrl.csrSel, dest, mstatus)
    mepc          := Mux(csrCtrl.addr === MEPC.U && csrCtrl.csrSel, dest, mepc)
    mcause        := Mux(csrCtrl.addr === MCAUSE.U && csrCtrl.csrSel, dest, mcause)
    mtvec         := Mux(csrCtrl.addr === MTVEC.U && csrCtrl.csrSel, dest, mtvec)
    mie           := Mux(csrCtrl.addr === MIE.U && csrCtrl.csrSel, dest, mie)
    io.finalPC    := io.npc
    // io.interrupt  := false.B
  }
}
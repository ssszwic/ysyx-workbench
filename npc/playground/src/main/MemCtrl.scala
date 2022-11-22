package main

import chisel3._
import chisel3.util._

class MemInterface extends Bundle {
  // read
  val ren   = Output(Bool())
  val addr  = Output(Bool())
  val rData = Input(UInt(64.W))
  // write
  val wen   = Output(Bool())
  val wData = Output(UInt(64.W))
  val wMask = Output(UInt(64.W))
}

class MemCtrl extends Module {
  val io = IO(new Bundle {
    // read
    val ren       = Input(Bool())
    val addr      = Input(UInt(64.W))
    val rData     = Output(UInt(64.W))
    // write
    val wen       = Input(Bool())
    val wData     = Input(UInt(64.W))
    // control
    val length    = Input(UInt(2.W))
    val unsign    = Input(Bool())
  })

  val io_virtualMem = IO(new MemInterface)
  val io_clint      = IO(new MemInterface)

  val mask = Wire(UInt(8.W))

  // virtual mem or clint true: mem
  val virtualMemSel = Wire(Bool())

  
  // addr
  val addrAlig = Wire(UInt(64.W))
  addrAlig := Cat(io.addr(63, 3), Fill(3, 0.U(1.W)))

  virtualMemSel := (addrAlig === "x_200_4000".U) || (addrAlig === "x_200_BFF8".U)

  // In eight-byte units
  // Consider that there is no cross-unit reading and writing
  
  when (io.length === 0.U) {
    mask := 1.U << io.addr(2, 0)
  }.elsewhen(io.length === 1.U) {
    mask := "b11".U << io.addr(2, 0)
  }.elsewhen(io.length === 2.U) {
    mask := "b1111".U << io.addr(2, 0)
  }.otherwise{
    mask := "b1111_1111".U
  }

  val wData = Wire(UInt(64.W))
  wData := io.wData << Cat(io.addr(2, 0), "b000".U(3.W))

  io_virtualMem.ren     := Mux(virtualMemSel, io.ren, false.B)
  io_virtualMem.addr    := addrAlig
  io_virtualMem.wen     := Mux(virtualMemSel, io.wen, false.B)
  io_virtualMem.wData   := wData
  io_virtualMem.wMask   := mask

  io_clint.ren          := Mux(!virtualMemSel, io.ren, false.B)
  io_clint.addr         := addrAlig
  io_clint.wen          := Mux(!virtualMemSel, io.wen, false.B)
  io_clint.wData        := wData
  io_clint.wMask        := mask

  // read data
  val dataRead = Wire(UInt(64.W))
  val dataByte = Wire(UInt(8.W))
  val dataHalf = Wire(UInt(16.W))
  val dataWord = Wire(UInt(32.W))
  val dataDoub = Wire(UInt(64.W))

  dataRead := Mux(virtualMemSel, io_virtualMem.rData, io_clint.rData)
  dataByte := 0.U
  dataHalf := 0.U
  dataWord := 0.U
  dataDoub := 0.U

  when (io.length === 0.U) {
    for (i <- 0 until 8) {
      when(mask(i) === 1.U) {
        dataByte := dataRead(8 * (i + 1) - 1, 8 * i)
      }
    }
  }.elsewhen(io.length === 1.U) {
    for (i <- 0 until 4) {
      when(mask(2 * (i + 1) - 1, 2 * i) === "b11".U) {
        dataHalf := dataRead(16 * (i + 1) - 1, 16 * i)
      }
    }
  }.elsewhen(io.length === 2.U) {
    for (i <- 0 until 2) {
      when(mask(4 * (i + 1) - 1, 4 * i) === "b1111".U) {
        dataWord := dataRead(32 * (i + 1) - 1, 32 * i)
      }
    }
  }.otherwise{
    dataDoub := dataRead
  }

  // expend
  val rData = Wire(UInt(64.W))
  when (io.length === 0.U) {
    when(io.unsign) {
      rData := Cat(Fill(56, 0.U(1.W)), dataByte)
    }.otherwise{
      rData := Cat(Fill(56, dataByte(7)), dataByte)
    }
  }.elsewhen(io.length === 1.U) {
    when(io.unsign) {
      rData := Cat(Fill(48, 0.U(1.W)), dataHalf)
    }.otherwise{
      rData := Cat(Fill(48, dataHalf(15)), dataHalf)
    }
  }.elsewhen(io.length === 2.U) {
    when(io.unsign) {
      rData := Cat(Fill(32, 0.U(1.W)), dataWord)
    }.otherwise{
      rData := Cat(Fill(32, dataWord(31)), dataWord)
    }
  }.otherwise{
    rData := dataDoub
  }
  
  io.rData := rData
}


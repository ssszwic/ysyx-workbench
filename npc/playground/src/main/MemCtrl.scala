package main

import chisel3._
import chisel3.util._

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

  val mask = Wire(UInt(8.W))
  
  // addr
  val addrAlig = Wire(UInt(64.W))
  addrAlig := Cat(io.addr(63, 3), Fill(3, 0.U(1.W)))

  // In eight-byte units
  // Consider that there is no cross-unit reading and writing
  
  when (io.length === 0.U) {
    mask := 1.U << io.addr(2, 0)
  }.elsewhen(io.length === 1.U) {
    mask := "b11".U << io.addr(2, 0)
  }.elsewhen(io.length === 1.U) {
    mask := "b1111".U << io.addr(2, 0)
  }.otherwise{
    mask := "b1111_1111".U
  }

  val wData = Wire(UInt(64.W))
  wData := io.wData << Cat(io.addr(2, 0), "b000".U)

  val MemInst_data = Module(new MemVirtual)
  MemInst_data.io.ren     := io.ren
  MemInst_data.io.addr    := addrAlig
  MemInst_data.io.wen     := io.wen
  MemInst_data.io.wData   := wData
  MemInst_data.io.wMask   := mask

  // read data
  val dataByte = Wire(UInt(8.W))
  val dataHalf = Wire(UInt(16.W))
  val dataWord = Wire(UInt(32.W))
  val dataDoub = Wire(UInt(64.W))

  dataByte := 0.U
  dataHalf := 0.U
  dataWord := 0.U
  dataDoub := 0.U

  when (io.length === 0.U) {
    for (i <- 0 until 8) {
      when(mask(i) === 1.U) {
        dataByte := MemInst_data.io.rData(8 * (i + 1) - 1, 8 * i)
      }
    }
  }.elsewhen(io.length === 1.U) {
    for (i <- 0 until 4) {
      when(mask(2 * (i + 1) - 1, 2 * i) === "b11".U) {
        dataHalf := MemInst_data.io.rData(16 * (i + 1) - 1, 16 * i)
      }
    }
  }.elsewhen(io.length === 1.U) {
    for (i <- 0 until 2) {
      when(mask(4 * (i + 1) - 1, 4 * i) === "b1111".U) {
        dataWord := MemInst_data.io.rData(32 * (i + 1) - 1, 32 * i)
      }
    }
  }.otherwise{
    dataDoub := MemInst_data.io.rData
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
  }.elsewhen(io.length === 1.U) {
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


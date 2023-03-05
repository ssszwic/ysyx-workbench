package main.LSU

import chisel3._
import chisel3.util._

import main.MEM

class MemLSCtrlInterface extends Bundle {
  val ren     = Input(Bool())
  // write
  val wen     = Input(Bool())
  // control
  val length  = Input(UInt(2.W))
  val unsign  = Input(Bool())
}

class MemLS extends Module {
  val io = IO(new Bundle {
    // read
    val addr          = Input(UInt(64.W))
    val rData         = Output(UInt(64.W))
    // write
    val wData         = Input(UInt(64.W))
    // control
    val hit_and_clint = Output(Bool())
    val valid         = Output(Bool())
  })
  val memCtrl       = IO(new MemLSCtrlInterface)
  val clintCtrl     = IO(Flipped(new ClintCtrlInterface))
  val ioMem         = IO(Flipped(new MEM.MemInterface))

  val mask        = Wire(UInt(8.W))
  // virtual mem or clint true: mem
  val clintSel    = Wire(Bool())
  val maskReg     = RegEnable(mask, 0.U, (memCtrl.ren || memCtrl.wen))
  val clintSelReg = RegEnable(clintSel, false.B, (memCtrl.ren || memCtrl.wen))
  val lengthReg   = RegEnable(memCtrl.length, 0.U, (memCtrl.ren || memCtrl.wen))
  val unsignReg   = RegEnable(memCtrl.unsign, false.B, (memCtrl.ren || memCtrl.wen))

  // addr
  val addrAlig = Wire(UInt(32.W))
  addrAlig := Cat(io.addr(31, 3), Fill(3, 0.U(1.W)))

  clintSel          := (addrAlig === "x_200_4000".U) || (addrAlig === "x_200_BFF8".U)
  io.hit_and_clint  := clintSel || ioMem.hit

  // In eight-byte units
  // Consider that there is no cross-unit reading and writing
  
  when (memCtrl.length === 0.U) {
    mask := 1.U << io.addr(2, 0)
  }.elsewhen(memCtrl.length === 1.U) {
    mask := "b11".U << io.addr(2, 0)
  }.elsewhen(memCtrl.length === 2.U) {
    mask := "b1111".U << io.addr(2, 0)
  }.otherwise{
    mask := "b1111_1111".U
  }

  val wData = Wire(UInt(64.W))
  wData := io.wData << Cat(io.addr(2, 0), "b000".U(3.W))

  ioMem.ren     := Mux(!clintSel, memCtrl.ren, false.B)
  ioMem.addr    := addrAlig
  ioMem.wen     := Mux(!clintSel, memCtrl.wen, false.B)
  ioMem.wData   := wData
  ioMem.wMask   := mask


  clintCtrl.ren          := Mux(clintSel, memCtrl.ren, false.B)
  clintCtrl.addr         := addrAlig
  clintCtrl.wen          := Mux(clintSel, memCtrl.wen, false.B)
  clintCtrl.wData        := wData
  clintCtrl.wMask        := mask

  // read data
  val dataRead = Wire(UInt(64.W))
  val dataByte = Wire(UInt(8.W))
  val dataHalf = Wire(UInt(16.W))
  val dataWord = Wire(UInt(32.W))
  val dataDoub = Wire(UInt(64.W))

  dataRead := Mux(clintSelReg, clintCtrl.rData, ioMem.rData)
  dataByte := 0.U
  dataHalf := 0.U
  dataWord := 0.U
  dataDoub := 0.U

  when (lengthReg === 0.U) {
    for (i <- 0 until 8) {
      when(maskReg(i) === 1.U) {
        dataByte := dataRead(8 * (i + 1) - 1, 8 * i)
      }
    }
  }.elsewhen(lengthReg === 1.U) {
    for (i <- 0 until 4) {
      when(maskReg(2 * (i + 1) - 1, 2 * i) === "b11".U) {
        dataHalf := dataRead(16 * (i + 1) - 1, 16 * i)
      }
    }
  }.elsewhen(lengthReg === 2.U) {
    for (i <- 0 until 2) {
      when(maskReg(4 * (i + 1) - 1, 4 * i) === "b1111".U) {
        dataWord := dataRead(32 * (i + 1) - 1, 32 * i)
      }
    }
  }.otherwise{
    dataDoub := dataRead
  }

  // expend
  val rData = Wire(UInt(64.W))
  when (lengthReg === 0.U) {
    when(unsignReg) {
      rData := Cat(Fill(56, 0.U(1.W)), dataByte)
    }.otherwise{
      rData := Cat(Fill(56, dataByte(7)), dataByte)
    }
  }.elsewhen(lengthReg === 1.U) {
    when(unsignReg) {
      rData := Cat(Fill(48, 0.U(1.W)), dataHalf)
    }.otherwise{
      rData := Cat(Fill(48, dataHalf(15)), dataHalf)
    }
  }.elsewhen(lengthReg === 2.U) {
    when(unsignReg) {
      rData := Cat(Fill(32, 0.U(1.W)), dataWord)
    }.otherwise{
      rData := Cat(Fill(32, dataWord(31)), dataWord)
    }
  }.otherwise{
    rData := dataDoub
  }
  
  io.rData := rData
  io.valid := ioMem.rvalid
}

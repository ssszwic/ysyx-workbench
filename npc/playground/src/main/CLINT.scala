package main

import chisel3._
import chisel3.util._

object CLINTTools {
  def WriteMask(data: UInt, byteMask: UInt, wData: UInt): UInt = {
    require(data.getWidth == wData.getWidth)
    require(data.getWidth == (byteMask.getWidth * 8))
    val length    = data.getWidth / byteMask.getWidth
    val newBytes  = Wire(Vec(length, UInt(8.W)))

    for(i <- 0 until length) {
      newBytes(i) := Mux(byteMask(i) === 1.U, wData(8 * i + 7, 8 * i), data(8 * i + 7, 8 * i))
    }

    newBytes.reduceLeft(Cat(_, _))
  }
}

class CLINT extends Module {
  val io = IO(new Bundle {
    // timer interrupt
    val timeCmp = Output(Bool())
  })
  val io_mem = IO(Flipped(new MemInterface))

  val MTIME     = 0x200BFF8
  val MTIMECMP  = 0x2004000

  val mtime     = RegInit(0.U(64.W))
  val mtimecmp  = RegInit(0.U(64.W))

  val tmp       = Wire(UInt(64.W))
  val tmpNew    = Wire(UInt(64.W))

  io.timeCmp := Mux(mtime >= mtimecmp, true.B, false.B)

  // read reg
  when(io_mem.addr === MTIME.U) {
    tmp := mtime
  }.elsewhen(io_mem.addr === MTIMECMP.U) {
    tmp := mtimecmp
  }.otherwise {
    tmp := 0.U
  }
  
  io_mem.rData := tmp
  // new data after write with mask
  tmpNew := CLINTTools.WriteMask(tmp, io_mem.wMask, io_mem.wData)

  // write mtimecmp
  when(io_mem.wen && (io_mem.addr === MTIMECMP.U)) {
    mtimecmp := tmpNew
  }.otherwise {
    mtimecmp := mtimecmp
  }

  // write mtime
  when(io_mem.wen && (io_mem.addr === MTIME.U)) {
    mtime := tmpNew
  }.otherwise {
    mtime := mtime + 1.U
  }

}
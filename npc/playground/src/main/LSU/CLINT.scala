package main.LSU

import chisel3._
import chisel3.util._

object CLINTTools {
  def WriteMask(data: UInt, byteMask: UInt, wData: UInt): UInt = {
    require(data.getWidth == wData.getWidth)
    require(data.getWidth == (byteMask.getWidth * 8))
    val length    = data.getWidth / byteMask.getWidth
    val newBytes  = Wire(Vec(length, UInt(8.W)))

    for(i <- 0 until length) {
      newBytes(length - i - 1) := Mux(byteMask(i) === 1.U, wData(8 * i + 7, 8 * i), data(8 * i + 7, 8 * i))
    }

    newBytes.reduceLeft(Cat(_, _))
  }
}

class ClintCtrlInterface extends Bundle {
  // read
  val ren     = Input(Bool())
  val addr    = Input(UInt(32.W))
  val rData   = Output(UInt(64.W))
  // write
  val wen     = Input(Bool())
  val wData   = Input(UInt(64.W))
  val wMask   = Input(UInt(8.W))
}

class CLINT extends Module {
  val io = IO(new Bundle {
    // timer interrupt
    val timeCmp = Output(Bool())
    // val clintWR = Output(Bool())
  })
  val clintCtrl = IO(new ClintCtrlInterface)

  val MTIME     = 0x200BFF8
  val MTIMECMP  = 0x2004000

  val mtime     = RegInit(0.U(64.W))
  val mtimecmp  = RegInit(0.U(64.W))

  val tmp       = Wire(UInt(64.W))
  val tmpNew    = Wire(UInt(64.W))

  io.timeCmp := Mux(mtime >= mtimecmp, true.B, false.B)
//   io.clintWR := io_mem.ren || io_mem.wen

  // read reg
  when(clintCtrl.addr === MTIME.U) {
    tmp := mtime
  }.elsewhen(clintCtrl.addr === MTIMECMP.U) {
    tmp := mtimecmp
  }.otherwise {
    tmp := 0.U
  }
  
  clintCtrl.rData := tmp
  // new data after write with mask
  tmpNew := CLINTTools.WriteMask(tmp, clintCtrl.wMask, clintCtrl.wData)

  // write mtimecmp
  when(clintCtrl.wen && (clintCtrl.addr === MTIMECMP.U)) {
    mtimecmp := tmpNew
  }.otherwise {
    mtimecmp := mtimecmp
  }

  // write mtime
  when(clintCtrl.wen && (clintCtrl.addr === MTIME.U)) {
    mtime := tmpNew
  }.otherwise {
    mtime := mtime + 1.U
  }

}

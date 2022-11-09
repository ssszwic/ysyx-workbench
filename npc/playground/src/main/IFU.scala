package main

import chisel3._
import chisel3.util._

class IFU extends Module {
  val io = IO(new Bundle {
    val nextpc    = Input(UInt(64.W))
    val pcEn      = Input(Bool())
    val inst      = Output(UInt(32.W))
    val pc        = Output(UInt(64.W))
  })

  val pc = RegInit("h80000000".U(64.W))
  pc := Mux(io.pcEn, io.nextpc, pc)

  io.pc := pc

  val addrAlig = Wire(UInt(64.W))
  addrAlig := Cat(pc(63, 3), Fill(3, 0.U(1.W)))

  val MemInst_instruction = Module(new Mem)
  MemInst_instruction.io.ren    := true.B
  MemInst_instruction.io.addr   := addrAlig
  MemInst_instruction.io.wen    := false.B
  MemInst_instruction.io.wData  := 0.U
  MemInst_instruction.io.wMask  := 0.U

  io.inst := Mux(pc(2, 0) === "100".U, MemInst_instruction.io.rData(63, 32), MemInst_instruction.io.rData(31, 0))
}

package main

import chisel3._
import chisel3.util._

class IFU  extends BlackBox with HasBlackBoxResource {
  val io = IO(new Bundle {
    val nextpc    = Input(UInt(64.W))
    val pcEn      = Input(Bool())
    val inst      = Output(UInt(32.W))
    val pc        = Output(UInt(64.W))
  })

  addResource("/MemVirtual.v")

}


// class IFU extends Module {
//   val io = IO(new Bundle {
//     val nextpc    = Input(UInt(64.W))
//     val pcEn      = Input(Bool())
//     val inst      = Output(UInt(32.W))
//     val pc        = Output(UInt(64.W))
//   })
  
  // val pc = RegInit("h80000000".U(64.W))
  // pc := Mux(io.pcEn, io.nextpc, pc)

  // io.pc := pc

  // val addrAlig = Wire(UInt(64.W))
  // addrAlig := Cat(pc(63, 3), Fill(3, 0.U(1.W)))

  // val MemVirtualInst_instr = Module(new MemVirtual)
  // MemVirtualInst_instr.io.ren    := io.pcEn
  // MemVirtualInst_instr.io.addr   := addrAlig
  // MemVirtualInst_instr.io.wen    := false.B
  // MemVirtualInst_instr.io.wData  := 0.U
  // MemVirtualInst_instr.io.wMask  := 0.U

  // io.inst := Mux(pc(2, 0) === "b100".U, MemVirtualInst_instr.io.rData(63, 32), MemVirtualInst_instr.io.rData(31, 0))
// }
package main

import chisel3._
import chisel3.util._

class Top extends Module {
  val io = IO(new Bundle {
    val wbu_valid = Output(Bool())
  })
  
  val IFU_u = Module(new IFU.IFU)
  val IDU_u = Module(new IDU.IDU)
  val EXU_u = Module(new EXU.EXU)
  val LSU_u = Module(new LSU.LSU)
  val WBU_u = Module(new WBU.WBU)
  val SRAM_u    = Module(new MEM.SRAM)
  val Arbiter_u = Module(new MEM.Arbiter)

  IFU_u.ioWBU     <> WBU_u.ioWBU
  IDU_u.ioIFU     <> IFU_u.ioIFU
  IDU_u.ioReg     <> WBU_u.ioReg
  EXU_u.ioIDU     <> IDU_u.ioIDU
  LSU_u.ioEXU     <> EXU_u.ioEXU
  WBU_u.ioLSU     <> LSU_u.ioLSU

  Arbiter_u.ioAXI_high <> IFU_u.ioAXI
  Arbiter_u.ioAXI_low  <> LSU_u.ioAXI

  SRAM_u.io.clock <> clock
  SRAM_u.io.reset <> reset
  SRAM_u.io.axi   <> Arbiter_u.ioAXI_SRAM

  // debug
  io.wbu_valid := WBU_u.ioWBU.valid
}
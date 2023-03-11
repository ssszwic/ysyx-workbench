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
  val SRAM_inst = Module(new MEM.SRAM)
  val SRAM_data = Module(new MEM.SRAM)

  IFU_u.ioWBU     <> WBU_u.ioWBU
  IDU_u.ioIFU     <> IFU_u.ioIFU
  IDU_u.ioReg     <> WBU_u.ioReg
  EXU_u.ioIDU     <> IDU_u.ioIDU
  LSU_u.ioEXU     <> EXU_u.ioEXU
  WBU_u.ioLSU     <> LSU_u.ioLSU

  SRAM_inst.io.axi <> IFU_u.ioAXI
  SRAM_inst.io.clock <> clock
  SRAM_inst.io.reset <> reset
  SRAM_data.io.axi <> LSU_u.ioAXI
  SRAM_data.io.clock <> clock
  SRAM_data.io.reset <> reset

  // debug
  io.wbu_valid := WBU_u.ioWBU.valid
}
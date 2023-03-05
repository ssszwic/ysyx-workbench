package main

import chisel3._
import chisel3.util._

class Top extends Module {
  val IFU_u = Module(new IFU.IFU)
  val IDU_u = Module(new IDU.IDU)
  val EXU_u = Module(new EXU.EXU)
  val LSU_u = Module(new LSU.LSU)
  val WBU_u = Module(new WBU.WBU)
  val MemVirtual_inst = Module(new MEM.MemVirtual)
  val MemVirtual_data = Module(new MEM.MemVirtual)

  IFU_u.io.ioWBU  <> WBU_u.ioWBU
  IFU_u.io.ioIFU <> IDU_u.ioIFU
  IFU_u.io.ioMem <> MemVirtual_inst.io
  IDU_u.ioIFU     <> IFU_u.io.ioIFU
  IDU_u.ioReg     <> WBU_u.ioReg
  EXU_u.ioIDU     <> IDU_u.ioIDU
  LSU_u.ioEXU     <> EXU_u.ioEXU
  WBU_u.ioLSU     <> LSU_u.ioLSU

  MemVirtual_inst.io <> IFU_u.io.ioMem
  MemVirtual_data.io <> LSU_u.ioMem
}
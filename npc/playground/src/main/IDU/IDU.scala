package main.IDU

import chisel3._
import chisel3.util._

import main.EXU
import main.IDU
import main.LSU
import main.IFU

class IDUInterface extends Bundle {
  val ready = Input(Bool())
  val valid = Output(Bool())
  // val rs1Data = Output(UInt(64.W))
  // val rs2Data = Output(UInt(64.W))
  // val imme    = Output(UInt(64.W))
  // val pc      = Output(UInt(64.W))
  // val pc4     = Output(UInt(64.W))
  // val aluCtrl = Flipped(new EXU.AluCtrlInterface)
  // val regCtrl = Flipped(new IDU.RegCtrlInterface)
  // val memCtrl = Flipped(new LSU.MemCtrlInterface)
  // val csrCtrl = Flipped(new EXU.CSRCtrlInterface)
}

class IDU extends Module{
  val ioIFU       = IO(Flipped(new IFU.IFUInterface))
  val ioIDU       = IO(new IDUInterface)
  // from LSU
  // val ioLSU = new Bundle {
  //   val regCtrl = IO(new IDU.RegCtrlInterface)
  //   val rdData  = Input(UInt(64.W))
  // }

  // val io = IO(new Bundle {
  //   val 
  // })

  // FSM
  val sIDLE :: sFINISH :: Nil = Enum(2)
  val state = RegInit(sIDLE)

  val ioIDU_valid_reg = RegInit(false.B)
  val ioIFU_ready_reg = RegInit(true.B)

  ioIDU.valid := ioIDU_valid_reg
  ioIFU.ready := ioIFU_ready_reg

  switch(state) {
    is(sIDLE) {
      when(ioIFU.valid) {
        state := sFINISH
        ioIFU_ready_reg := false.B
        ioIDU_valid_reg := true.B
      }.otherwise {
        state := sIDLE
        ioIFU_ready_reg := true.B
        ioIDU_valid_reg := false.B
      }
    }
    is(sFINISH) {
      when(ioIDU.ready) {
        state := sIDLE
        ioIFU_ready_reg := true.B
        ioIDU_valid_reg := false.B
      }.otherwise {
        state := sFINISH
        ioIFU_ready_reg := false.B
        ioIDU_valid_reg := true.B
      }
    }
  }

}


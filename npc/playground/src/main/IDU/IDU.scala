package main.IDU

import chisel3._
import chisel3.util._

import main.EXU
import main.IDU
import main.LSU
import main.IFU
import main.Tools


class IDUInterface extends Bundle {
  val ready = Input(Bool())
  val valid = Output(Bool())
  val rs1Data = Output(UInt(64.W))
  val rs2Data = Output(UInt(64.W))
  val imme    = Output(UInt(64.W))
  val pc      = Output(UInt(64.W))
  val pc4     = Output(UInt(64.W))
  val aluCtrl = Flipped(new EXU.AluCtrlInterface)
  val regCtrl = Flipped(new IDU.RegCtrlInterface)
  val memCtrl = Flipped(new LSU.MemLSCtrlInterface)
  val csrCtrl = Flipped(new LSU.CSRCtrlInterface)
}

class RegInterface extends Bundle {
  val regCtrl = new IDU.RegCtrlInterface
  val rdData  = Input(UInt(64.W))
}

class IDU extends Module{
  val ioIFU   = IO(Flipped(new IFU.IFUInterface))
  val ioIDU   = IO(new IDUInterface)
  val ioReg   = IO(new RegInterface) // from WBU

  val InstDecode_u  = Module(new InstDecode)
  val RegFiles_u    = Module(new RegFiles)

  // FSM
  val sIDLE :: sFINISH :: Nil = Enum(2)
  val state = RegInit(sIDLE)
  val ioIDU_valid_reg = RegInit(false.B)
  val ioIFU_ready_reg = RegInit(true.B)

  // instruction decode
  InstDecode_u.io.inst := ioIFU.inst

  // regfiles
  RegFiles_u.io.regCtrl  <> ioReg.regCtrl
  RegFiles_u.io.rdData   := ioReg.rdData
  RegFiles_u.io.rs1Addr  := InstDecode_u.io.rs1Addr
  RegFiles_u.io.rs2Addr  := InstDecode_u.io.rs2Addr

  // io
  val regEn = Wire(Bool())
  regEn           := ((state === sIDLE) && ioIFU.valid)
  ioIDU.rs1Data   := RegEnable(RegFiles_u.io.rs1Data, 0.U, regEn)
  ioIDU.rs2Data   := RegEnable(RegFiles_u.io.rs2Data, 0.U, regEn)
  ioIDU.pc        := RegEnable(ioIFU.pc, 0.U, regEn)
  ioIDU.pc4       := RegEnable(ioIFU.pc4, 0.U, regEn)
  ioIDU.imme      := RegEnable(InstDecode_u.io.imme, 0.U, regEn)
  Tools.myRegEnable(ioIDU.aluCtrl, InstDecode_u.aluCtrl, regEn)
  Tools.myRegEnable(ioIDU.regCtrl, InstDecode_u.regCtrl, regEn)
  Tools.myRegEnable(ioIDU.memCtrl, InstDecode_u.memCtrl, regEn)
  Tools.myRegEnable(ioIDU.csrCtrl, InstDecode_u.csrCtrl, regEn)

  // FSM
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
      when(ioIDU.ready){
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


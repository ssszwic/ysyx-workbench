package main.LSU

import chisel3._
import chisel3.util._

import main.EXU
import main.IDU
import main.LSU
import main.MEM
import main.Tools
import main.DPIC

import main.LSU.MemLS

class LSUInterface extends Bundle {
  val ready     = Input(Bool())
  val valid     = Output(Bool())
  val result    = Output(UInt(64.W))
  val rData     = Output(UInt(64.W))
  val csrData   = Output(UInt(64.W))
  val memSel    = Output(Bool())
  val csrSel    = Output(Bool())
  val npc       = Output(UInt(64.W))
  val regCtrl   = Flipped(new IDU.RegCtrlInterface)
}

class LSU extends Module {
  val ioLSU   = IO(new LSUInterface)
  val ioEXU   = IO(Flipped(new EXU.EXUInterface))
  val ioAXI   = IO(new MEM.AXI_LITE_MASTER(32, 64, 8))

  val CSR_u   = Module(new CSR)
  val MemLS_u = Module(new MemLS)
  val CLINT_u = Module(new CLINT)

  // FSM
  val sIDLE :: sWORK :: sFINISH :: Nil = Enum(3)
  val state = RegInit(sIDLE)

  val finish  = Wire(Bool())
  val regEn   = Wire(Bool())

  regEn           := ((state === sIDLE) && ioEXU.valid)
  ioLSU.valid     := (state === sFINISH)
  ioEXU.ready     := (state === sIDLE)
  ioLSU.result    := RegEnable(ioEXU.result, 0.U, regEn)
  ioLSU.memSel    := RegEnable(ioEXU.memCtrl.ren, false.B, regEn)
  ioLSU.csrSel    := RegEnable(ioEXU.csrCtrl.csrSel, false.B, regEn)
  ioLSU.rData     := MemLS_u.io.rData
  ioLSU.csrData   := RegEnable(CSR_u.io.csrData, 0.U, regEn)
  ioLSU.npc       := RegEnable(CSR_u.io.finalPC, 0.U, regEn)
  Tools.myRegEnable(ioLSU.regCtrl, ioEXU.regCtrl, regEn)

  MemLS_u.io.addr         := ioEXU.result
  MemLS_u.io.wData        := ioEXU.rs2Data
  MemLS_u.memCtrl.ren     := ioEXU.memCtrl.ren && regEn
  MemLS_u.memCtrl.wen     := ioEXU.memCtrl.wen && regEn
  MemLS_u.memCtrl.length  := ioEXU.memCtrl.length
  MemLS_u.memCtrl.unsign  := ioEXU.memCtrl.unsign

  CSR_u.io.rs1      := ioEXU.rs1Data
  CSR_u.io.imme     := ioEXU.imme
  CSR_u.io.pc       := ioEXU.pc
  CSR_u.io.npc      := ioEXU.npc
  CSR_u.io.timeCmp  := CLINT_u.io.timeCmp
  CSR_u.csrCtrl     <> ioEXU.csrCtrl

  CLINT_u.clintCtrl <> MemLS_u.clintCtrl
  ioAXI <> MemLS_u.ioAXI

  // FSM
  finish := MemLS_u.io.valid

  switch(state) {
    is(sIDLE) {
      when(ioEXU.valid) {
        when((ioEXU.memCtrl.ren || ioEXU.memCtrl.wen) && (!MemLS_u.io.hit_and_clint)) {
          state := sWORK
        }.otherwise {
          state := sFINISH
        }
      }.otherwise {
        state := sIDLE
      }
    }
    is(sWORK) {
      state := Mux(finish, sFINISH, sWORK)
    }
    is(sFINISH) {
      state := Mux(ioLSU.ready, sIDLE, sFINISH)
    }
  }

  val DifftestSkip_u = Module(new DPIC.DifftestSkip)
  // difftest skip when read/write csr reg or interrupt or write/read clint
  DifftestSkip_u.io.skip := regEn && (ioEXU.csrCtrl.csrSel || CSR_u.io.interrupt || MemLS_u.clintCtrl.ren || MemLS_u.clintCtrl.wen)
  
}

// waveDrom
// {signal: [
//   {name: 'clk', wave: 'p.......'},
//   {name: 'state', wave: '3.4.56..', data: ['IDLE', 'WORK', 'FINISH', 'IDLE']},
//   {name: 'ioEXU_valid', wave: '010.....'},
//   {name: 'ioEXU_ready', wave: '1.0..1..'},
//   {name: 'finalpc', wave: 'x.3.....'},
//   {name: 'result', wave: 'x.3.....'},
//   {name: 'csrData', wave: 'x.3.....'},
//   {name: 'memSel', wave: 'x.3.....'},
//   {name: 'csrSel', wave: 'x.3.....'},

//   {name: 'ren', wave: '010.....'},
//   {name: 'wen', wave: '010.....'},
//   {name: 'ioMem', wave: 'x3x.....'},
//   {name: 'clintCtrl', wave: 'x3x.....'},
//   {name: 'clintSel', wave: 'x3x.....'},
//   {name: 'mask', wave: 'x3x.....'},
//   {name: 'hit_and_clint', wave: 'x3x.....'},
  
//   {name: 'mask', wave: 'x.3.....'},
//   {name: 'clintSel', wave: 'x.3.....'},
//   {name: 'length', wave: 'x.3.....'},
//   {name: 'unsign', wave: 'x.3.....'},
  
//   {name: 'finish', wave: '0..10...'},
//   {name: 'rData', wave: 'x..3....'},
//   {name: 'ioLUS_valid', wave: '0...10..'},
//   {name: 'ioLUS_ready', wave: '1....0..'},
// ]}
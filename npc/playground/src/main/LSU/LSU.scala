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
  val valid     = Output(Bool())
  val result    = Output(UInt(64.W))
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

  // FSM /////////////////////////////////////////////////////////////////////////////////////////////////////////
  val sIDLE :: sWORK :: sFINISH :: Nil = Enum(3)
  val state = RegInit(sIDLE)

  switch(state) {
    is(sIDLE) {
      when(ioEXU.valid) {
        state := Mux((ioEXU.memCtrl.ren || ioEXU.memCtrl.wen), sWORK, sFINISH)
      }.otherwise {
        state := sIDLE
      }
    }
    is(sWORK) {
      state := Mux(MemLS_u.io.valid, sFINISH, sWORK)
    }
    is(sFINISH) {
      state := sIDLE
    }
  }

  // select result from rData, result and csrData //////////////////////////////////////////////////////////////
  val regEn = ioEXU.valid
  val exu_result_r  = RegEnable(ioEXU.result, 0.U, regEn)
  val csrData_r     = RegEnable(CSR_u.io.csrData, 0.U, regEn)
  val memSel_r      = RegEnable(ioEXU.memCtrl.ren, false.B, regEn)
  val csrSel_r      = RegEnable(ioEXU.csrCtrl.csrSel, false.B, regEn)

  val result_r = RegInit(0.U(64.W))
  when(regEn && (!(ioEXU.memCtrl.ren || ioEXU.memCtrl.wen))) {
    result_r := Mux(ioEXU.csrCtrl.csrSel, CSR_u.io.csrData, ioEXU.result)
  }.elsewhen(MemLS_u.io.valid) {
    when(memSel_r) {
      result_r := MemLS_u.io.rData
    }.otherwise{
      result_r := Mux(csrSel_r, csrData_r, exu_result_r)
    }
  }

  // IO /////////////////////////////////////////////////////////////////////////////////////////////////////////
  ioLSU.npc     := RegEnable(CSR_u.io.finalPC, 0.U, regEn)
  ioLSU.result  := result_r
  ioLSU.valid   := (state === sFINISH)
  Tools.myRegEnable(ioLSU.regCtrl, ioEXU.regCtrl, regEn)

  // MemLS IO ////////////////////////////////////////////////////////////////////////////////////////////////////
  MemLS_u.io.addr         := ioEXU.result
  MemLS_u.io.wData        := ioEXU.rs2Data
  MemLS_u.memCtrl.ren     := ioEXU.memCtrl.ren && regEn
  MemLS_u.memCtrl.wen     := ioEXU.memCtrl.wen && regEn
  MemLS_u.memCtrl.length  := ioEXU.memCtrl.length
  MemLS_u.memCtrl.unsign  := ioEXU.memCtrl.unsign

  // CSR IO //////////////////////////////////////////////////////////////////////////////////////////////////////
  CSR_u.io.en       := ioEXU.valid
  CSR_u.io.rs1      := ioEXU.rs1Data
  CSR_u.io.imme     := ioEXU.imme
  CSR_u.io.pc       := ioEXU.pc
  CSR_u.io.npc      := ioEXU.npc
  CSR_u.io.timeCmp  := CLINT_u.io.timeCmp
  CSR_u.csrCtrl     <> ioEXU.csrCtrl

  // CLINT IO ///////////////////////////////////////////////////////////////////////////////////////////////////
  CLINT_u.clintCtrl <> MemLS_u.clintCtrl

  // AXI IO ///////////////////////////////////////////////////////////////////////////////////////////////////
  ioAXI <> MemLS_u.ioAXI

  // difftest skip when read/write csr reg or interrupt or write/read clint /////////////////////////////////////////
  val DifftestSkip_u = Module(new DPIC.DifftestSkip)
  DifftestSkip_u.io.skip := regEn && (ioEXU.csrCtrl.csrSel || CSR_u.io.interrupt || MemLS_u.clintCtrl.ren || MemLS_u.clintCtrl.wen)
}

// waveDrom
// {signal: [
//   {name: 'clk', 			wave: 'p.......'},
//   {name: 'state', 			wave: '3.4.53..', data: ['IDLE', 'WORK', 'FINISH', 'IDLE']},
//   {name: 'ioEXU_valid', 	wave: '010.....'},
//   {name: 'finalpc', 		wave: 'x.3.....'},
  
//   {name: 'exu_result_r', 	wave: 'x.3.....'},
//   {name: 'csrData_r', 		wave: 'x.3.....'},
//   {name: 'memSel_r', 		wave: 'x.3.....'},
//   {name: 'csrSel_r', 		wave: 'x.3.....'},

//   {name: 'memEn', 			wave: '010.....'},
//   {name: 'MemLS_u.io.valid', 		wave: '0..10...'},
//   {name: 'rData', 			wave: 'x..3....'},
//   {name: 'result_r', 		wave: 'x...3...'},
//   {name: 'valid', 		wave: '0...10..'},
// ]}
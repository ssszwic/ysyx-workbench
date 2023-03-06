package main.IFU

import chisel3._
import chisel3.util._

import main.MEM
import main.WBU
import main.DPIC

class IFUInterface extends Bundle {
  val ready = Input(Bool())
  val valid = Output(Bool())
  val inst  = Output(UInt(32.W))
  val pc    = Output(UInt(64.W))
  val pc4   = Output(UInt(64.W))
}

class IFU extends Module {
  val ioWBU = IO(Flipped(new WBU.WBUInterface))
  val ioIFU = IO(new IFUInterface)
  val ioMem = IO(Flipped(new MEM.MemInterface))

  val PCReg_u = Module(new DPIC.PCReg)

  // start signal: only generate once after reset
  val cntReg = RegInit(0.U(4.W))
  val start  = Wire(Bool())
  cntReg  := Mux(cntReg =/= (15.U), cntReg + 1.U, cntReg)
  start   := (cntReg === 10.U)

  // FSM
  val sIDLE :: sWORK :: sFINISH :: Nil = Enum(3)
  val state           = RegInit(sIDLE)
  val ioWBU_ready_reg = RegInit(true.B)
  val ioIFU_valid_reg = RegInit(false.B)

  val finish = Wire(Bool())
  val regEn  = Wire(Bool())

  PCReg_u.io.clock := clock
  PCReg_u.io.reset := reset
  PCReg_u.io.wen    := regEn
  PCReg_u.io.wData  := ioWBU.npc

  finish      := ioMem.rvalid
  regEn       := (state === sIDLE) && (ioWBU.valid || start)
  ioIFU.pc    := PCReg_u.io.value
  ioIFU.pc4   := RegEnable((ioWBU.npc + 4.U), 0.U, regEn) 
  ioIFU.inst  := Mux((ioIFU.pc(2, 0) === "b100".U), ioMem.rData(63, 32), ioMem.rData(31, 0))

  ioMem.ren   := regEn
  ioMem.addr  := Cat(ioWBU.npc(31, 3), "b000".U)
  // don't write
  ioMem.wen   := false.B
  ioMem.wMask := 0.U
  ioMem.wData := 0.U

  // FSM
  ioWBU.ready := ioWBU_ready_reg
  ioIFU.valid := ioIFU_valid_reg

  switch(state) {
    is(sIDLE) {
      when(ioWBU.valid || start) {
        when(ioMem.hit) {
          state := sFINISH
          ioWBU_ready_reg := false.B
          ioIFU_valid_reg := true.B
        }.otherwise {
          state := sWORK
          ioWBU_ready_reg := false.B
          ioIFU_valid_reg := false.B
        }
      }.otherwise {
        state := sIDLE
        ioWBU_ready_reg := true.B
        ioIFU_valid_reg := false.B
      }
    }
    is(sWORK) {
      when(finish) {
        state := sFINISH
        ioWBU_ready_reg := false.B
        ioIFU_valid_reg := true.B
      }.otherwise {
        state := sWORK
        ioWBU_ready_reg := false.B
        ioIFU_valid_reg := false.B
      }
    }
    is(sFINISH) {
      when(ioIFU.ready) {
        state := sIDLE
        ioWBU_ready_reg := true.B
        ioIFU_valid_reg := false.B
      }.otherwise {
        state := sFINISH
        ioWBU_ready_reg := false.B
        ioIFU_valid_reg := true.B
      }
    }
  }
}

// waveDrom
// {signal: [
//   {name: 'clk', wave: 'p.......'},
//   {name: 'state', wave: '3.4.56..', data: ['IDLE', 'WORK', 'FINISH', 'IDLE']},
//   {name: 'ioWBU_valid', wave: '010.....'},
//   {name: 'ioWBU_ready', wave: '1.0..1..'},
//   {name: 'npc', wave: 'x3x.....'},
//   {name: 'pc', wave: 'x.3.....'},
//   {name: 'pc4', wave: 'x.3.....'},
//   {name: 'ren', wave: '010.....'},
//   {name: 'ioMem', wave: 'x3x.....'},
//   {name: 'hit', wave: '0.......'},
//   {name: 'finish', wave: '0..10...'},
  
//   {name: 'inst', wave: 'x..3....'},
//   {name: 'ioIFU_valid', wave: '0...10..'},
//   {name: 'ioIFU_ready', wave: '1....0..'},
// ]}



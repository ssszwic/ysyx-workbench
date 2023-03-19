package main.IFU

import chisel3._
import chisel3.util._

import main.MEM
import main.WBU
import main.DPIC

class IFUInterface extends Bundle {
  val valid = Output(Bool())
  val inst  = Output(UInt(32.W))
  val pc    = Output(UInt(64.W))
  val pc4   = Output(UInt(64.W))
}

class IFU extends Module {
  val ioWBU = IO(Flipped(new WBU.WBUInterface))
  val ioIFU = IO(new IFUInterface)
  val ioAXI = IO(new MEM.AXI_LITE_MASTER(32, 64, 8))

  val PCReg_u = Module(new DPIC.PCReg)

  // start signal: only generate once after reset
  val cntReg = RegInit(0.U(4.W))
  val start  = Wire(Bool())
  cntReg  := Mux(cntReg =/= (15.U), cntReg + 1.U, cntReg)
  start   := (cntReg === 10.U)

  // FSM
  val sIDLE :: sSEND_AD :: sWAIT_D :: sFINISH :: Nil = Enum(4)
  val state  = RegInit(sIDLE)

  val regEn  = Wire(Bool())

  PCReg_u.io.clock  := clock
  PCReg_u.io.reset  := reset
  PCReg_u.io.wen    := regEn
  PCReg_u.io.wData  := ioWBU.npc

  regEn       := (state === sIDLE) && (ioWBU.valid || start)
  ioIFU.pc    := PCReg_u.io.value
  ioIFU.pc4   := RegEnable((ioWBU.npc + 4.U), 0.U, regEn)
  // get readed data and ignore resp
  val inst_w  = Wire(UInt(64.W))
  inst_w      := Mux((ioIFU.pc(2, 0) === "b100".U(3.W)), ioAXI.r.data(63, 32), ioAXI.r.data(31, 0))
  ioIFU.inst  := RegEnable(inst_w, 0.U, (state === sWAIT_D) && ioAXI.r.valid)

  ioAXI.ar.addr := RegEnable(Cat(ioWBU.npc(31, 3), "b000".U(3.W)), 0.U, regEn)
  ioAXI.ar.prot := RegEnable("b001".U(3.W), "b001".U(3.W), regEn) // default unprivileged, secure and instruction acess

  // don't write
  ioAXI.aw.valid := false.B
  ioAXI.aw.addr  := 0.U
  ioAXI.aw.prot  := 0.U
  ioAXI.w.valid  := false.B
  ioAXI.w.data   := 0.U
  ioAXI.w.strb   := 0.U
  ioAXI.b.ready  := false.B

  // FSM
  ioIFU.valid     := (state === sFINISH)
  ioAXI.ar.valid  := (state === sSEND_AD)
  ioAXI.r.ready   := (state === sWAIT_D)

  switch(state) {
    is(sIDLE) {
      when(ioWBU.valid || start) {
        state := sSEND_AD
      }.otherwise {
        state := sIDLE
      }
    }
    is(sSEND_AD) {
      when(ioAXI.ar.ready) {
        state := sWAIT_D
      }.otherwise {
        state := sSEND_AD
      }
    }
    is(sWAIT_D) {
      when(ioAXI.r.valid) {
        state := sFINISH
      }.otherwise {
        state := sWAIT_D
      }
    }
    is(sFINISH) {
      state := sIDLE
    }
  }

}

// waveDrom
// {signal: [
//   {name: 'clk', 		wave: 'p.........'},
//   {name: 'state', 		wave: '6.7..896..', data: ['IDLE', 'SEND_AD', 'WAIT_D', 'FINISH', 'IDLE']},
//   {name: 'ioWBU_valid', wave: '010.......'},
//   {name: 'npc', 		wave: 'x3x.......'},
//   {name: 'pc', 			wave: 'x.3.......'},
//   {name: 'pc4', 		wave: 'x.3.......'},{signal: [
//   {name: 'clk', 		wave: 'p.........'},
//   {name: 'state', 		wave: '6.7..896..', data: ['IDLE', 'SEND_AD', 'WAIT_D', 'FINISH', 'IDLE']},
//   {name: 'ioWBU_valid', wave: '010.......'},
//   {name: 'npc', 		wave: 'x3x.......'},
//   {name: 'pc', 			wave: 'x.3.......'},
//   {name: 'pc4', 		wave: 'x.3.......'},
//   ['AR',
//     {name: 'ar_valid', 	wave: '0.1..0....'},
//     {name: 'ar_ready', 	wave: '0...1.....'},
//     {name: 'ar_addr', 	wave: 'x.5.......'},
//     {name: 'ar_prot', 	wave: 'x.5.......'},
//   ],
//   ['R',
//     {name: 'r_valid', 	wave: '0....10...'},
//     {name: 'r_ready', 	wave: '0....10...'},
//     {name: 'r_data', 	wave: 'x....3....'},
//     {name: 'r_resb', 	wave: 'x....3....'},
//   ],
  
//   {name: 'inst', 		wave: 'x.....3...'},
//   {name: 'ioIFU_valid', wave: '0.....10..'},
// ]}
//   ['AR',
//     {name: 'ar_valid', 	wave: '0.1..0....'},
//     {name: 'ar_ready', 	wave: '0...1.....'},
//     {name: 'ar_addr', 	wave: 'x.5.......'},
//     {name: 'ar_prot', 	wave: 'x.5.......'},
//   ],
//   ['R',
//     {name: 'r_valid', 	wave: '0....10...'},
//     {name: 'r_ready', 	wave: '0....10...'},
//     {name: 'r_data', 	wave: 'x....3....'},
//     {name: 'r_resb', 	wave: 'x....3....'},
//   ],
  
//   {name: 'inst', 		wave: 'x.....3...'},
//   {name: 'ioIFU_valid', wave: '0.....10..'},
// ]}
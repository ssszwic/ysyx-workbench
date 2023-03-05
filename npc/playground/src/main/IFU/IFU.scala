package main.IFU

import chisel3._
import chisel3.util._

import main.MEM
import main.WBU

class IFUInterface extends Bundle {
  val ready = Input(Bool())
  val valid = Output(Bool())
  val inst  = Output(UInt(32.W))
  val pc    = Output(UInt(64.W))
  val pc4   = Output(UInt(64.W))
}

class IFU extends BlackBox with HasBlackBoxResource {
  val io = IO(new Bundle {
    val ioWBU = Flipped(new WBU.WBUInterface)
    val ioIFU = new IFUInterface
    val ioMem = Flipped(new MEM.MemInterface)
  })
  
  addResource("/IFU.v")
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



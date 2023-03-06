package main.MEM

import chisel3._
import chisel3.util._

// class AXI_WADDR(addrWidth: Int) extends Bundle {
//   val addr    = Output(UInt(addrWidth.W))
//   val valid   = Output(Bool())
//   val ready   = Input(Bool())
// }

// class AXI_WDATA(dataWidth: Int, strbWidth: Int) extends Bundle {
//   val data    = Output(UInt(dataWidth.W))
//   val strb    = Output(UInt(strbWidth.W))
//   val valid   = Output(Bool())
//   val ready   = Input(Bool())
// }

// class AXI_WBACK extends Bundle {
//   val resp   = Input(UInt(2.W))
//   val valid  = Input(Bool())
//   val ready  = Output(Bool())
// }

// class AXI_RADDR(addrWidth: Int) extends Bundle {
//   val addr    = Output(UInt(addrWidth.W))
//   val valid   = Output(Bool())
//   val ready   = Input(Bool())
// }

// class AXI_RDATA(dataWidth: Int) extends Bundle {
//   val data    = Input(UInt(dataWidth.W))
//   val resp    = Input(UInt(strbWidth.W))
//   val valid   = Input(Bool())
//   val ready   = Output(Bool())
// }

// class AXI_LITE_M extends Bundle {
//   val wa
// }


class MemInterface extends Bundle {
  // read
  val ren     = Input(Bool())
  val addr    = Input(UInt(32.W))
  val rData   = Output(UInt(64.W))
  val rvalid  = Output(Bool())
  val hit     = Output(Bool())
  // write
  val wen     = Input(Bool())
  val wData   = Input(UInt(64.W))
  val wMask   = Input(UInt(8.W))
}

class MemVirtual extends BlackBox with HasBlackBoxResource {
  val io = IO(new Bundle {
    // read
    val clock   = Input(Clock())
    val reset   = Input(Bool())
    val ioMem   = new MemInterface
  })
  addResource("/MemVirtual.v")
}

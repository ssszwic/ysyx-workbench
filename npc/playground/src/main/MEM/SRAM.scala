package main.MEM

import chisel3._
import chisel3.util._

class AXI_LITE_AW(addrWidth: Int) extends Bundle {
  val valid   = Output(Bool())
  val ready   = Input(Bool())
  val addr    = Output(UInt(addrWidth.W))
  val prot    = Output(UInt(3.W))
}

class AXI_LITE_W(dataWidth: Int, strbWidth: Int) extends Bundle {
  val valid   = Output(Bool())
  val ready   = Input(Bool())
  val data    = Output(UInt(dataWidth.W))
  val strb    = Output(UInt(strbWidth.W))
}

class AXI_LITE_B extends Bundle {
  val valid   = Input(Bool())
  val ready   = Output(Bool())
  val resp    = Input(UInt(2.W))
}

class AXI_LITE_AR(addrWidth: Int) extends Bundle {
  val valid   = Output(Bool())
  val ready   = Input(Bool())
  val addr    = Output(UInt(addrWidth.W))
  val prot    = Output(UInt(3.W))
}

class AXI_LITE_R(dataWidth: Int) extends Bundle {
  val valid   = Input(Bool())
  val ready   = Output(Bool())
  val data    = Input(UInt(dataWidth.W))
  val resp    = Input(UInt(2.W))
}

class AXI_LITE_MASTER(addrWidth: Int, dataWidth: Int, strbWidth: Int) extends Bundle {
  val aw = new AXI_LITE_AW(addrWidth)
  val w  = new AXI_LITE_W(dataWidth, strbWidth)
  val b  = new AXI_LITE_B
  val ar = new AXI_LITE_AR(addrWidth)
  val r  = new AXI_LITE_R(dataWidth)
}

class AXI_LITE_SLAVE(addrWidth: Int, dataWidth: Int, strbWidth: Int) extends Bundle {
  val aw = Flipped(new AXI_LITE_AW(addrWidth))
  val w  = Flipped(new AXI_LITE_W(dataWidth, strbWidth))
  val b  = Flipped(new AXI_LITE_B)
  val ar = Flipped(new AXI_LITE_AR(addrWidth))
  val r  = Flipped(new AXI_LITE_R(dataWidth))
}

class SRAM extends BlackBox with HasBlackBoxResource {
  val io = IO(new Bundle {
    // read
    val clock = Input(Clock())
    val reset = Input(Bool())
    val axi   = new AXI_LITE_SLAVE(32, 64, 8)
  })
  addResource("/SRAM.v")
}

// waveDrom
// {signal: [
//   {name: 'clk', wave: 'p.........'},
// //  {name: 'state', wave: '3.4.56..', data: ['IDLE', 'WORK', 'FINISH', 'IDLE']},
//   ['AW',
//     {name: 'aw_valid', 	wave: '0.10......'},
//     {name: 'aw_ready', 	wave: '1..0....1.'},
//     {name: 'aw_addr', 	wave: 'x.3x......'},
//     {name: 'aw_prot', 	wave: 'x.3x......'},
//     {name: 'aw_addr_r', wave: 'x..4......'},
//     {name: 'aw_prot_r', wave: 'x..4......'},
//   ],
//   ['W',
//     {name: 'w_valid', 	wave: '010.......'},
//     {name: 'w_ready', 	wave: '1.0.....1.'},
//     {name: 'w_data', 	wave: 'x3x.......'},
//     {name: 'w_strb', 	wave: 'x3x.......'},
//     {name: 'w_data_r', 	wave: 'x.4.......'},
//     {name: 'w_strb_r', 	wave: 'x.4.......'},
//   ],
//   ['B',
//     {name: 'b_valid', 	wave: '0..1....0.'},
//     {name: 'b_ready', 	wave: '0......10.'},
//     {name: 'b_resp', 	wave: 'x..5......'},
//   ],
//    [{}],
//   ['AR',
//     {name: 'ar_valid', 	wave: '0...10....'},
//     {name: 'ar_ready', 	wave: '1....0.1..'},
//     {name: 'ar_addr', 	wave: 'x...3x....'},
//     {name: 'ar_prot', 	wave: 'x...3x....'},
//   ],
//   ['R',
//     {name: 'r_valid', 	wave: '0....1.0..'},
//     {name: 'r_ready', 	wave: '0.....10..'},
//     {name: 'r_data', 	wave: 'x....5....'},
//     {name: 'r_resb', 	wave: 'x....5....'},
//   ],
// ]}
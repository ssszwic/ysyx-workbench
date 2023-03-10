package main.MEM

import chisel3._
import chisel3.util._

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
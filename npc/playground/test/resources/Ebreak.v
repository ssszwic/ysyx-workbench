module Ebreak(
  input ebreak
);

import "DPI-C" function int cpu_inst_ebreak();

wire [31:0] tmp;

assign tmp = ebreak ? cpu_inst_ebreak() : 0;

endmodule
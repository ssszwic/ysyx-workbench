module Ebreak(
  input ebreak
);

import "DPI-C" function int cpu_inst_ebreak();

wire return;

assign return = cpu_inst_ebreak();

endmodule
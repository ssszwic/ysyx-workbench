module Ebreak(
  input ebreak
);

import "DPI-C" function int cpu_inst_ebreak();

always @(*) begin
  if(ebreak) begin
    cpu_inst_ebreak();
  end
end

endmodule
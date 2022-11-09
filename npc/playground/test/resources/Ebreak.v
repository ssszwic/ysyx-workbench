module Ebreak(
  input ebreak
);

import "DPI-C" function int cpu_inst_ebreak();

reg [31:0] tmp;

always @(*) begin
  if(ebreak) begin
    tmp = cpu_inst_ebreak();
  end
  else begin
    tmp = 0;
  end
end

endmodule
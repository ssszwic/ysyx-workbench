module Ebreak(
  input ebreak
);

import "DPI-C" function void cpu_inst_ebreak();

always @(*) begin
  if(ebreak) begin
    cpu_inst_ebreak();
  end
end

endmodule
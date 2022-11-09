module Ebreak(
  input ebreak
);

import "DPI-C" function int ebreak();

always @(*) begin
  if(ebreak) begin
    ebreak();
  end
end

endmodule
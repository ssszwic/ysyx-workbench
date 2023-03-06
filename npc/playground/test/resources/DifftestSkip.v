module DifftestSkip(
  input skip
);

import "DPI-C" function void difftest_skip();

always @(*) begin
  if(skip) begin
    difftest_skip();
  end
end

endmodule
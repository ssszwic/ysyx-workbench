module MemVirtual(
  // read
  input                 en,
  input       [63:0]    addr,
  output reg  [63:0]    rData,
  // write
  input       [63:0]    wData,
  input       [7:0]     wMask
);

import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte wmask);

always @(*) begin
  // read
  if(en) begin
    pmem_read(addr, rData);
  end
  else begin
    rData = 0;
  end

  // write
  if(en) begin
    pmem_write(addr, wData, wMask);
  end
  
end

endmodule
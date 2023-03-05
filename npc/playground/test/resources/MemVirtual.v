module MemVirtual(
  // system
  input                 clock,
  input                 reset,
  // read
  input                 ren,
  input       [32:0]    addr,
  output reg  [63:0]    rData,
  // control
  output                rvalid,
  output                hit,
  // write
  input                 wen,
  input       [63:0]    wData,
  input       [7:0]     wMask
);

import "DPI-C" function void pmem_read(input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte wmask);

assign hit = 1'b1;

// read
always@(posedge clock) begin
  if(reset) begin
    rData <= 64'b0;
    rvalid <= 1'b0;
  end
  else if(ren) begin
    pmem_read(addr, rData);
    rvalid <= 1'b1;
  end
  else begin
    rData <= rData;
    rvalid <= 1'b0;
  end
end

// write
always@(posedge clock) begin
  if(wen) begin
    pmem_write(addr, wData, wMask);
  end
end

// always @(*) begin
//   // read
//   if(en) begin
//     pmem_read(addr, rData);
//   end
//   else begin
//     rData = 0;
//   end

//   // write
//   if(en) begin
//     pmem_write(addr, wData, wMask);
//   end
  
// end

endmodule
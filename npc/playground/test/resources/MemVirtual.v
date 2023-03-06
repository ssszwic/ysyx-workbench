module MemVirtual(
  // system
  input                 clock,
  input                 reset,
  // read
  input                 ioMem_ren,
  input       [31:0]    ioMem_addr,
  output reg  [63:0]    ioMem_rData,
  // control
  output                ioMem_rvalid,
  output                ioMem_hit,
  // write
  input                 ioMem_wen,
  input       [63:0]    ioMem_wData,
  input       [7:0]     ioMem_wMask
);

import "DPI-C" function void pmem_read(input int raddr, output longint rdata);
import "DPI-C" function void pmem_write(input int waddr, input longint wdata, input byte wmask);

reg   [63:0]  data_from_dpic;

assign ioMem_hit = 1'b1;

always@(*) begin
  if(ioMem_ren) begin
    pmem_read(ioMem_addr, data_from_dpic);
  end
  else begin
    data_from_dpic = 64'b0;
  end
end

// read
always@(posedge clock) begin
  if(reset) begin
    ioMem_rData   <= 64'b0;
    ioMem_rvalid  <= 1'b0;
  end
  else if(ioMem_ren) begin
    ioMem_rData   <= data_from_dpic;
    ioMem_rvalid  <= 1'b1;
  end
  else begin
    ioMem_rData   <= ioMem_rData;
    ioMem_rvalid  <= 1'b0;
  end
end

// write
always@(*) begin
  if(ioMem_wen) begin
    pmem_write(ioMem_addr, ioMem_wData, ioMem_wMask);
  end
end

endmodule
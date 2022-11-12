module IFU(
  input             clock,
  input             reset,
  input     [63:0]  nextpc,
  input             pcEn,
  output    [31:0]  inst,
  output    [63:0]  pc
);

reg         [63:0]  pcReg;
wire        [63:0]  addrAlig;
reg         [63:0]  rData;

import "DPI-C" function void inst_pmem_read(input longint raddr, output longint rdata);
import "DPI-C" function void set_pc_ptr(input logic [63:0] a []);
initial set_pc_ptr(pcReg);

always@(posedge clock) begin
  if(reset) begin
    pcReg <= 64'h80000000;
  end
  else if(pcEn) begin
    pcReg <= nextpc;
  end
  else begin
    pcReg <= pcReg;
  end
end

assign addrAlig = {pcReg[63:3], 3'b0};

always@(pcEn) begin
  if(pcEn) begin
    inst_pmem_read(addrAlig, rData);
    $display("read inst");
  end
  else begin
    rData = 64'd0;
  end
end

assign inst = (pcReg[2:0] == 3'b100) ? rData[63:32] : rData[31:0];
assign pc = pcReg;

endmodule
module RegFiles(
  input             clock,
  input             reset,
  input     [4:0]   rs1Addr,
  input     [4:0]   rs2Addr,
  input             wen,
  input     [4:0]   wAddr,
  // data
  input     [63:0]  wData,
  output    [63:0]  rs1Data,
  output    [63:0]  rs2Data
);

reg   [63:0]  regFiles [31:0];
genvar i;

generate 
  for(i = 0; i < 32; i = i + 1) begin
    if(reset) begin
	    regFiles[i] <= 64'b0;
    end
    else if(wen & (wAddr == i)) begin
      regFiles[i] <= wData;
    end
    else begin
      regFiles[i] <= regFiles[i];
    end
  end
endgenerate

assign rs1Data = (rs1Addr == 5'd0) ? 64'd0 : regFiles[rs1Addr];
assign rs2Data = (rs2Addr == 5'd0) ? 64'd0 : regFiles[rs2Addr];

endmodule
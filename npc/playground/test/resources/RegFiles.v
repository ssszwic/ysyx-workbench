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
  output    [63:0]  rs2Data,
)

reg   [63:0]  regFiles [31:0];

always@(posedge clock) begin
  if(reset) begin
    for(integer i = 0; i <16; i = i + 1) begin
	    regFiles[i] <= 64'b0;
    end
  end
  else begin
    if(wen) begin
      regFiles[wAddr] <= 64'b0;
    end
  end
end

assign rs1Data = (rs1Addr == 5'd0) ? 64'd0 : regFiles[rs1Addr];
assign rs2Data = (rs2Addr == 5'd0) ? 64'd0 : regFiles[rs2Addr];

endmodule
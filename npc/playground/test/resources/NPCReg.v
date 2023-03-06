module NPCReg (
    input               clock,
    input               reset,
    input               wen,
    input       [63:0]  wData,
    output  reg [63:0]  value
);

import "DPI-C" function void set_npc_ptr(input logic [63:0] a []);
initial set_npc_ptr(value);

always@(posedge clock) begin
    if(reset) begin
        value <= 64'h80000000;
    end
    else if(wen) begin
        value <= wData;
    end
    else begin
        value <= value;
    end
end

endmodule
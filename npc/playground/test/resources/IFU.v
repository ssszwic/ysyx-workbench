module IFU(
  // system
  input                 clock,
  input                 reset,
  // ioWBU
  output                ioWBU_ready,
  input                 ioWBU_valid,
  input         [63:0]  ioWBU_npc,
  // ioIFU
  input                 ioIFU_ready,
  output  reg           ioIFU_valid,
  output        [31:0]  ioIFU_inst,
  output  reg   [63:0]  ioIFU_pc,
  output  reg   [63:0]  ioIFU_pc4,
  // ioMem
  output  reg           ioMem_ren,
  output  reg   [31:0]  ioMem_addr,
  input         [63:0]  ioMem_rData,
  output  reg           ioMem_wen,
  output  reg   [7:0]   ioMem_wMask,
  output  reg   [63:0]  ioMem_wData,
  input                 ioMem_hit,
  input                 ioMem_rvalid
);

localparam  IDLE    = 3'b001,
            WORK    = 3'b010,
            FINISH  = 3'b100;
        
reg     [2:0]   state;
reg     [2:0]   next_state;
reg             next_ioIFU_valid;
reg             next_ioWBU_ready;

reg     [3:0]   cnt;
wire            start;
wire            finish;

import "DPI-C" function void set_pc_ptr(input logic [63:0] a []);
initial set_pc_ptr(ioIFU_pc);

// start signal: only generate once after reset
always@(posedge clock) begin
  if(reset) begin
    cnt <= 4'b0;
  end
  else if(cnt == 4'd15) begin
    cnt <= 4'd15;
  end
end

assign start = (cnt == 4'd10);

// state
always@(posedge clock) begin
  if(reset) begin
    state <= IDLE;
    ioWBU_ready <= 1'b1;
    ioIFU_valid <= 1'b0;
  end
  else begin
    state <= next_state;
    ioWBU_ready <= next_ioWBU_ready;
    ioIFU_valid <= next_ioIFU_valid;
  end
end

always@(*) begin
  case(state)
    IDLE: begin
      if((ioWBU_valid || start) && (!ioMem_hit)) begin
        next_state = WORK;
        next_ioWBU_ready = 1'b0;
        next_ioIFU_valid = 1'b0;
      end
      else if((ioWBU_valid || start) && ioMem_hit) begin
        next_state = FINISH;
        next_ioWBU_ready = 1'b0;
        next_ioIFU_valid = 1'b1;
      end
      else begin
        next_state = IDLE;
        next_ioWBU_ready = 1'b1;
        next_ioIFU_valid = 1'b0;
      end
    end
    WORK: begin
      next_ioWBU_ready = 1'b0;
      if(finish) begin
        next_state = FINISH;
        next_ioIFU_valid = 1'b1;
      end
      else begin
        next_state = WORK;
        next_ioIFU_valid = 1'b0;
      end
    end
    FINISH: begin
      if(ioIFU_ready) begin
        next_state = IDLE;
        next_ioWBU_ready = 1'b1;
        next_ioIFU_valid = 1'b0;
      end
      else begin
        next_state = FINISH;
        next_ioWBU_ready = 1'b0;
        next_ioIFU_valid = 1'b1;
      end
    end
    default: begin
      next_state = IDLE;
      next_ioWBU_ready = 1'b1;
      next_ioIFU_valid = 1'b0;
    end
  endcase
end

always@(posedge clock) begin
  if(reset) begin
    ioIFU_pc <= 64'h80000000;
    ioIFU_pc4 <= 64'b0;
  end
  else if((state == IDLE) && (ioWBU_valid || start)) begin
    ioIFU_pc <= npc;
    ioIFU_pc4 <= npc + 64'd4;
  end
  else begin
    ioIFU_pc <= ioIFU_pc;
    ioIFU_pc4 <= ioIFU_pc4;
  end
end

// read mem
assign ren = (state == IDLE) && (ioWBU_valid || start);
assign ioMem_addr = {npc[31:3], 3'b0};

// don't write mem
always@(posedge clock) begin
  if(reset) begin
    ioMem_wen   <= 1'b0;
    ioMem_wMask <= 8'b0;
    ioMem_wData <= 64'b0;
  end
  else begin
    ioMem_wen   <= 1'b0;
    ioMem_wMask <= 8'b0;
    ioMem_wData <= 64'b0;
  end
end

assign ioIFU_inst = (pc[2:0] == 3'b100) ? ioMem_rData[63:32] : ioMem_rData[31:0];
assign finish = ioMem_rvalid;

endmodule
module SRAM(
    input               clock,
    input               reset,
    // AXI-LITE AW
    input               axi_aw_valid,
    output  reg         axi_aw_ready,
    input       [31:0]  axi_aw_addr,
    input       [2:0]   axi_aw_prot,
    // AXI-LITE W
    input               axi_w_valid,
    output  reg         axi_w_ready,
    input       [63:0]  axi_w_data,
    input       [7:0]   axi_w_strb,
    // AXI-LITE B
    output  reg         axi_b_valid,
    input               axi_b_ready,
    output  reg [1:0]   axi_b_resp,
    // AXI-LITE AR
    input               axi_ar_valid,
    output  reg         axi_ar_ready,
    input       [31:0]  axi_ar_addr,
    input       [2:0]   axi_ar_prot,
    // AXI-LITE R
    output  reg         axi_r_valid,
    input               axi_r_ready,
    output  reg [63:0]  axi_r_data,
    output  reg [1:0]   axi_r_resp
);

import "DPI-C" function void pmem_write(input int waddr, input longint wdata, input byte wmask);
import "DPI-C" function void pmem_read(input int raddr, output longint rdata);

reg     [31:0]      aw_addr_r;
reg     [63:0]      w_data_r;
reg     [7:0]      w_strb_r;

always@(posedge clock) begin
    if(reset) begin
        axi_aw_ready <= 1'b1;
    end
    else if(axi_aw_valid && axi_aw_ready) begin
        // store address data when receive w_addr successfully
        axi_aw_ready <= 1'b0;
    end
    else if(axi_b_valid && axi_b_ready) begin
        // able to accept new address after send b_resp successfully
        axi_aw_ready <= 1'b1;
    end
    else begin
        axi_aw_ready <= axi_aw_ready;
    end
end

always@(posedge clock) begin
    if(reset) begin
        axi_w_ready <= 1'b1;
    end
    else if(axi_w_valid && axi_w_ready) begin
        // store address data when receive w_data successfully
        axi_w_ready <= 1'b0;
    end
    else if(axi_b_valid && axi_b_ready) begin
        // able to accept new data after send b_resp successfully
        axi_w_ready <= 1'b1;
    end
    else begin
        axi_w_rew_strb_rady <= axi_w_ready;
    end
end

// store address or data when receive
always@(posedge clock) begin
    if(reset) begin
        aw_addr_r <= 32'b0;
    end
    else if(axi_aw_valid && axi_aw_ready) begin
        aw_addr_r <= axi_aw_addr;
    end
    else begin
        aw_addr_r <= aw_addr_r;
    end
end
always@(posedge clock) begin
    if(reset) begin
        w_data_r <= 64'b0;
        w_strb_r <= 8'b0;
    end
    else if(axi_w_valid && axi_w_ready) begin
        w_data_r <= axi_w_data;
        w_strb_r <= axi_w_strb;
    end
    else begin
        w_data_r <= w_data_r;
        w_strb_r <= w_strb_r;
    end
end

// write data
always(*) begin
    if(axi_aw_valid && axi_aw_ready && (!axi_w_ready)) begin
        // data has arrived before address
        pmem_write(axi_aw_addr, w_data_r, w_strb_r);
    end
    else if(axi_w_valid && axi_w_ready && (!axi_aw_ready)) begin
        // address has arrived before data
        pmem_write(aw_addr_r, axi_w_data, axi_w_strb);
    end
    else if(axi_aw_valid && axi_aw_ready && axi_w_valid && axi_w_ready) begin
        // address and data arrive at the same time
        pmem_write(axi_aw_addr, axi_w_data, axi_w_strb);
    end
end

// send write response after wirte data
always @(posedge clock) begin
    if(reset) begin
        axi_b_valid <= 1'b0;
        axi_b_resp  <= 2'b0;
    end
    else if(axi_aw_valid && axi_aw_ready && (!axi_w_ready) ||
            (axi_w_valid && axi_w_ready && (!axi_aw_ready)) ||
            (axi_aw_valid && axi_aw_ready && axi_w_valid && axi_w_ready)) begin
        axi_b_valid <= 1'b1;
        // default write success
        axi_b_resp  <= 2'b0;
    end
    else if(axi_b_valid && axi_b_ready) begin
        axi_b_valid <= 1'b0;
        axi_b_resp  <= axi_b_resp;
    end
    else begin
        axi_b_valid <= axi_b_valid;
        axi_b_resp  <= axi_b_resp;
    end
end

/****************************************************/
// read
/****************************************************/
reg     [63:0]      rdata_from_dpic;

// send data on the next cycle of read
always @(posedge clock) begin
    if(reset) begin
        axi_ar_ready    <= 1'b1;
        axi_r_valid     <= 1'b0;
        axi_r_data      <= 64'b0;
        axi_r_resb      <= 2'b0;
    end
    else if(axi_ar_ready && axi_ar_valid) begin
        axi_ar_ready    <= 1'b0;
        axi_r_valid     <= 1'b1;
        axi_r_data      <= rdata_from_dpic;
        // default read success
        axi_r_resb      <= 2'b0;
    end
    else if(axi_r_ready && axi_r_valid) begin
        axi_ar_ready    <= 1'b1;
        axi_r_valid     <= 1'b0;
        axi_r_data      <= axi_r_data;
        axi_r_resb      <= axi_r_resb;
    end
    else begin
        axi_ar_ready    <= axi_ar_ready;
        axi_r_valid     <= axi_r_valid;
        axi_r_data      <= axi_r_data;
        axi_r_resb      <= axi_r_resb;
    end
end

// read data
always(*) begin
    if(axi_ar_ready && axi_ar_valid) begin
        pmem_read(axi_ar_addr, rdata_from_dpic);
    end
end

endmodule
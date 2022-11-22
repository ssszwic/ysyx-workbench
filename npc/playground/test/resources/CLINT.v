module MemVirtual(
  input                 clk,
  input                 reset,
  input                 addr,
  output reg  [63:0]    rData,
  // write
  input                 wen,
  input       [7:0]     wMask,
  input       [63:0]    wData
);
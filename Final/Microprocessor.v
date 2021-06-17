`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    14:51:51 06/04/2021
// Design Name:
// Module Name:    Microprocessor
// Project Name:
// Target Devices:
// Tool versions:
// Description:
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////
module Microprocessor(
    input CLK,
    input RST,
    input [7:0] INSTR,
    output [7:0] PC,
    output [6:0] DIS1,
    output [6:0] DIS2,
	 // to be deleted
	 output [7:0] SIGNAL,
	 output [7:0] ALU_OUTPUT,
	 output [7:0] REG_WRITE_DATA,
	 output [7:0] READ_DATA,
	 output [7:0] REG_READ_ONE,
	 output [7:0] REG_READ_TWO
    );

  // wire [7:0] SIGNAL;
  wire REAL_CLK;
  
  // wire [7:0] REG_WRITE_DATA;
  
  //wire [7:0] REG_READ_ONE;
  //wire [7:0] REG_READ_TWO;
  wire [1:0] IMM;
  //wire [7:0] ALU_OUTPUT;
  
  //wire [7:0] READ_DATA;
 
  assign REG_WRITE_DATA = (SIGNAL[1] == 1'b1) ? READ_DATA : ALU_OUTPUT;

  Frequency_Divider FD1 (.CLK(CLK),.RST(RST),.CLKOUT(REAL_CLK));
  
  Controller CTRL (.CLK(CLK), .INSTR(INSTR[7:6]), .SIGNAL(SIGNAL));
  
  // clk => real_clk
  Program_Counter PC1 (.CLK(CLK), .RST(RST), .JMP(SIGNAL[4]), .JMP_OFFSET(IMM), .ADDR(PC));
  // clk => real_clk
  Registers REG (.CLK(CLK), .RST(RST), .REGDST(SIGNAL[7]), .REGWRITE(SIGNAL[6]),
  .REG_SOURCE(INSTR[5:4]), .REG_TWO(INSTR[3:2]), .REG_DEST(INSTR[1:0]), .REG_WRITE_DATA(REG_WRITE_DATA), .READ_DATA_ONE(REG_READ_ONE), .READ_DATA_TWO(REG_READ_TWO), .IMM(IMM));
  
  ALU ALU (.ALUSRC(SIGNAL[5]), .ALUOP(SIGNAL[0]), .IN1(REG_READ_ONE), .IN2(REG_READ_TWO), .IN3(IMM), .OUT(ALU_OUTPUT));
  // clk => real_clk
  Data_Memory DM(.CLK(CLK), .RST(RST), .MEMREAD(SIGNAL[3]), .MEMWRITE(SIGNAL[2]), .ADDRESS(ALU_OUTPUT),.WRITE_DATA(REG_READ_TWO), .READ_DATA(READ_DATA));
  
  BCD7Segment BCD1 (.inp({1'b0, REG_WRITE_DATA[3:0]}), .out(DIS1));
  BCD7Segment BCD2 (.inp({1'b0, REG_WRITE_DATA[7:4]}), .out(DIS2)); 
  
endmodule

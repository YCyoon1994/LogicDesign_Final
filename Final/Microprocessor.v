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
	 // DIP LOW : normal mode
	 // DIP[0] 1 : print PC mode
	 // DIP[1] 1 : Sign Integer Mode ( not 2's complement )
	 // DIP[2] 1 : Decimal / Hex
	 input [2:0] DIP,
	 
    output [7:0] PC,
    output [6:0] DIS1,
    output [6:0] DIS2,
	 output [6:0] DIS3,
	 output [6:0] DIS4,
	 output [6:0] DIS5,
	 output [6:0] DIS6,
	 // to be deleted
	 output [5:0] LED,
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
  
  wire [4:0] OUT_SIG1;
  wire [4:0] OUT_SIG2;
  wire [4:0] OUT_SIG3;
  wire [4:0] OUT_SIG4;
  wire [4:0] OUT_SIG5;
  wire [4:0] OUT_SIG6;
 
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
  
  BCD7Segment BCD1 (.inp(OUT_SIG1), .out(DIS1));
  BCD7Segment BCD2 (.inp(OUT_SIG2), .out(DIS2));
  BCD7Segment BCD3 (.inp(OUT_SIG3), .out(DIS3));
  BCD7Segment BCD4 (.inp(OUT_SIG4), .out(DIS4)); 
  BCD7Segment BCD5 (.inp(OUT_SIG5), .out(DIS5));
  BCD7Segment BCD6 (.inp(OUT_SIG6), .out(DIS6));  
  // LED controller
  // clk => real_clk
  LEDController LED1 (.CLK(CLK), .RST(RST), .SIGNAL(SIGNAL), .LED(LED));
  OptionController(.CLK(CLK), .RST(RST), .DIP(DIP), .PC(PC), .SIGNAL(SIGNAL), .REG_WRITE_DATA(REG_WRITE_DATA), .OUT1(OUT_SIG1), .OUT2(OUT_SIG2), .OUT3(OUT_SIG3)
  , .OUT4(OUT_SIG4), .OUT5(OUT_SIG5), .OUT6(OUT_SIG6));
endmodule

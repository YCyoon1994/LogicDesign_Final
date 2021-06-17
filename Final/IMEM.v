`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:14:57 06/15/2021 
// Design Name: 
// Module Name:    IMEM 
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
module IMEM( instruction, Read_Address );
	
	output [7:0] instruction;
	input [7:0] Read_Address;
	wire [7:0] MemByte[31:0];
	
	assign MemByte[0] = { 2'b10, 2'b00, 2'b01, 2'b01 };
	assign MemByte[1] = { 2'b01, 2'b01, 2'b10, 2'b00 };
	assign MemByte[2] = { 2'b11, 2'b00, 2'b11, 2'b01 };
	assign MemByte[3] = { 2'b10, 2'b00, 2'b00, 2'b11 };
	assign MemByte[4] = { 2'b11, 2'b01, 2'b00, 2'b10 };
	assign MemByte[5] = { 2'b11, 2'b11, 2'b01, 2'b10 };
	assign MemByte[6] = { 2'b00, 2'b11, 2'b00, 2'b10 };
	assign MemByte[7] = { 2'b11, 2'b00, 2'b11, 2'b11 };
	assign MemByte[8] = { 2'b11, 2'b10, 2'b00, 2'b01 };
	assign MemByte[9] = { 2'b11, 2'b01, 2'b11, 2'b01 };
	assign MemByte[10] = { 2'b01, 2'b00, 2'b01, 2'b01 };
	assign MemByte[11] = { 2'b00, 2'b10, 2'b00, 2'b10 };
	assign MemByte[12] = { 2'b01, 2'b01, 2'b01, 2'b10 };
	assign MemByte[13] = { 2'b01, 2'b01, 2'b11, 2'b01 };
	assign MemByte[14] = { 2'b01, 2'b01, 2'b00, 2'b00 };
	assign MemByte[15] = { 2'b10, 2'b10, 2'b00, 2'b01 };
	assign MemByte[16] = { 2'b00, 2'b10, 2'b11, 2'b00 };
	assign MemByte[17] = { 2'b11, 2'b10, 2'b10, 2'b10 };
	assign MemByte[18] = { 2'b01, 2'b11, 2'b00, 2'b00 };
	assign MemByte[19] = { 2'b11, 2'b01, 2'b10, 2'b11 };
	assign MemByte[20] = { 2'b10, 2'b11, 2'b11, 2'b11 };
	assign MemByte[21] = { 2'b10, 2'b11, 2'b11, 2'b01 };
	assign MemByte[22] = { 2'b00, 2'b01, 2'b11, 2'b00 };
	assign MemByte[23] = { 2'b01, 2'b00, 2'b01, 2'b11 };
	assign MemByte[24] = { 2'b10, 2'b10, 2'b10, 2'b11 };
	assign MemByte[25] = { 2'b01, 2'b10, 2'b11, 2'b11 };
	assign MemByte[26] = { 2'b00, 2'b10, 2'b00, 2'b10 };
	assign MemByte[27] = { 2'b00, 2'b10, 2'b01, 2'b01 };
	assign MemByte[28] = { 2'b00, 2'b10, 2'b10, 2'b10 };
	assign MemByte[29] = { 2'b10, 2'b10, 2'b00, 2'b00 };
	assign MemByte[30] = { 2'b01, 2'b11, 2'b11, 2'b11 };
	assign MemByte[31] = { 2'b11, 2'b11, 2'b01, 2'b10 };

	assign instruction = MemByte[Read_Address];

endmodule

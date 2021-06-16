`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:02:20 06/16/2021 
// Design Name: 
// Module Name:    Controller 
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
module Controller(
	input [1:0] INSTR,
	output [7:0] SIGNAL
    );

	assign SIGNAL = (INSTR == 2'b00) ? 8'b11000001 :
						 (INSTR == 2'b01) ? 8'b01101010 :
						 (INSTR == 2'b10) ? 8'b00100100 : 
						 8'b00010000;		 
endmodule

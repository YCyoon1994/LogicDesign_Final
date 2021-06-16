`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:20:06 06/16/2021 
// Design Name: 
// Module Name:    Registers 
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
module Registers(
	input CLK,
	input RST,
	input REGDST,
	input REGWRITE,
	input [1:0] REG_SOURCE,
	input [1:0] REG_TWO,
	input [1:0] REG_DEST,
	input [7:0] REG_WRITE_DATA,
	
	output reg [7:0] READ_DATA_ONE,
	output reg [7:0] READ_DATA_TWO
    );
	 
	reg [7:0] REGISTER[3:0];
	reg [1:0] REG_WRITE;
	initial begin
		REGISTER[0] <= 8'b00000000;
		REGISTER[1] <= 8'b00000000;
		REGISTER[2] <= 8'b00000000;
		REGISTER[3] <= 8'b00000000;
		REG_WRITE <= 2'd00;
	end
	
	always @ (posedge CLK or posedge RST) begin
		if(RST) begin
			REGISTER[0] <= 8'b00000000;
			REGISTER[1] <= 8'b00000000;
			REGISTER[2] <= 8'b00000000;
			REGISTER[3] <= 8'b00000000;
		end
		else begin
			if(REGDST) begin
				REG_WRITE = REG_DEST;
			end
			else begin
				REG_WRITE = REG_TWO;
			end

			if(REGWRITE) begin
				REGISTER[REG_WRITE] = REG_WRITE_DATA; 
			end	
			
			READ_DATA_ONE <= REGISTER[REG_SOURCE];
			READ_DATA_TWO <= REGISTER[REG_TWO];
		end
	end
endmodule

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
	output reg [7:0] READ_DATA_TWO,
	output reg [1:0] IMM
    );
	 
	reg [7:0] REGISTER[3:0];
	
	initial begin
		REGISTER[0] <= 8'b00000000;
		REGISTER[1] <= 8'b00000000;
		REGISTER[2] <= 8'b00000000;
		REGISTER[3] <= 8'b00000000;
	end
	
	always @ (posedge CLK or posedge RST) begin
		if(RST) begin
			REGISTER[0] <= 8'd0;
			REGISTER[1] <= 8'd0;
			REGISTER[2] <= 8'd0;
			REGISTER[3] <= 8'd0;
			READ_DATA_ONE <= 8'd0;
			READ_DATA_TWO <= 8'd0;
			IMM <= 2'b00;
		end
		else begin
		
   		READ_DATA_ONE <= REGISTER[REG_SOURCE];
			READ_DATA_TWO <= REGISTER[REG_TWO];
			IMM <= REG_DEST;

		end
	end
	
	always @ (REG_WRITE_DATA) begin
		if(REGWRITE) begin
			if(REGDST) begin
				REGISTER[REG_DEST] <= REG_WRITE_DATA;
			end
			else begin
				REGISTER[REG_TWO] <= REG_WRITE_DATA;
			end
		end
	end
endmodule

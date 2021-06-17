`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    14:55:02 06/04/2021
// Design Name:
// Module Name:    Data_Memory
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
module Data_Memory(
	 input RST,
	 input CLK,
	 input MEMREAD,
	 input MEMWRITE,
  	
    input [7:0] ADDRESS,
    input [7:0] WRITE_DATA,
    output reg [7:0] READ_DATA
    );

	reg [7:0] MemByte[31:0];
	reg [7:0] temp_count;
	
	initial begin
			READ_DATA <= 0;
			temp_count = 0;
			repeat(16) begin
				MemByte[temp_count] = temp_count;
				MemByte[temp_count+8'd16] = ~temp_count + 1'b1;
				temp_count = temp_count + 1'b1;
			end
	end
	
	
	always @ (posedge RST or negedge CLK) begin
		if (RST) begin
			// initialize memory
			READ_DATA <= 0;
			temp_count = 0;
			repeat(16) begin
				MemByte[temp_count] = temp_count;
				MemByte[temp_count+8'd16] = ~temp_count + 1'b1;
				temp_count = temp_count + 1'b1;
			end
		end
		else begin
			if(MEMREAD == 1'b1) begin
				READ_DATA <= MemByte[ADDRESS];
			end
			
			if(MEMWRITE == 1'b1) begin
				MemByte[ADDRESS] <= WRITE_DATA;
			end
		end
	end
endmodule

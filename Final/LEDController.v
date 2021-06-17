`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:26:21 06/17/2021 
// Design Name: 
// Module Name:    LEDController 
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
module LEDController(
    input CLK,
    input RST,
    input [7:0] SIGNAL,
    output reg [5:0] LED
    );
	
	initial begin
		LED <= 6'b000000;
	end
	always @ (negedge CLK or posedge RST) begin
		if(RST) begin
			LED <= 6'b000001;
		end
		else begin
			LED[1:0] <= 2'b10;
			if(SIGNAL[0]) begin
				LED[5:2] = 4'b1000;
			end
			if(SIGNAL[4]) begin
				LED[5:2] = 4'b0001;
			end
			if(SIGNAL[3]) begin
				LED[5:2] = 4'b0100;
			end
			if(SIGNAL[2]) begin
				LED[5:2] = 4'b0010;
			end
		end
	end
endmodule

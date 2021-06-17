`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:07:44 06/16/2021 
// Design Name: 
// Module Name:    BCD7Segment 
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
module BCD7Segment(
    input [4:0] inp,
    output reg [6:0] out
    );
	 
	always @ (*)
		begin
			if (~inp[4])
			begin
				case (inp[3:0])
					4'd0 : out = 7'b1111110;
					4'd1 : out = 7'b0110000;
					4'd2 : out = 7'b1101101;
					4'd3 : out = 7'b1111001;
					4'd4 : out = 7'b0110011;
					4'd5 : out = 7'b1011011;
					4'd6 : out = 7'b1011111;
					4'd7 : out = 7'b1110010;
					4'd8 : out = 7'b1111111;
					4'd9 : out = 7'b1111011;
					4'd10 : out = 7'b1110111;
					4'd11 : out = 7'b0011111;
					4'd12 : out = 7'b1001110;
					4'd13 : out = 7'b0111101;
					4'd14 : out = 7'b1001111;
					4'd15 : out = 7'b1000111;
					default : out = 7'b0000000;
				endcase
			end
			else begin
				case (inp[3:0])
					4'd0 : out = 7'b0000000; // none
					4'd1 : out = 7'b0000001; // -
					4'd2 : out = 7'b0001110; // L
					4'd3 : out = 7'b1111110; // O
					4'd4 : out = 7'b1110111; // A
					4'd5 : out = 7'b1111110; // D
					4'd6 : out = 7'b1111100; // J
					4'd7 : out = 7'b0111110; // U
					4'd8 : out = 7'b1110110; // M
					4'd9 : out = 7'b1100111; // P
					4'd10 : out = 7'b1011011; // S
					4'd11 : out = 7'b0111110; // V
					4'd12 : out = 7'b1001111; // E
					default : out = 7'b0000000;
				endcase
			end
		end
endmodule

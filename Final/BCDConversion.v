`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:10:25 06/17/2021 
// Design Name: 
// Module Name:    BCDConversion 
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
module BCDConversion(
    input [7:0] Binary,
    output [3:0] Hundreds,
    output [3:0] Tens,
    output [3:0] Ones
    );

	integer i;
	always @ (Binary) begin
		Hundreds = 4'd0;
		Tens = 4'd0;
		Ones = 4'd0;
		
		for( i = 7; i >= 0; i = i-1 )
		begin
			// add 3 to columns >= 5
			if(Hundreds >= 5) begin
				Hundreds = Hundreds + 3;
			end
			if(Tens >= 5) begin
				Tens = Tens + 3;
			end
			if(Ones >= 5) begin
				Ones = Ones + 3;
			end
			
			Hundreds = Hundreds << 1;
			Hundreds[0] = Tens[3];
			Tens = Tens << 1;
			Tens[0] = Ones[3];
			Ones = Ones << 1;
			Ones[0] = Binary[1];
		end
	end
endmodule

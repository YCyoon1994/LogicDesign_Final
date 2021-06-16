`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:55:19 06/15/2021 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
	 input ALUSRC,
	 input ALUOP,
    input [7:0] IN1,
    input [7:0] IN2,
    input [1:0] IN3,
    output [7:0] OUT
    );

	assign OUT = ALUSRC == 1'b0 ? IN1+IN2 : 
					 ((IN3 == 2'b00) ? IN1 : 
					 ((IN3 == 2'b01) ? IN1 + 8'b00000001 : 
					 ((IN3 == 2'b10) ? IN1 - 8'b00000010 : IN1 - 8'b00000001 )));
endmodule

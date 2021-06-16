`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:53:22 06/04/2021 
// Design Name: 
// Module Name:    Frequency_Divider 
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
module Frequency_Divider(
    input CLK,
    input RST,
    output reg CLKOUT
    );
		reg[31:0] cnt;
		always @ (posedge CLK or posedge RST) begin
			if(RST) begin
				cnt <= 32'd0;
				CLKOUT <= 1'b0;
			end
			else if(cnt == 32'd25000000) begin
				cnt <= 32'd0;
				CLKOUT <= ~CLKOUT;
			end else begin
				cnt <= cnt + 1;
			end
		end

endmodule

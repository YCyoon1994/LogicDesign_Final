`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    14:58:54 06/04/2021
// Design Name:
// Module Name:    Program_Counter
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
module Program_Counter(
    input CLK,
    input RST,
	 input JMP,
	 input [1:0] JMP_OFFSET,
    output reg [7:0] ADDR
    );
	wire [7:0] temp;
  
	initial begin
		ADDR <= 8'd0;
	end
  

	always @ (negedge CLK or posedge RST) begin
		if(RST) begin
			ADDR <= 8'd0;
		end
		else begin
			ADDR = ADDR + 8'b00000001;
			
			if(JMP) begin
				case(JMP_OFFSET[1:0])
				  2'b00 : ADDR = ADDR;
				  2'b01 : ADDR = ADDR + 8'b00000001;
				  2'b10 : ADDR = ADDR - 8'b00000010;
				  2'b11 : ADDR = ADDR - 8'b00000001;
				endcase
			end
		end
	end
endmodule

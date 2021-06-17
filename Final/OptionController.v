`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:00:10 06/17/2021 
// Design Name: 
// Module Name:    OptionController 
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
module OptionController(
    input [2:0] DIP,
    input CLK,
	 input RST,
    input [7:0] PC,
	 input [7:0] SIGNAL,
	 input [7:0] REG_WRITE_DATA,
    output reg [4:0] OUT1,
    output reg [4:0] OUT2,
    output reg [4:0] OUT3,
    output reg [4:0] OUT4,
    output reg [4:0] OUT5,
    output reg [4:0] OUT6
    );
	
	wire [7:0] ADDER;
	wire [3:0] BCD_PC [2:0];
	wire [3:0] BCD_REG [2:0];
	
	assign ADDER = ~REG_WRITE_DATA + 1'b1;
	BCDConversion bcd1(.Binary(PC), .Hundreds(BCD_PC[2]), .Tens(BCD_PC[1]), .Ones(BCD_PC[0]));
	BCDConversion bcd2(.Binary(REG_WRITE_DATA), .Hundreds(BCD_REG[2]), .Tens(BCD_REG[1]), .Ones(BCD_REG[0]));
	initial begin
		OUT1 <= 5'b10000;
		OUT2 <= 5'b10000;
		OUT3 <= 5'b10000;
		OUT4 <= 5'b10000;
		OUT5 <= 5'b10000;
		OUT6 <= 5'b10000;
	end
	// negedge CLK or posedge <=> *
	// DIP LOW : normal mode
   // DIP[0] 1 : print PC mode
   // DIP[1] 1 : Sign Integer Mode ( not 2's complement )
   // DIP[2] 1 : Decimal / Hex
	always @ (negedge CLK or posedge RST) begin
		if(RST) begin
			OUT1 <= 5'b10001;
			OUT2 <= 5'b10001;
			OUT3 <= 5'b10001;
			OUT4 <= 5'b10001;
			OUT5 <= 5'b10001;
			OUT6 <= 5'b10001;
		end
		else begin
		// if only display at regwrite
		// block start
			if(SIGNAL[6]) begin
		// block end	
				case(DIP[2:0])
					3'b000 : begin
					// normal / 2's complement / Hex
						OUT1 <= {1'b0, REG_WRITE_DATA[3:0]};
						OUT2 <= {1'b0, REG_WRITE_DATA[7:4]};
						OUT3 <= 5'b10000;
						OUT4 <= 5'b10000;
						OUT5 <= 5'b10000;
						OUT6 <= 5'b10000;
					end
					3'b001 : begin
					// PC / 2's complement / Hex
						OUT1 <= {1'b0, PC[3:0]};
						OUT2 <= {1'b0, PC[7:4]};
						OUT3 <= 5'b10000;
						OUT4 <= 5'b10000;
						OUT5 <= 5'b10000;
						OUT6 <= 5'b10000;
					end
					3'b010 : begin
					// normal / Normal / Hex
						if (~REG_WRITE_DATA[7]) begin
							OUT1 <= {1'b0, REG_WRITE_DATA[3:0]};
							OUT2 <= {1'b0, REG_WRITE_DATA[7:4]};
							OUT3 <= 5'b10000;
							OUT4 <= 5'b10000;
							OUT5 <= 5'b10000;
							OUT6 <= 5'b10000;
						end
						else begin
							OUT1 <= {1'b0, ADDER[3:0]};
							OUT2 <= {1'b0, ADDER[7:4]};
							OUT3 <= 5'b10001;
							OUT4 <= 5'b10000;
							OUT5 <= 5'b10000;
							OUT6 <= 5'b10000;
						end
					end
					3'b011 : begin
						// PC / Normal / Hex
						OUT1 <= {1'b0, PC[3:0]};
						OUT2 <= {1'b0, PC[7:4]};
						OUT3 <= 5'b10000;
						OUT4 <= 5'b10000;
						OUT5 <= 5'b10000;
						OUT6 <= 5'b10000;
					end
					3'b100 : begin
						// normal / 2's complement / Decimal
						OUT1 <= {1'b0, BCD_REG[0]};
						OUT2 <= {1'b0, BCD_REG[1]};
						OUT3 <= {1'b0, BCD_REG[2]};
						OUT4 <= 5'b10000;
						OUT5 <= 5'b10000;
						OUT6 <= 5'b10000;
					end
					3'b101 : begin
						// PC / 2's complement / Decimal
						OUT1 <= {1'b0, BCD_PC[0]};
						OUT2 <= {1'b0, BCD_PC[1]};
						OUT3 <= {1'b0, BCD_PC[2]};
						OUT4 <= 5'b10000;
						OUT5 <= 5'b10000;
						OUT6 <= 5'b10000;
					end
					3'b110 : begin
						// normal / Normal / Decimal
						if (~REG_WRITE_DATA[7]) begin
							OUT1 <= {1'b0, BCD_REG[0]};
							OUT2 <= {1'b0, BCD_REG[1]};
							OUT3 <= {1'b0, BCD_REG[2]};
							OUT4 <= 5'b10000;
							OUT5 <= 5'b10000;
							OUT6 <= 5'b10000;
						end
						else begin
							OUT1 <= {1'b0, BCD_REG[0]};
							OUT2 <= {1'b0, BCD_REG[1]};
							OUT3 <= {1'b0, BCD_REG[2]};
							OUT4 <= 5'b10001;
							OUT5 <= 5'b10000;
							OUT6 <= 5'b10000;
						end
					end
					3'b111 : begin
						// PC / Normal / Decimal
						OUT1 <= {1'b0, BCD_PC[0]};
						OUT2 <= {1'b0, BCD_PC[1]};
						OUT3 <= {1'b0, BCD_PC[2]};
						OUT4 <= 5'b10000;
						OUT5 <= 5'b10000;
						OUT6 <= 5'b10000;
					end
				endcase
			// if only display at regwrite
		   // block start
			end
			else begin
				// JUMP
				if(SIGNAL[4]) begin
					OUT1 <= 5'b10000;
					OUT2 <= 5'b10110;
					OUT3 <= 5'b10111;
					OUT4 <= 5'b11000;
					OUT5 <= 5'b11001;
					OUT6 <= 5'b10000;
				end
				// SAVE
				if(SIGNAL[2]) begin
					OUT1 <= 5'b10000;
					OUT2 <= 5'b11010;
					OUT3 <= 5'b10100;
					OUT4 <= 5'b11011;
					OUT5 <= 5'b11101;
					OUT6 <= 5'b10000;
				end
				/*
				// ----
				OUT1 <= 5'b10001;
				OUT2 <= 5'b10001;
				OUT3 <= 5'b10001;
				OUT4 <= 5'b10001;
				OUT5 <= 5'b10001;
				OUT6 <= 5'b10001;
				*/
			end
			// block end
		end
	end
endmodule

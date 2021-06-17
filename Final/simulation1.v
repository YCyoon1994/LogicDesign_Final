`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:42:21 06/16/2021
// Design Name:   Microprocessor
// Module Name:   /csehome/alsichcan/Documents/Final/simulation1.v
// Project Name:  Final
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Microprocessor
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module simulation1;

	// Inputs
	reg CLK;
	reg RST;
	wire [7:0] INSTR;
	wire [7:0] ALU_OUTPUT;
	wire [7:0] REG_WRITE_DATA;
	wire [7:0] SIGNAL;
	wire [7:0] READ_DATA;
	wire [7:0] REG_READ_ONE;
	wire [7:0] REG_READ_TWO;
	
	// Outputs
	wire [7:0] PC;
	wire [6:0] DIS1;
	wire [6:0] DIS2;

	// Instantiate the Unit Under Test (UUT)
	Microprocessor uut (
		.CLK(CLK), 
		.RST(RST), 
		.INSTR(INSTR), 
		.PC(PC), 
		.DIS1(DIS1), 
		.DIS2(DIS2),
		.ALU_OUTPUT(ALU_OUTPUT),
		.REG_WRITE_DATA(REG_WRITE_DATA),
		.REG_READ_ONE(REG_READ_ONE),
		.REG_READ_TWO(REG_READ_TWO),
		.SIGNAL(SIGNAL),
		.READ_DATA(READ_DATA)
	);

	IMEM test (
		.instruction(INSTR),
		.Read_Address(PC)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		RST = 0;

      repeat(100) begin
			#10;
			CLK = ~CLK;
		end
		
		RST = 1;
		// Add stimulus here
      repeat(10000) begin
			#10;
			CLK = ~CLK;
		end
	end
      
endmodule


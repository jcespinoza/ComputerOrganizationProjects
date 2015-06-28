`timescale 1ns / 1ps
module CPUMain(
	 input reset,
    input [3:0] address,
    input [1:0] readAddr1,
    input [1:0] readAddr2,
    input [1:0] writeAddr,
	 input [1:0] aluFunc,
	 input [3:0] instruction,
    input muxSelect,
    input clk,
	 input [3:0] exWriteData,
	 output wire [3:0] readData1
    );

	wire [3:0] rd1;
	wire [3:0] rd2;
	wire [3:0] wd;
	wire [3:0] aluResult;
	
	assign readData1 = rd1;
	assign wd = muxSelect? aluResult : exWriteData;

	ProgramCounter PC (clk, reset, address);
	InstructionMemory IM (address, instruction);
	RegFile4Bit RF1 (readAddr1, readAddr2, writeAddr, wd, clk, 1, rd1, rd2);
	Alu4Bit ALU1 (rd1, rd2, aluFunc, aluResult);
endmodule

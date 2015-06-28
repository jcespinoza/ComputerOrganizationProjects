`timescale 1ns / 1ps
module Counter(
    input clk,
    input reset,
    output reg [3:0] s,
    input dir
    );

	always @ (posedge reset or posedge clk)
	begin
		if(reset)
			s = 4'b0000;
		else
			s = s + (dir? 4'b0001: -4'b0001);
	end
endmodule

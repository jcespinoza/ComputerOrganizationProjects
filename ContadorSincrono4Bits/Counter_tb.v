module Counter_tb;
	reg clk;
	reg reset = 1'b1;
	wire [3:0] s = 4'b0000;
	reg dir = 1'b1;

	Counter cc (
		.clk(clk),
		.reset(reset),
		.s(s),
		.dir(dir)
	);
	
	initial begin
	#1000;
	clk = 1'b1;
	#1000;
	#1000;
	#1000;
	#1000;
	#1000;
	end
	
endmodule

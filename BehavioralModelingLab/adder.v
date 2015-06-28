module adder(
	input [3:0] datain,
	output reg [3:0] dataout
   );

	always @ (datain)
	begin
		#2 dataout = datain + 2;
	end

endmodule

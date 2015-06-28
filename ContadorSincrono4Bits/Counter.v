module Counter(
    input clk,
    input reset,
    output [3:0] s,
    input dir
    );

	always @ (clk or reset)
	begin
		if(reset)
			s = 4'b0000;
		end if
	end

endmodule

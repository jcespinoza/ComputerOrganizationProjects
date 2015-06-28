module seven_segment(
    input [3:0] value,
    output reg [6:0] segments
    );

	always @ (value)
	begin
		case (value)
			4'B0010: segments = 7'B1011011;
			4'B0011: segments = 7'B1001111;
			4'B0100: segments = 7'B1100110;
			4'B0101: segments = 7'B1101101;
			4'B0110: segments = 7'B1111101;
			4'B0111: segments = 7'B0000111;
			4'B1000: segments = 7'B1111111;
			4'B1001: segments = 7'B1101111;
			default:
					segments = 	7'B0000000;
		endcase	
	end
endmodule

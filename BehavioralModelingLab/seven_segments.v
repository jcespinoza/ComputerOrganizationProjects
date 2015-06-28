module seven_segment(
	input good,
	input [3:0] datain,
	output reg [6:0] segments
   );

	always @ (good or datain)
		begin
			if(good)
			begin
				case (datain)
					4'd2 : #2 segments = 7'b1011011;
					4'd3 : #2 segments = 7'b1001111;
					4'd4 : #2 segments = 7'b1100110;
					4'd5 : #2 segments = 7'b1101101;
					4'd6 : #2 segments = 7'b1111101;
					4'd7 : #2 segments = 7'b0000111;
					4'd8 : #2 segments = 7'b1111111;
					4'd9 : #2 segments = 7'b1100111;
					default: #2 segments = 7'b0000000;
				endcase
			end
			else
			begin
				#2 segments = 7'b0111111;
			end
		end

endmodule

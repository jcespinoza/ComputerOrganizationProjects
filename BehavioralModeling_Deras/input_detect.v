module input_detect(
    input [7:0] sw,
    output reg [3:0] bin_value
    );

	always @ (sw)
	begin
		case (1'b1)
			sw[0]: bin_value = 4'b0000;
			sw[1]: bin_value = 4'b0001;
			sw[2]: bin_value = 4'b0010;
			sw[3]: bin_value = 4'b0011;
			sw[4]: bin_value = 4'b0100;
			sw[5]: bin_value = 4'b0101;
			sw[6]: bin_value = 4'b0110;
			sw[7]: bin_value = 4'b0111;
			default:
					bin_value = 4'b0000;
		endcase
	end
endmodule

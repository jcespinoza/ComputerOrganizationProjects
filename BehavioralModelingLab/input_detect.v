module input_detect(
	input SW0,
	input SW1,
	input SW2,
	input SW3,
	input SW4,
	input SW5,
	input SW6,
	input SW7,
	output reg good,
	output reg [3:0] input_out
	);

	always @ (SW7 or SW6 or SW5 or SW4 or SW3 or SW2 or SW1 or SW0) 
	begin
		#2 good = 1'b1;
		case ({SW7,SW6,SW5,SW4,SW3,SW2,SW1,SW0})
			8'b00000001 : #2 input_out = 4'h0;
			8'b00000010 : #2 input_out = 4'h1;
			8'b00000100 : #2 input_out = 4'h2;
			8'b00001000 : #2 input_out = 4'h3;
			8'b00010000 : #2 input_out = 4'h4;
			8'b00100000 : #2 input_out = 4'h5;
			8'b01000000 : #2 input_out = 4'h6;
			8'b10000000 : #2 input_out = 4'h7;
			default: begin
							#2 input_out = 4'h0;
							#2 good = 1'b0;
						end
		endcase
	end
	
endmodule

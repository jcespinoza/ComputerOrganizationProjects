module InstructionMemory(
    input [3:0] programCounter,
    output reg[8:0] instruction
    );

	always @ (programCounter)
	begin
		case (programCounter)
			4'b0000: instruction = 8'b101 00 0011; //li r0, 3
			4'b0001: instruction = 8'b101 01 0110; //li r1, 6
			4'b0010: instruction = 8'b101 10 0111; 
			4'b0011: instruction = 8'b101 11 1001;
			4'b0100: instruction = 8'b000 00 01 10;
			4'b0101: instruction = 8'b001 01 10 11;
			4'b
		default:
			instruction = 8'b0000 0000;
		endcase
	end
endmodule

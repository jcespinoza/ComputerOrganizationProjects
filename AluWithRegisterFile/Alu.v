module Alu4Bit(
    input [3:0] op1,
    input [3:0] op2,
    input [2:0] func,
    output reg [3:0] result
    );

	parameter ADD = 3'b000;
	parameter SUB = 3'b001;
	parameter AND = 3'b010;
	parameter OR = 3'b011;
	parameter SLT = 3'b100;
	
	always @ (op1 or op2 or func)
	begin
		case (func)
			ADD: result = op1 + op2;
			SUB: result = op1 - op2;
			AND: result = op1 & op2;
			 OR: result = op1 | op2;
			SLT: result = op1 < op2;
			default: result = 4'b0000;
		endcase
	end	

endmodule

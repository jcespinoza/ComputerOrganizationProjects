module RegFile4Bit (
	input [1:0] read_addr1,
	input [1:0] read_addr2,
	input [1:0] write_addr,
	input [3:0] write_data,
	input clk,
	input reg_write,
	output [3:0] read_data1,
	output [3:0] read_data2
	);
	
	reg [3:0] registers[0:3];
	
	assign read_data1 = registers[read_addr1];
	assign read_data2 = registers[read_addr2];
	
	always @ (posedge clk)
	begin
		if (reg_write)
			registers[write_addr] = write_data;
	end
	
endmodule

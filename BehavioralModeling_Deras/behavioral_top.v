module behavioral_top(
    input [7:0] sw,
    output wire [6:0] segments
    );

	wire [3:0] id_out;
	wire [3:0] adder_out;
	input_detect id1 (sw, id_out);
	adder a1 (id_out, adder_out);
	seven_segment s1 (adder_out, segments);
endmodule

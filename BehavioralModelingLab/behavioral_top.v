module behavioral_top(
	input SW0,
	input SW1,
	input SW2,
	input SW3,
	input SW4,
	input SW5,
	input SW6,
	input SW7,
	output [6:0] segments
	);
	
wire  good;
wire [3:0] datain, dataout;

input_detect I1(
	.SW0(SW0),
	.SW1(SW1),
	.SW2(SW2),
	.SW3(SW3),
	.SW4(SW4),
	.SW5(SW5),
	.SW6(SW6),
	.SW7(SW7),
	.good(good),
	input_out(datain)
	);
adder A1 (
	.datain(datain),
	.dataout(dataout)
	);
seven_segment S1(
	.good(good),
	.datain(dataout),
	.segments(segments)
	);
endmodule
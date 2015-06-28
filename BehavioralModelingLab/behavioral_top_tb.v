////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2003 Xilinx, Inc.
// All Right Reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____ 
//  /   /\/   / 
// /___/  \  /    Vendor: Xilinx 
// \   \   \/     Version : 10.1.01
//  \   \         Application : ISE
//  /   /         Filename : behavioral_top_tb.tfw
// /___/   /\     Timestamp : Tue Jan 27 09:08:39 2009
// \   \  /  \ 
//  \___\/\___\ 
//
//Command: 
//Design Name: behavioral_top_tb
//Device: Xilinx
//
`timescale 1ns/1ps

module behavioral_top_tb;
    reg SW0 = 1'b0;
    reg SW1 = 1'b0;
    reg SW2 = 1'b0;
    reg SW3 = 1'b0;
    reg SW4 = 1'b0;
    reg SW5 = 1'b0;
    reg SW6 = 1'b0;
    reg SW7 = 1'b0;
    wire [6:0] segments;


    behavioral_top UUT (
        .SW0(SW0),
        .SW1(SW1),
        .SW2(SW2),
        .SW3(SW3),
        .SW4(SW4),
        .SW5(SW5),
        .SW6(SW6),
        .SW7(SW7),
        .segments(segments));

    initial begin
        // -------------  Current Time:  200ns
        #200;
        SW0 = 1'b1;
        // -------------------------------------
        // -------------  Current Time:  300ns
        #100;
        SW0 = 1'b0;
        SW1 = 1'b1;
        // -------------------------------------
        // -------------  Current Time:  400ns
        #100;
        SW1 = 1'b0;
        SW2 = 1'b1;
        // -------------------------------------
        // -------------  Current Time:  500ns
        #100;
        SW2 = 1'b0;
        SW3 = 1'b1;
        // -------------------------------------
        // -------------  Current Time:  600ns
        #100;
        SW3 = 1'b0;
        SW4 = 1'b1;
        // -------------------------------------
        // -------------  Current Time:  700ns
        #100;
        SW4 = 1'b0;
        SW5 = 1'b1;
        // -------------------------------------
        // -------------  Current Time:  800ns
        #100;
        SW5 = 1'b0;
        SW6 = 1'b1;
        // -------------------------------------
        // -------------  Current Time:  900ns
        #100;
        SW6 = 1'b0;
        SW7 = 1'b1;
        // -------------------------------------
        // -------------  Current Time:  1000ns
        #100;
        SW7 = 1'b0;
        // -------------------------------------
        // -------------  Current Time:  1100ns
        #100;
        SW0 = 1'b1;
        SW7 = 1'b1;
        // -------------------------------------
        // -------------  Current Time:  1200ns
        #100;
        SW0 = 1'b0;
        SW2 = 1'b1;
        SW4 = 1'b1;
        SW7 = 1'b0;
        // -------------------------------------
        // -------------  Current Time:  1300ns
        #100;
        SW1 = 1'b1;
        SW2 = 1'b0;
        SW3 = 1'b1;
        SW4 = 1'b0;
        SW5 = 1'b1;
        // -------------------------------------
        // -------------  Current Time:  1400ns
        #100;
        SW1 = 1'b0;
        SW3 = 1'b0;
        SW5 = 1'b0;
    end

endmodule


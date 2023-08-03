`default_nettype none

module RNG(
    input wire clk_i,
    input wire rst_i,
    input wire [15:0] in_i,
    output wire d_o
);

    wire [15:0] random_number;
    LFSR lfsr(
        .clk_i(clk_i),
        .rst_i(rst_i),
        .d_o(random_number)
    );

    assign d_o = (random_number < in_i);
endmodule
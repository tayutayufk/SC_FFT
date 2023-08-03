`default_nettype none

module LFSR(
    input   wire clk_i,
    input   wire rst_i,
    output  wire [15:0] d_o
);

    reg [15:0] d;
    assign d_o = d;
    wire feedback = d[15] ^ d[13] ^ d[12] ^ d[10];

    always @(posedge clk_i) begin
        if (!rst_i) begin
            d <= 16'habcd;
        end else begin
            d <= {d[14:0], feedback};
        end
    end

endmodule
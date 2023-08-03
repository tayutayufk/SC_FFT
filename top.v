
`default_nettype none

module top(
    input wire clk_i,
    input wire rst_i
);

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0);
    end
    
    reg [31:0] cnt = 0;
    reg [31:0] rng_cnt = 0;

    wire SNs;
    RNG rng(
        .clk_i(clk_i),
        .rst_i(rst_i),
        .in_i(16'h7fff),
        .d_o(SNs)
    );

    always @(posedge clk_i) begin
        cnt <= cnt + 1;
        
        if(SNs)rng_cnt <= rng_cnt + 1;

        if (cnt == 32'd10000)begin
            $display("rng_cnt = %d", rng_cnt);
            $finish;
        end
    end
endmodule
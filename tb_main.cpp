// sim_main.cpp
#include <verilated.h>
#include "Vtop.h"
#include <verilated_vcd_c.h>

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    Vtop *top = new Vtop;
    top->clk_i = 0;
    top->rst_i = 0;
    

    while (!Verilated::gotFinish()) {
        if (main_time < 10)top->rst_i = 0;
        else top->rst_i = 1;

        main_time += 1;
        top->clk_i = !top->clk_i;
        top->eval();

    }

    top->final();
    delete top;
    return 0;
}
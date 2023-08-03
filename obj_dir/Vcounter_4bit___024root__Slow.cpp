// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter_4bit.h for the primary calling header

#include "verilated.h"

#include "Vcounter_4bit__Syms.h"
#include "Vcounter_4bit___024root.h"

void Vcounter_4bit___024root___ctor_var_reset(Vcounter_4bit___024root* vlSelf);

Vcounter_4bit___024root::Vcounter_4bit___024root(Vcounter_4bit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcounter_4bit___024root___ctor_var_reset(this);
}

void Vcounter_4bit___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vcounter_4bit___024root::~Vcounter_4bit___024root() {
}

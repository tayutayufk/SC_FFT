// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcounter_4bit.h for the primary calling header

#ifndef VERILATED_VCOUNTER_4BIT___024ROOT_H_
#define VERILATED_VCOUNTER_4BIT___024ROOT_H_  // guard

#include "verilated.h"

class Vcounter_4bit__Syms;

class Vcounter_4bit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset_n,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(cnt,3,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcounter_4bit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcounter_4bit___024root(Vcounter_4bit__Syms* symsp, const char* v__name);
    ~Vcounter_4bit___024root();
    VL_UNCOPYABLE(Vcounter_4bit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

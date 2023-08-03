// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter_4bit.h for the primary calling header

#include "verilated.h"

#include "Vcounter_4bit__Syms.h"
#include "Vcounter_4bit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter_4bit___024root___dump_triggers__act(Vcounter_4bit___024root* vlSelf);
#endif  // VL_DEBUG

void Vcounter_4bit___024root___eval_triggers__act(Vcounter_4bit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter_4bit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter_4bit___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                      | ((~ (IData)(vlSelf->reset_n)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__reset_n__0)));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset_n__0 = vlSelf->reset_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcounter_4bit___024root___dump_triggers__act(vlSelf);
    }
#endif
}

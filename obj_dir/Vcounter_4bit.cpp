// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcounter_4bit.h"
#include "Vcounter_4bit__Syms.h"

//============================================================
// Constructors

Vcounter_4bit::Vcounter_4bit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcounter_4bit__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset_n{vlSymsp->TOP.reset_n}
    , en{vlSymsp->TOP.en}
    , cnt{vlSymsp->TOP.cnt}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcounter_4bit::Vcounter_4bit(const char* _vcname__)
    : Vcounter_4bit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcounter_4bit::~Vcounter_4bit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcounter_4bit___024root___eval_debug_assertions(Vcounter_4bit___024root* vlSelf);
#endif  // VL_DEBUG
void Vcounter_4bit___024root___eval_static(Vcounter_4bit___024root* vlSelf);
void Vcounter_4bit___024root___eval_initial(Vcounter_4bit___024root* vlSelf);
void Vcounter_4bit___024root___eval_settle(Vcounter_4bit___024root* vlSelf);
void Vcounter_4bit___024root___eval(Vcounter_4bit___024root* vlSelf);

void Vcounter_4bit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcounter_4bit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcounter_4bit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcounter_4bit___024root___eval_static(&(vlSymsp->TOP));
        Vcounter_4bit___024root___eval_initial(&(vlSymsp->TOP));
        Vcounter_4bit___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcounter_4bit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcounter_4bit::eventsPending() { return false; }

uint64_t Vcounter_4bit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcounter_4bit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcounter_4bit___024root___eval_final(Vcounter_4bit___024root* vlSelf);

VL_ATTR_COLD void Vcounter_4bit::final() {
    Vcounter_4bit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcounter_4bit::hierName() const { return vlSymsp->name(); }
const char* Vcounter_4bit::modelName() const { return "Vcounter_4bit"; }
unsigned Vcounter_4bit::threads() const { return 1; }

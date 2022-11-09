// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop___024root.h"
#include "VTop__Syms.h"

#include "verilated_dpi.h"

void VTop___024root___combo__TOP__6(VTop___024root* vlSelf);
void VTop___024root___sequent__TOP__7(VTop___024root* vlSelf);
void VTop___024root___sequent__TOP__8(VTop___024root* vlSelf);
void VTop_MemVirtual___settle__TOP__Top__DOT__MemCtrlInst__DOT__MemInst_data__2(VTop_MemVirtual* vlSelf);
void VTop___024root___settle__TOP__5(VTop___024root* vlSelf);

void VTop___024root___eval(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval\n"); );
    // Body
    VTop___024root___combo__TOP__6(vlSelf);
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VTop___024root___sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VTop___024root___sequent__TOP__8(vlSelf);
        VTop_MemVirtual___settle__TOP__Top__DOT__MemCtrlInst__DOT__MemInst_data__2((&vlSymsp->TOP__Top__DOT__MemCtrlInst__DOT__MemInst_data));
        VTop___024root___settle__TOP__5(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData VTop___024root___change_request_1(VTop___024root* vlSelf);

VL_INLINE_OPT QData VTop___024root___change_request(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___change_request\n"); );
    // Body
    return (VTop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VTop___024root___change_request_1(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VTop___024root___eval_debug_assertions(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_cpuEn & 0xfeU))) {
        Verilated::overWidthError("io_cpuEn");}
}
#endif  // VL_DEBUG

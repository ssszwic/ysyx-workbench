// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop___024root.h"
#include "VTop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void cpu_inst_ebreak();

VL_INLINE_OPT void VTop___024root____Vdpiimwrap_Top__DOT__IDUInst__DOT__EbreakInst__DOT__cpu_inst_ebreak_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root____Vdpiimwrap_Top__DOT__IDUInst__DOT__EbreakInst__DOT__cpu_inst_ebreak_TOP\n"); );
    // Body
    cpu_inst_ebreak();
}

VL_INLINE_OPT void VTop___024root___settle__TOP__4(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___settle__TOP__4\n"); );
    // Variables
    CData/*2:0*/ Top__DOT__IDUInst__DOT___GEN_14;
    CData/*5:0*/ Top__DOT__ALUInst__DOT__shiftInst__DOT___result_T_3;
    VlWide<4>/*127:0*/ __Vtemp2;
    VlWide<4>/*127:0*/ __Vtemp3;
    VlWide<4>/*127:0*/ __Vtemp4;
    VlWide<3>/*95:0*/ __Vtemp8;
    VlWide<3>/*95:0*/ __Vtemp9;
    QData/*63:0*/ Top__DOT__RegFilesInst__DOT___GEN_13;
    QData/*63:0*/ Top__DOT__RegFilesInst__DOT___GEN_26;
    QData/*63:0*/ Top__DOT__RegFilesInst__DOT___GEN_45;
    QData/*63:0*/ Top__DOT__RegFilesInst__DOT___GEN_58;
    QData/*63:0*/ Top__DOT__ALUInst__DOT__shiftInst__DOT___data1_T_8;
    // Body
    if ((1U & ((IData)(vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData) 
               ^ (IData)(vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData)))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfffffffffffffffeULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | (IData)((IData)((1U & (IData)(vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData)))));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 1U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfffffffffffffffdULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 2U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfffffffffffffffbULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 3U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfffffffffffffff7ULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 4U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xffffffffffffffefULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 5U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xffffffffffffffdfULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 6U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xffffffffffffffbfULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 7U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xffffffffffffff7fULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 8U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[639]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfffffffffffffeffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 9U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfffffffffffffdffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0xaU)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfffffffffffffbffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0xbU)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfffffffffffff7ffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0xcU)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xffffffffffffefffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0xdU)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[644]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xffffffffffffdfffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0xeU)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xffffffffffffbfffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0xfU)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xffffffffffff7fffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x10U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfffffffffffeffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x11U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfffffffffffdffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x12U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfffffffffffbffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x13U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfffffffffff7ffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x14U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xffffffffffefffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x15U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xffffffffffdfffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x16U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xffffffffffbfffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x17U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xffffffffff7fffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x18U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfffffffffeffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x19U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfffffffffdffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x1aU)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfffffffffbffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x1bU)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfffffffff7ffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x1cU)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xffffffffefffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x1dU)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xffffffffdfffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x1eU)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[661]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xffffffffbfffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x1fU)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xffffffff7fffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x20U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfffffffeffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x21U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfffffffdffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x22U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[665]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfffffffbffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x23U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfffffff7ffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x24U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xffffffefffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x25U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xffffffdfffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x26U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xffffffbfffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x27U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xffffff7fffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x28U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfffffeffffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x29U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfffffdffffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x2aU)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfffffbffffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x2bU)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfffff7ffffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x2cU)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xffffefffffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x2dU)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xffffdfffffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x2eU)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xffffbfffffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x2fU)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xffff7fffffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x30U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfffeffffffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x31U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfffdffffffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x32U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfffbffffffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x33U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfff7ffffffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x34U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xffefffffffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x35U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xffdfffffffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x36U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xffbfffffffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x37U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xff7fffffffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x38U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfeffffffffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x39U)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfdffffffffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x3aU)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[689]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xfbffffffffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x3bU)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xf7ffffffffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x3cU)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xefffffffffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x3dU)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xdfffffffffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x3eU)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0xbfffffffffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                        >> 0x3fU)) ^ (IData)((vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData 
            = ((0x7fffffffffffffffULL & vlSelf->Top__DOT__IFUInst__DOT____Vtogcov__MemVirtualInst_instr_rData) 
               | ((QData)((IData)((1U & (IData)((vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->Top__DOT__IFUInst_io_inst = ((4U == (7U 
                                                 & (IData)(vlSelf->Top__DOT__IFUInst__DOT__pc)))
                                          ? (IData)(
                                                    (vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData 
                                                     >> 0x20U))
                                          : (IData)(vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData));
    ++(vlSymsp->__Vcoverage[772]);
    if ((0x100073U == vlSelf->Top__DOT__IFUInst_io_inst)) {
        ++(vlSymsp->__Vcoverage[770]);
        VTop___024root____Vdpiimwrap_Top__DOT__IDUInst__DOT__EbreakInst__DOT__cpu_inst_ebreak_TOP();
    } else {
        ++(vlSymsp->__Vcoverage[771]);
    }
    if (((8U == (0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 2U))) ^ (IData)(vlSelf->Top__DOT____Vtogcov__IDUInst_io_wenMem))) {
        ++(vlSymsp->__Vcoverage[228]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_wenMem 
            = (8U == (0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                               >> 2U)));
    }
    if (((0x1bU == (0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                             >> 2U))) ^ (IData)(vlSelf->Top__DOT____Vtogcov__IDUInst_io_jumpSel))) {
        ++(vlSymsp->__Vcoverage[230]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_jumpSel 
            = (0x1bU == (0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                  >> 2U)));
    }
    if (((0x18U == (0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                             >> 2U))) ^ (IData)(vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_typeBSel))) {
        ++(vlSymsp->__Vcoverage[234]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_typeBSel 
            = (0x18U == (0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                  >> 2U)));
    }
    if (((5U == (0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 2U))) ^ (IData)(vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_aupicSel))) {
        ++(vlSymsp->__Vcoverage[235]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_aupicSel 
            = (5U == (0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                               >> 2U)));
    }
    if (((0x100073U == vlSelf->Top__DOT__IFUInst_io_inst) 
         ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__EbreakInst_ebreak))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__EbreakInst_ebreak 
            = (0x100073U == vlSelf->Top__DOT__IFUInst_io_inst);
    }
    if ((1U & (vlSelf->Top__DOT__IFUInst_io_inst ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[67]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xfffffffeU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (1U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((2U & (vlSelf->Top__DOT__IFUInst_io_inst ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[68]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xfffffffdU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (2U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((4U & (vlSelf->Top__DOT__IFUInst_io_inst ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[69]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xfffffffbU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (4U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((8U & (vlSelf->Top__DOT__IFUInst_io_inst ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[70]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xfffffff7U & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (8U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((0x10U & (vlSelf->Top__DOT__IFUInst_io_inst 
                  ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[71]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xffffffefU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x10U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((0x20U & (vlSelf->Top__DOT__IFUInst_io_inst 
                  ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[72]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xffffffdfU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x20U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((0x40U & (vlSelf->Top__DOT__IFUInst_io_inst 
                  ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xffffffbfU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x40U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((0x80U & (vlSelf->Top__DOT__IFUInst_io_inst 
                  ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xffffff7fU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x80U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((0x100U & (vlSelf->Top__DOT__IFUInst_io_inst 
                   ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xfffffeffU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x100U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((0x200U & (vlSelf->Top__DOT__IFUInst_io_inst 
                   ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xfffffdffU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x200U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((0x400U & (vlSelf->Top__DOT__IFUInst_io_inst 
                   ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xfffffbffU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x400U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((0x800U & (vlSelf->Top__DOT__IFUInst_io_inst 
                   ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xfffff7ffU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x800U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((0x1000U & (vlSelf->Top__DOT__IFUInst_io_inst 
                    ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xffffefffU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x1000U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((0x2000U & (vlSelf->Top__DOT__IFUInst_io_inst 
                    ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xffffdfffU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x2000U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((0x4000U & (vlSelf->Top__DOT__IFUInst_io_inst 
                    ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xffffbfffU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x4000U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((0x8000U & (vlSelf->Top__DOT__IFUInst_io_inst 
                    ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xffff7fffU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x8000U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((0x10000U & (vlSelf->Top__DOT__IFUInst_io_inst 
                     ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xfffeffffU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x10000U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((0x20000U & (vlSelf->Top__DOT__IFUInst_io_inst 
                     ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xfffdffffU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x20000U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((0x40000U & (vlSelf->Top__DOT__IFUInst_io_inst 
                     ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xfffbffffU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x40000U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((0x80000U & (vlSelf->Top__DOT__IFUInst_io_inst 
                     ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xfff7ffffU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x80000U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((0x100000U & (vlSelf->Top__DOT__IFUInst_io_inst 
                      ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xffefffffU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x100000U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((0x200000U & (vlSelf->Top__DOT__IFUInst_io_inst 
                      ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xffdfffffU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x200000U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((0x400000U & (vlSelf->Top__DOT__IFUInst_io_inst 
                      ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xffbfffffU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x400000U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((0x800000U & (vlSelf->Top__DOT__IFUInst_io_inst 
                      ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xff7fffffU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x800000U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((0x1000000U & (vlSelf->Top__DOT__IFUInst_io_inst 
                       ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xfeffffffU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x1000000U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((0x2000000U & (vlSelf->Top__DOT__IFUInst_io_inst 
                       ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xfdffffffU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x2000000U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((0x4000000U & (vlSelf->Top__DOT__IFUInst_io_inst 
                       ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xfbffffffU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x4000000U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((0x8000000U & (vlSelf->Top__DOT__IFUInst_io_inst 
                       ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xf7ffffffU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x8000000U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((0x10000000U & (vlSelf->Top__DOT__IFUInst_io_inst 
                        ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xefffffffU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x10000000U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((0x20000000U & (vlSelf->Top__DOT__IFUInst_io_inst 
                        ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xdfffffffU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x20000000U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((0x40000000U & (vlSelf->Top__DOT__IFUInst_io_inst 
                        ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0xbfffffffU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x40000000U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if (((vlSelf->Top__DOT__IFUInst_io_inst ^ vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst 
            = ((0x7fffffffU & vlSelf->Top__DOT____Vtogcov__IFUInst_io_inst) 
               | (0x80000000U & vlSelf->Top__DOT__IFUInst_io_inst));
    }
    if ((1U & ((IData)(((vlSelf->Top__DOT__IFUInst_io_inst 
                         >> 0x1fU) ? 0x1ffffffffULL
                         : 0ULL)) ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0)))) {
        ++(vlSymsp->__Vcoverage[706]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1fffffffeULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | (IData)((IData)((1U & (IData)(((vlSelf->Top__DOT__IFUInst_io_inst 
                                                 >> 0x1fU)
                                                 ? 0x1ffffffffULL
                                                 : 0ULL))))));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 1U)) ^ (IData)(
                                                    (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                     >> 1U))))) {
        ++(vlSymsp->__Vcoverage[707]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1fffffffdULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 2U)) ^ (IData)(
                                                    (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                     >> 2U))))) {
        ++(vlSymsp->__Vcoverage[708]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1fffffffbULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 3U)) ^ (IData)(
                                                    (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                     >> 3U))))) {
        ++(vlSymsp->__Vcoverage[709]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1fffffff7ULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 4U)) ^ (IData)(
                                                    (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                     >> 4U))))) {
        ++(vlSymsp->__Vcoverage[710]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1ffffffefULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 5U)) ^ (IData)(
                                                    (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                     >> 5U))))) {
        ++(vlSymsp->__Vcoverage[711]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1ffffffdfULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 6U)) ^ (IData)(
                                                    (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                     >> 6U))))) {
        ++(vlSymsp->__Vcoverage[712]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1ffffffbfULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 7U)) ^ (IData)(
                                                    (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                     >> 7U))))) {
        ++(vlSymsp->__Vcoverage[713]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1ffffff7fULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 8U)) ^ (IData)(
                                                    (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                     >> 8U))))) {
        ++(vlSymsp->__Vcoverage[714]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1fffffeffULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 9U)) ^ (IData)(
                                                    (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                     >> 9U))))) {
        ++(vlSymsp->__Vcoverage[715]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1fffffdffULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 0xaU)) ^ (IData)(
                                                      (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                       >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[716]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1fffffbffULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 0xbU)) ^ (IData)(
                                                      (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                       >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[717]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1fffff7ffULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 0xcU)) ^ (IData)(
                                                      (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                       >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[718]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1ffffefffULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 0xdU)) ^ (IData)(
                                                      (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                       >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[719]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1ffffdfffULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 0xeU)) ^ (IData)(
                                                      (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                       >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[720]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1ffffbfffULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 0xfU)) ^ (IData)(
                                                      (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                       >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[721]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1ffff7fffULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 0x10U)) ^ (IData)(
                                                       (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                        >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[722]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1fffeffffULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 0x11U)) ^ (IData)(
                                                       (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                        >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[723]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1fffdffffULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 0x12U)) ^ (IData)(
                                                       (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                        >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[724]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1fffbffffULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 0x13U)) ^ (IData)(
                                                       (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                        >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[725]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1fff7ffffULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 0x14U)) ^ (IData)(
                                                       (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                        >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[726]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1ffefffffULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 0x15U)) ^ (IData)(
                                                       (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                        >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[727]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1ffdfffffULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 0x16U)) ^ (IData)(
                                                       (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                        >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[728]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1ffbfffffULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 0x17U)) ^ (IData)(
                                                       (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                        >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[729]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1ff7fffffULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 0x18U)) ^ (IData)(
                                                       (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                        >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[730]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1feffffffULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 0x19U)) ^ (IData)(
                                                       (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                        >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[731]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1fdffffffULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 0x1aU)) ^ (IData)(
                                                       (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                        >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[732]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1fbffffffULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 0x1bU)) ^ (IData)(
                                                       (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                        >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[733]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1f7ffffffULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 0x1cU)) ^ (IData)(
                                                       (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                        >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[734]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1efffffffULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 0x1dU)) ^ (IData)(
                                                       (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                        >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[735]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1dfffffffULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 0x1eU)) ^ (IData)(
                                                       (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                        >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[736]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x1bfffffffULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 0x1fU)) ^ (IData)(
                                                       (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                        >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0x17fffffffULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                          >> 0x1fU) ? 0x1ffffffffULL
                          : 0ULL) >> 0x20U)) ^ (IData)(
                                                       (vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
                                                        >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0 
            = ((0xffffffffULL & vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0) 
               | ((QData)((IData)((1U & (IData)((((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x1ffffffffULL
                                                   : 0ULL) 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    vlSelf->Top__DOT__IDUInst_io_alu_typeBEqSel = (IData)(
                                                          (0x60U 
                                                           == 
                                                           (0x607cU 
                                                            & vlSelf->Top__DOT__IFUInst_io_inst)));
    vlSelf->Top__DOT__IDUInst_io_alu_neqSel = (IData)(
                                                      (0x1060U 
                                                       == 
                                                       (0x707cU 
                                                        & vlSelf->Top__DOT__IFUInst_io_inst)));
    vlSelf->Top__DOT__IDUInst_io_renMem = (IData)((3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->Top__DOT__IFUInst_io_inst)));
    vlSelf->Top__DOT__IDUInst_io_alu_jalrSel = (IData)(
                                                       (0x64U 
                                                        == 
                                                        (0x707cU 
                                                         & vlSelf->Top__DOT__IFUInst_io_inst)));
    vlSelf->Top__DOT__IDUInst_io_alu_geSel = (IData)(
                                                     (0x5060U 
                                                      == 
                                                      (0x507cU 
                                                       & vlSelf->Top__DOT__IFUInst_io_inst)));
    vlSelf->Top__DOT__IDUInst__DOT__typeR = (IData)(
                                                    (0x30U 
                                                     == 
                                                     (0x74U 
                                                      & vlSelf->Top__DOT__IFUInst_io_inst)));
    Top__DOT__RegFilesInst__DOT___GEN_13 = ((0xdU == 
                                             (0x1fU 
                                              & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                 >> 0xfU)))
                                             ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_13
                                             : ((0xcU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                     >> 0xfU)))
                                                 ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_12
                                                 : 
                                                ((0xbU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                      >> 0xfU)))
                                                  ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_11
                                                  : 
                                                 ((0xaU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_10
                                                   : 
                                                  ((9U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_9
                                                    : 
                                                   ((8U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_8
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_7
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                           >> 0xfU)))
                                                       ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_6
                                                       : 
                                                      ((5U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                            >> 0xfU)))
                                                        ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_5
                                                        : 
                                                       ((4U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                             >> 0xfU)))
                                                         ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_4
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                              >> 0xfU)))
                                                          ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_3
                                                          : 
                                                         ((2U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                               >> 0xfU)))
                                                           ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_2
                                                           : 
                                                          ((1U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                                >> 0xfU)))
                                                            ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_1
                                                            : vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_0)))))))))))));
    Top__DOT__RegFilesInst__DOT___GEN_45 = ((0xdU == 
                                             (0x1fU 
                                              & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                 >> 0x14U)))
                                             ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_13
                                             : ((0xcU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                     >> 0x14U)))
                                                 ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_12
                                                 : 
                                                ((0xbU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                      >> 0x14U)))
                                                  ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_11
                                                  : 
                                                 ((0xaU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_10
                                                   : 
                                                  ((9U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_9
                                                    : 
                                                   ((8U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_8
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                          >> 0x14U)))
                                                      ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_7
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                           >> 0x14U)))
                                                       ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_6
                                                       : 
                                                      ((5U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                            >> 0x14U)))
                                                        ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_5
                                                        : 
                                                       ((4U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                             >> 0x14U)))
                                                         ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_4
                                                         : 
                                                        ((3U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                              >> 0x14U)))
                                                          ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_3
                                                          : 
                                                         ((2U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                               >> 0x14U)))
                                                           ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_2
                                                           : 
                                                          ((1U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                                >> 0x14U)))
                                                            ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_1
                                                            : vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_0)))))))))))));
    vlSelf->Top__DOT__IDUInst__DOT__typeIL = (IData)(
                                                     (3U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->Top__DOT__IFUInst_io_inst)));
    vlSelf->Top__DOT__IDUInst__DOT__typeII = (IData)(
                                                     (0x10U 
                                                      == 
                                                      (0x74U 
                                                       & vlSelf->Top__DOT__IFUInst_io_inst)));
    vlSelf->Top__DOT__IDUInst__DOT__typeU = (IData)(
                                                    (0x14U 
                                                     == 
                                                     (0x5cU 
                                                      & vlSelf->Top__DOT__IFUInst_io_inst)));
    if (((IData)(vlSelf->Top__DOT__IDUInst_io_alu_typeBEqSel) 
         ^ (IData)(vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_typeBEqSel))) {
        ++(vlSymsp->__Vcoverage[237]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_typeBEqSel 
            = vlSelf->Top__DOT__IDUInst_io_alu_typeBEqSel;
    }
    if (((IData)(vlSelf->Top__DOT__IDUInst_io_alu_neqSel) 
         ^ (IData)(vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_neqSel))) {
        ++(vlSymsp->__Vcoverage[242]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_neqSel 
            = vlSelf->Top__DOT__IDUInst_io_alu_neqSel;
    }
    if (((IData)(vlSelf->Top__DOT__IDUInst_io_renMem) 
         ^ (IData)(vlSelf->Top__DOT____Vtogcov__IDUInst_io_renMem))) {
        ++(vlSymsp->__Vcoverage[229]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_renMem 
            = vlSelf->Top__DOT__IDUInst_io_renMem;
    }
    if (((IData)(vlSelf->Top__DOT__IDUInst_io_alu_jalrSel) 
         ^ (IData)(vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_jalrSel))) {
        ++(vlSymsp->__Vcoverage[238]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_jalrSel 
            = vlSelf->Top__DOT__IDUInst_io_alu_jalrSel;
    }
    if (((IData)(vlSelf->Top__DOT__IDUInst_io_alu_geSel) 
         ^ (IData)(vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_geSel))) {
        ++(vlSymsp->__Vcoverage[240]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_geSel 
            = vlSelf->Top__DOT__IDUInst_io_alu_geSel;
    }
    if ((1U & ((~ (IData)(vlSelf->Top__DOT__IDUInst__DOT__typeR)) 
               ^ (IData)(vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_immeSel)))) {
        ++(vlSymsp->__Vcoverage[236]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_immeSel 
            = (1U & (~ (IData)(vlSelf->Top__DOT__IDUInst__DOT__typeR)));
    }
    if (((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeR) 
         ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__typeR))) {
        ++(vlSymsp->__Vcoverage[703]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__typeR 
            = vlSelf->Top__DOT__IDUInst__DOT__typeR;
    }
    vlSelf->Top__DOT__IDUInst_io_alu_subSel = (((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeR) 
                                                & (0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                       >> 0xcU)))) 
                                               & (0x20U 
                                                  == 
                                                  (vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x19U)));
    Top__DOT__RegFilesInst__DOT___GEN_26 = ((0x1aU 
                                             == (0x1fU 
                                                 & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                    >> 0xfU)))
                                             ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_26
                                             : ((0x19U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                     >> 0xfU)))
                                                 ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_25
                                                 : 
                                                ((0x18U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                      >> 0xfU)))
                                                  ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_24
                                                  : 
                                                 ((0x17U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_23
                                                   : 
                                                  ((0x16U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_22
                                                    : 
                                                   ((0x15U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_21
                                                     : 
                                                    ((0x14U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_20
                                                      : 
                                                     ((0x13U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                           >> 0xfU)))
                                                       ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_19
                                                       : 
                                                      ((0x12U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                            >> 0xfU)))
                                                        ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_18
                                                        : 
                                                       ((0x11U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                             >> 0xfU)))
                                                         ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_17
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                              >> 0xfU)))
                                                          ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_16
                                                          : 
                                                         ((0xfU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                               >> 0xfU)))
                                                           ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_15
                                                           : 
                                                          ((0xeU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                                >> 0xfU)))
                                                            ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_14
                                                            : Top__DOT__RegFilesInst__DOT___GEN_13)))))))))))));
    Top__DOT__RegFilesInst__DOT___GEN_58 = ((0x1aU 
                                             == (0x1fU 
                                                 & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                    >> 0x14U)))
                                             ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_26
                                             : ((0x19U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                     >> 0x14U)))
                                                 ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_25
                                                 : 
                                                ((0x18U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                      >> 0x14U)))
                                                  ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_24
                                                  : 
                                                 ((0x17U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_23
                                                   : 
                                                  ((0x16U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_22
                                                    : 
                                                   ((0x15U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_21
                                                     : 
                                                    ((0x14U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                          >> 0x14U)))
                                                      ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_20
                                                      : 
                                                     ((0x13U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                           >> 0x14U)))
                                                       ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_19
                                                       : 
                                                      ((0x12U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                            >> 0x14U)))
                                                        ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_18
                                                        : 
                                                       ((0x11U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                             >> 0x14U)))
                                                         ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_17
                                                         : 
                                                        ((0x10U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                              >> 0x14U)))
                                                          ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_16
                                                          : 
                                                         ((0xfU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                               >> 0x14U)))
                                                           ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_15
                                                           : 
                                                          ((0xeU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                                >> 0x14U)))
                                                            ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_14
                                                            : Top__DOT__RegFilesInst__DOT___GEN_45)))))))))))));
    if (((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeIL) 
         ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__typeIL))) {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__typeIL 
            = vlSelf->Top__DOT__IDUInst__DOT__typeIL;
    }
    if (((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeII) 
         ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__typeII))) {
        ++(vlSymsp->__Vcoverage[701]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__typeII 
            = vlSelf->Top__DOT__IDUInst__DOT__typeII;
    }
    Top__DOT__IDUInst__DOT___GEN_14 = ((((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeII) 
                                         & (1U == (3U 
                                                   & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                      >> 0xcU)))) 
                                        | (IData)((
                                                   (1U 
                                                    == 
                                                    (1U 
                                                     & (IData)(vlSelf->Top__DOT__IDUInst__DOT__typeR))) 
                                                   & (0x1000U 
                                                      == 
                                                      (0xbe003000U 
                                                       & vlSelf->Top__DOT__IFUInst_io_inst)))))
                                        ? 2U : ((((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeII) 
                                                  & (7U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                         >> 0xcU)))) 
                                                 | (((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeR) 
                                                     & (7U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                            >> 0xcU)))) 
                                                    & (0U 
                                                       == 
                                                       (vlSelf->Top__DOT__IFUInst_io_inst 
                                                        >> 0x19U))))
                                                 ? 3U
                                                 : 
                                                ((((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeII) 
                                                   & (6U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                          >> 0xcU)))) 
                                                  | (((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeR) 
                                                      & (6U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                             >> 0xcU)))) 
                                                     & (0U 
                                                        == 
                                                        (vlSelf->Top__DOT__IFUInst_io_inst 
                                                         >> 0x19U))))
                                                  ? 4U
                                                  : 
                                                 ((((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeII) 
                                                    & (4U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                           >> 0xcU)))) 
                                                   | (((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeR) 
                                                       & (4U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                              >> 0xcU)))) 
                                                      & (0U 
                                                         == 
                                                         (vlSelf->Top__DOT__IFUInst_io_inst 
                                                          >> 0x19U))))
                                                   ? 5U
                                                   : 
                                                  ((0xdU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                        >> 2U)))
                                                    ? 6U
                                                    : 0U)))));
    vlSelf->Top__DOT__IDUInst_io_alu_rightSel = (((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeII) 
                                                  & (5U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                         >> 0xcU)))) 
                                                 | (IData)(
                                                           ((1U 
                                                             == 
                                                             (1U 
                                                              & (IData)(vlSelf->Top__DOT__IDUInst__DOT__typeR))) 
                                                            & (0x5000U 
                                                               == 
                                                               (0xbe007000U 
                                                                & vlSelf->Top__DOT__IFUInst_io_inst)))));
    vlSelf->Top__DOT__IDUInst_io_alu_unsignSel = (((IData)(
                                                           (0x3060U 
                                                            == 
                                                            (0x707cU 
                                                             & vlSelf->Top__DOT__IFUInst_io_inst))) 
                                                   | ((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeII) 
                                                      & (3U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                             >> 0xcU))))) 
                                                  | (((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeR) 
                                                      & (3U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                             >> 0xcU)))) 
                                                     & (0U 
                                                        == 
                                                        (vlSelf->Top__DOT__IFUInst_io_inst 
                                                         >> 0x19U))));
    vlSelf->Top__DOT__IDUInst_io_alu_wordSel = (((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeII) 
                                                 & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                    >> 3U)) 
                                                | ((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeR) 
                                                   & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                      >> 3U)));
    vlSelf->Top__DOT__IDUInst_io_alu_arithSel = ((IData)(
                                                         ((1U 
                                                           == 
                                                           (1U 
                                                            & (IData)(vlSelf->Top__DOT__IDUInst__DOT__typeII))) 
                                                          & (0x40005000U 
                                                             == 
                                                             (0x40007000U 
                                                              & vlSelf->Top__DOT__IFUInst_io_inst)))) 
                                                 | (((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeR) 
                                                     & (5U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                            >> 0xcU)))) 
                                                    & (0x20U 
                                                       == 
                                                       (vlSelf->Top__DOT__IFUInst_io_inst 
                                                        >> 0x19U))));
    vlSelf->Top__DOT__IDUInst__DOT__typeI = (((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeII) 
                                              | (IData)(vlSelf->Top__DOT__IDUInst__DOT__typeIL)) 
                                             | (0x1bU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                    >> 2U))));
    if (((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeU) 
         ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__typeU))) {
        ++(vlSymsp->__Vcoverage[705]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__typeU 
            = vlSelf->Top__DOT__IDUInst__DOT__typeU;
    }
    vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme3 = 
        (1U & ((0x1bU == (0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                   >> 2U))) ? (vlSelf->Top__DOT__IFUInst_io_inst 
                                               >> 0x14U)
                : ((~ (IData)(vlSelf->Top__DOT__IDUInst__DOT__typeU)) 
                   & ((0x18U == (0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                          >> 2U))) ? 
                      (vlSelf->Top__DOT__IFUInst_io_inst 
                       >> 7U) : (vlSelf->Top__DOT__IFUInst_io_inst 
                                 >> 0x1fU)))));
    vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme4 = 
        ((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeU)
          ? 0U : (0x3fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                           >> 0x19U)));
    vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme2 = 
        (0xffU & (((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeU) 
                   | (0x1bU == (0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                         >> 2U)))) ? 
                  (vlSelf->Top__DOT__IFUInst_io_inst 
                   >> 0xcU) : ((vlSelf->Top__DOT__IFUInst_io_inst 
                                >> 0x1fU) ? 0xffU : 0U)));
    vlSelf->Top__DOT__IDUInst__DOT___GEN_0 = (0xfffU 
                                              & ((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeU)
                                                  ? 
                                                 (vlSelf->Top__DOT__IFUInst_io_inst 
                                                  >> 0x14U)
                                                  : 
                                                 ((vlSelf->Top__DOT__IFUInst_io_inst 
                                                   >> 0x1fU)
                                                   ? 0x7ffU
                                                   : 0U)));
    if (((IData)(vlSelf->Top__DOT__IDUInst_io_alu_subSel) 
         ^ (IData)(vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_subSel))) {
        ++(vlSymsp->__Vcoverage[239]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_subSel 
            = vlSelf->Top__DOT__IDUInst_io_alu_subSel;
    }
    vlSelf->Top__DOT__RegFilesInst_io_rs1Data = ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                      >> 0xfU)))
                                                  ? 0ULL
                                                  : 
                                                 ((0x1fU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_31
                                                   : 
                                                  ((0x1eU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_30
                                                    : 
                                                   ((0x1dU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_29
                                                     : 
                                                    ((0x1cU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_28
                                                      : 
                                                     ((0x1bU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                           >> 0xfU)))
                                                       ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_27
                                                       : Top__DOT__RegFilesInst__DOT___GEN_26))))));
    vlSelf->Top__DOT__RegFilesInst_io_rs2Data = ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                      >> 0x14U)))
                                                  ? 0ULL
                                                  : 
                                                 ((0x1fU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_31
                                                   : 
                                                  ((0x1eU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_30
                                                    : 
                                                   ((0x1dU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_29
                                                     : 
                                                    ((0x1cU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                          >> 0x14U)))
                                                      ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_28
                                                      : 
                                                     ((0x1bU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                           >> 0x14U)))
                                                       ? vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_27
                                                       : Top__DOT__RegFilesInst__DOT___GEN_58))))));
    vlSelf->Top__DOT__IDUInst_io_alu_aluSel = ((((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeII) 
                                                 & (1U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                        >> 0xdU)))) 
                                                | (((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeR) 
                                                    & (1U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                           >> 0xdU)))) 
                                                   & (0U 
                                                      == 
                                                      (vlSelf->Top__DOT__IFUInst_io_inst 
                                                       >> 0x19U))))
                                                ? 1U
                                                : (IData)(Top__DOT__IDUInst__DOT___GEN_14));
    if (((IData)(vlSelf->Top__DOT__IDUInst_io_alu_rightSel) 
         ^ (IData)(vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_rightSel))) {
        ++(vlSymsp->__Vcoverage[243]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_rightSel 
            = vlSelf->Top__DOT__IDUInst_io_alu_rightSel;
    }
    if (((IData)(vlSelf->Top__DOT__IDUInst_io_alu_unsignSel) 
         ^ (IData)(vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_unsignSel))) {
        ++(vlSymsp->__Vcoverage[241]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_unsignSel 
            = vlSelf->Top__DOT__IDUInst_io_alu_unsignSel;
    }
    if (((IData)(vlSelf->Top__DOT__IDUInst_io_alu_wordSel) 
         ^ (IData)(vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_wordSel))) {
        ++(vlSymsp->__Vcoverage[245]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_wordSel 
            = vlSelf->Top__DOT__IDUInst_io_alu_wordSel;
    }
    if (((IData)(vlSelf->Top__DOT__IDUInst_io_alu_arithSel) 
         ^ (IData)(vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_arithSel))) {
        ++(vlSymsp->__Vcoverage[244]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_arithSel 
            = vlSelf->Top__DOT__IDUInst_io_alu_arithSel;
    }
    if (((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeI) 
         ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__typeI))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__typeI 
            = vlSelf->Top__DOT__IDUInst__DOT__typeI;
    }
    vlSelf->Top__DOT__IDUInst_io_wenReg = ((((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeR) 
                                             | (IData)(vlSelf->Top__DOT__IDUInst__DOT__typeI)) 
                                            | (IData)(vlSelf->Top__DOT__IDUInst__DOT__typeU)) 
                                           | (0x1bU 
                                              == (0x1fU 
                                                  & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                     >> 2U))));
    vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme6 = 
        (1U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeI)
                ? (vlSelf->Top__DOT__IFUInst_io_inst 
                   >> 0x14U) : (IData)((0xa0U == (0xfcU 
                                                  & vlSelf->Top__DOT__IFUInst_io_inst)))));
    vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme5 = 
        (0xfU & (((0x1bU == (0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                      >> 2U))) | (IData)(vlSelf->Top__DOT__IDUInst__DOT__typeI))
                  ? (vlSelf->Top__DOT__IFUInst_io_inst 
                     >> 0x15U) : ((IData)(vlSelf->Top__DOT__IDUInst__DOT__typeU)
                                   ? 0U : (vlSelf->Top__DOT__IFUInst_io_inst 
                                           >> 8U))));
    if (((IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme3) 
         ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme3))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme3 
            = vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme3;
    }
    if ((1U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme4) 
               ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme4)))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme4 
            = ((0x3eU & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme4)) 
               | (1U & (IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme4)));
    }
    if ((2U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme4) 
               ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme4)))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme4 
            = ((0x3dU & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme4)) 
               | (2U & (IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme4)));
    }
    if ((4U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme4) 
               ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme4)))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme4 
            = ((0x3bU & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme4)) 
               | (4U & (IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme4)));
    }
    if ((8U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme4) 
               ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme4)))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme4 
            = ((0x37U & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme4)) 
               | (8U & (IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme4)));
    }
    if ((0x10U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme4) 
                  ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme4)))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme4 
            = ((0x2fU & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme4)) 
               | (0x10U & (IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme4)));
    }
    if ((0x20U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme4) 
                  ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme4)))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme4 
            = ((0x1fU & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme4)) 
               | (0x20U & (IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme4)));
    }
    if ((1U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme2) 
               ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme2)))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme2 
            = ((0xfeU & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme2)) 
               | (1U & (IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme2)));
    }
    if ((2U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme2) 
               ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme2)))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme2 
            = ((0xfdU & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme2)) 
               | (2U & (IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme2)));
    }
    if ((4U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme2) 
               ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme2)))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme2 
            = ((0xfbU & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme2)) 
               | (4U & (IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme2)));
    }
    if ((8U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme2) 
               ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme2)))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme2 
            = ((0xf7U & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme2)) 
               | (8U & (IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme2)));
    }
    if ((0x10U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme2) 
                  ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme2)))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme2 
            = ((0xefU & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme2)) 
               | (0x10U & (IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme2)));
    }
    if ((0x20U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme2) 
                  ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme2)))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme2 
            = ((0xdfU & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme2)) 
               | (0x20U & (IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme2)));
    }
    if ((0x40U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme2) 
                  ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme2)))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme2 
            = ((0xbfU & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme2)) 
               | (0x40U & (IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme2)));
    }
    if ((0x80U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme2) 
                  ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme2)))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme2 
            = ((0x7fU & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme2)) 
               | (0x80U & (IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme2)));
    }
    if ((1U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0) 
               ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1)))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1 
            = ((0x7feU & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1)) 
               | (1U & (IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0)));
    }
    if ((2U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0) 
               ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1)))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1 
            = ((0x7fdU & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1)) 
               | (2U & (IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0)));
    }
    if ((4U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0) 
               ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1)))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1 
            = ((0x7fbU & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1)) 
               | (4U & (IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0)));
    }
    if ((8U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0) 
               ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1)))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1 
            = ((0x7f7U & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1)) 
               | (8U & (IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0)));
    }
    if ((0x10U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0) 
                  ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1)))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1 
            = ((0x7efU & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1)) 
               | (0x10U & (IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0)));
    }
    if ((0x20U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0) 
                  ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1)))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1 
            = ((0x7dfU & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1)) 
               | (0x20U & (IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0)));
    }
    if ((0x40U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0) 
                  ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1)))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1 
            = ((0x7bfU & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1)) 
               | (0x40U & (IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0)));
    }
    if ((0x80U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0) 
                  ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1)))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1 
            = ((0x77fU & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1)) 
               | (0x80U & (IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0)));
    }
    if ((0x100U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0) 
                   ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1)))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1 
            = ((0x6ffU & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1)) 
               | (0x100U & (IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0)));
    }
    if ((0x200U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0) 
                   ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1)))) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1 
            = ((0x5ffU & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1)) 
               | (0x200U & (IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0)));
    }
    if ((0x400U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0) 
                   ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1)))) {
        ++(vlSymsp->__Vcoverage[769]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1 
            = ((0x3ffU & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1)) 
               | (0x400U & (IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0)));
    }
    if ((1U & ((IData)(vlSelf->Top__DOT__RegFilesInst_io_rs1Data) 
               ^ (IData)(vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data)))) {
        ++(vlSymsp->__Vcoverage[310]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfffffffffffffffeULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | (IData)((IData)((1U & (IData)(vlSelf->Top__DOT__RegFilesInst_io_rs1Data)))));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 1U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[311]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfffffffffffffffdULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 2U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[312]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfffffffffffffffbULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 3U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[313]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfffffffffffffff7ULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 4U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[314]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xffffffffffffffefULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 5U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[315]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xffffffffffffffdfULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 6U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xffffffffffffffbfULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 7U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[317]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xffffffffffffff7fULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 8U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfffffffffffffeffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 9U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[319]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfffffffffffffdffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0xaU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfffffffffffffbffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0xbU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfffffffffffff7ffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0xcU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xffffffffffffefffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0xdU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xffffffffffffdfffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0xeU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xffffffffffffbfffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0xfU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xffffffffffff7fffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x10U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfffffffffffeffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x11U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[327]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfffffffffffdffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x12U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[328]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfffffffffffbffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x13U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[329]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfffffffffff7ffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x14U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[330]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xffffffffffefffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x15U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[331]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xffffffffffdfffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x16U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[332]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xffffffffffbfffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x17U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[333]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xffffffffff7fffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x18U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[334]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfffffffffeffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x19U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[335]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfffffffffdffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x1aU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[336]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfffffffffbffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x1bU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[337]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfffffffff7ffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x1cU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[338]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xffffffffefffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x1dU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[339]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xffffffffdfffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x1eU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[340]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xffffffffbfffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x1fU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[341]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xffffffff7fffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x20U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[342]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfffffffeffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x21U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[343]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfffffffdffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x22U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[344]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfffffffbffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x23U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[345]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfffffff7ffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x24U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[346]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xffffffefffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x25U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[347]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xffffffdfffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x26U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[348]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xffffffbfffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x27U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[349]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xffffff7fffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x28U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[350]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfffffeffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x29U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[351]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfffffdffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x2aU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[352]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfffffbffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x2bU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[353]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfffff7ffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x2cU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[354]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xffffefffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x2dU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[355]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xffffdfffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x2eU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[356]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xffffbfffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x2fU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[357]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xffff7fffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x30U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[358]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfffeffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x31U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[359]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfffdffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x32U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[360]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfffbffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x33U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[361]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfff7ffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x34U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[362]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xffefffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x35U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[363]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xffdfffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x36U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[364]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xffbfffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x37U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[365]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xff7fffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x38U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[366]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfeffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x39U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[367]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfdffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x3aU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[368]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xfbffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x3bU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[369]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xf7ffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x3cU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[370]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xefffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x3dU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[371]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xdfffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x3eU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[372]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0xbfffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                        >> 0x3fU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[373]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data 
            = ((0x7fffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs1Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
        = ((((0x18U == (0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                 >> 2U))) | (0x1bU 
                                             == (0x1fU 
                                                 & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                    >> 2U)))) 
            | (5U == (0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                               >> 2U)))) ? vlSelf->Top__DOT__IFUInst__DOT__pc
            : vlSelf->Top__DOT__RegFilesInst_io_rs1Data);
    Top__DOT__ALUInst__DOT__shiftInst__DOT___data1_T_8 
        = ((IData)(vlSelf->Top__DOT__IDUInst_io_alu_arithSel)
            ? (((QData)((IData)(((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                >> 0x1fU)))
                                  ? 0xffffffffU : 0U))) 
                << 0x20U) | (QData)((IData)(vlSelf->Top__DOT__RegFilesInst_io_rs1Data)))
            : (QData)((IData)(vlSelf->Top__DOT__RegFilesInst_io_rs1Data)));
    if ((1U & ((IData)(vlSelf->Top__DOT__RegFilesInst_io_rs2Data) 
               ^ (IData)(vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data)))) {
        ++(vlSymsp->__Vcoverage[374]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfffffffffffffffeULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | (IData)((IData)((1U & (IData)(vlSelf->Top__DOT__RegFilesInst_io_rs2Data)))));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 1U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[375]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfffffffffffffffdULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 2U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[376]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfffffffffffffffbULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 3U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[377]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfffffffffffffff7ULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 4U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[378]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xffffffffffffffefULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 5U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[379]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xffffffffffffffdfULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 6U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[380]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xffffffffffffffbfULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 7U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[381]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xffffffffffffff7fULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 8U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[382]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfffffffffffffeffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 9U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[383]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfffffffffffffdffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0xaU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[384]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfffffffffffffbffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0xbU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[385]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfffffffffffff7ffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0xcU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[386]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xffffffffffffefffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0xdU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[387]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xffffffffffffdfffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0xeU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[388]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xffffffffffffbfffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0xfU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[389]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xffffffffffff7fffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x10U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[390]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfffffffffffeffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x11U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[391]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfffffffffffdffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x12U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[392]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfffffffffffbffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x13U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[393]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfffffffffff7ffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x14U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[394]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xffffffffffefffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x15U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[395]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xffffffffffdfffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x16U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[396]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xffffffffffbfffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x17U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[397]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xffffffffff7fffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x18U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[398]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfffffffffeffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x19U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[399]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfffffffffdffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x1aU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[400]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfffffffffbffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x1bU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[401]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfffffffff7ffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x1cU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[402]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xffffffffefffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x1dU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[403]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xffffffffdfffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x1eU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[404]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xffffffffbfffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x1fU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[405]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xffffffff7fffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x20U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[406]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfffffffeffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x21U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[407]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfffffffdffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x22U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[408]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfffffffbffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x23U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[409]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfffffff7ffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x24U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[410]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xffffffefffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x25U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[411]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xffffffdfffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x26U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[412]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xffffffbfffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x27U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[413]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xffffff7fffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x28U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[414]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfffffeffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x29U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[415]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfffffdffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x2aU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[416]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfffffbffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x2bU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[417]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfffff7ffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x2cU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[418]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xffffefffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x2dU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[419]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xffffdfffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x2eU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[420]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xffffbfffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x2fU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[421]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xffff7fffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x30U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[422]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfffeffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x31U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[423]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfffdffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x32U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[424]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfffbffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x33U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[425]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfff7ffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x34U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[426]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xffefffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x35U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[427]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xffdfffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x36U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[428]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xffbfffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x37U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[429]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xff7fffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x38U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[430]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfeffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x39U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[431]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfdffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x3aU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[432]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xfbffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x3bU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[433]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xf7ffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x3cU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[434]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xefffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x3dU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[435]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xdfffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x3eU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[436]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0xbfffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                        >> 0x3fU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[437]);
        vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data 
            = ((0x7fffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__RegFilesInst_io_rs2Data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__RegFilesInst_io_rs2Data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->Top__DOT__ALUInst__DOT__equalResultTmp 
        = (vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
           == vlSelf->Top__DOT__RegFilesInst_io_rs2Data);
    if ((1U & ((IData)(vlSelf->Top__DOT__IDUInst_io_alu_aluSel) 
               ^ (IData)(vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_aluSel)))) {
        ++(vlSymsp->__Vcoverage[231]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_aluSel 
            = ((6U & (IData)(vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_aluSel)) 
               | (1U & (IData)(vlSelf->Top__DOT__IDUInst_io_alu_aluSel)));
    }
    if ((2U & ((IData)(vlSelf->Top__DOT__IDUInst_io_alu_aluSel) 
               ^ (IData)(vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_aluSel)))) {
        ++(vlSymsp->__Vcoverage[232]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_aluSel 
            = ((5U & (IData)(vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_aluSel)) 
               | (2U & (IData)(vlSelf->Top__DOT__IDUInst_io_alu_aluSel)));
    }
    if ((4U & ((IData)(vlSelf->Top__DOT__IDUInst_io_alu_aluSel) 
               ^ (IData)(vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_aluSel)))) {
        ++(vlSymsp->__Vcoverage[233]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_aluSel 
            = ((3U & (IData)(vlSelf->Top__DOT____Vtogcov__IDUInst_io_alu_aluSel)) 
               | (4U & (IData)(vlSelf->Top__DOT__IDUInst_io_alu_aluSel)));
    }
    if (((IData)(vlSelf->Top__DOT__IDUInst_io_wenReg) 
         ^ (IData)(vlSelf->Top__DOT____Vtogcov__IDUInst_io_wenReg))) {
        ++(vlSymsp->__Vcoverage[163]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_wenReg 
            = vlSelf->Top__DOT__IDUInst_io_wenReg;
    }
    if (((IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme6) 
         ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme6))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme6 
            = vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme6;
    }
    if ((1U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme5) 
               ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme5)))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme5 
            = ((0xeU & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme5)) 
               | (1U & (IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme5)));
    }
    if ((2U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme5) 
               ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme5)))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme5 
            = ((0xdU & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme5)) 
               | (2U & (IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme5)));
    }
    if ((4U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme5) 
               ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme5)))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme5 
            = ((0xbU & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme5)) 
               | (4U & (IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme5)));
    }
    if ((8U & ((IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme5) 
               ^ (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme5)))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme5 
            = ((7U & (IData)(vlSelf->Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme5)) 
               | (8U & (IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme5)));
    }
    vlSelf->Top__DOT__IDUInst_io_imme = ((((vlSelf->Top__DOT__IFUInst_io_inst 
                                            >> 0x1fU)
                                            ? 0x1ffffffffULL
                                            : 0ULL) 
                                          << 0x1fU) 
                                         | (QData)((IData)(
                                                           ((0x7ff00000U 
                                                             & ((IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0) 
                                                                << 0x14U)) 
                                                            | (((IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme2) 
                                                                << 0xcU) 
                                                               | (((IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme3) 
                                                                   << 0xbU) 
                                                                  | (((IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme4) 
                                                                      << 5U) 
                                                                     | (((IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme5) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme6)))))))));
    if ((1U & ((IData)(vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1) 
               ^ (IData)(vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1)))) {
        ++(vlSymsp->__Vcoverage[2983]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfffffffffffffffeULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | (IData)((IData)((1U & (IData)(vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1)))));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 1U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2984]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfffffffffffffffdULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 2U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2985]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfffffffffffffffbULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 3U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2986]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfffffffffffffff7ULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 4U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2987]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xffffffffffffffefULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 5U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2988]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xffffffffffffffdfULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 6U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2989]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xffffffffffffffbfULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 7U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2990]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xffffffffffffff7fULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 8U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2991]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfffffffffffffeffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 9U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2992]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfffffffffffffdffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0xaU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2993]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfffffffffffffbffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0xbU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2994]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfffffffffffff7ffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0xcU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2995]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xffffffffffffefffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0xdU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2996]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xffffffffffffdfffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0xeU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2997]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xffffffffffffbfffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0xfU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2998]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xffffffffffff7fffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x10U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2999]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfffffffffffeffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x11U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3000]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfffffffffffdffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x12U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3001]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfffffffffffbffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x13U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3002]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfffffffffff7ffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x14U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3003]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xffffffffffefffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x15U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3004]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xffffffffffdfffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x16U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3005]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xffffffffffbfffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x17U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3006]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xffffffffff7fffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x18U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3007]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfffffffffeffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x19U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3008]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfffffffffdffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x1aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3009]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfffffffffbffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x1bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3010]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfffffffff7ffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x1cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3011]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xffffffffefffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x1dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3012]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xffffffffdfffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x1eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3013]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xffffffffbfffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x1fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3014]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xffffffff7fffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x20U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3015]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfffffffeffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x21U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3016]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfffffffdffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x22U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3017]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfffffffbffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x23U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3018]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfffffff7ffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x24U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3019]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xffffffefffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x25U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3020]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xffffffdfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x26U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3021]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xffffffbfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x27U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3022]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xffffff7fffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x28U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3023]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfffffeffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x29U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3024]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfffffdffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x2aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3025]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfffffbffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x2bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3026]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfffff7ffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x2cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3027]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xffffefffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x2dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3028]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xffffdfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x2eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3029]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xffffbfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x2fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3030]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xffff7fffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x30U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3031]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfffeffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x31U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3032]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfffdffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x32U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3033]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfffbffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x33U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3034]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfff7ffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x34U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3035]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xffefffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x35U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3036]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xffdfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x36U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3037]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xffbfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x37U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3038]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xff7fffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x38U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3039]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfeffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x39U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3040]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfdffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x3aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3041]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xfbffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x3bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3042]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xf7ffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x3cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3043]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xefffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x3dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3044]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xdfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x3eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3045]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0xbfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                        >> 0x3fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3046]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1 
            = ((0x7fffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
        = ((IData)(vlSelf->Top__DOT__IDUInst_io_alu_wordSel)
            ? Top__DOT__ALUInst__DOT__shiftInst__DOT___data1_T_8
            : vlSelf->Top__DOT__RegFilesInst_io_rs1Data);
    if (((IData)(vlSelf->Top__DOT__ALUInst__DOT__equalResultTmp) 
         ^ (IData)(vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__equalResultTmp))) {
        ++(vlSymsp->__Vcoverage[3752]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__equalResultTmp 
            = vlSelf->Top__DOT__ALUInst__DOT__equalResultTmp;
    }
    vlSelf->Top__DOT__ALUInst__DOT__equalResult = (1U 
                                                   & ((IData)(vlSelf->Top__DOT__IDUInst_io_alu_neqSel)
                                                       ? 
                                                      (~ (IData)(vlSelf->Top__DOT__ALUInst__DOT__equalResultTmp))
                                                       : (IData)(vlSelf->Top__DOT__ALUInst__DOT__equalResultTmp)));
    if ((1U & ((IData)(vlSelf->Top__DOT__IDUInst_io_imme) 
               ^ (IData)(vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme)))) {
        ++(vlSymsp->__Vcoverage[164]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfffffffffffffffeULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | (IData)((IData)((1U & (IData)(vlSelf->Top__DOT__IDUInst_io_imme)))));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 1U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[165]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfffffffffffffffdULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 2U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[166]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfffffffffffffffbULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 3U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[167]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfffffffffffffff7ULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 4U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[168]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xffffffffffffffefULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 5U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[169]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xffffffffffffffdfULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 6U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[170]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xffffffffffffffbfULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 7U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[171]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xffffffffffffff7fULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 8U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[172]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfffffffffffffeffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 9U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[173]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfffffffffffffdffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0xaU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[174]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfffffffffffffbffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0xbU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[175]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfffffffffffff7ffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0xcU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[176]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xffffffffffffefffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0xdU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[177]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xffffffffffffdfffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0xeU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[178]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xffffffffffffbfffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0xfU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[179]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xffffffffffff7fffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x10U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[180]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfffffffffffeffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x11U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[181]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfffffffffffdffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x12U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[182]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfffffffffffbffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x13U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[183]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfffffffffff7ffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x14U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[184]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xffffffffffefffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x15U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[185]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xffffffffffdfffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x16U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[186]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xffffffffffbfffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x17U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[187]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xffffffffff7fffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x18U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[188]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfffffffffeffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x19U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[189]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfffffffffdffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x1aU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[190]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfffffffffbffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x1bU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[191]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfffffffff7ffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x1cU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[192]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xffffffffefffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x1dU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[193]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xffffffffdfffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x1eU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[194]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xffffffffbfffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x1fU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[195]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xffffffff7fffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x20U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[196]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfffffffeffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x21U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[197]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfffffffdffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x22U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[198]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfffffffbffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x23U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[199]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfffffff7ffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x24U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[200]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xffffffefffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x25U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[201]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xffffffdfffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x26U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[202]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xffffffbfffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x27U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[203]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xffffff7fffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x28U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[204]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfffffeffffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x29U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[205]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfffffdffffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x2aU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[206]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfffffbffffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x2bU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[207]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfffff7ffffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x2cU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[208]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xffffefffffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x2dU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[209]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xffffdfffffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x2eU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[210]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xffffbfffffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x2fU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[211]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xffff7fffffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x30U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[212]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfffeffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x31U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[213]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfffdffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x32U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[214]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfffbffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x33U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[215]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfff7ffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x34U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[216]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xffefffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x35U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[217]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xffdfffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x36U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[218]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xffbfffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x37U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[219]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xff7fffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x38U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[220]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfeffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x39U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[221]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfdffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x3aU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[222]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xfbffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x3bU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[223]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xf7ffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x3cU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[224]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xefffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x3dU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[225]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xdfffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x3eU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[226]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0xbfffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                        >> 0x3fU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[227]);
        vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme 
            = ((0x7fffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IDUInst_io_imme) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IDUInst_io_imme 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (vlSelf->Top__DOT__IDUInst__DOT__typeR) {
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
            = vlSelf->Top__DOT__RegFilesInst_io_rs2Data;
        vlSelf->Top__DOT__ALUInst__DOT__src2 = vlSelf->Top__DOT__RegFilesInst_io_rs2Data;
    } else {
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
            = vlSelf->Top__DOT__IDUInst_io_imme;
        vlSelf->Top__DOT__ALUInst__DOT__src2 = vlSelf->Top__DOT__IDUInst_io_imme;
    }
    if ((1U & ((IData)(vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1) 
               ^ (IData)(vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1)))) {
        ++(vlSymsp->__Vcoverage[3757]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfffffffffffffffeULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | (IData)((IData)((1U & (IData)(vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1)))));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 1U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3758]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfffffffffffffffdULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 2U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3759]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfffffffffffffffbULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 3U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3760]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfffffffffffffff7ULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 4U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3761]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xffffffffffffffefULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 5U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3762]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xffffffffffffffdfULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 6U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3763]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xffffffffffffffbfULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 7U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3764]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xffffffffffffff7fULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 8U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3765]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfffffffffffffeffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 9U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3766]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfffffffffffffdffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0xaU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3767]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfffffffffffffbffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0xbU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3768]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfffffffffffff7ffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0xcU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3769]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xffffffffffffefffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0xdU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3770]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xffffffffffffdfffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0xeU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3771]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xffffffffffffbfffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0xfU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3772]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xffffffffffff7fffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x10U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3773]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfffffffffffeffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x11U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3774]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfffffffffffdffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x12U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3775]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfffffffffffbffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x13U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3776]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfffffffffff7ffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x14U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3777]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xffffffffffefffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x15U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3778]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xffffffffffdfffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x16U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3779]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xffffffffffbfffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x17U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3780]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xffffffffff7fffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x18U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3781]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfffffffffeffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x19U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3782]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfffffffffdffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x1aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3783]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfffffffffbffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x1bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3784]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfffffffff7ffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x1cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3785]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xffffffffefffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x1dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3786]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xffffffffdfffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x1eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3787]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xffffffffbfffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x1fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3788]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xffffffff7fffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x20U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3789]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfffffffeffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x21U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3790]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfffffffdffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x22U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3791]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfffffffbffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x23U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3792]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfffffff7ffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x24U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3793]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xffffffefffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x25U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3794]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xffffffdfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x26U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3795]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xffffffbfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x27U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3796]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xffffff7fffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x28U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3797]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfffffeffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x29U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3798]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfffffdffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x2aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3799]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfffffbffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x2bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3800]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfffff7ffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x2cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3801]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xffffefffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x2dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3802]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xffffdfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x2eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3803]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xffffbfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x2fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3804]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xffff7fffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x30U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3805]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfffeffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x31U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3806]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfffdffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x32U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3807]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfffbffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x33U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3808]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfff7ffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x34U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3809]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xffefffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x35U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3810]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xffdfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x36U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3811]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xffbfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x37U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3812]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xff7fffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x38U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3813]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfeffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x39U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3814]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfdffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x3aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3815]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xfbffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x3bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3816]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xf7ffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x3cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3817]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xefffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x3dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3818]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xdfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x3eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3819]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0xbfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                        >> 0x3fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3820]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1 
            = ((0x7fffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->Top__DOT__ALUInst__DOT__equalResult) 
         ^ (IData)(vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__equalResult))) {
        ++(vlSymsp->__Vcoverage[3753]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__equalResult 
            = vlSelf->Top__DOT__ALUInst__DOT__equalResult;
    }
    if ((1U & ((IData)(vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2) 
               ^ (IData)(vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2)))) {
        ++(vlSymsp->__Vcoverage[3240]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfffffffffffffffeULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | (IData)((IData)((1U & (IData)(vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2)))));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 1U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3241]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfffffffffffffffdULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 2U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3242]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfffffffffffffffbULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 3U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3243]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfffffffffffffff7ULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 4U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3244]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xffffffffffffffefULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 5U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3245]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xffffffffffffffdfULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 6U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3246]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xffffffffffffffbfULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 7U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3247]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xffffffffffffff7fULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 8U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3248]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfffffffffffffeffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 9U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3249]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfffffffffffffdffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0xaU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3250]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfffffffffffffbffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0xbU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3251]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfffffffffffff7ffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0xcU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3252]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xffffffffffffefffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0xdU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3253]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xffffffffffffdfffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0xeU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3254]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xffffffffffffbfffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0xfU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3255]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xffffffffffff7fffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x10U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3256]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfffffffffffeffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x11U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3257]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfffffffffffdffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x12U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3258]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfffffffffffbffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x13U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3259]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfffffffffff7ffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x14U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3260]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xffffffffffefffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x15U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3261]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xffffffffffdfffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x16U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3262]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xffffffffffbfffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x17U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3263]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xffffffffff7fffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x18U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3264]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfffffffffeffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x19U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3265]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfffffffffdffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x1aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3266]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfffffffffbffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x1bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3267]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfffffffff7ffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x1cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3268]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xffffffffefffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x1dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3269]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xffffffffdfffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x1eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3270]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xffffffffbfffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x1fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3271]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xffffffff7fffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x20U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3272]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfffffffeffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x21U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3273]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfffffffdffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x22U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3274]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfffffffbffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x23U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3275]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfffffff7ffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x24U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3276]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xffffffefffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x25U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3277]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xffffffdfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x26U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3278]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xffffffbfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x27U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3279]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xffffff7fffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x28U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3280]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfffffeffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x29U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3281]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfffffdffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x2aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3282]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfffffbffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x2bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3283]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfffff7ffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x2cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3284]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xffffefffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x2dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3285]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xffffdfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x2eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3286]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xffffbfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x2fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3287]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xffff7fffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x30U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3288]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfffeffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x31U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3289]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfffdffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x32U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3290]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfffbffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x33U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3291]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfff7ffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x34U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3292]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xffefffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x35U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3293]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xffdfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x36U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3294]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xffbfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x37U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3295]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xff7fffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x38U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3296]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfeffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x39U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3297]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfdffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x3aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3298]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xfbffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x3bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3299]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xf7ffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x3cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3300]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xefffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x3dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3301]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xdfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x3eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3302]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0xbfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                        >> 0x3fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3303]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2 
            = ((0x7fffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    Top__DOT__ALUInst__DOT__shiftInst__DOT___result_T_3 
        = (0x3fU & ((IData)(vlSelf->Top__DOT__IDUInst_io_alu_wordSel)
                     ? (0x1fU & (IData)(vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2))
                     : (IData)(vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2)));
    if ((1U & ((IData)(vlSelf->Top__DOT__ALUInst__DOT__src2) 
               ^ (IData)(vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2)))) {
        ++(vlSymsp->__Vcoverage[3368]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfffffffffffffffeULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | (IData)((IData)((1U & (IData)(vlSelf->Top__DOT__ALUInst__DOT__src2)))));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 1U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3369]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfffffffffffffffdULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 2U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3370]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfffffffffffffffbULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 3U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3371]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfffffffffffffff7ULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 4U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3372]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xffffffffffffffefULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 5U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3373]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xffffffffffffffdfULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 6U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3374]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xffffffffffffffbfULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 7U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3375]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xffffffffffffff7fULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 8U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3376]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfffffffffffffeffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 9U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3377]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfffffffffffffdffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0xaU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3378]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfffffffffffffbffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0xbU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3379]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfffffffffffff7ffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0xcU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3380]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xffffffffffffefffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0xdU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3381]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xffffffffffffdfffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0xeU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3382]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xffffffffffffbfffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0xfU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3383]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xffffffffffff7fffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x10U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3384]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfffffffffffeffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x11U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3385]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfffffffffffdffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x12U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3386]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfffffffffffbffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x13U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3387]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfffffffffff7ffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x14U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3388]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xffffffffffefffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x15U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3389]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xffffffffffdfffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x16U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3390]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xffffffffffbfffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x17U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3391]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xffffffffff7fffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x18U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3392]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfffffffffeffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x19U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3393]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfffffffffdffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x1aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3394]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfffffffffbffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x1bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3395]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfffffffff7ffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x1cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3396]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xffffffffefffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x1dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3397]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xffffffffdfffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x1eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3398]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xffffffffbfffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x1fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3399]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xffffffff7fffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x20U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3400]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfffffffeffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x21U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3401]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfffffffdffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x22U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3402]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfffffffbffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x23U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3403]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfffffff7ffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x24U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3404]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xffffffefffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x25U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3405]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xffffffdfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x26U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3406]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xffffffbfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x27U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3407]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xffffff7fffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x28U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3408]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfffffeffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x29U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3409]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfffffdffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x2aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3410]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfffffbffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x2bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3411]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfffff7ffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x2cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3412]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xffffefffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x2dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3413]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xffffdfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x2eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3414]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xffffbfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x2fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3415]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xffff7fffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x30U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3416]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfffeffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x31U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3417]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfffdffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x32U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3418]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfffbffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x33U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3419]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfff7ffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x34U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3420]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xffefffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x35U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3421]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xffdfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x36U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3422]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xffbfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x37U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3423]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xff7fffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x38U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3424]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfeffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x39U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3425]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfdffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x3aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3426]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xfbffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x3bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3427]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xf7ffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x3cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3428]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xefffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x3dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3429]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xdfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x3eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3430]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0xbfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                        >> 0x3fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3431]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2 
            = ((0x7fffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__src2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__src2 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->Top__DOT__ALUInst__DOT__andResult = (vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 & vlSelf->Top__DOT__ALUInst__DOT__src2);
    vlSelf->Top__DOT__ALUInst__DOT__orResult = (vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                | vlSelf->Top__DOT__ALUInst__DOT__src2);
    vlSelf->Top__DOT__ALUInst__DOT__xorResult = (vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                                                 ^ vlSelf->Top__DOT__ALUInst__DOT__src2);
    vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
        = ((IData)(vlSelf->Top__DOT__IDUInst_io_alu_subSel)
            ? (1ULL + (~ vlSelf->Top__DOT__ALUInst__DOT__src2))
            : vlSelf->Top__DOT__ALUInst__DOT__src2);
    vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
        = ((0x18U == (0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                               >> 2U))) ? vlSelf->Top__DOT__RegFilesInst_io_rs2Data
            : vlSelf->Top__DOT__ALUInst__DOT__src2);
    VL_EXTEND_WQ(127,64, __Vtemp2, ((IData)(vlSelf->Top__DOT__IDUInst_io_alu_arithSel)
                                     ? VL_SHIFTRS_QQI(64,64,6, 
                                                      ((IData)(vlSelf->Top__DOT__IDUInst_io_alu_wordSel)
                                                        ? Top__DOT__ALUInst__DOT__shiftInst__DOT___data1_T_8
                                                        : vlSelf->Top__DOT__RegFilesInst_io_rs1Data), (IData)(Top__DOT__ALUInst__DOT__shiftInst__DOT___result_T_3))
                                     : (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1 
                                        >> (IData)(Top__DOT__ALUInst__DOT__shiftInst__DOT___result_T_3))));
    VL_EXTEND_WQ(127,64, __Vtemp3, vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp4, __Vtemp3, (IData)(Top__DOT__ALUInst__DOT__shiftInst__DOT___result_T_3));
    if (vlSelf->Top__DOT__IDUInst_io_alu_rightSel) {
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
            = __Vtemp2[0U];
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
            = __Vtemp2[1U];
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[2U] 
            = __Vtemp2[2U];
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[3U] 
            = (0x7fffffffU & __Vtemp2[3U]);
    } else {
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
            = __Vtemp4[0U];
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
            = __Vtemp4[1U];
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[2U] 
            = __Vtemp4[2U];
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[3U] 
            = (0x7fffffffU & __Vtemp4[3U]);
    }
    if ((1U & ((IData)(vlSelf->Top__DOT__ALUInst__DOT__andResult) 
               ^ (IData)(vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult)))) {
        ++(vlSymsp->__Vcoverage[3560]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfffffffffffffffeULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | (IData)((IData)((1U & (IData)(vlSelf->Top__DOT__ALUInst__DOT__andResult)))));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 1U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3561]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfffffffffffffffdULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 2U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3562]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfffffffffffffffbULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 3U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3563]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfffffffffffffff7ULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 4U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3564]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xffffffffffffffefULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 5U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3565]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xffffffffffffffdfULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 6U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3566]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xffffffffffffffbfULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 7U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3567]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xffffffffffffff7fULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 8U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3568]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfffffffffffffeffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 9U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3569]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfffffffffffffdffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0xaU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3570]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfffffffffffffbffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0xbU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3571]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfffffffffffff7ffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0xcU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3572]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xffffffffffffefffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0xdU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3573]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xffffffffffffdfffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0xeU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3574]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xffffffffffffbfffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0xfU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3575]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xffffffffffff7fffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x10U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3576]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfffffffffffeffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x11U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3577]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfffffffffffdffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x12U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3578]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfffffffffffbffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x13U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3579]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfffffffffff7ffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x14U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3580]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xffffffffffefffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x15U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3581]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xffffffffffdfffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x16U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3582]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xffffffffffbfffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x17U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3583]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xffffffffff7fffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x18U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3584]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfffffffffeffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x19U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3585]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfffffffffdffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x1aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3586]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfffffffffbffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x1bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3587]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfffffffff7ffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x1cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3588]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xffffffffefffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x1dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3589]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xffffffffdfffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x1eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3590]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xffffffffbfffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x1fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3591]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xffffffff7fffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x20U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3592]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfffffffeffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x21U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3593]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfffffffdffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x22U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3594]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfffffffbffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x23U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3595]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfffffff7ffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x24U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3596]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xffffffefffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x25U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3597]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xffffffdfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x26U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3598]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xffffffbfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x27U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3599]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xffffff7fffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x28U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3600]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfffffeffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x29U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3601]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfffffdffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x2aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3602]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfffffbffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x2bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3603]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfffff7ffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x2cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3604]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xffffefffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x2dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3605]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xffffdfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x2eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3606]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xffffbfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x2fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3607]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xffff7fffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x30U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3608]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfffeffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x31U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3609]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfffdffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x32U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3610]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfffbffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x33U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3611]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfff7ffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x34U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3612]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xffefffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x35U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3613]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xffdfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x36U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3614]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xffbfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x37U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3615]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xff7fffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x38U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3616]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfeffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x39U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3617]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfdffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x3aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3618]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xfbffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x3bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3619]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xf7ffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x3cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3620]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xefffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x3dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3621]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xdfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x3eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3622]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0xbfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                        >> 0x3fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3623]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult 
            = ((0x7fffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__andResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__andResult 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->Top__DOT__ALUInst__DOT__orResult) 
               ^ (IData)(vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult)))) {
        ++(vlSymsp->__Vcoverage[3624]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfffffffffffffffeULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | (IData)((IData)((1U & (IData)(vlSelf->Top__DOT__ALUInst__DOT__orResult)))));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 1U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3625]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfffffffffffffffdULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 2U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3626]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfffffffffffffffbULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 3U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3627]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfffffffffffffff7ULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 4U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3628]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xffffffffffffffefULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 5U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3629]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xffffffffffffffdfULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 6U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3630]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xffffffffffffffbfULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 7U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3631]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xffffffffffffff7fULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 8U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3632]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfffffffffffffeffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 9U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3633]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfffffffffffffdffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0xaU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3634]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfffffffffffffbffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0xbU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3635]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfffffffffffff7ffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0xcU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3636]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xffffffffffffefffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0xdU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3637]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xffffffffffffdfffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0xeU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3638]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xffffffffffffbfffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0xfU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3639]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xffffffffffff7fffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x10U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3640]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfffffffffffeffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x11U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3641]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfffffffffffdffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x12U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3642]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfffffffffffbffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x13U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3643]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfffffffffff7ffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x14U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3644]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xffffffffffefffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x15U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3645]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xffffffffffdfffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x16U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3646]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xffffffffffbfffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x17U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3647]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xffffffffff7fffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x18U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3648]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfffffffffeffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x19U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3649]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfffffffffdffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x1aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3650]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfffffffffbffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x1bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3651]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfffffffff7ffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x1cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3652]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xffffffffefffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x1dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3653]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xffffffffdfffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x1eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3654]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xffffffffbfffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x1fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3655]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xffffffff7fffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x20U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3656]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfffffffeffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x21U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3657]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfffffffdffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x22U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3658]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfffffffbffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x23U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3659]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfffffff7ffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x24U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3660]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xffffffefffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x25U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3661]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xffffffdfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x26U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3662]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xffffffbfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x27U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3663]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xffffff7fffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x28U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3664]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfffffeffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x29U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3665]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfffffdffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x2aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3666]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfffffbffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x2bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3667]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfffff7ffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x2cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3668]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xffffefffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x2dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3669]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xffffdfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x2eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3670]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xffffbfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x2fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3671]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xffff7fffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x30U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3672]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfffeffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x31U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3673]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfffdffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x32U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3674]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfffbffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x33U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3675]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfff7ffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x34U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3676]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xffefffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x35U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3677]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xffdfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x36U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3678]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xffbfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x37U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3679]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xff7fffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x38U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3680]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfeffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x39U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3681]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfdffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x3aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3682]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xfbffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x3bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3683]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xf7ffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x3cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3684]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xefffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x3dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3685]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xdfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x3eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3686]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0xbfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                        >> 0x3fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3687]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult 
            = ((0x7fffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__orResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__orResult 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->Top__DOT__ALUInst__DOT__xorResult) 
               ^ (IData)(vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult)))) {
        ++(vlSymsp->__Vcoverage[3688]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfffffffffffffffeULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | (IData)((IData)((1U & (IData)(vlSelf->Top__DOT__ALUInst__DOT__xorResult)))));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 1U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3689]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfffffffffffffffdULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 2U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3690]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfffffffffffffffbULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 3U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3691]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfffffffffffffff7ULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 4U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3692]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xffffffffffffffefULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 5U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3693]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xffffffffffffffdfULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 6U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3694]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xffffffffffffffbfULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 7U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3695]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xffffffffffffff7fULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 8U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3696]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfffffffffffffeffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 9U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3697]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfffffffffffffdffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0xaU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3698]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfffffffffffffbffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0xbU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3699]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfffffffffffff7ffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0xcU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3700]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xffffffffffffefffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0xdU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3701]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xffffffffffffdfffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0xeU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3702]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xffffffffffffbfffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0xfU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3703]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xffffffffffff7fffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x10U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3704]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfffffffffffeffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x11U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3705]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfffffffffffdffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x12U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3706]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfffffffffffbffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x13U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3707]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfffffffffff7ffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x14U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3708]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xffffffffffefffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x15U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3709]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xffffffffffdfffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x16U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3710]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xffffffffffbfffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x17U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3711]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xffffffffff7fffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x18U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3712]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfffffffffeffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x19U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3713]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfffffffffdffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x1aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3714]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfffffffffbffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x1bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3715]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfffffffff7ffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x1cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3716]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xffffffffefffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x1dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3717]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xffffffffdfffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x1eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3718]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xffffffffbfffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x1fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3719]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xffffffff7fffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x20U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3720]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfffffffeffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x21U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3721]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfffffffdffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x22U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3722]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfffffffbffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x23U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3723]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfffffff7ffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x24U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3724]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xffffffefffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x25U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3725]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xffffffdfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x26U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3726]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xffffffbfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x27U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3727]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xffffff7fffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x28U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3728]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfffffeffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x29U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3729]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfffffdffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x2aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3730]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfffffbffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x2bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3731]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfffff7ffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x2cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3732]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xffffefffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x2dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3733]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xffffdfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x2eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3734]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xffffbfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x2fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3735]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xffff7fffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x30U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3736]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfffeffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x31U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3737]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfffdffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x32U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3738]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfffbffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x33U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3739]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfff7ffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x34U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3740]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xffefffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x35U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3741]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xffdfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x36U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3742]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xffbfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x37U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3743]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xff7fffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x38U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3744]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfeffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x39U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3745]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfdffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x3aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3746]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xfbffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x3bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3747]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xf7ffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x3cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3748]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xefffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x3dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3749]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xdfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x3eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3750]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0xbfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                        >> 0x3fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3751]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult 
            = ((0x7fffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__xorResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__xorResult 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2) 
               ^ (IData)(vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2)))) {
        ++(vlSymsp->__Vcoverage[3047]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfffffffffffffffeULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | (IData)((IData)((1U & (IData)(vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2)))));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 1U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3048]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfffffffffffffffdULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 2U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3049]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfffffffffffffffbULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 3U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3050]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfffffffffffffff7ULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 4U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3051]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xffffffffffffffefULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 5U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3052]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xffffffffffffffdfULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 6U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3053]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xffffffffffffffbfULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 7U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3054]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xffffffffffffff7fULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 8U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3055]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfffffffffffffeffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 9U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3056]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfffffffffffffdffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0xaU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3057]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfffffffffffffbffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0xbU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3058]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfffffffffffff7ffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0xcU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3059]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xffffffffffffefffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0xdU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3060]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xffffffffffffdfffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0xeU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3061]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xffffffffffffbfffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0xfU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3062]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xffffffffffff7fffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x10U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3063]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfffffffffffeffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x11U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3064]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfffffffffffdffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x12U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3065]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfffffffffffbffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x13U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3066]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfffffffffff7ffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x14U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3067]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xffffffffffefffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x15U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3068]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xffffffffffdfffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x16U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3069]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xffffffffffbfffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x17U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3070]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xffffffffff7fffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x18U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3071]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfffffffffeffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x19U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3072]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfffffffffdffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x1aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3073]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfffffffffbffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x1bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3074]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfffffffff7ffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x1cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3075]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xffffffffefffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x1dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3076]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xffffffffdfffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x1eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3077]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xffffffffbfffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x1fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3078]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xffffffff7fffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x20U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3079]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfffffffeffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x21U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3080]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfffffffdffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x22U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3081]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfffffffbffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x23U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3082]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfffffff7ffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x24U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3083]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xffffffefffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x25U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3084]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xffffffdfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x26U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3085]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xffffffbfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x27U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3086]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xffffff7fffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x28U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3087]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfffffeffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x29U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3088]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfffffdffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x2aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3089]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfffffbffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x2bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3090]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfffff7ffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x2cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3091]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xffffefffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x2dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3092]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xffffdfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x2eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3093]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xffffbfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x2fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3094]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xffff7fffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x30U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3095]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfffeffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x31U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3096]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfffdffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x32U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3097]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfffbffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x33U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3098]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfff7ffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x34U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3099]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xffefffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x35U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3100]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xffdfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x36U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3101]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xffbfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x37U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3102]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xff7fffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x38U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3103]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfeffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x39U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3104]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfdffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x3aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3105]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xfbffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x3bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3106]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xf7ffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x3cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3107]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xefffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x3dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3108]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xdfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x3eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3109]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0xbfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                        >> 0x3fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3110]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2 
            = ((0x7fffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
        = (vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1 
           + vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2);
    if ((1U & ((IData)(vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2) 
               ^ (IData)(vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2)))) {
        ++(vlSymsp->__Vcoverage[3175]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfffffffffffffffeULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | (IData)((IData)((1U & (IData)(vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2)))));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 1U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3176]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfffffffffffffffdULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 2U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3177]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfffffffffffffffbULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 3U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3178]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfffffffffffffff7ULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 4U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3179]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xffffffffffffffefULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 5U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3180]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xffffffffffffffdfULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 6U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3181]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xffffffffffffffbfULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 7U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3182]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xffffffffffffff7fULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 8U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3183]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfffffffffffffeffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 9U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3184]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfffffffffffffdffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0xaU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3185]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfffffffffffffbffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0xbU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3186]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfffffffffffff7ffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0xcU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3187]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xffffffffffffefffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0xdU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3188]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xffffffffffffdfffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0xeU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3189]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xffffffffffffbfffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0xfU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3190]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xffffffffffff7fffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x10U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3191]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfffffffffffeffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x11U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3192]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfffffffffffdffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x12U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3193]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfffffffffffbffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x13U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3194]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfffffffffff7ffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x14U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3195]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xffffffffffefffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x15U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3196]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xffffffffffdfffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x16U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3197]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xffffffffffbfffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x17U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3198]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xffffffffff7fffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x18U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3199]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfffffffffeffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x19U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3200]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfffffffffdffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x1aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3201]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfffffffffbffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x1bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3202]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfffffffff7ffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x1cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3203]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xffffffffefffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x1dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3204]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xffffffffdfffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x1eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3205]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xffffffffbfffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x1fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3206]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xffffffff7fffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x20U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3207]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfffffffeffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x21U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3208]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfffffffdffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x22U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3209]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfffffffbffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x23U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3210]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfffffff7ffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x24U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3211]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xffffffefffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x25U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3212]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xffffffdfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x26U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3213]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xffffffbfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x27U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3214]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xffffff7fffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x28U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3215]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfffffeffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x29U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3216]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfffffdffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x2aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3217]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfffffbffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x2bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3218]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfffff7ffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x2cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3219]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xffffefffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x2dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3220]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xffffdfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x2eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3221]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xffffbfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x2fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3222]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xffff7fffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x30U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3223]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfffeffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x31U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3224]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfffdffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x32U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3225]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfffbffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x33U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3226]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfff7ffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x34U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3227]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xffefffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x35U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3228]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xffdfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x36U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3229]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xffbfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x37U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3230]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xff7fffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x38U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3231]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfeffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x39U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3232]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfdffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x3aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3233]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xfbffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x3bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3234]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xf7ffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x3cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3235]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xefffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x3dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3236]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xdfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x3eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3237]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0xbfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                        >> 0x3fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3238]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2 
            = ((0x7fffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__unsignResult 
        = (vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
           < vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2);
    if ((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
               ^ (IData)(vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result)))) {
        ++(vlSymsp->__Vcoverage[3821]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfffffffffffffffeULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | (IData)((IData)((1U & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U]))));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 1U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                  >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3822]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfffffffffffffffdULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 1U)))) 
                  << 1U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 2U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                  >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3823]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfffffffffffffffbULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 2U)))) 
                  << 2U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 3U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                  >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3824]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfffffffffffffff7ULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 3U)))) 
                  << 3U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 4U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                  >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3825]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xffffffffffffffefULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 4U)))) 
                  << 4U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 5U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                  >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3826]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xffffffffffffffdfULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 5U)))) 
                  << 5U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 6U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                  >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3827]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xffffffffffffffbfULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 6U)))) 
                  << 6U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 7U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                  >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3828]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xffffffffffffff7fULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 7U)))) 
                  << 7U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 8U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3829]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfffffffffffffeffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 8U)))) 
                  << 8U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 9U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3830]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfffffffffffffdffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 9U)))) 
                  << 9U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 0xaU) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3831]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfffffffffffffbffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 0xaU)))) 
                  << 0xaU));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 0xbU) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3832]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfffffffffffff7ffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 0xbU)))) 
                  << 0xbU));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 0xcU) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3833]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xffffffffffffefffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 0xcU)))) 
                  << 0xcU));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 0xdU) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3834]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xffffffffffffdfffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 0xdU)))) 
                  << 0xdU));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 0xeU) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3835]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xffffffffffffbfffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 0xeU)))) 
                  << 0xeU));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 0xfU) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3836]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xffffffffffff7fffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 0xfU)))) 
                  << 0xfU));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 0x10U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3837]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfffffffffffeffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 0x10U)))) 
                  << 0x10U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 0x11U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3838]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfffffffffffdffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 0x11U)))) 
                  << 0x11U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 0x12U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3839]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfffffffffffbffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 0x12U)))) 
                  << 0x12U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 0x13U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3840]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfffffffffff7ffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 0x13U)))) 
                  << 0x13U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 0x14U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3841]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xffffffffffefffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 0x14U)))) 
                  << 0x14U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 0x15U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3842]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xffffffffffdfffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 0x15U)))) 
                  << 0x15U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 0x16U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3843]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xffffffffffbfffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 0x16U)))) 
                  << 0x16U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 0x17U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3844]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xffffffffff7fffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 0x17U)))) 
                  << 0x17U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 0x18U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3845]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfffffffffeffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 0x18U)))) 
                  << 0x18U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 0x19U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3846]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfffffffffdffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 0x19U)))) 
                  << 0x19U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 0x1aU) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3847]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfffffffffbffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 0x1aU)))) 
                  << 0x1aU));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 0x1bU) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3848]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfffffffff7ffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 0x1bU)))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 0x1cU) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3849]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xffffffffefffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 0x1cU)))) 
                  << 0x1cU));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 0x1dU) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3850]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xffffffffdfffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 0x1dU)))) 
                  << 0x1dU));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 0x1eU) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3851]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xffffffffbfffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                         >> 0x1eU)))) 
                  << 0x1eU));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                >> 0x1fU) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3852]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xffffffff7fffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                   >> 0x1fU))) << 0x1fU));
    }
    if ((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
               ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3853]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfffffffeffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U]))) 
                  << 0x20U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 1U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                  >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3854]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfffffffdffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 1U)))) 
                  << 0x21U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 2U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                  >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3855]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfffffffbffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 2U)))) 
                  << 0x22U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 3U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                  >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3856]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfffffff7ffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 3U)))) 
                  << 0x23U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 4U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                  >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3857]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xffffffefffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 4U)))) 
                  << 0x24U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 5U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                  >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3858]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xffffffdfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 5U)))) 
                  << 0x25U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 6U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                  >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3859]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xffffffbfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 6U)))) 
                  << 0x26U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 7U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                  >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3860]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xffffff7fffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 7U)))) 
                  << 0x27U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 8U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                  >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3861]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfffffeffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 8U)))) 
                  << 0x28U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 9U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                  >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3862]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfffffdffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 9U)))) 
                  << 0x29U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 0xaU) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                    >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3863]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfffffbffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 0xaU)))) 
                  << 0x2aU));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 0xbU) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                    >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3864]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfffff7ffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 0xbU)))) 
                  << 0x2bU));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 0xcU) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                    >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3865]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xffffefffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 0xcU)))) 
                  << 0x2cU));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 0xdU) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                    >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3866]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xffffdfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 0xdU)))) 
                  << 0x2dU));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 0xeU) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                    >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3867]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xffffbfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 0xeU)))) 
                  << 0x2eU));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 0xfU) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                    >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3868]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xffff7fffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 0xfU)))) 
                  << 0x2fU));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 0x10U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3869]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfffeffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 0x10U)))) 
                  << 0x30U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 0x11U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3870]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfffdffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 0x11U)))) 
                  << 0x31U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 0x12U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3871]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfffbffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 0x12U)))) 
                  << 0x32U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 0x13U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3872]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfff7ffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 0x13U)))) 
                  << 0x33U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 0x14U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3873]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xffefffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 0x14U)))) 
                  << 0x34U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 0x15U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3874]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xffdfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 0x15U)))) 
                  << 0x35U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 0x16U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3875]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xffbfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 0x16U)))) 
                  << 0x36U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 0x17U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3876]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xff7fffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 0x17U)))) 
                  << 0x37U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 0x18U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3877]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfeffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 0x18U)))) 
                  << 0x38U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 0x19U) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3878]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfdffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 0x19U)))) 
                  << 0x39U));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 0x1aU) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3879]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xfbffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 0x1aU)))) 
                  << 0x3aU));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 0x1bU) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3880]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xf7ffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 0x1bU)))) 
                  << 0x3bU));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 0x1cU) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3881]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xefffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 0x1cU)))) 
                  << 0x3cU));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 0x1dU) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3882]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xdfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 0x1dU)))) 
                  << 0x3dU));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 0x1eU) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3883]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0xbfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                         >> 0x1eU)))) 
                  << 0x3eU));
    }
    if ((1U & ((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                >> 0x1fU) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3884]);
        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result 
            = ((0x7fffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result) 
               | ((QData)((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U] 
                                   >> 0x1fU))) << 0x3fU));
    }
    vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
        = ((IData)(vlSelf->Top__DOT__IDUInst_io_alu_wordSel)
            ? (((QData)((IData)(((vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U] 
                                  >> 0x1fU) ? 0xffffffffU
                                  : 0U))) << 0x20U) 
               | (QData)((IData)(vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U])))
            : (((QData)((IData)(vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U]))));
    if ((1U & ((IData)(vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result) 
               ^ (IData)(vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result)))) {
        ++(vlSymsp->__Vcoverage[3111]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfffffffffffffffeULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result)))));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 1U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3112]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfffffffffffffffdULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 2U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3113]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfffffffffffffffbULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 3U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3114]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfffffffffffffff7ULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 4U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3115]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xffffffffffffffefULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 5U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3116]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xffffffffffffffdfULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 6U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3117]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xffffffffffffffbfULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 7U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3118]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xffffffffffffff7fULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 8U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3119]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfffffffffffffeffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 9U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3120]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfffffffffffffdffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0xaU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3121]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfffffffffffffbffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0xbU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3122]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfffffffffffff7ffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0xcU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3123]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xffffffffffffefffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0xdU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3124]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xffffffffffffdfffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0xeU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3125]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xffffffffffffbfffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0xfU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3126]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xffffffffffff7fffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x10U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3127]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfffffffffffeffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x11U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3128]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfffffffffffdffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x12U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3129]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfffffffffffbffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x13U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3130]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfffffffffff7ffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x14U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3131]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xffffffffffefffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x15U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3132]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xffffffffffdfffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x16U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3133]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xffffffffffbfffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x17U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3134]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xffffffffff7fffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x18U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3135]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfffffffffeffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x19U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3136]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfffffffffdffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3137]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfffffffffbffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3138]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfffffffff7ffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3139]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xffffffffefffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3140]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xffffffffdfffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3141]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xffffffffbfffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3142]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xffffffff7fffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x20U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3143]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfffffffeffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x21U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3144]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfffffffdffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x22U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3145]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfffffffbffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x23U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3146]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfffffff7ffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x24U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3147]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xffffffefffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x25U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3148]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xffffffdfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x26U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3149]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xffffffbfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x27U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3150]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xffffff7fffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x28U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3151]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfffffeffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x29U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3152]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfffffdffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3153]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfffffbffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3154]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfffff7ffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3155]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xffffefffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3156]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xffffdfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3157]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xffffbfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3158]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xffff7fffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x30U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3159]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfffeffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x31U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3160]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfffdffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x32U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3161]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfffbffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x33U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3162]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfff7ffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x34U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3163]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xffefffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x35U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3164]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xffdfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x36U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3165]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xffbfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x37U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3166]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xff7fffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x38U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3167]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfeffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x39U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3168]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfdffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3169]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xfbffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3170]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xf7ffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3171]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xefffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3172]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xdfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3173]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0xbfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3174]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result 
            = ((0x7fffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
        = ((IData)(vlSelf->Top__DOT__IDUInst_io_alu_wordSel)
            ? (((QData)((IData)(((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result 
                                                >> 0x1fU)))
                                  ? 0xffffffffU : 0U))) 
                << 0x20U) | (QData)((IData)(vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result)))
            : vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result);
    if (((IData)(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__unsignResult) 
         ^ (IData)(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT____Vtogcov__unsignResult))) {
        ++(vlSymsp->__Vcoverage[3754]);
        vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT____Vtogcov__unsignResult 
            = vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__unsignResult;
    }
    vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__signedResult 
        = (1U & (((IData)((vlSelf->Top__DOT__RegFilesInst_io_rs1Data 
                           >> 0x3fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2 
                                                 >> 0x3fU))) 
                 ^ (IData)(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__unsignResult)));
    if ((1U & ((IData)(vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result) 
               ^ (IData)(vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result)))) {
        ++(vlSymsp->__Vcoverage[3304]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfffffffffffffffeULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result)))));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 1U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3305]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfffffffffffffffdULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 2U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3306]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfffffffffffffffbULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 3U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3307]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfffffffffffffff7ULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 4U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3308]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xffffffffffffffefULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 5U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3309]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xffffffffffffffdfULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 6U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3310]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xffffffffffffffbfULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 7U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3311]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xffffffffffffff7fULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 8U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3312]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfffffffffffffeffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 9U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3313]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfffffffffffffdffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0xaU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3314]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfffffffffffffbffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0xbU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3315]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfffffffffffff7ffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0xcU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3316]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xffffffffffffefffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0xdU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3317]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xffffffffffffdfffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0xeU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3318]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xffffffffffffbfffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0xfU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3319]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xffffffffffff7fffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x10U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3320]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfffffffffffeffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x11U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3321]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfffffffffffdffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x12U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3322]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfffffffffffbffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x13U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3323]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfffffffffff7ffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x14U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3324]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xffffffffffefffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x15U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3325]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xffffffffffdfffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x16U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3326]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xffffffffffbfffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x17U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3327]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xffffffffff7fffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x18U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3328]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfffffffffeffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x19U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3329]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfffffffffdffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3330]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfffffffffbffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3331]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfffffffff7ffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3332]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xffffffffefffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3333]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xffffffffdfffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3334]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xffffffffbfffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3335]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xffffffff7fffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x20U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3336]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfffffffeffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x21U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3337]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfffffffdffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x22U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3338]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfffffffbffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x23U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3339]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfffffff7ffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x24U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3340]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xffffffefffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x25U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3341]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xffffffdfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x26U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3342]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xffffffbfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x27U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3343]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xffffff7fffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x28U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3344]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfffffeffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x29U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3345]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfffffdffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3346]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfffffbffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3347]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfffff7ffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3348]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xffffefffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3349]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xffffdfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3350]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xffffbfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3351]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xffff7fffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x30U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3352]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfffeffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x31U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3353]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfffdffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x32U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3354]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfffbffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x33U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3355]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfff7ffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x34U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3356]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xffefffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x35U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3357]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xffdfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x36U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3358]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xffbfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x37U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3359]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xff7fffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x38U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3360]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfeffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x39U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3361]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfdffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3362]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xfbffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3363]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xf7ffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3364]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xefffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3365]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xdfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3366]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0xbfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3367]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result 
            = ((0x7fffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2) 
               ^ (IData)(vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2)))) {
        ++(vlSymsp->__Vcoverage[3432]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfffffffffffffffeULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | (IData)((IData)((1U & (IData)(vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2)))));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 1U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3433]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfffffffffffffffdULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 2U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3434]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfffffffffffffffbULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 3U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3435]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfffffffffffffff7ULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 4U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3436]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xffffffffffffffefULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 5U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3437]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xffffffffffffffdfULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 6U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3438]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xffffffffffffffbfULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 7U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3439]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xffffffffffffff7fULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 8U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3440]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfffffffffffffeffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 9U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3441]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfffffffffffffdffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0xaU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3442]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfffffffffffffbffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0xbU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3443]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfffffffffffff7ffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0xcU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3444]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xffffffffffffefffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0xdU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3445]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xffffffffffffdfffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0xeU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3446]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xffffffffffffbfffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0xfU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3447]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xffffffffffff7fffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x10U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3448]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfffffffffffeffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x11U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3449]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfffffffffffdffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x12U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3450]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfffffffffffbffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x13U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3451]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfffffffffff7ffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x14U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3452]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xffffffffffefffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x15U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3453]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xffffffffffdfffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x16U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3454]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xffffffffffbfffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x17U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3455]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xffffffffff7fffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x18U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3456]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfffffffffeffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x19U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3457]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfffffffffdffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x1aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3458]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfffffffffbffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x1bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3459]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfffffffff7ffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x1cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3460]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xffffffffefffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x1dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3461]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xffffffffdfffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x1eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3462]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xffffffffbfffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x1fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3463]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xffffffff7fffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x20U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3464]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfffffffeffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x21U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3465]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfffffffdffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x22U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3466]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfffffffbffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x23U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3467]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfffffff7ffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x24U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3468]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xffffffefffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x25U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3469]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xffffffdfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x26U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3470]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xffffffbfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x27U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3471]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xffffff7fffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x28U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3472]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfffffeffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x29U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3473]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfffffdffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x2aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3474]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfffffbffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x2bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3475]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfffff7ffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x2cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3476]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xffffefffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x2dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3477]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xffffdfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x2eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3478]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xffffbfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x2fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3479]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xffff7fffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x30U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3480]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfffeffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x31U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3481]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfffdffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x32U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3482]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfffbffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x33U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3483]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfff7ffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x34U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3484]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xffefffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x35U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3485]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xffdfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x36U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3486]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xffbfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x37U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3487]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xff7fffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x38U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3488]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfeffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x39U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3489]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfdffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x3aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3490]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xfbffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x3bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3491]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xf7ffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x3cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3492]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xefffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x3dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3493]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xdfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x3eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3494]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0xbfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                        >> 0x3fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3495]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2 
            = ((0x7fffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->Top__DOT__ALUInst__DOT__plusResult = ((IData)(vlSelf->Top__DOT__IDUInst_io_alu_jalrSel)
                                                   ? 
                                                  (0xfffffffffffffffeULL 
                                                   & vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2)
                                                   : vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2);
    if (((IData)(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__signedResult) 
         ^ (IData)(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT____Vtogcov__signedResult))) {
        ++(vlSymsp->__Vcoverage[3755]);
        vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT____Vtogcov__signedResult 
            = vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__signedResult;
    }
    vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__lessResult 
        = ((IData)(vlSelf->Top__DOT__IDUInst_io_alu_unsignSel)
            ? (IData)(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__unsignResult)
            : (IData)(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__signedResult));
    if ((1U & ((IData)(vlSelf->Top__DOT__ALUInst__DOT__plusResult) 
               ^ (IData)(vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult)))) {
        ++(vlSymsp->__Vcoverage[3496]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfffffffffffffffeULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | (IData)((IData)((1U & (IData)(vlSelf->Top__DOT__ALUInst__DOT__plusResult)))));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 1U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3497]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfffffffffffffffdULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 2U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3498]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfffffffffffffffbULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 3U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3499]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfffffffffffffff7ULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 4U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3500]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xffffffffffffffefULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 5U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3501]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xffffffffffffffdfULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 6U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3502]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xffffffffffffffbfULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 7U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3503]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xffffffffffffff7fULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 8U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3504]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfffffffffffffeffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 9U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3505]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfffffffffffffdffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0xaU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3506]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfffffffffffffbffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0xbU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3507]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfffffffffffff7ffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0xcU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3508]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xffffffffffffefffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0xdU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3509]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xffffffffffffdfffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0xeU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3510]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xffffffffffffbfffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0xfU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3511]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xffffffffffff7fffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x10U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3512]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfffffffffffeffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x11U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3513]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfffffffffffdffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x12U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3514]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfffffffffffbffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x13U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3515]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfffffffffff7ffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x14U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3516]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xffffffffffefffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x15U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3517]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xffffffffffdfffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x16U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3518]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xffffffffffbfffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x17U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3519]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xffffffffff7fffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x18U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3520]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfffffffffeffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x19U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3521]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfffffffffdffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x1aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3522]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfffffffffbffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x1bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3523]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfffffffff7ffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x1cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3524]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xffffffffefffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x1dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3525]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xffffffffdfffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x1eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3526]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xffffffffbfffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x1fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3527]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xffffffff7fffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x20U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3528]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfffffffeffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x21U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3529]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfffffffdffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x22U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3530]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfffffffbffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x23U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3531]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfffffff7ffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x24U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3532]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xffffffefffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x25U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3533]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xffffffdfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x26U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3534]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xffffffbfffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x27U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3535]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xffffff7fffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x28U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3536]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfffffeffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x29U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3537]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfffffdffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x2aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3538]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfffffbffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x2bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3539]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfffff7ffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x2cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3540]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xffffefffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x2dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3541]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xffffdfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x2eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3542]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xffffbfffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x2fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3543]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xffff7fffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x30U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3544]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfffeffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x31U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3545]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfffdffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x32U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3546]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfffbffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x33U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3547]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfff7ffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x34U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3548]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xffefffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x35U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3549]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xffdfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x36U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3550]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xffbfffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x37U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3551]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xff7fffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x38U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3552]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfeffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x39U)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3553]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfdffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x3aU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3554]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xfbffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x3bU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3555]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xf7ffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x3cU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3556]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xefffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x3dU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3557]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xdfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x3eU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3558]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0xbfffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                        >> 0x3fU)) ^ (IData)((vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3559]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult 
            = ((0x7fffffffffffffffULL & vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__plusResult) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst__DOT__plusResult 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if (((IData)(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__lessResult) 
         ^ (IData)(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT____Vtogcov__lessResult))) {
        ++(vlSymsp->__Vcoverage[3756]);
        vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT____Vtogcov__lessResult 
            = vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__lessResult;
    }
    vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_result 
        = (1U & ((IData)(vlSelf->Top__DOT__IDUInst_io_alu_geSel)
                  ? (~ (IData)(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__lessResult))
                  : (IData)(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__lessResult)));
    if (((IData)(vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_result) 
         ^ (IData)(vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_result))) {
        ++(vlSymsp->__Vcoverage[3239]);
        vlSelf->Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_result 
            = vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_result;
    }
    vlSelf->Top__DOT__ALUInst_io_nextpcSel = ((0x18U 
                                               == (0x1fU 
                                                   & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                      >> 2U))) 
                                              & ((IData)(vlSelf->Top__DOT__IDUInst_io_alu_typeBEqSel)
                                                  ? (IData)(vlSelf->Top__DOT__ALUInst__DOT__equalResult)
                                                  : (IData)(vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_result)));
    vlSelf->Top__DOT__ALUInst_io_result = ((0U == (IData)(vlSelf->Top__DOT__IDUInst_io_alu_aluSel))
                                            ? vlSelf->Top__DOT__ALUInst__DOT__plusResult
                                            : ((1U 
                                                == (IData)(vlSelf->Top__DOT__IDUInst_io_alu_aluSel))
                                                ? (QData)((IData)(vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_result))
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->Top__DOT__IDUInst_io_alu_aluSel))
                                                    ? vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->Top__DOT__IDUInst_io_alu_aluSel))
                                                     ? vlSelf->Top__DOT__ALUInst__DOT__andResult
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->Top__DOT__IDUInst_io_alu_aluSel))
                                                      ? vlSelf->Top__DOT__ALUInst__DOT__orResult
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->Top__DOT__IDUInst_io_alu_aluSel))
                                                       ? vlSelf->Top__DOT__ALUInst__DOT__xorResult
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->Top__DOT__IDUInst_io_alu_aluSel))
                                                        ? vlSelf->Top__DOT__IDUInst_io_imme
                                                        : 0ULL)))))));
    if (((IData)(vlSelf->Top__DOT__ALUInst_io_nextpcSel) 
         ^ (IData)(vlSelf->Top__DOT____Vtogcov__ALUInst_io_nextpcSel))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_nextpcSel 
            = vlSelf->Top__DOT__ALUInst_io_nextpcSel;
    }
    if ((1U & ((IData)(vlSelf->Top__DOT__ALUInst_io_result) 
               ^ (IData)(vlSelf->Top__DOT____Vtogcov__ALUInst_io_result)))) {
        ++(vlSymsp->__Vcoverage[438]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfffffffffffffffeULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | (IData)((IData)((1U & (IData)(vlSelf->Top__DOT__ALUInst_io_result)))));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 1U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[439]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfffffffffffffffdULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 2U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[440]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfffffffffffffffbULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 3U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[441]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfffffffffffffff7ULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 4U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[442]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xffffffffffffffefULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 5U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[443]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xffffffffffffffdfULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 6U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[444]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xffffffffffffffbfULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 7U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[445]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xffffffffffffff7fULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 8U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[446]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfffffffffffffeffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 9U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[447]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfffffffffffffdffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0xaU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[448]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfffffffffffffbffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0xbU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[449]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfffffffffffff7ffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0xcU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[450]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xffffffffffffefffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0xdU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[451]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xffffffffffffdfffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0xeU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[452]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xffffffffffffbfffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0xfU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[453]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xffffffffffff7fffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x10U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[454]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfffffffffffeffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x11U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[455]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfffffffffffdffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x12U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[456]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfffffffffffbffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x13U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[457]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfffffffffff7ffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x14U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[458]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xffffffffffefffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x15U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[459]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xffffffffffdfffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x16U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[460]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xffffffffffbfffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x17U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[461]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xffffffffff7fffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x18U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[462]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfffffffffeffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x19U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[463]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfffffffffdffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x1aU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[464]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfffffffffbffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x1bU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[465]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfffffffff7ffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x1cU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[466]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xffffffffefffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x1dU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[467]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xffffffffdfffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x1eU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[468]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xffffffffbfffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x1fU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[469]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xffffffff7fffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x20U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[470]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfffffffeffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x21U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[471]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfffffffdffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x22U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[472]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfffffffbffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x23U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[473]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfffffff7ffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x24U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xffffffefffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x25U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xffffffdfffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x26U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xffffffbfffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x27U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xffffff7fffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x28U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfffffeffffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x29U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfffffdffffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x2aU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfffffbffffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x2bU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfffff7ffffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x2cU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xffffefffffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x2dU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xffffdfffffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x2eU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xffffbfffffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x2fU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xffff7fffffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x30U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfffeffffffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x31U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfffdffffffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x32U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfffbffffffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x33U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfff7ffffffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x34U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xffefffffffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x35U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xffdfffffffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x36U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xffbfffffffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x37U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xff7fffffffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x38U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfeffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x39U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfdffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x3aU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xfbffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x3bU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xf7ffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x3cU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xefffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x3dU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xdfffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x3eU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0xbfffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__ALUInst_io_result 
                        >> 0x3fU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelf->Top__DOT____Vtogcov__ALUInst_io_result 
            = ((0x7fffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__ALUInst_io_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__ALUInst_io_result 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->Top__DOT__IFUInst_io_nextpc = (((IData)(vlSelf->Top__DOT__ALUInst_io_nextpcSel) 
                                            | (0x1bU 
                                               == (0x1fU 
                                                   & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                      >> 2U))))
                                            ? vlSelf->Top__DOT__ALUInst_io_result
                                            : (4ULL 
                                               + vlSelf->Top__DOT__IFUInst__DOT__pc));
    VL_EXTEND_WQ(79,64, __Vtemp8, vlSelf->Top__DOT__RegFilesInst_io_rs2Data);
    VL_SHIFTL_WWI(79,79,4, __Vtemp9, __Vtemp8, (0xeU 
                                                & ((IData)(vlSelf->Top__DOT__ALUInst_io_result) 
                                                   << 1U)));
    vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
        = __Vtemp9[0U];
    vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
        = __Vtemp9[1U];
    vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[2U] 
        = (0x7fffU & __Vtemp9[2U]);
    vlSelf->Top__DOT__MemCtrlInst__DOT___GEN_2 = (0x7ffU 
                                                  & ((0U 
                                                      == 
                                                      (3U 
                                                       & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                          >> 0xcU)))
                                                      ? 
                                                     (0xffU 
                                                      & ((IData)(1U) 
                                                         << 
                                                         (7U 
                                                          & (IData)(vlSelf->Top__DOT__ALUInst_io_result))))
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                           >> 0xcU)))
                                                       ? 
                                                      (0x1ffU 
                                                       & ((IData)(3U) 
                                                          << 
                                                          (7U 
                                                           & (IData)(vlSelf->Top__DOT__ALUInst_io_result))))
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (3U 
                                                         & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                            >> 0xcU)))
                                                        ? 
                                                       ((IData)(0xfU) 
                                                        << 
                                                        (7U 
                                                         & (IData)(vlSelf->Top__DOT__ALUInst_io_result)))
                                                        : 0xffU))));
    if ((1U & ((IData)(vlSelf->Top__DOT__IFUInst_io_nextpc) 
               ^ (IData)(vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc)))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfffffffffffffffeULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | (IData)((IData)((1U & (IData)(vlSelf->Top__DOT__IFUInst_io_nextpc)))));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 1U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfffffffffffffffdULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 2U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfffffffffffffffbULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 3U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfffffffffffffff7ULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 4U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[7]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xffffffffffffffefULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 5U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[8]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xffffffffffffffdfULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 6U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[9]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xffffffffffffffbfULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 7U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[10]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xffffffffffffff7fULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 8U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[11]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfffffffffffffeffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 9U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[12]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfffffffffffffdffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0xaU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[13]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfffffffffffffbffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0xbU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[14]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfffffffffffff7ffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0xcU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[15]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xffffffffffffefffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0xdU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[16]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xffffffffffffdfffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0xeU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[17]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xffffffffffffbfffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0xfU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[18]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xffffffffffff7fffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x10U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[19]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfffffffffffeffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x11U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[20]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfffffffffffdffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x12U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[21]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfffffffffffbffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x13U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[22]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfffffffffff7ffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x14U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[23]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xffffffffffefffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x15U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[24]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xffffffffffdfffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x16U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[25]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xffffffffffbfffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x17U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[26]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xffffffffff7fffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x18U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[27]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfffffffffeffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x19U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[28]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfffffffffdffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x1aU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[29]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfffffffffbffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x1bU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[30]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfffffffff7ffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x1cU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[31]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xffffffffefffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x1dU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[32]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xffffffffdfffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x1eU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[33]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xffffffffbfffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x1fU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[34]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xffffffff7fffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x20U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[35]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfffffffeffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x21U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[36]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfffffffdffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x22U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[37]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfffffffbffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x23U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[38]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfffffff7ffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x24U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[39]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xffffffefffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x25U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[40]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xffffffdfffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x26U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[41]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xffffffbfffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x27U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[42]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xffffff7fffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x28U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[43]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfffffeffffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x29U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[44]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfffffdffffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x2aU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[45]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfffffbffffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x2bU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[46]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfffff7ffffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x2cU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[47]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xffffefffffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x2dU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[48]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xffffdfffffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x2eU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[49]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xffffbfffffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x2fU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[50]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xffff7fffffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x30U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[51]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfffeffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x31U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[52]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfffdffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x32U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[53]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfffbffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x33U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[54]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfff7ffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x34U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[55]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xffefffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x35U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[56]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xffdfffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x36U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[57]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xffbfffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x37U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[58]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xff7fffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x38U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[59]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfeffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x39U)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[60]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfdffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x3aU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[61]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xfbffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x3bU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[62]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xf7ffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x3cU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[63]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xefffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x3dU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[64]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xdfffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x3eU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[65]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0xbfffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                        >> 0x3fU)) ^ (IData)((vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[66]);
        vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc 
            = ((0x7fffffffffffffffULL & vlSelf->Top__DOT____Vtogcov__IFUInst_io_nextpc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->Top__DOT__IFUInst_io_nextpc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
               ^ (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData)))) {
        ++(vlSymsp->__Vcoverage[3949]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfffffffffffffffeULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | (IData)((IData)((1U & vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U]))));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 1U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                  >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3950]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfffffffffffffffdULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 1U)))) 
                  << 1U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 2U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                  >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3951]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfffffffffffffffbULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 2U)))) 
                  << 2U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 3U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                  >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3952]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfffffffffffffff7ULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 3U)))) 
                  << 3U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 4U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                  >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3953]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xffffffffffffffefULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 4U)))) 
                  << 4U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 5U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                  >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3954]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xffffffffffffffdfULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 5U)))) 
                  << 5U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 6U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                  >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3955]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xffffffffffffffbfULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 6U)))) 
                  << 6U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 7U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                  >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3956]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xffffffffffffff7fULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 7U)))) 
                  << 7U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 8U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3957]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfffffffffffffeffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 8U)))) 
                  << 8U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 9U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3958]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfffffffffffffdffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 9U)))) 
                  << 9U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 0xaU) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3959]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfffffffffffffbffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 0xaU)))) 
                  << 0xaU));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 0xbU) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3960]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfffffffffffff7ffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 0xbU)))) 
                  << 0xbU));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 0xcU) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3961]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xffffffffffffefffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 0xcU)))) 
                  << 0xcU));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 0xdU) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3962]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xffffffffffffdfffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 0xdU)))) 
                  << 0xdU));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 0xeU) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3963]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xffffffffffffbfffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 0xeU)))) 
                  << 0xeU));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 0xfU) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3964]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xffffffffffff7fffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 0xfU)))) 
                  << 0xfU));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 0x10U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3965]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfffffffffffeffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 0x10U)))) 
                  << 0x10U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 0x11U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3966]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfffffffffffdffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 0x11U)))) 
                  << 0x11U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 0x12U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3967]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfffffffffffbffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 0x12U)))) 
                  << 0x12U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 0x13U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3968]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfffffffffff7ffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 0x13U)))) 
                  << 0x13U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 0x14U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3969]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xffffffffffefffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 0x14U)))) 
                  << 0x14U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 0x15U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3970]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xffffffffffdfffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 0x15U)))) 
                  << 0x15U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 0x16U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3971]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xffffffffffbfffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 0x16U)))) 
                  << 0x16U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 0x17U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3972]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xffffffffff7fffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 0x17U)))) 
                  << 0x17U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 0x18U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3973]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfffffffffeffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 0x18U)))) 
                  << 0x18U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 0x19U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3974]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfffffffffdffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 0x19U)))) 
                  << 0x19U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 0x1aU) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3975]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfffffffffbffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 0x1aU)))) 
                  << 0x1aU));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 0x1bU) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3976]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfffffffff7ffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 0x1bU)))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 0x1cU) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3977]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xffffffffefffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 0x1cU)))) 
                  << 0x1cU));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 0x1dU) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3978]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xffffffffdfffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 0x1dU)))) 
                  << 0x1dU));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 0x1eU) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3979]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xffffffffbfffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                         >> 0x1eU)))) 
                  << 0x1eU));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                >> 0x1fU) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3980]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xffffffff7fffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U] 
                                   >> 0x1fU))) << 0x1fU));
    }
    if ((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
               ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3981]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfffffffeffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U]))) 
                  << 0x20U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 1U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                  >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3982]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfffffffdffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 1U)))) 
                  << 0x21U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 2U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                  >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3983]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfffffffbffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 2U)))) 
                  << 0x22U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 3U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                  >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3984]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfffffff7ffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 3U)))) 
                  << 0x23U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 4U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                  >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3985]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xffffffefffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 4U)))) 
                  << 0x24U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 5U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                  >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3986]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xffffffdfffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 5U)))) 
                  << 0x25U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 6U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                  >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3987]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xffffffbfffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 6U)))) 
                  << 0x26U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 7U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                  >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3988]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xffffff7fffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 7U)))) 
                  << 0x27U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 8U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                  >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3989]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfffffeffffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 8U)))) 
                  << 0x28U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 9U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                  >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3990]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfffffdffffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 9U)))) 
                  << 0x29U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 0xaU) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                    >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3991]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfffffbffffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 0xaU)))) 
                  << 0x2aU));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 0xbU) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                    >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3992]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfffff7ffffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 0xbU)))) 
                  << 0x2bU));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 0xcU) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                    >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3993]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xffffefffffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 0xcU)))) 
                  << 0x2cU));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 0xdU) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                    >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3994]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xffffdfffffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 0xdU)))) 
                  << 0x2dU));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 0xeU) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                    >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3995]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xffffbfffffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 0xeU)))) 
                  << 0x2eU));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 0xfU) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                    >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3996]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xffff7fffffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 0xfU)))) 
                  << 0x2fU));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 0x10U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3997]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfffeffffffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 0x10U)))) 
                  << 0x30U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 0x11U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3998]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfffdffffffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 0x11U)))) 
                  << 0x31U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 0x12U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3999]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfffbffffffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 0x12U)))) 
                  << 0x32U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 0x13U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4000]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfff7ffffffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 0x13U)))) 
                  << 0x33U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 0x14U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4001]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xffefffffffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 0x14U)))) 
                  << 0x34U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 0x15U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4002]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xffdfffffffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 0x15U)))) 
                  << 0x35U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 0x16U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4003]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xffbfffffffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 0x16U)))) 
                  << 0x36U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 0x17U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4004]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xff7fffffffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 0x17U)))) 
                  << 0x37U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 0x18U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4005]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfeffffffffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 0x18U)))) 
                  << 0x38U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 0x19U) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4006]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfdffffffffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 0x19U)))) 
                  << 0x39U));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 0x1aU) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4007]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xfbffffffffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 0x1aU)))) 
                  << 0x3aU));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 0x1bU) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4008]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xf7ffffffffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 0x1bU)))) 
                  << 0x3bU));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 0x1cU) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4009]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xefffffffffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 0x1cU)))) 
                  << 0x3cU));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 0x1dU) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4010]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xdfffffffffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 0x1dU)))) 
                  << 0x3dU));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 0x1eU) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4011]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0xbfffffffffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((1U & (vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                         >> 0x1eU)))) 
                  << 0x3eU));
    }
    if ((1U & ((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                >> 0x1fU) ^ (IData)((vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4012]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData 
            = ((0x7fffffffffffffffULL & vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wData) 
               | ((QData)((IData)((vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U] 
                                   >> 0x1fU))) << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->Top__DOT__MemCtrlInst__DOT___GEN_2) 
               ^ (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wMask)))) {
        ++(vlSymsp->__Vcoverage[4013]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wMask 
            = ((0xfeU & (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wMask)) 
               | (1U & (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT___GEN_2)));
    }
    if ((2U & ((IData)(vlSelf->Top__DOT__MemCtrlInst__DOT___GEN_2) 
               ^ (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wMask)))) {
        ++(vlSymsp->__Vcoverage[4014]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wMask 
            = ((0xfdU & (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wMask)) 
               | (2U & (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT___GEN_2)));
    }
    if ((4U & ((IData)(vlSelf->Top__DOT__MemCtrlInst__DOT___GEN_2) 
               ^ (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wMask)))) {
        ++(vlSymsp->__Vcoverage[4015]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wMask 
            = ((0xfbU & (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wMask)) 
               | (4U & (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT___GEN_2)));
    }
    if ((8U & ((IData)(vlSelf->Top__DOT__MemCtrlInst__DOT___GEN_2) 
               ^ (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wMask)))) {
        ++(vlSymsp->__Vcoverage[4016]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wMask 
            = ((0xf7U & (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wMask)) 
               | (8U & (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT___GEN_2)));
    }
    if ((0x10U & ((IData)(vlSelf->Top__DOT__MemCtrlInst__DOT___GEN_2) 
                  ^ (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wMask)))) {
        ++(vlSymsp->__Vcoverage[4017]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wMask 
            = ((0xefU & (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wMask)) 
               | (0x10U & (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT___GEN_2)));
    }
    if ((0x20U & ((IData)(vlSelf->Top__DOT__MemCtrlInst__DOT___GEN_2) 
                  ^ (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wMask)))) {
        ++(vlSymsp->__Vcoverage[4018]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wMask 
            = ((0xdfU & (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wMask)) 
               | (0x20U & (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT___GEN_2)));
    }
    if ((0x40U & ((IData)(vlSelf->Top__DOT__MemCtrlInst__DOT___GEN_2) 
                  ^ (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wMask)))) {
        ++(vlSymsp->__Vcoverage[4019]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wMask 
            = ((0xbfU & (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wMask)) 
               | (0x40U & (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT___GEN_2)));
    }
    if ((0x80U & ((IData)(vlSelf->Top__DOT__MemCtrlInst__DOT___GEN_2) 
                  ^ (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wMask)))) {
        ++(vlSymsp->__Vcoverage[4020]);
        vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wMask 
            = ((0x7fU & (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT____Vtogcov__MemInst_data_wMask)) 
               | (0x80U & (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT___GEN_2)));
    }
}

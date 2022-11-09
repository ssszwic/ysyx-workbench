// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop_MemVirtual.h"
#include "VTop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void pmem_read(long long raddr, long long* rdata);

VL_INLINE_OPT void VTop_MemVirtual____Vdpiimwrap_pmem_read_TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemVirtual____Vdpiimwrap_pmem_read_TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    pmem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void pmem_write(long long waddr, long long wdata, char wmask);

VL_INLINE_OPT void VTop_MemVirtual____Vdpiimwrap_pmem_write_TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemVirtual____Vdpiimwrap_pmem_write_TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

VL_INLINE_OPT void VTop_MemVirtual___settle__TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr__1(VTop_MemVirtual* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemVirtual___settle__TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr__1\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[4143]);
    ++(vlSymsp->__Vcoverage[4144]);
    if (vlSymsp->TOP.io_cpuEn) {
        VTop_MemVirtual____Vdpiimwrap_pmem_read_TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr(
                                                                                (0xfffffffffffffff8ULL 
                                                                                & vlSymsp->TOP.Top__DOT__IFUInst__DOT__pc), vlSelf->__Vtask_pmem_read__0__rdata);
        ++(vlSymsp->__Vcoverage[4140]);
        vlSelf->rData = vlSelf->__Vtask_pmem_read__0__rdata;
    } else {
        ++(vlSymsp->__Vcoverage[4141]);
        vlSelf->rData = 0ULL;
    }
}

VL_INLINE_OPT void VTop_MemVirtual___settle__TOP__Top__DOT__MemCtrlInst__DOT__MemInst_data__2(VTop_MemVirtual* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_MemVirtual___settle__TOP__Top__DOT__MemCtrlInst__DOT__MemInst_data__2\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[4144]);
    if ((0U == (0x1fU & (vlSymsp->TOP.Top__DOT__IFUInst_io_inst 
                         >> 2U)))) {
        VTop_MemVirtual____Vdpiimwrap_pmem_read_TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr(
                                                                                (0xfffffffffffffff8ULL 
                                                                                & vlSymsp->TOP.Top__DOT__ALUInst_io_result), vlSelf->__Vtask_pmem_read__2__rdata);
        ++(vlSymsp->__Vcoverage[4140]);
        vlSelf->rData = vlSelf->__Vtask_pmem_read__2__rdata;
    } else {
        ++(vlSymsp->__Vcoverage[4141]);
        vlSelf->rData = 0ULL;
    }
    if ((8U == (0x1fU & (vlSymsp->TOP.Top__DOT__IFUInst_io_inst 
                         >> 2U)))) {
        VTop_MemVirtual____Vdpiimwrap_pmem_write_TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr(
                                                                                (0xfffffffffffffff8ULL 
                                                                                & vlSymsp->TOP.Top__DOT__ALUInst_io_result), 
                                                                                (((QData)((IData)(
                                                                                vlSymsp->TOP.Top__DOT__MemCtrlInst__DOT___wData_T_2[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP.Top__DOT__MemCtrlInst__DOT___wData_T_2[0U]))), 
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP.Top__DOT__MemCtrlInst__DOT___GEN_2)));
        ++(vlSymsp->__Vcoverage[4142]);
    } else {
        ++(vlSymsp->__Vcoverage[4143]);
    }
}

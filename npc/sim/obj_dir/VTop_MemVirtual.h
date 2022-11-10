// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP_MEMVIRTUAL_H_
#define VERILATED_VTOP_MEMVIRTUAL_H_  // guard

#include "verilated_heavy.h"
#include "verilated_cov.h"

//==========

class VTop__Syms;
class VTop_VerilatedVcd;


//----------

VL_MODULE(VTop_MemVirtual) {
  public:

    // PORTS
    VL_IN8(ren,0,0);
    VL_IN8(wen,0,0);
    VL_IN8(wMask,7,0);
    VL_IN64(addr,63,0);
    VL_OUT64(rData,63,0);
    VL_IN64(wData,63,0);

    // LOCAL VARIABLES
    QData/*63:0*/ __Vtask_pmem_read__0__rdata;
    QData/*63:0*/ __Vtask_pmem_read__2__rdata;

    // INTERNAL VARIABLES
    VTop__Syms* vlSymsp;  // Symbol table
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VTop_MemVirtual);  ///< Copying not allowed
  public:
    VTop_MemVirtual(const char* name);
    ~VTop_MemVirtual();

    // INTERNAL METHODS
    void __Vconfigure(VTop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

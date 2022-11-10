// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTop__Syms.h"
#include "VTop.h"
#include "VTop___024root.h"
#include "VTop_MemVirtual.h"

// FUNCTIONS
VTop__Syms::~VTop__Syms()
{
}

VTop__Syms::VTop__Syms(VerilatedContext* contextp, const char* namep,VTop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
    , TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr(Verilated::catName(namep, "Top.IFUInst.MemVirtualInst_instr"))
    , TOP__Top__DOT__MemCtrlInst__DOT__MemVirtualInst_data(Verilated::catName(namep, "Top.MemCtrlInst.MemVirtualInst_data"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__Top__DOT__IFUInst__DOT__MemVirtualInst_instr = &TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr;
    TOP.__PVT__Top__DOT__MemCtrlInst__DOT__MemVirtualInst_data = &TOP__Top__DOT__MemCtrlInst__DOT__MemVirtualInst_data;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.__Vconfigure(this, true);
    TOP__Top__DOT__MemCtrlInst__DOT__MemVirtualInst_data.__Vconfigure(this, false);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}

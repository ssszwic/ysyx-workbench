// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"
#include "verilated_cov.h"

//==========

class VTop__Syms;
class VTop_VerilatedVcd;


//----------

VL_MODULE(VTop___024root) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_cpuEn,0,0);
    VL_OUT8(io_wen,0,0);
    VL_OUT8(io_ren,0,0);
    VL_OUT8(io_length,1,0);
    VL_IN64(io_instData,63,0);
    VL_OUT64(io_instAddr,63,0);
    VL_IN64(io_rData,63,0);
    VL_OUT64(io_rAddr,63,0);
    VL_OUT64(io_wData,63,0);
    VL_OUT64(io_wAddr,63,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ Top__DOT__IDUInst_io_wenReg;
        CData/*2:0*/ Top__DOT__IDUInst_io_alu_aluSel;
        CData/*0:0*/ Top__DOT__IDUInst_io_alu_typeBEqSel;
        CData/*0:0*/ Top__DOT__IDUInst_io_alu_jalrSel;
        CData/*0:0*/ Top__DOT__IDUInst_io_alu_subSel;
        CData/*0:0*/ Top__DOT__IDUInst_io_alu_geSel;
        CData/*0:0*/ Top__DOT__IDUInst_io_alu_unsignSel;
        CData/*0:0*/ Top__DOT__IDUInst_io_alu_neqSel;
        CData/*0:0*/ Top__DOT__IDUInst_io_alu_rightSel;
        CData/*0:0*/ Top__DOT__IDUInst_io_alu_arithSel;
        CData/*0:0*/ Top__DOT__IDUInst_io_alu_wordSel;
        CData/*0:0*/ Top__DOT__ALUInst_io_nextpcSel;
        CData/*0:0*/ Top__DOT__IDUInst__DOT__typeII;
        CData/*0:0*/ Top__DOT__IDUInst__DOT__typeR;
        CData/*0:0*/ Top__DOT__IDUInst__DOT__typeI;
        CData/*0:0*/ Top__DOT__IDUInst__DOT__typeU;
        CData/*7:0*/ Top__DOT__IDUInst__DOT__io_imme_imme2;
        CData/*0:0*/ Top__DOT__IDUInst__DOT__io_imme_imme3;
        CData/*5:0*/ Top__DOT__IDUInst__DOT__io_imme_imme4;
        CData/*3:0*/ Top__DOT__IDUInst__DOT__io_imme_imme5;
        CData/*0:0*/ Top__DOT__IDUInst__DOT__io_imme_imme6;
        CData/*0:0*/ Top__DOT__ALUInst__DOT__lessInst_io_result;
        CData/*0:0*/ Top__DOT__ALUInst__DOT__equalResultTmp;
        CData/*0:0*/ Top__DOT__ALUInst__DOT__equalResult;
        CData/*0:0*/ Top__DOT__ALUInst__DOT__lessInst__DOT__unsignResult;
        CData/*0:0*/ Top__DOT__ALUInst__DOT__lessInst__DOT__signedResult;
        CData/*0:0*/ Top__DOT__ALUInst__DOT__lessInst__DOT__lessResult;
        SData/*11:0*/ Top__DOT__IDUInst__DOT___GEN_0;
        VlWide<4>/*126:0*/ Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2;
        QData/*63:0*/ Top__DOT__IFUInst_io_nextpc;
        QData/*63:0*/ Top__DOT__IDUInst_io_imme;
        QData/*63:0*/ Top__DOT__RegFilesInst_io_wData;
        QData/*63:0*/ Top__DOT__RegFilesInst_io_rs1Data;
        QData/*63:0*/ Top__DOT__RegFilesInst_io_rs2Data;
        QData/*63:0*/ Top__DOT__ALUInst_io_result;
        QData/*63:0*/ Top__DOT__MemExtendsInst_io_result;
        QData/*63:0*/ Top__DOT__IFUInst__DOT__pc;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_0;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_1;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_2;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_3;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_4;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_5;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_6;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_7;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_8;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_9;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_10;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_11;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_12;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_13;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_14;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_15;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_16;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_17;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_18;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_19;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_20;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_21;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_22;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_23;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_24;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_25;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_26;
    };
    struct {
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_27;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_28;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_29;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_30;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT__regFiles_31;
        QData/*63:0*/ Top__DOT__ALUInst__DOT__plusInst_io_data1;
        QData/*63:0*/ Top__DOT__ALUInst__DOT__plusInst_io_data2;
        QData/*63:0*/ Top__DOT__ALUInst__DOT__plusInst_io_result;
        QData/*63:0*/ Top__DOT__ALUInst__DOT__lessInst_io_data2;
        QData/*63:0*/ Top__DOT__ALUInst__DOT__shiftInst_io_result;
        QData/*63:0*/ Top__DOT__ALUInst__DOT__src2;
        QData/*63:0*/ Top__DOT__ALUInst__DOT__plusResultTmp2;
        QData/*63:0*/ Top__DOT__ALUInst__DOT__plusResult;
        QData/*63:0*/ Top__DOT__ALUInst__DOT__andResult;
        QData/*63:0*/ Top__DOT__ALUInst__DOT__orResult;
        QData/*63:0*/ Top__DOT__ALUInst__DOT__xorResult;
        QData/*63:0*/ Top__DOT__ALUInst__DOT__shiftInst__DOT__data1;
    };

    // LOCAL VARIABLES
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ Top__DOT____Vtogcov__clock;
        CData/*0:0*/ Top__DOT____Vtogcov__reset;
        CData/*0:0*/ Top__DOT____Vtogcov__io_cpuEn;
        CData/*0:0*/ Top__DOT____Vtogcov__io_wen;
        CData/*0:0*/ Top__DOT____Vtogcov__io_ren;
        CData/*1:0*/ Top__DOT____Vtogcov__io_length;
        CData/*0:0*/ Top__DOT____Vtogcov__IDUInst_io_wenReg;
        CData/*0:0*/ Top__DOT____Vtogcov__IDUInst_io_wenMem;
        CData/*0:0*/ Top__DOT____Vtogcov__IDUInst_io_renMem;
        CData/*0:0*/ Top__DOT____Vtogcov__IDUInst_io_jumpSel;
        CData/*2:0*/ Top__DOT____Vtogcov__IDUInst_io_alu_aluSel;
        CData/*0:0*/ Top__DOT____Vtogcov__IDUInst_io_alu_typeBSel;
        CData/*0:0*/ Top__DOT____Vtogcov__IDUInst_io_alu_aupicSel;
        CData/*0:0*/ Top__DOT____Vtogcov__IDUInst_io_alu_immeSel;
        CData/*0:0*/ Top__DOT____Vtogcov__IDUInst_io_alu_typeBEqSel;
        CData/*0:0*/ Top__DOT____Vtogcov__IDUInst_io_alu_jalrSel;
        CData/*0:0*/ Top__DOT____Vtogcov__IDUInst_io_alu_subSel;
        CData/*0:0*/ Top__DOT____Vtogcov__IDUInst_io_alu_geSel;
        CData/*0:0*/ Top__DOT____Vtogcov__IDUInst_io_alu_unsignSel;
        CData/*0:0*/ Top__DOT____Vtogcov__IDUInst_io_alu_neqSel;
        CData/*0:0*/ Top__DOT____Vtogcov__IDUInst_io_alu_rightSel;
        CData/*0:0*/ Top__DOT____Vtogcov__IDUInst_io_alu_arithSel;
        CData/*0:0*/ Top__DOT____Vtogcov__IDUInst_io_alu_wordSel;
        CData/*0:0*/ Top__DOT____Vtogcov__ALUInst_io_nextpcSel;
        CData/*0:0*/ Top__DOT__IDUInst__DOT____Vtogcov__EbreakInst_ebreak;
        CData/*0:0*/ Top__DOT__IDUInst__DOT____Vtogcov__typeII;
        CData/*0:0*/ Top__DOT__IDUInst__DOT____Vtogcov__typeR;
        CData/*0:0*/ Top__DOT__IDUInst__DOT____Vtogcov__typeI;
        CData/*0:0*/ Top__DOT__IDUInst__DOT____Vtogcov__typeU;
        CData/*7:0*/ Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme2;
        CData/*0:0*/ Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme3;
        CData/*5:0*/ Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme4;
        CData/*3:0*/ Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme5;
        CData/*0:0*/ Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme6;
        CData/*0:0*/ Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_result;
        CData/*0:0*/ Top__DOT__ALUInst__DOT____Vtogcov__equalResultTmp;
        CData/*0:0*/ Top__DOT__ALUInst__DOT____Vtogcov__equalResult;
        CData/*0:0*/ Top__DOT__ALUInst__DOT__lessInst__DOT____Vtogcov__unsignResult;
        CData/*0:0*/ Top__DOT__ALUInst__DOT__lessInst__DOT____Vtogcov__signedResult;
        CData/*0:0*/ Top__DOT__ALUInst__DOT__lessInst__DOT____Vtogcov__lessResult;
        CData/*0:0*/ __Vclklast__TOP__clock;
        SData/*10:0*/ Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme1;
        QData/*63:0*/ Top__DOT____Vtogcov__io_instData;
        QData/*63:0*/ Top__DOT____Vtogcov__io_instAddr;
        QData/*63:0*/ Top__DOT____Vtogcov__io_rData;
        QData/*63:0*/ Top__DOT____Vtogcov__io_rAddr;
        QData/*63:0*/ Top__DOT____Vtogcov__io_wData;
        QData/*63:0*/ Top__DOT____Vtogcov__io_wAddr;
        QData/*63:0*/ Top__DOT____Vtogcov__IFUInst_io_nextpc;
        QData/*63:0*/ Top__DOT____Vtogcov__IFUInst_io_pc;
        QData/*63:0*/ Top__DOT____Vtogcov__IDUInst_io_imme;
        QData/*63:0*/ Top__DOT____Vtogcov__RegFilesInst_io_wData;
        QData/*63:0*/ Top__DOT____Vtogcov__RegFilesInst_io_rs1Data;
        QData/*63:0*/ Top__DOT____Vtogcov__RegFilesInst_io_rs2Data;
        QData/*63:0*/ Top__DOT____Vtogcov__ALUInst_io_result;
        QData/*63:0*/ Top__DOT____Vtogcov__MemExtendsInst_io_result;
        QData/*63:0*/ Top__DOT____Vtogcov__nextpcDefault;
        QData/*32:0*/ Top__DOT__IDUInst__DOT____Vtogcov__io_imme_imme0;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_0;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_1;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_2;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_3;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_4;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_5;
    };
    struct {
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_6;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_7;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_8;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_9;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_10;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_11;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_12;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_13;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_14;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_15;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_16;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_17;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_18;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_19;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_20;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_21;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_22;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_23;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_24;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_25;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_26;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_27;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_28;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_29;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_30;
        QData/*63:0*/ Top__DOT__RegFilesInst__DOT____Vtogcov__regFiles_31;
        QData/*63:0*/ Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data1;
        QData/*63:0*/ Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_data2;
        QData/*63:0*/ Top__DOT__ALUInst__DOT____Vtogcov__plusInst_io_result;
        QData/*63:0*/ Top__DOT__ALUInst__DOT____Vtogcov__lessInst_io_data2;
        QData/*63:0*/ Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_data2;
        QData/*63:0*/ Top__DOT__ALUInst__DOT____Vtogcov__shiftInst_io_result;
        QData/*63:0*/ Top__DOT__ALUInst__DOT____Vtogcov__plusResultTmp2;
        QData/*63:0*/ Top__DOT__ALUInst__DOT____Vtogcov__plusResult;
        QData/*63:0*/ Top__DOT__ALUInst__DOT____Vtogcov__andResult;
        QData/*63:0*/ Top__DOT__ALUInst__DOT____Vtogcov__orResult;
        QData/*63:0*/ Top__DOT__ALUInst__DOT____Vtogcov__xorResult;
        QData/*63:0*/ Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__data1;
        QData/*63:0*/ Top__DOT__ALUInst__DOT__shiftInst__DOT____Vtogcov__result;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    VTop__Syms* vlSymsp;  // Symbol table
    // Coverage
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VTop___024root);  ///< Copying not allowed
  public:
    VTop___024root(const char* name);
    ~VTop___024root();

    // INTERNAL METHODS
    void __Vconfigure(VTop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

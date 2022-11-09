// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


void VTop___024root__traceChgSub0(VTop___024root* vlSelf, VerilatedVcd* tracep);

void VTop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VTop___024root* const __restrict vlSelf = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VTop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VTop___024root__traceChgSub0(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->Top__DOT__IFUInst_io_nextpc),64);
            tracep->chgBit(oldp+2,(vlSelf->Top__DOT__IDUInst_io_wenReg));
            tracep->chgQData(oldp+3,(vlSelf->Top__DOT__IDUInst_io_imme),64);
            tracep->chgCData(oldp+5,(vlSelf->Top__DOT__IDUInst_io_alu_aluSel),3);
            tracep->chgBit(oldp+6,((1U & (~ (IData)(vlSelf->Top__DOT__IDUInst__DOT__typeR)))));
            tracep->chgBit(oldp+7,(vlSelf->Top__DOT__IDUInst_io_alu_typeBEqSel));
            tracep->chgBit(oldp+8,(vlSelf->Top__DOT__IDUInst_io_alu_jalrSel));
            tracep->chgBit(oldp+9,(vlSelf->Top__DOT__IDUInst_io_alu_subSel));
            tracep->chgBit(oldp+10,(vlSelf->Top__DOT__IDUInst_io_alu_geSel));
            tracep->chgBit(oldp+11,(vlSelf->Top__DOT__IDUInst_io_alu_unsignSel));
            tracep->chgBit(oldp+12,(vlSelf->Top__DOT__IDUInst_io_alu_neqSel));
            tracep->chgBit(oldp+13,(vlSelf->Top__DOT__IDUInst_io_alu_rightSel));
            tracep->chgBit(oldp+14,(vlSelf->Top__DOT__IDUInst_io_alu_arithSel));
            tracep->chgBit(oldp+15,(vlSelf->Top__DOT__IDUInst_io_alu_wordSel));
            tracep->chgQData(oldp+16,(vlSelf->Top__DOT__RegFilesInst_io_wData),64);
            tracep->chgQData(oldp+18,(vlSelf->Top__DOT__RegFilesInst_io_rs1Data),64);
            tracep->chgQData(oldp+20,(vlSelf->Top__DOT__RegFilesInst_io_rs2Data),64);
            tracep->chgQData(oldp+22,(vlSelf->Top__DOT__ALUInst_io_result),64);
            tracep->chgBit(oldp+24,(vlSelf->Top__DOT__ALUInst_io_nextpcSel));
            tracep->chgQData(oldp+25,(vlSelf->Top__DOT__MemExtendsInst_io_result),64);
            tracep->chgBit(oldp+27,(vlSelf->Top__DOT__IDUInst__DOT__typeII));
            tracep->chgBit(oldp+28,(vlSelf->Top__DOT__IDUInst__DOT__typeR));
            tracep->chgBit(oldp+29,(vlSelf->Top__DOT__IDUInst__DOT__typeI));
            tracep->chgBit(oldp+30,(vlSelf->Top__DOT__IDUInst__DOT__typeU));
            tracep->chgCData(oldp+31,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme2),8);
            tracep->chgBit(oldp+32,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme3));
            tracep->chgCData(oldp+33,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme4),6);
            tracep->chgCData(oldp+34,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme5),4);
            tracep->chgBit(oldp+35,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme6));
            tracep->chgSData(oldp+36,((0x7ffU & (IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0))),11);
            tracep->chgIData(oldp+37,(vlSelf->Top__DOT__IDUInst__DOT__EbreakInst__DOT__tmp),32);
            tracep->chgQData(oldp+38,(vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1),64);
            tracep->chgQData(oldp+40,(vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2),64);
            tracep->chgQData(oldp+42,(vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result),64);
            tracep->chgQData(oldp+44,(vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2),64);
            tracep->chgBit(oldp+46,(vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_result));
            tracep->chgQData(oldp+47,(vlSelf->Top__DOT__ALUInst__DOT__src2),64);
            tracep->chgQData(oldp+49,(vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result),64);
            tracep->chgQData(oldp+51,(vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2),64);
            tracep->chgQData(oldp+53,(vlSelf->Top__DOT__ALUInst__DOT__plusResult),64);
            tracep->chgQData(oldp+55,(vlSelf->Top__DOT__ALUInst__DOT__andResult),64);
            tracep->chgQData(oldp+57,(vlSelf->Top__DOT__ALUInst__DOT__orResult),64);
            tracep->chgQData(oldp+59,(vlSelf->Top__DOT__ALUInst__DOT__xorResult),64);
            tracep->chgBit(oldp+61,(vlSelf->Top__DOT__ALUInst__DOT__equalResultTmp));
            tracep->chgBit(oldp+62,(vlSelf->Top__DOT__ALUInst__DOT__equalResult));
            tracep->chgBit(oldp+63,(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__unsignResult));
            tracep->chgBit(oldp+64,(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__signedResult));
            tracep->chgBit(oldp+65,(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__lessResult));
            tracep->chgQData(oldp+66,(vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1),64);
            tracep->chgQData(oldp+68,((((QData)((IData)(
                                                        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U])))),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+70,(vlSelf->Top__DOT__IFUInst__DOT__pc),64);
            tracep->chgQData(oldp+72,((4ULL + vlSelf->Top__DOT__IFUInst__DOT__pc)),64);
            tracep->chgQData(oldp+74,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_0),64);
            tracep->chgQData(oldp+76,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_1),64);
            tracep->chgQData(oldp+78,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_2),64);
            tracep->chgQData(oldp+80,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_3),64);
            tracep->chgQData(oldp+82,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_4),64);
            tracep->chgQData(oldp+84,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_5),64);
            tracep->chgQData(oldp+86,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_6),64);
            tracep->chgQData(oldp+88,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_7),64);
            tracep->chgQData(oldp+90,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_8),64);
            tracep->chgQData(oldp+92,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_9),64);
            tracep->chgQData(oldp+94,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_10),64);
            tracep->chgQData(oldp+96,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_11),64);
            tracep->chgQData(oldp+98,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_12),64);
            tracep->chgQData(oldp+100,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_13),64);
            tracep->chgQData(oldp+102,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_14),64);
            tracep->chgQData(oldp+104,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_15),64);
            tracep->chgQData(oldp+106,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_16),64);
            tracep->chgQData(oldp+108,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_17),64);
            tracep->chgQData(oldp+110,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_18),64);
            tracep->chgQData(oldp+112,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_19),64);
            tracep->chgQData(oldp+114,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_20),64);
            tracep->chgQData(oldp+116,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_21),64);
            tracep->chgQData(oldp+118,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_22),64);
            tracep->chgQData(oldp+120,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_23),64);
            tracep->chgQData(oldp+122,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_24),64);
            tracep->chgQData(oldp+124,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_25),64);
            tracep->chgQData(oldp+126,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_26),64);
            tracep->chgQData(oldp+128,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_27),64);
            tracep->chgQData(oldp+130,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_28),64);
            tracep->chgQData(oldp+132,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_29),64);
            tracep->chgQData(oldp+134,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_30),64);
            tracep->chgQData(oldp+136,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_31),64);
        }
        tracep->chgBit(oldp+138,(vlSelf->clock));
        tracep->chgBit(oldp+139,(vlSelf->reset));
        tracep->chgBit(oldp+140,(vlSelf->io_cpuEn));
        tracep->chgQData(oldp+141,(vlSelf->io_instData),64);
        tracep->chgQData(oldp+143,(vlSelf->io_instAddr),64);
        tracep->chgQData(oldp+145,(vlSelf->io_rData),64);
        tracep->chgQData(oldp+147,(vlSelf->io_rAddr),64);
        tracep->chgQData(oldp+149,(vlSelf->io_wData),64);
        tracep->chgQData(oldp+151,(vlSelf->io_wAddr),64);
        tracep->chgBit(oldp+153,(vlSelf->io_wen));
        tracep->chgBit(oldp+154,(vlSelf->io_ren));
        tracep->chgCData(oldp+155,(vlSelf->io_length),2);
        tracep->chgIData(oldp+156,((IData)(vlSelf->io_instData)),32);
        tracep->chgCData(oldp+157,((0x1fU & (IData)(
                                                    (vlSelf->io_instData 
                                                     >> 0xfU)))),5);
        tracep->chgCData(oldp+158,((0x1fU & (IData)(
                                                    (vlSelf->io_instData 
                                                     >> 0x14U)))),5);
        tracep->chgCData(oldp+159,((0x1fU & (IData)(
                                                    (vlSelf->io_instData 
                                                     >> 7U)))),5);
        tracep->chgBit(oldp+160,((8U == (0x1fU & (IData)(
                                                         (vlSelf->io_instData 
                                                          >> 2U))))));
        tracep->chgBit(oldp+161,((0U == (0x1fU & (IData)(
                                                         (vlSelf->io_instData 
                                                          >> 2U))))));
        tracep->chgCData(oldp+162,((3U & (IData)((vlSelf->io_instData 
                                                  >> 0xcU)))),2);
        tracep->chgBit(oldp+163,((1U & (IData)((vlSelf->io_instData 
                                                >> 0xeU)))));
        tracep->chgBit(oldp+164,((0x1bU == (0x1fU & (IData)(
                                                            (vlSelf->io_instData 
                                                             >> 2U))))));
        tracep->chgBit(oldp+165,((0x18U == (0x1fU & (IData)(
                                                            (vlSelf->io_instData 
                                                             >> 2U))))));
        tracep->chgBit(oldp+166,((5U == (0x1fU & (IData)(
                                                         (vlSelf->io_instData 
                                                          >> 2U))))));
        tracep->chgBit(oldp+167,((0x100073U == (IData)(vlSelf->io_instData))));
        tracep->chgCData(oldp+168,((7U & (IData)((vlSelf->io_instData 
                                                  >> 0xcU)))),3);
        tracep->chgCData(oldp+169,((0x7fU & (IData)(
                                                    (vlSelf->io_instData 
                                                     >> 0x19U)))),7);
        tracep->chgCData(oldp+170,((0x1fU & (IData)(
                                                    (vlSelf->io_instData 
                                                     >> 2U)))),5);
        tracep->chgQData(oldp+171,(((1U & (IData)((vlSelf->io_instData 
                                                   >> 0x1fU)))
                                     ? 0x1ffffffffULL
                                     : 0ULL)),33);
    }
}

void VTop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VTop___024root* const __restrict vlSelf = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}

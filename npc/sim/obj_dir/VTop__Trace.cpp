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
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgQData(oldp+0,(vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+2,(vlSelf->Top__DOT__IFUInst_io_nextpc),64);
            tracep->chgIData(oldp+4,(vlSelf->Top__DOT__IFUInst_io_inst),32);
            tracep->chgQData(oldp+5,(vlSelf->Top__DOT__IFUInst__DOT__pc),64);
            tracep->chgCData(oldp+7,((0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                               >> 0xfU))),5);
            tracep->chgCData(oldp+8,((0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                               >> 0x14U))),5);
            tracep->chgCData(oldp+9,((0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                               >> 7U))),5);
            tracep->chgBit(oldp+10,(vlSelf->Top__DOT__IDUInst_io_wenReg));
            tracep->chgQData(oldp+11,(vlSelf->Top__DOT__IDUInst_io_imme),64);
            tracep->chgBit(oldp+13,((8U == (0x1fU & 
                                            (vlSelf->Top__DOT__IFUInst_io_inst 
                                             >> 2U)))));
            tracep->chgBit(oldp+14,(vlSelf->Top__DOT__IDUInst_io_renMem));
            tracep->chgCData(oldp+15,((3U & (vlSelf->Top__DOT__IFUInst_io_inst 
                                             >> 0xcU))),2);
            tracep->chgBit(oldp+16,((1U & (vlSelf->Top__DOT__IFUInst_io_inst 
                                           >> 0xeU))));
            tracep->chgBit(oldp+17,((0x1bU == (0x1fU 
                                               & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                  >> 2U)))));
            tracep->chgCData(oldp+18,(vlSelf->Top__DOT__IDUInst_io_alu_aluSel),3);
            tracep->chgBit(oldp+19,((0x18U == (0x1fU 
                                               & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                  >> 2U)))));
            tracep->chgBit(oldp+20,((5U == (0x1fU & 
                                            (vlSelf->Top__DOT__IFUInst_io_inst 
                                             >> 2U)))));
            tracep->chgBit(oldp+21,((1U & (~ (IData)(vlSelf->Top__DOT__IDUInst__DOT__typeR)))));
            tracep->chgBit(oldp+22,(vlSelf->Top__DOT__IDUInst_io_alu_typeBEqSel));
            tracep->chgBit(oldp+23,(vlSelf->Top__DOT__IDUInst_io_alu_jalrSel));
            tracep->chgBit(oldp+24,(vlSelf->Top__DOT__IDUInst_io_alu_subSel));
            tracep->chgBit(oldp+25,(vlSelf->Top__DOT__IDUInst_io_alu_geSel));
            tracep->chgBit(oldp+26,(vlSelf->Top__DOT__IDUInst_io_alu_unsignSel));
            tracep->chgBit(oldp+27,(vlSelf->Top__DOT__IDUInst_io_alu_neqSel));
            tracep->chgBit(oldp+28,(vlSelf->Top__DOT__IDUInst_io_alu_rightSel));
            tracep->chgBit(oldp+29,(vlSelf->Top__DOT__IDUInst_io_alu_arithSel));
            tracep->chgBit(oldp+30,(vlSelf->Top__DOT__IDUInst_io_alu_wordSel));
            tracep->chgQData(oldp+31,(vlSelf->Top__DOT__RegFilesInst_io_wData),64);
            tracep->chgQData(oldp+33,(vlSelf->Top__DOT__RegFilesInst_io_rs1Data),64);
            tracep->chgQData(oldp+35,(vlSelf->Top__DOT__RegFilesInst_io_rs2Data),64);
            tracep->chgQData(oldp+37,(vlSelf->Top__DOT__ALUInst_io_result),64);
            tracep->chgBit(oldp+39,(vlSelf->Top__DOT__ALUInst_io_nextpcSel));
            tracep->chgQData(oldp+40,(vlSelf->Top__DOT__MemCtrlInst_io_rData),64);
            tracep->chgQData(oldp+42,((4ULL + vlSelf->Top__DOT__IFUInst__DOT__pc)),64);
            tracep->chgQData(oldp+44,((0xfffffffffffffff8ULL 
                                       & vlSelf->Top__DOT__IFUInst__DOT__pc)),64);
            tracep->chgBit(oldp+46,((0x100073U == vlSelf->Top__DOT__IFUInst_io_inst)));
            tracep->chgCData(oldp+47,((7U & (vlSelf->Top__DOT__IFUInst_io_inst 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+48,((vlSelf->Top__DOT__IFUInst_io_inst 
                                       >> 0x19U)),7);
            tracep->chgCData(oldp+49,((0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                >> 2U))),5);
            tracep->chgBit(oldp+50,(vlSelf->Top__DOT__IDUInst__DOT__typeII));
            tracep->chgBit(oldp+51,(vlSelf->Top__DOT__IDUInst__DOT__typeIL));
            tracep->chgBit(oldp+52,(vlSelf->Top__DOT__IDUInst__DOT__typeR));
            tracep->chgBit(oldp+53,(vlSelf->Top__DOT__IDUInst__DOT__typeI));
            tracep->chgBit(oldp+54,(vlSelf->Top__DOT__IDUInst__DOT__typeU));
            tracep->chgQData(oldp+55,(((vlSelf->Top__DOT__IFUInst_io_inst 
                                        >> 0x1fU) ? 0x1ffffffffULL
                                        : 0ULL)),33);
            tracep->chgCData(oldp+57,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme2),8);
            tracep->chgBit(oldp+58,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme3));
            tracep->chgCData(oldp+59,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme4),6);
            tracep->chgCData(oldp+60,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme5),4);
            tracep->chgBit(oldp+61,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme6));
            tracep->chgSData(oldp+62,((0x7ffU & (IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0))),11);
            tracep->chgQData(oldp+63,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_0),64);
            tracep->chgQData(oldp+65,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_1),64);
            tracep->chgQData(oldp+67,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_2),64);
            tracep->chgQData(oldp+69,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_3),64);
            tracep->chgQData(oldp+71,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_4),64);
            tracep->chgQData(oldp+73,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_5),64);
            tracep->chgQData(oldp+75,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_6),64);
            tracep->chgQData(oldp+77,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_7),64);
            tracep->chgQData(oldp+79,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_8),64);
            tracep->chgQData(oldp+81,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_9),64);
            tracep->chgQData(oldp+83,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_10),64);
            tracep->chgQData(oldp+85,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_11),64);
            tracep->chgQData(oldp+87,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_12),64);
            tracep->chgQData(oldp+89,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_13),64);
            tracep->chgQData(oldp+91,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_14),64);
            tracep->chgQData(oldp+93,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_15),64);
            tracep->chgQData(oldp+95,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_16),64);
            tracep->chgQData(oldp+97,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_17),64);
            tracep->chgQData(oldp+99,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_18),64);
            tracep->chgQData(oldp+101,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_19),64);
            tracep->chgQData(oldp+103,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_20),64);
            tracep->chgQData(oldp+105,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_21),64);
            tracep->chgQData(oldp+107,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_22),64);
            tracep->chgQData(oldp+109,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_23),64);
            tracep->chgQData(oldp+111,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_24),64);
            tracep->chgQData(oldp+113,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_25),64);
            tracep->chgQData(oldp+115,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_26),64);
            tracep->chgQData(oldp+117,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_27),64);
            tracep->chgQData(oldp+119,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_28),64);
            tracep->chgQData(oldp+121,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_29),64);
            tracep->chgQData(oldp+123,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_30),64);
            tracep->chgQData(oldp+125,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_31),64);
            tracep->chgQData(oldp+127,(vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1),64);
            tracep->chgQData(oldp+129,(vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2),64);
            tracep->chgQData(oldp+131,(vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result),64);
            tracep->chgQData(oldp+133,(vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2),64);
            tracep->chgBit(oldp+135,(vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_result));
            tracep->chgQData(oldp+136,(vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2),64);
            tracep->chgQData(oldp+138,(vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result),64);
            tracep->chgQData(oldp+140,(vlSelf->Top__DOT__ALUInst__DOT__src2),64);
            tracep->chgQData(oldp+142,(vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2),64);
            tracep->chgQData(oldp+144,(vlSelf->Top__DOT__ALUInst__DOT__plusResult),64);
            tracep->chgQData(oldp+146,(vlSelf->Top__DOT__ALUInst__DOT__andResult),64);
            tracep->chgQData(oldp+148,(vlSelf->Top__DOT__ALUInst__DOT__orResult),64);
            tracep->chgQData(oldp+150,(vlSelf->Top__DOT__ALUInst__DOT__xorResult),64);
            tracep->chgBit(oldp+152,(vlSelf->Top__DOT__ALUInst__DOT__equalResultTmp));
            tracep->chgBit(oldp+153,(vlSelf->Top__DOT__ALUInst__DOT__equalResult));
            tracep->chgBit(oldp+154,(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__unsignResult));
            tracep->chgBit(oldp+155,(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__signedResult));
            tracep->chgBit(oldp+156,(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__lessResult));
            tracep->chgQData(oldp+157,(vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1),64);
            tracep->chgQData(oldp+159,((((QData)((IData)(
                                                         vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U])))),64);
            tracep->chgQData(oldp+161,((0xfffffffffffffff8ULL 
                                        & vlSelf->Top__DOT__ALUInst_io_result)),64);
            tracep->chgQData(oldp+163,(vlSymsp->TOP__Top__DOT__MemCtrlInst__DOT__MemInst_data.rData),64);
            tracep->chgQData(oldp+165,((((QData)((IData)(
                                                         vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U])))),64);
            tracep->chgCData(oldp+167,((0xffU & (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT___GEN_2))),8);
            tracep->chgCData(oldp+168,(vlSelf->Top__DOT__MemCtrlInst__DOT__dataByte),8);
            tracep->chgSData(oldp+169,(vlSelf->Top__DOT__MemCtrlInst__DOT__dataHalf),16);
            tracep->chgIData(oldp+170,(vlSelf->Top__DOT__MemCtrlInst__DOT__dataWord),32);
            tracep->chgQData(oldp+171,(vlSelf->Top__DOT__MemCtrlInst__DOT__dataDoub),64);
        }
        tracep->chgBit(oldp+173,(vlSelf->clock));
        tracep->chgBit(oldp+174,(vlSelf->reset));
        tracep->chgBit(oldp+175,(vlSelf->io_cpuEn));
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
    }
}

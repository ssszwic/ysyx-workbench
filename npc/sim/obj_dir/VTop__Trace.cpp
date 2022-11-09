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
            tracep->chgIData(oldp+2,(vlSelf->Top__DOT__IFUInst_io_inst),32);
            tracep->chgCData(oldp+3,((0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                               >> 0xfU))),5);
            tracep->chgCData(oldp+4,((0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                               >> 0x14U))),5);
            tracep->chgCData(oldp+5,((0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                               >> 7U))),5);
            tracep->chgBit(oldp+6,(vlSelf->Top__DOT__IDUInst_io_wenReg));
            tracep->chgQData(oldp+7,(vlSelf->Top__DOT__IDUInst_io_imme),64);
            tracep->chgBit(oldp+9,((8U == (0x1fU & 
                                           (vlSelf->Top__DOT__IFUInst_io_inst 
                                            >> 2U)))));
            tracep->chgBit(oldp+10,((0U == (0x1fU & 
                                            (vlSelf->Top__DOT__IFUInst_io_inst 
                                             >> 2U)))));
            tracep->chgCData(oldp+11,((3U & (vlSelf->Top__DOT__IFUInst_io_inst 
                                             >> 0xcU))),2);
            tracep->chgBit(oldp+12,((1U & (vlSelf->Top__DOT__IFUInst_io_inst 
                                           >> 0xeU))));
            tracep->chgBit(oldp+13,((0x1bU == (0x1fU 
                                               & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                  >> 2U)))));
            tracep->chgCData(oldp+14,(vlSelf->Top__DOT__IDUInst_io_alu_aluSel),3);
            tracep->chgBit(oldp+15,((0x18U == (0x1fU 
                                               & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                  >> 2U)))));
            tracep->chgBit(oldp+16,((5U == (0x1fU & 
                                            (vlSelf->Top__DOT__IFUInst_io_inst 
                                             >> 2U)))));
            tracep->chgBit(oldp+17,((1U & (~ (IData)(vlSelf->Top__DOT__IDUInst__DOT__typeR)))));
            tracep->chgBit(oldp+18,(vlSelf->Top__DOT__IDUInst_io_alu_typeBEqSel));
            tracep->chgBit(oldp+19,(vlSelf->Top__DOT__IDUInst_io_alu_jalrSel));
            tracep->chgBit(oldp+20,(vlSelf->Top__DOT__IDUInst_io_alu_subSel));
            tracep->chgBit(oldp+21,(vlSelf->Top__DOT__IDUInst_io_alu_geSel));
            tracep->chgBit(oldp+22,(vlSelf->Top__DOT__IDUInst_io_alu_unsignSel));
            tracep->chgBit(oldp+23,(vlSelf->Top__DOT__IDUInst_io_alu_neqSel));
            tracep->chgBit(oldp+24,(vlSelf->Top__DOT__IDUInst_io_alu_rightSel));
            tracep->chgBit(oldp+25,(vlSelf->Top__DOT__IDUInst_io_alu_arithSel));
            tracep->chgBit(oldp+26,(vlSelf->Top__DOT__IDUInst_io_alu_wordSel));
            tracep->chgQData(oldp+27,(vlSelf->Top__DOT__RegFilesInst_io_wData),64);
            tracep->chgQData(oldp+29,(vlSelf->Top__DOT__RegFilesInst_io_rs1Data),64);
            tracep->chgQData(oldp+31,(vlSelf->Top__DOT__RegFilesInst_io_rs2Data),64);
            tracep->chgQData(oldp+33,(vlSelf->Top__DOT__ALUInst_io_result),64);
            tracep->chgBit(oldp+35,(vlSelf->Top__DOT__ALUInst_io_nextpcSel));
            tracep->chgQData(oldp+36,(vlSelf->Top__DOT__MemCtrlInst_io_rData),64);
            tracep->chgQData(oldp+38,(vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData),64);
            tracep->chgBit(oldp+40,((0x100073U == vlSelf->Top__DOT__IFUInst_io_inst)));
            tracep->chgCData(oldp+41,((7U & (vlSelf->Top__DOT__IFUInst_io_inst 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+42,((vlSelf->Top__DOT__IFUInst_io_inst 
                                       >> 0x19U)),7);
            tracep->chgCData(oldp+43,((0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                >> 2U))),5);
            tracep->chgBit(oldp+44,(vlSelf->Top__DOT__IDUInst__DOT__typeII));
            tracep->chgBit(oldp+45,(vlSelf->Top__DOT__IDUInst__DOT__typeR));
            tracep->chgBit(oldp+46,(vlSelf->Top__DOT__IDUInst__DOT__typeI));
            tracep->chgBit(oldp+47,(vlSelf->Top__DOT__IDUInst__DOT__typeU));
            tracep->chgQData(oldp+48,(((vlSelf->Top__DOT__IFUInst_io_inst 
                                        >> 0x1fU) ? 0x1ffffffffULL
                                        : 0ULL)),33);
            tracep->chgCData(oldp+50,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme2),8);
            tracep->chgBit(oldp+51,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme3));
            tracep->chgCData(oldp+52,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme4),6);
            tracep->chgCData(oldp+53,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme5),4);
            tracep->chgBit(oldp+54,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme6));
            tracep->chgSData(oldp+55,((0x7ffU & (IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0))),11);
            tracep->chgQData(oldp+56,(vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1),64);
            tracep->chgQData(oldp+58,(vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2),64);
            tracep->chgQData(oldp+60,(vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result),64);
            tracep->chgQData(oldp+62,(vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2),64);
            tracep->chgBit(oldp+64,(vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_result));
            tracep->chgQData(oldp+65,(vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2),64);
            tracep->chgQData(oldp+67,(vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result),64);
            tracep->chgQData(oldp+69,(vlSelf->Top__DOT__ALUInst__DOT__src2),64);
            tracep->chgQData(oldp+71,(vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2),64);
            tracep->chgQData(oldp+73,(vlSelf->Top__DOT__ALUInst__DOT__plusResult),64);
            tracep->chgQData(oldp+75,(vlSelf->Top__DOT__ALUInst__DOT__andResult),64);
            tracep->chgQData(oldp+77,(vlSelf->Top__DOT__ALUInst__DOT__orResult),64);
            tracep->chgQData(oldp+79,(vlSelf->Top__DOT__ALUInst__DOT__xorResult),64);
            tracep->chgBit(oldp+81,(vlSelf->Top__DOT__ALUInst__DOT__equalResultTmp));
            tracep->chgBit(oldp+82,(vlSelf->Top__DOT__ALUInst__DOT__equalResult));
            tracep->chgBit(oldp+83,(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__unsignResult));
            tracep->chgBit(oldp+84,(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__signedResult));
            tracep->chgBit(oldp+85,(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__lessResult));
            tracep->chgQData(oldp+86,(vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1),64);
            tracep->chgQData(oldp+88,((((QData)((IData)(
                                                        vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U])))),64);
            tracep->chgQData(oldp+90,((0xfffffffffffffff8ULL 
                                       & vlSelf->Top__DOT__ALUInst_io_result)),64);
            tracep->chgQData(oldp+92,(vlSymsp->TOP__Top__DOT__MemCtrlInst__DOT__MemInst_data.rData),64);
            tracep->chgQData(oldp+94,((((QData)((IData)(
                                                        vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U])))),64);
            tracep->chgCData(oldp+96,((0xffU & (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT___GEN_2))),8);
            tracep->chgCData(oldp+97,(vlSelf->Top__DOT__MemCtrlInst__DOT__dataByte),8);
            tracep->chgSData(oldp+98,(vlSelf->Top__DOT__MemCtrlInst__DOT__dataHalf),16);
            tracep->chgIData(oldp+99,(vlSelf->Top__DOT__MemCtrlInst__DOT__dataWord),32);
            tracep->chgQData(oldp+100,(vlSelf->Top__DOT__MemCtrlInst__DOT__dataDoub),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+102,(vlSelf->Top__DOT__IFUInst__DOT__pc),64);
            tracep->chgQData(oldp+104,((4ULL + vlSelf->Top__DOT__IFUInst__DOT__pc)),64);
            tracep->chgQData(oldp+106,((0xfffffffffffffff8ULL 
                                        & vlSelf->Top__DOT__IFUInst__DOT__pc)),64);
            tracep->chgQData(oldp+108,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_0),64);
            tracep->chgQData(oldp+110,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_1),64);
            tracep->chgQData(oldp+112,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_2),64);
            tracep->chgQData(oldp+114,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_3),64);
            tracep->chgQData(oldp+116,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_4),64);
            tracep->chgQData(oldp+118,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_5),64);
            tracep->chgQData(oldp+120,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_6),64);
            tracep->chgQData(oldp+122,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_7),64);
            tracep->chgQData(oldp+124,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_8),64);
            tracep->chgQData(oldp+126,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_9),64);
            tracep->chgQData(oldp+128,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_10),64);
            tracep->chgQData(oldp+130,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_11),64);
            tracep->chgQData(oldp+132,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_12),64);
            tracep->chgQData(oldp+134,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_13),64);
            tracep->chgQData(oldp+136,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_14),64);
            tracep->chgQData(oldp+138,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_15),64);
            tracep->chgQData(oldp+140,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_16),64);
            tracep->chgQData(oldp+142,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_17),64);
            tracep->chgQData(oldp+144,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_18),64);
            tracep->chgQData(oldp+146,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_19),64);
            tracep->chgQData(oldp+148,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_20),64);
            tracep->chgQData(oldp+150,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_21),64);
            tracep->chgQData(oldp+152,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_22),64);
            tracep->chgQData(oldp+154,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_23),64);
            tracep->chgQData(oldp+156,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_24),64);
            tracep->chgQData(oldp+158,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_25),64);
            tracep->chgQData(oldp+160,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_26),64);
            tracep->chgQData(oldp+162,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_27),64);
            tracep->chgQData(oldp+164,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_28),64);
            tracep->chgQData(oldp+166,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_29),64);
            tracep->chgQData(oldp+168,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_30),64);
            tracep->chgQData(oldp+170,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_31),64);
        }
        tracep->chgBit(oldp+172,(vlSelf->clock));
        tracep->chgBit(oldp+173,(vlSelf->reset));
        tracep->chgBit(oldp+174,(vlSelf->io_cpuEn));
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

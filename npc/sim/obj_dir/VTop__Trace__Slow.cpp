// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


void VTop___024root__traceInitSub0(VTop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VTop___024root__traceInitTop(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VTop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VTop___024root__traceInitSub0(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+173,"clock", false,-1);
        tracep->declBit(c+174,"reset", false,-1);
        tracep->declBit(c+175,"io_cpuEn", false,-1);
        tracep->declBit(c+173,"Top clock", false,-1);
        tracep->declBit(c+174,"Top reset", false,-1);
        tracep->declBit(c+175,"Top io_cpuEn", false,-1);
        tracep->declBit(c+173,"Top IFUInst_clock", false,-1);
        tracep->declBit(c+174,"Top IFUInst_reset", false,-1);
        tracep->declQuad(c+1,"Top IFUInst_io_nextpc", false,-1, 63,0);
        tracep->declBit(c+175,"Top IFUInst_io_pcEn", false,-1);
        tracep->declBus(c+3,"Top IFUInst_io_inst", false,-1, 31,0);
        tracep->declQuad(c+4,"Top IFUInst_io_pc", false,-1, 63,0);
        tracep->declBus(c+3,"Top IDUInst_io_inst", false,-1, 31,0);
        tracep->declBus(c+6,"Top IDUInst_io_rs1Addr", false,-1, 4,0);
        tracep->declBus(c+7,"Top IDUInst_io_rs2Addr", false,-1, 4,0);
        tracep->declBus(c+8,"Top IDUInst_io_rdAddr", false,-1, 4,0);
        tracep->declBit(c+9,"Top IDUInst_io_wenReg", false,-1);
        tracep->declQuad(c+10,"Top IDUInst_io_imme", false,-1, 63,0);
        tracep->declBit(c+12,"Top IDUInst_io_wenMem", false,-1);
        tracep->declBit(c+13,"Top IDUInst_io_renMem", false,-1);
        tracep->declBus(c+14,"Top IDUInst_io_lengthMem", false,-1, 1,0);
        tracep->declBit(c+15,"Top IDUInst_io_unsignMem", false,-1);
        tracep->declBit(c+16,"Top IDUInst_io_jumpSel", false,-1);
        tracep->declBus(c+17,"Top IDUInst_io_alu_aluSel", false,-1, 2,0);
        tracep->declBit(c+18,"Top IDUInst_io_alu_typeBSel", false,-1);
        tracep->declBit(c+16,"Top IDUInst_io_alu_typeJSel", false,-1);
        tracep->declBit(c+19,"Top IDUInst_io_alu_aupicSel", false,-1);
        tracep->declBit(c+20,"Top IDUInst_io_alu_immeSel", false,-1);
        tracep->declBit(c+21,"Top IDUInst_io_alu_typeBEqSel", false,-1);
        tracep->declBit(c+22,"Top IDUInst_io_alu_jalrSel", false,-1);
        tracep->declBit(c+23,"Top IDUInst_io_alu_subSel", false,-1);
        tracep->declBit(c+24,"Top IDUInst_io_alu_geSel", false,-1);
        tracep->declBit(c+25,"Top IDUInst_io_alu_unsignSel", false,-1);
        tracep->declBit(c+26,"Top IDUInst_io_alu_neqSel", false,-1);
        tracep->declBit(c+27,"Top IDUInst_io_alu_rightSel", false,-1);
        tracep->declBit(c+28,"Top IDUInst_io_alu_arithSel", false,-1);
        tracep->declBit(c+29,"Top IDUInst_io_alu_wordSel", false,-1);
        tracep->declBit(c+173,"Top RegFilesInst_clock", false,-1);
        tracep->declBit(c+174,"Top RegFilesInst_reset", false,-1);
        tracep->declBus(c+6,"Top RegFilesInst_io_rs1Addr", false,-1, 4,0);
        tracep->declBus(c+7,"Top RegFilesInst_io_rs2Addr", false,-1, 4,0);
        tracep->declBit(c+9,"Top RegFilesInst_io_wen", false,-1);
        tracep->declBus(c+8,"Top RegFilesInst_io_wAddr", false,-1, 4,0);
        tracep->declQuad(c+30,"Top RegFilesInst_io_wData", false,-1, 63,0);
        tracep->declQuad(c+32,"Top RegFilesInst_io_rs1Data", false,-1, 63,0);
        tracep->declQuad(c+34,"Top RegFilesInst_io_rs2Data", false,-1, 63,0);
        tracep->declQuad(c+32,"Top ALUInst_io_rs1", false,-1, 63,0);
        tracep->declQuad(c+34,"Top ALUInst_io_rs2", false,-1, 63,0);
        tracep->declQuad(c+10,"Top ALUInst_io_imme", false,-1, 63,0);
        tracep->declQuad(c+4,"Top ALUInst_io_pc", false,-1, 63,0);
        tracep->declQuad(c+36,"Top ALUInst_io_result", false,-1, 63,0);
        tracep->declBit(c+38,"Top ALUInst_io_nextpcSel", false,-1);
        tracep->declBus(c+17,"Top ALUInst_io_alu_aluSel", false,-1, 2,0);
        tracep->declBit(c+18,"Top ALUInst_io_alu_typeBSel", false,-1);
        tracep->declBit(c+16,"Top ALUInst_io_alu_typeJSel", false,-1);
        tracep->declBit(c+19,"Top ALUInst_io_alu_aupicSel", false,-1);
        tracep->declBit(c+20,"Top ALUInst_io_alu_immeSel", false,-1);
        tracep->declBit(c+21,"Top ALUInst_io_alu_typeBEqSel", false,-1);
        tracep->declBit(c+22,"Top ALUInst_io_alu_jalrSel", false,-1);
        tracep->declBit(c+23,"Top ALUInst_io_alu_subSel", false,-1);
        tracep->declBit(c+24,"Top ALUInst_io_alu_geSel", false,-1);
        tracep->declBit(c+25,"Top ALUInst_io_alu_unsignSel", false,-1);
        tracep->declBit(c+26,"Top ALUInst_io_alu_neqSel", false,-1);
        tracep->declBit(c+27,"Top ALUInst_io_alu_rightSel", false,-1);
        tracep->declBit(c+28,"Top ALUInst_io_alu_arithSel", false,-1);
        tracep->declBit(c+29,"Top ALUInst_io_alu_wordSel", false,-1);
        tracep->declBit(c+13,"Top MemCtrlInst_io_ren", false,-1);
        tracep->declQuad(c+36,"Top MemCtrlInst_io_addr", false,-1, 63,0);
        tracep->declQuad(c+39,"Top MemCtrlInst_io_rData", false,-1, 63,0);
        tracep->declBit(c+12,"Top MemCtrlInst_io_wen", false,-1);
        tracep->declQuad(c+34,"Top MemCtrlInst_io_wData", false,-1, 63,0);
        tracep->declBus(c+14,"Top MemCtrlInst_io_length", false,-1, 1,0);
        tracep->declBit(c+15,"Top MemCtrlInst_io_unsign", false,-1);
        tracep->declQuad(c+41,"Top nextpcDefault", false,-1, 63,0);
        tracep->declBit(c+173,"Top IFUInst clock", false,-1);
        tracep->declBit(c+174,"Top IFUInst reset", false,-1);
        tracep->declQuad(c+1,"Top IFUInst io_nextpc", false,-1, 63,0);
        tracep->declBit(c+175,"Top IFUInst io_pcEn", false,-1);
        tracep->declBus(c+3,"Top IFUInst io_inst", false,-1, 31,0);
        tracep->declQuad(c+4,"Top IFUInst io_pc", false,-1, 63,0);
        tracep->declBit(c+176,"Top IFUInst MemVirtualInst_instr_ren", false,-1);
        tracep->declQuad(c+43,"Top IFUInst MemVirtualInst_instr_addr", false,-1, 63,0);
        tracep->declQuad(c+45,"Top IFUInst MemVirtualInst_instr_rData", false,-1, 63,0);
        tracep->declBit(c+177,"Top IFUInst MemVirtualInst_instr_wen", false,-1);
        tracep->declQuad(c+178,"Top IFUInst MemVirtualInst_instr_wData", false,-1, 63,0);
        tracep->declBus(c+180,"Top IFUInst MemVirtualInst_instr_wMask", false,-1, 7,0);
        tracep->declQuad(c+4,"Top IFUInst pc", false,-1, 63,0);
        tracep->declBus(c+3,"Top IDUInst io_inst", false,-1, 31,0);
        tracep->declBus(c+6,"Top IDUInst io_rs1Addr", false,-1, 4,0);
        tracep->declBus(c+7,"Top IDUInst io_rs2Addr", false,-1, 4,0);
        tracep->declBus(c+8,"Top IDUInst io_rdAddr", false,-1, 4,0);
        tracep->declBit(c+9,"Top IDUInst io_wenReg", false,-1);
        tracep->declQuad(c+10,"Top IDUInst io_imme", false,-1, 63,0);
        tracep->declBit(c+12,"Top IDUInst io_wenMem", false,-1);
        tracep->declBit(c+13,"Top IDUInst io_renMem", false,-1);
        tracep->declBus(c+14,"Top IDUInst io_lengthMem", false,-1, 1,0);
        tracep->declBit(c+15,"Top IDUInst io_unsignMem", false,-1);
        tracep->declBit(c+16,"Top IDUInst io_jumpSel", false,-1);
        tracep->declBus(c+17,"Top IDUInst io_alu_aluSel", false,-1, 2,0);
        tracep->declBit(c+18,"Top IDUInst io_alu_typeBSel", false,-1);
        tracep->declBit(c+16,"Top IDUInst io_alu_typeJSel", false,-1);
        tracep->declBit(c+19,"Top IDUInst io_alu_aupicSel", false,-1);
        tracep->declBit(c+20,"Top IDUInst io_alu_immeSel", false,-1);
        tracep->declBit(c+21,"Top IDUInst io_alu_typeBEqSel", false,-1);
        tracep->declBit(c+22,"Top IDUInst io_alu_jalrSel", false,-1);
        tracep->declBit(c+23,"Top IDUInst io_alu_subSel", false,-1);
        tracep->declBit(c+24,"Top IDUInst io_alu_geSel", false,-1);
        tracep->declBit(c+25,"Top IDUInst io_alu_unsignSel", false,-1);
        tracep->declBit(c+26,"Top IDUInst io_alu_neqSel", false,-1);
        tracep->declBit(c+27,"Top IDUInst io_alu_rightSel", false,-1);
        tracep->declBit(c+28,"Top IDUInst io_alu_arithSel", false,-1);
        tracep->declBit(c+29,"Top IDUInst io_alu_wordSel", false,-1);
        tracep->declBit(c+47,"Top IDUInst EbreakInst_ebreak", false,-1);
        tracep->declBus(c+48,"Top IDUInst funct3", false,-1, 2,0);
        tracep->declBus(c+49,"Top IDUInst funct7", false,-1, 6,0);
        tracep->declBus(c+50,"Top IDUInst op5", false,-1, 4,0);
        tracep->declBit(c+51,"Top IDUInst typeII", false,-1);
        tracep->declBit(c+13,"Top IDUInst typeIL", false,-1);
        tracep->declBit(c+16,"Top IDUInst typeIJ", false,-1);
        tracep->declBit(c+52,"Top IDUInst typeR", false,-1);
        tracep->declBit(c+53,"Top IDUInst typeI", false,-1);
        tracep->declBit(c+12,"Top IDUInst typeS", false,-1);
        tracep->declBit(c+18,"Top IDUInst typeB", false,-1);
        tracep->declBit(c+54,"Top IDUInst typeU", false,-1);
        tracep->declQuad(c+55,"Top IDUInst io_imme_imme0", false,-1, 32,0);
        tracep->declBus(c+57,"Top IDUInst io_imme_imme2", false,-1, 7,0);
        tracep->declBit(c+58,"Top IDUInst io_imme_imme3", false,-1);
        tracep->declBus(c+59,"Top IDUInst io_imme_imme4", false,-1, 5,0);
        tracep->declBus(c+60,"Top IDUInst io_imme_imme5", false,-1, 3,0);
        tracep->declBit(c+61,"Top IDUInst io_imme_imme6", false,-1);
        tracep->declBus(c+62,"Top IDUInst io_imme_imme1", false,-1, 10,0);
        tracep->declBit(c+47,"Top IDUInst EbreakInst ebreak", false,-1);
        tracep->declBit(c+173,"Top RegFilesInst clock", false,-1);
        tracep->declBit(c+174,"Top RegFilesInst reset", false,-1);
        tracep->declBus(c+6,"Top RegFilesInst io_rs1Addr", false,-1, 4,0);
        tracep->declBus(c+7,"Top RegFilesInst io_rs2Addr", false,-1, 4,0);
        tracep->declBit(c+9,"Top RegFilesInst io_wen", false,-1);
        tracep->declBus(c+8,"Top RegFilesInst io_wAddr", false,-1, 4,0);
        tracep->declQuad(c+30,"Top RegFilesInst io_wData", false,-1, 63,0);
        tracep->declQuad(c+32,"Top RegFilesInst io_rs1Data", false,-1, 63,0);
        tracep->declQuad(c+34,"Top RegFilesInst io_rs2Data", false,-1, 63,0);
        tracep->declQuad(c+63,"Top RegFilesInst regFiles_0", false,-1, 63,0);
        tracep->declQuad(c+65,"Top RegFilesInst regFiles_1", false,-1, 63,0);
        tracep->declQuad(c+67,"Top RegFilesInst regFiles_2", false,-1, 63,0);
        tracep->declQuad(c+69,"Top RegFilesInst regFiles_3", false,-1, 63,0);
        tracep->declQuad(c+71,"Top RegFilesInst regFiles_4", false,-1, 63,0);
        tracep->declQuad(c+73,"Top RegFilesInst regFiles_5", false,-1, 63,0);
        tracep->declQuad(c+75,"Top RegFilesInst regFiles_6", false,-1, 63,0);
        tracep->declQuad(c+77,"Top RegFilesInst regFiles_7", false,-1, 63,0);
        tracep->declQuad(c+79,"Top RegFilesInst regFiles_8", false,-1, 63,0);
        tracep->declQuad(c+81,"Top RegFilesInst regFiles_9", false,-1, 63,0);
        tracep->declQuad(c+83,"Top RegFilesInst regFiles_10", false,-1, 63,0);
        tracep->declQuad(c+85,"Top RegFilesInst regFiles_11", false,-1, 63,0);
        tracep->declQuad(c+87,"Top RegFilesInst regFiles_12", false,-1, 63,0);
        tracep->declQuad(c+89,"Top RegFilesInst regFiles_13", false,-1, 63,0);
        tracep->declQuad(c+91,"Top RegFilesInst regFiles_14", false,-1, 63,0);
        tracep->declQuad(c+93,"Top RegFilesInst regFiles_15", false,-1, 63,0);
        tracep->declQuad(c+95,"Top RegFilesInst regFiles_16", false,-1, 63,0);
        tracep->declQuad(c+97,"Top RegFilesInst regFiles_17", false,-1, 63,0);
        tracep->declQuad(c+99,"Top RegFilesInst regFiles_18", false,-1, 63,0);
        tracep->declQuad(c+101,"Top RegFilesInst regFiles_19", false,-1, 63,0);
        tracep->declQuad(c+103,"Top RegFilesInst regFiles_20", false,-1, 63,0);
        tracep->declQuad(c+105,"Top RegFilesInst regFiles_21", false,-1, 63,0);
        tracep->declQuad(c+107,"Top RegFilesInst regFiles_22", false,-1, 63,0);
        tracep->declQuad(c+109,"Top RegFilesInst regFiles_23", false,-1, 63,0);
        tracep->declQuad(c+111,"Top RegFilesInst regFiles_24", false,-1, 63,0);
        tracep->declQuad(c+113,"Top RegFilesInst regFiles_25", false,-1, 63,0);
        tracep->declQuad(c+115,"Top RegFilesInst regFiles_26", false,-1, 63,0);
        tracep->declQuad(c+117,"Top RegFilesInst regFiles_27", false,-1, 63,0);
        tracep->declQuad(c+119,"Top RegFilesInst regFiles_28", false,-1, 63,0);
        tracep->declQuad(c+121,"Top RegFilesInst regFiles_29", false,-1, 63,0);
        tracep->declQuad(c+123,"Top RegFilesInst regFiles_30", false,-1, 63,0);
        tracep->declQuad(c+125,"Top RegFilesInst regFiles_31", false,-1, 63,0);
        tracep->declQuad(c+32,"Top ALUInst io_rs1", false,-1, 63,0);
        tracep->declQuad(c+34,"Top ALUInst io_rs2", false,-1, 63,0);
        tracep->declQuad(c+10,"Top ALUInst io_imme", false,-1, 63,0);
        tracep->declQuad(c+4,"Top ALUInst io_pc", false,-1, 63,0);
        tracep->declQuad(c+36,"Top ALUInst io_result", false,-1, 63,0);
        tracep->declBit(c+38,"Top ALUInst io_nextpcSel", false,-1);
        tracep->declBus(c+17,"Top ALUInst io_alu_aluSel", false,-1, 2,0);
        tracep->declBit(c+18,"Top ALUInst io_alu_typeBSel", false,-1);
        tracep->declBit(c+16,"Top ALUInst io_alu_typeJSel", false,-1);
        tracep->declBit(c+19,"Top ALUInst io_alu_aupicSel", false,-1);
        tracep->declBit(c+20,"Top ALUInst io_alu_immeSel", false,-1);
        tracep->declBit(c+21,"Top ALUInst io_alu_typeBEqSel", false,-1);
        tracep->declBit(c+22,"Top ALUInst io_alu_jalrSel", false,-1);
        tracep->declBit(c+23,"Top ALUInst io_alu_subSel", false,-1);
        tracep->declBit(c+24,"Top ALUInst io_alu_geSel", false,-1);
        tracep->declBit(c+25,"Top ALUInst io_alu_unsignSel", false,-1);
        tracep->declBit(c+26,"Top ALUInst io_alu_neqSel", false,-1);
        tracep->declBit(c+27,"Top ALUInst io_alu_rightSel", false,-1);
        tracep->declBit(c+28,"Top ALUInst io_alu_arithSel", false,-1);
        tracep->declBit(c+29,"Top ALUInst io_alu_wordSel", false,-1);
        tracep->declQuad(c+127,"Top ALUInst plusInst_io_data1", false,-1, 63,0);
        tracep->declQuad(c+129,"Top ALUInst plusInst_io_data2", false,-1, 63,0);
        tracep->declQuad(c+131,"Top ALUInst plusInst_io_result", false,-1, 63,0);
        tracep->declBit(c+24,"Top ALUInst lessInst_io_geSel", false,-1);
        tracep->declBit(c+25,"Top ALUInst lessInst_io_unsignSel", false,-1);
        tracep->declQuad(c+32,"Top ALUInst lessInst_io_data1", false,-1, 63,0);
        tracep->declQuad(c+133,"Top ALUInst lessInst_io_data2", false,-1, 63,0);
        tracep->declBit(c+135,"Top ALUInst lessInst_io_result", false,-1);
        tracep->declBit(c+27,"Top ALUInst shiftInst_io_rightSel", false,-1);
        tracep->declBit(c+28,"Top ALUInst shiftInst_io_arithSel", false,-1);
        tracep->declBit(c+29,"Top ALUInst shiftInst_io_wordSel", false,-1);
        tracep->declQuad(c+32,"Top ALUInst shiftInst_io_data1", false,-1, 63,0);
        tracep->declQuad(c+136,"Top ALUInst shiftInst_io_data2", false,-1, 63,0);
        tracep->declQuad(c+138,"Top ALUInst shiftInst_io_result", false,-1, 63,0);
        tracep->declQuad(c+140,"Top ALUInst src2", false,-1, 63,0);
        tracep->declQuad(c+131,"Top ALUInst plusResultTmp1", false,-1, 63,0);
        tracep->declQuad(c+142,"Top ALUInst plusResultTmp2", false,-1, 63,0);
        tracep->declQuad(c+144,"Top ALUInst plusResult", false,-1, 63,0);
        tracep->declQuad(c+146,"Top ALUInst andResult", false,-1, 63,0);
        tracep->declQuad(c+148,"Top ALUInst orResult", false,-1, 63,0);
        tracep->declQuad(c+150,"Top ALUInst xorResult", false,-1, 63,0);
        tracep->declBit(c+152,"Top ALUInst equalResultTmp", false,-1);
        tracep->declBit(c+153,"Top ALUInst equalResult", false,-1);
        tracep->declBit(c+135,"Top ALUInst lessResult", false,-1);
        tracep->declQuad(c+138,"Top ALUInst shiftResult", false,-1, 63,0);
        tracep->declQuad(c+127,"Top ALUInst plusInst io_data1", false,-1, 63,0);
        tracep->declQuad(c+129,"Top ALUInst plusInst io_data2", false,-1, 63,0);
        tracep->declQuad(c+131,"Top ALUInst plusInst io_result", false,-1, 63,0);
        tracep->declBit(c+24,"Top ALUInst lessInst io_geSel", false,-1);
        tracep->declBit(c+25,"Top ALUInst lessInst io_unsignSel", false,-1);
        tracep->declQuad(c+32,"Top ALUInst lessInst io_data1", false,-1, 63,0);
        tracep->declQuad(c+133,"Top ALUInst lessInst io_data2", false,-1, 63,0);
        tracep->declBit(c+135,"Top ALUInst lessInst io_result", false,-1);
        tracep->declBit(c+154,"Top ALUInst lessInst unsignResult", false,-1);
        tracep->declBit(c+155,"Top ALUInst lessInst signedResult", false,-1);
        tracep->declBit(c+156,"Top ALUInst lessInst lessResult", false,-1);
        tracep->declBit(c+27,"Top ALUInst shiftInst io_rightSel", false,-1);
        tracep->declBit(c+28,"Top ALUInst shiftInst io_arithSel", false,-1);
        tracep->declBit(c+29,"Top ALUInst shiftInst io_wordSel", false,-1);
        tracep->declQuad(c+32,"Top ALUInst shiftInst io_data1", false,-1, 63,0);
        tracep->declQuad(c+136,"Top ALUInst shiftInst io_data2", false,-1, 63,0);
        tracep->declQuad(c+138,"Top ALUInst shiftInst io_result", false,-1, 63,0);
        tracep->declQuad(c+157,"Top ALUInst shiftInst data1", false,-1, 63,0);
        tracep->declQuad(c+159,"Top ALUInst shiftInst result", false,-1, 63,0);
        tracep->declBit(c+13,"Top MemCtrlInst io_ren", false,-1);
        tracep->declQuad(c+36,"Top MemCtrlInst io_addr", false,-1, 63,0);
        tracep->declQuad(c+39,"Top MemCtrlInst io_rData", false,-1, 63,0);
        tracep->declBit(c+12,"Top MemCtrlInst io_wen", false,-1);
        tracep->declQuad(c+34,"Top MemCtrlInst io_wData", false,-1, 63,0);
        tracep->declBus(c+14,"Top MemCtrlInst io_length", false,-1, 1,0);
        tracep->declBit(c+15,"Top MemCtrlInst io_unsign", false,-1);
        tracep->declBit(c+13,"Top MemCtrlInst MemInst_data_ren", false,-1);
        tracep->declQuad(c+161,"Top MemCtrlInst MemInst_data_addr", false,-1, 63,0);
        tracep->declQuad(c+163,"Top MemCtrlInst MemInst_data_rData", false,-1, 63,0);
        tracep->declBit(c+12,"Top MemCtrlInst MemInst_data_wen", false,-1);
        tracep->declQuad(c+165,"Top MemCtrlInst MemInst_data_wData", false,-1, 63,0);
        tracep->declBus(c+167,"Top MemCtrlInst MemInst_data_wMask", false,-1, 7,0);
        tracep->declBus(c+167,"Top MemCtrlInst mask", false,-1, 7,0);
        tracep->declBus(c+168,"Top MemCtrlInst dataByte", false,-1, 7,0);
        tracep->declBus(c+169,"Top MemCtrlInst dataHalf", false,-1, 15,0);
        tracep->declBus(c+170,"Top MemCtrlInst dataWord", false,-1, 31,0);
        tracep->declQuad(c+171,"Top MemCtrlInst dataDoub", false,-1, 63,0);
        tracep->declBit(c+176,"Top IFUInst MemVirtualInst_instr ren", false,-1);
        tracep->declQuad(c+43,"Top IFUInst MemVirtualInst_instr addr", false,-1, 63,0);
        tracep->declQuad(c+45,"Top IFUInst MemVirtualInst_instr rData", false,-1, 63,0);
        tracep->declBit(c+177,"Top IFUInst MemVirtualInst_instr wen", false,-1);
        tracep->declBus(c+180,"Top IFUInst MemVirtualInst_instr wMask", false,-1, 7,0);
        tracep->declQuad(c+178,"Top IFUInst MemVirtualInst_instr wData", false,-1, 63,0);
        tracep->declBit(c+13,"Top MemCtrlInst MemInst_data ren", false,-1);
        tracep->declQuad(c+161,"Top MemCtrlInst MemInst_data addr", false,-1, 63,0);
        tracep->declQuad(c+163,"Top MemCtrlInst MemInst_data rData", false,-1, 63,0);
        tracep->declBit(c+12,"Top MemCtrlInst MemInst_data wen", false,-1);
        tracep->declBus(c+167,"Top MemCtrlInst MemInst_data wMask", false,-1, 7,0);
        tracep->declQuad(c+165,"Top MemCtrlInst MemInst_data wData", false,-1, 63,0);
    }
}

void VTop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VTop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VTop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VTop___024root__traceRegister(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VTop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VTop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VTop___024root__traceCleanup, vlSelf);
    }
}

void VTop___024root__traceFullSub0(VTop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VTop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VTop___024root* const __restrict vlSelf = static_cast<VTop___024root*>(voidSelf);
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VTop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VTop___024root__traceFullSub0(VTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->Top__DOT__IFUInst_io_nextpc),64);
        tracep->fullIData(oldp+3,(vlSelf->Top__DOT__IFUInst_io_inst),32);
        tracep->fullQData(oldp+4,(vlSelf->Top__DOT__IFUInst__DOT__pc),64);
        tracep->fullCData(oldp+6,((0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                            >> 0xfU))),5);
        tracep->fullCData(oldp+7,((0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                            >> 0x14U))),5);
        tracep->fullCData(oldp+8,((0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                            >> 7U))),5);
        tracep->fullBit(oldp+9,(vlSelf->Top__DOT__IDUInst_io_wenReg));
        tracep->fullQData(oldp+10,(vlSelf->Top__DOT__IDUInst_io_imme),64);
        tracep->fullBit(oldp+12,((8U == (0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                  >> 2U)))));
        tracep->fullBit(oldp+13,((0U == (0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                  >> 2U)))));
        tracep->fullCData(oldp+14,((3U & (vlSelf->Top__DOT__IFUInst_io_inst 
                                          >> 0xcU))),2);
        tracep->fullBit(oldp+15,((1U & (vlSelf->Top__DOT__IFUInst_io_inst 
                                        >> 0xeU))));
        tracep->fullBit(oldp+16,((0x1bU == (0x1fU & 
                                            (vlSelf->Top__DOT__IFUInst_io_inst 
                                             >> 2U)))));
        tracep->fullCData(oldp+17,(vlSelf->Top__DOT__IDUInst_io_alu_aluSel),3);
        tracep->fullBit(oldp+18,((0x18U == (0x1fU & 
                                            (vlSelf->Top__DOT__IFUInst_io_inst 
                                             >> 2U)))));
        tracep->fullBit(oldp+19,((5U == (0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                  >> 2U)))));
        tracep->fullBit(oldp+20,((1U & (~ (IData)(vlSelf->Top__DOT__IDUInst__DOT__typeR)))));
        tracep->fullBit(oldp+21,(vlSelf->Top__DOT__IDUInst_io_alu_typeBEqSel));
        tracep->fullBit(oldp+22,(vlSelf->Top__DOT__IDUInst_io_alu_jalrSel));
        tracep->fullBit(oldp+23,(vlSelf->Top__DOT__IDUInst_io_alu_subSel));
        tracep->fullBit(oldp+24,(vlSelf->Top__DOT__IDUInst_io_alu_geSel));
        tracep->fullBit(oldp+25,(vlSelf->Top__DOT__IDUInst_io_alu_unsignSel));
        tracep->fullBit(oldp+26,(vlSelf->Top__DOT__IDUInst_io_alu_neqSel));
        tracep->fullBit(oldp+27,(vlSelf->Top__DOT__IDUInst_io_alu_rightSel));
        tracep->fullBit(oldp+28,(vlSelf->Top__DOT__IDUInst_io_alu_arithSel));
        tracep->fullBit(oldp+29,(vlSelf->Top__DOT__IDUInst_io_alu_wordSel));
        tracep->fullQData(oldp+30,(vlSelf->Top__DOT__RegFilesInst_io_wData),64);
        tracep->fullQData(oldp+32,(vlSelf->Top__DOT__RegFilesInst_io_rs1Data),64);
        tracep->fullQData(oldp+34,(vlSelf->Top__DOT__RegFilesInst_io_rs2Data),64);
        tracep->fullQData(oldp+36,(vlSelf->Top__DOT__ALUInst_io_result),64);
        tracep->fullBit(oldp+38,(vlSelf->Top__DOT__ALUInst_io_nextpcSel));
        tracep->fullQData(oldp+39,(vlSelf->Top__DOT__MemCtrlInst_io_rData),64);
        tracep->fullQData(oldp+41,((4ULL + vlSelf->Top__DOT__IFUInst__DOT__pc)),64);
        tracep->fullQData(oldp+43,((0xfffffffffffffff8ULL 
                                    & vlSelf->Top__DOT__IFUInst__DOT__pc)),64);
        tracep->fullQData(oldp+45,(vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData),64);
        tracep->fullBit(oldp+47,((0x100073U == vlSelf->Top__DOT__IFUInst_io_inst)));
        tracep->fullCData(oldp+48,((7U & (vlSelf->Top__DOT__IFUInst_io_inst 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+49,((vlSelf->Top__DOT__IFUInst_io_inst 
                                    >> 0x19U)),7);
        tracep->fullCData(oldp+50,((0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                             >> 2U))),5);
        tracep->fullBit(oldp+51,(vlSelf->Top__DOT__IDUInst__DOT__typeII));
        tracep->fullBit(oldp+52,(vlSelf->Top__DOT__IDUInst__DOT__typeR));
        tracep->fullBit(oldp+53,(vlSelf->Top__DOT__IDUInst__DOT__typeI));
        tracep->fullBit(oldp+54,(vlSelf->Top__DOT__IDUInst__DOT__typeU));
        tracep->fullQData(oldp+55,(((vlSelf->Top__DOT__IFUInst_io_inst 
                                     >> 0x1fU) ? 0x1ffffffffULL
                                     : 0ULL)),33);
        tracep->fullCData(oldp+57,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme2),8);
        tracep->fullBit(oldp+58,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme3));
        tracep->fullCData(oldp+59,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme4),6);
        tracep->fullCData(oldp+60,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme5),4);
        tracep->fullBit(oldp+61,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme6));
        tracep->fullSData(oldp+62,((0x7ffU & (IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0))),11);
        tracep->fullQData(oldp+63,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_0),64);
        tracep->fullQData(oldp+65,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_1),64);
        tracep->fullQData(oldp+67,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_2),64);
        tracep->fullQData(oldp+69,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_3),64);
        tracep->fullQData(oldp+71,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_4),64);
        tracep->fullQData(oldp+73,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_5),64);
        tracep->fullQData(oldp+75,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_6),64);
        tracep->fullQData(oldp+77,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_7),64);
        tracep->fullQData(oldp+79,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_8),64);
        tracep->fullQData(oldp+81,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_9),64);
        tracep->fullQData(oldp+83,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_10),64);
        tracep->fullQData(oldp+85,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_11),64);
        tracep->fullQData(oldp+87,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_12),64);
        tracep->fullQData(oldp+89,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_13),64);
        tracep->fullQData(oldp+91,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_14),64);
        tracep->fullQData(oldp+93,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_15),64);
        tracep->fullQData(oldp+95,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_16),64);
        tracep->fullQData(oldp+97,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_17),64);
        tracep->fullQData(oldp+99,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_18),64);
        tracep->fullQData(oldp+101,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_19),64);
        tracep->fullQData(oldp+103,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_20),64);
        tracep->fullQData(oldp+105,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_21),64);
        tracep->fullQData(oldp+107,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_22),64);
        tracep->fullQData(oldp+109,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_23),64);
        tracep->fullQData(oldp+111,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_24),64);
        tracep->fullQData(oldp+113,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_25),64);
        tracep->fullQData(oldp+115,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_26),64);
        tracep->fullQData(oldp+117,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_27),64);
        tracep->fullQData(oldp+119,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_28),64);
        tracep->fullQData(oldp+121,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_29),64);
        tracep->fullQData(oldp+123,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_30),64);
        tracep->fullQData(oldp+125,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_31),64);
        tracep->fullQData(oldp+127,(vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1),64);
        tracep->fullQData(oldp+129,(vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2),64);
        tracep->fullQData(oldp+131,(vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result),64);
        tracep->fullQData(oldp+133,(vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2),64);
        tracep->fullBit(oldp+135,(vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_result));
        tracep->fullQData(oldp+136,(vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2),64);
        tracep->fullQData(oldp+138,(vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result),64);
        tracep->fullQData(oldp+140,(vlSelf->Top__DOT__ALUInst__DOT__src2),64);
        tracep->fullQData(oldp+142,(vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2),64);
        tracep->fullQData(oldp+144,(vlSelf->Top__DOT__ALUInst__DOT__plusResult),64);
        tracep->fullQData(oldp+146,(vlSelf->Top__DOT__ALUInst__DOT__andResult),64);
        tracep->fullQData(oldp+148,(vlSelf->Top__DOT__ALUInst__DOT__orResult),64);
        tracep->fullQData(oldp+150,(vlSelf->Top__DOT__ALUInst__DOT__xorResult),64);
        tracep->fullBit(oldp+152,(vlSelf->Top__DOT__ALUInst__DOT__equalResultTmp));
        tracep->fullBit(oldp+153,(vlSelf->Top__DOT__ALUInst__DOT__equalResult));
        tracep->fullBit(oldp+154,(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__unsignResult));
        tracep->fullBit(oldp+155,(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__signedResult));
        tracep->fullBit(oldp+156,(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__lessResult));
        tracep->fullQData(oldp+157,(vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1),64);
        tracep->fullQData(oldp+159,((((QData)((IData)(
                                                      vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U])))),64);
        tracep->fullQData(oldp+161,((0xfffffffffffffff8ULL 
                                     & vlSelf->Top__DOT__ALUInst_io_result)),64);
        tracep->fullQData(oldp+163,(vlSymsp->TOP__Top__DOT__MemCtrlInst__DOT__MemInst_data.rData),64);
        tracep->fullQData(oldp+165,((((QData)((IData)(
                                                      vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U])))),64);
        tracep->fullCData(oldp+167,((0xffU & (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT___GEN_2))),8);
        tracep->fullCData(oldp+168,(vlSelf->Top__DOT__MemCtrlInst__DOT__dataByte),8);
        tracep->fullSData(oldp+169,(vlSelf->Top__DOT__MemCtrlInst__DOT__dataHalf),16);
        tracep->fullIData(oldp+170,(vlSelf->Top__DOT__MemCtrlInst__DOT__dataWord),32);
        tracep->fullQData(oldp+171,(vlSelf->Top__DOT__MemCtrlInst__DOT__dataDoub),64);
        tracep->fullBit(oldp+173,(vlSelf->clock));
        tracep->fullBit(oldp+174,(vlSelf->reset));
        tracep->fullBit(oldp+175,(vlSelf->io_cpuEn));
        tracep->fullBit(oldp+176,(1U));
        tracep->fullBit(oldp+177,(0U));
        tracep->fullQData(oldp+178,(0ULL),64);
        tracep->fullCData(oldp+180,(0U),8);
    }
}

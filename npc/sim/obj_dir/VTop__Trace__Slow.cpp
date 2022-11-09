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
        tracep->declBit(c+139,"clock", false,-1);
        tracep->declBit(c+140,"reset", false,-1);
        tracep->declBit(c+141,"io_cpuEn", false,-1);
        tracep->declQuad(c+142,"io_instData", false,-1, 63,0);
        tracep->declQuad(c+144,"io_instAddr", false,-1, 63,0);
        tracep->declQuad(c+146,"io_rData", false,-1, 63,0);
        tracep->declQuad(c+148,"io_rAddr", false,-1, 63,0);
        tracep->declQuad(c+150,"io_wData", false,-1, 63,0);
        tracep->declQuad(c+152,"io_wAddr", false,-1, 63,0);
        tracep->declBit(c+154,"io_wen", false,-1);
        tracep->declBit(c+155,"io_ren", false,-1);
        tracep->declBus(c+156,"io_length", false,-1, 1,0);
        tracep->declBit(c+139,"Top clock", false,-1);
        tracep->declBit(c+140,"Top reset", false,-1);
        tracep->declBit(c+141,"Top io_cpuEn", false,-1);
        tracep->declQuad(c+142,"Top io_instData", false,-1, 63,0);
        tracep->declQuad(c+144,"Top io_instAddr", false,-1, 63,0);
        tracep->declQuad(c+146,"Top io_rData", false,-1, 63,0);
        tracep->declQuad(c+148,"Top io_rAddr", false,-1, 63,0);
        tracep->declQuad(c+150,"Top io_wData", false,-1, 63,0);
        tracep->declQuad(c+152,"Top io_wAddr", false,-1, 63,0);
        tracep->declBit(c+154,"Top io_wen", false,-1);
        tracep->declBit(c+155,"Top io_ren", false,-1);
        tracep->declBus(c+156,"Top io_length", false,-1, 1,0);
        tracep->declBit(c+139,"Top IFUInst_clock", false,-1);
        tracep->declBit(c+140,"Top IFUInst_reset", false,-1);
        tracep->declQuad(c+1,"Top IFUInst_io_nextpc", false,-1, 63,0);
        tracep->declBus(c+157,"Top IFUInst_io_instGet", false,-1, 31,0);
        tracep->declQuad(c+71,"Top IFUInst_io_pc", false,-1, 63,0);
        tracep->declBit(c+141,"Top IFUInst_io_pcEn", false,-1);
        tracep->declBus(c+157,"Top IFUInst_io_inst", false,-1, 31,0);
        tracep->declBus(c+157,"Top IDUInst_io_inst", false,-1, 31,0);
        tracep->declBus(c+158,"Top IDUInst_io_rs1Addr", false,-1, 4,0);
        tracep->declBus(c+159,"Top IDUInst_io_rs2Addr", false,-1, 4,0);
        tracep->declBus(c+160,"Top IDUInst_io_rdAddr", false,-1, 4,0);
        tracep->declBit(c+3,"Top IDUInst_io_wenReg", false,-1);
        tracep->declQuad(c+4,"Top IDUInst_io_imme", false,-1, 63,0);
        tracep->declBit(c+161,"Top IDUInst_io_wenMem", false,-1);
        tracep->declBit(c+162,"Top IDUInst_io_renMem", false,-1);
        tracep->declBus(c+163,"Top IDUInst_io_lengthMem", false,-1, 1,0);
        tracep->declBit(c+164,"Top IDUInst_io_unsignMem", false,-1);
        tracep->declBit(c+165,"Top IDUInst_io_jumpSel", false,-1);
        tracep->declBus(c+6,"Top IDUInst_io_alu_aluSel", false,-1, 2,0);
        tracep->declBit(c+166,"Top IDUInst_io_alu_typeBSel", false,-1);
        tracep->declBit(c+165,"Top IDUInst_io_alu_typeJSel", false,-1);
        tracep->declBit(c+167,"Top IDUInst_io_alu_aupicSel", false,-1);
        tracep->declBit(c+7,"Top IDUInst_io_alu_immeSel", false,-1);
        tracep->declBit(c+8,"Top IDUInst_io_alu_typeBEqSel", false,-1);
        tracep->declBit(c+9,"Top IDUInst_io_alu_jalrSel", false,-1);
        tracep->declBit(c+10,"Top IDUInst_io_alu_subSel", false,-1);
        tracep->declBit(c+11,"Top IDUInst_io_alu_geSel", false,-1);
        tracep->declBit(c+12,"Top IDUInst_io_alu_unsignSel", false,-1);
        tracep->declBit(c+13,"Top IDUInst_io_alu_neqSel", false,-1);
        tracep->declBit(c+14,"Top IDUInst_io_alu_rightSel", false,-1);
        tracep->declBit(c+15,"Top IDUInst_io_alu_arithSel", false,-1);
        tracep->declBit(c+16,"Top IDUInst_io_alu_wordSel", false,-1);
        tracep->declBit(c+139,"Top RegFilesInst_clock", false,-1);
        tracep->declBit(c+140,"Top RegFilesInst_reset", false,-1);
        tracep->declBus(c+158,"Top RegFilesInst_io_rs1Addr", false,-1, 4,0);
        tracep->declBus(c+159,"Top RegFilesInst_io_rs2Addr", false,-1, 4,0);
        tracep->declBit(c+3,"Top RegFilesInst_io_wen", false,-1);
        tracep->declBus(c+160,"Top RegFilesInst_io_wAddr", false,-1, 4,0);
        tracep->declQuad(c+17,"Top RegFilesInst_io_wData", false,-1, 63,0);
        tracep->declQuad(c+19,"Top RegFilesInst_io_rs1Data", false,-1, 63,0);
        tracep->declQuad(c+21,"Top RegFilesInst_io_rs2Data", false,-1, 63,0);
        tracep->declQuad(c+19,"Top ALUInst_io_rs1", false,-1, 63,0);
        tracep->declQuad(c+21,"Top ALUInst_io_rs2", false,-1, 63,0);
        tracep->declQuad(c+4,"Top ALUInst_io_imme", false,-1, 63,0);
        tracep->declQuad(c+71,"Top ALUInst_io_pc", false,-1, 63,0);
        tracep->declQuad(c+23,"Top ALUInst_io_result", false,-1, 63,0);
        tracep->declBit(c+25,"Top ALUInst_io_nextpcSel", false,-1);
        tracep->declBus(c+6,"Top ALUInst_io_alu_aluSel", false,-1, 2,0);
        tracep->declBit(c+166,"Top ALUInst_io_alu_typeBSel", false,-1);
        tracep->declBit(c+165,"Top ALUInst_io_alu_typeJSel", false,-1);
        tracep->declBit(c+167,"Top ALUInst_io_alu_aupicSel", false,-1);
        tracep->declBit(c+7,"Top ALUInst_io_alu_immeSel", false,-1);
        tracep->declBit(c+8,"Top ALUInst_io_alu_typeBEqSel", false,-1);
        tracep->declBit(c+9,"Top ALUInst_io_alu_jalrSel", false,-1);
        tracep->declBit(c+10,"Top ALUInst_io_alu_subSel", false,-1);
        tracep->declBit(c+11,"Top ALUInst_io_alu_geSel", false,-1);
        tracep->declBit(c+12,"Top ALUInst_io_alu_unsignSel", false,-1);
        tracep->declBit(c+13,"Top ALUInst_io_alu_neqSel", false,-1);
        tracep->declBit(c+14,"Top ALUInst_io_alu_rightSel", false,-1);
        tracep->declBit(c+15,"Top ALUInst_io_alu_arithSel", false,-1);
        tracep->declBit(c+16,"Top ALUInst_io_alu_wordSel", false,-1);
        tracep->declBus(c+163,"Top MemExtendsInst_io_lengthMem", false,-1, 1,0);
        tracep->declBit(c+164,"Top MemExtendsInst_io_unsignMem", false,-1);
        tracep->declQuad(c+146,"Top MemExtendsInst_io_data", false,-1, 63,0);
        tracep->declQuad(c+26,"Top MemExtendsInst_io_result", false,-1, 63,0);
        tracep->declQuad(c+73,"Top nextpcDefault", false,-1, 63,0);
        tracep->declBit(c+139,"Top IFUInst clock", false,-1);
        tracep->declBit(c+140,"Top IFUInst reset", false,-1);
        tracep->declQuad(c+1,"Top IFUInst io_nextpc", false,-1, 63,0);
        tracep->declBus(c+157,"Top IFUInst io_instGet", false,-1, 31,0);
        tracep->declQuad(c+71,"Top IFUInst io_pc", false,-1, 63,0);
        tracep->declBit(c+141,"Top IFUInst io_pcEn", false,-1);
        tracep->declBus(c+157,"Top IFUInst io_inst", false,-1, 31,0);
        tracep->declQuad(c+71,"Top IFUInst pc", false,-1, 63,0);
        tracep->declBus(c+157,"Top IDUInst io_inst", false,-1, 31,0);
        tracep->declBus(c+158,"Top IDUInst io_rs1Addr", false,-1, 4,0);
        tracep->declBus(c+159,"Top IDUInst io_rs2Addr", false,-1, 4,0);
        tracep->declBus(c+160,"Top IDUInst io_rdAddr", false,-1, 4,0);
        tracep->declBit(c+3,"Top IDUInst io_wenReg", false,-1);
        tracep->declQuad(c+4,"Top IDUInst io_imme", false,-1, 63,0);
        tracep->declBit(c+161,"Top IDUInst io_wenMem", false,-1);
        tracep->declBit(c+162,"Top IDUInst io_renMem", false,-1);
        tracep->declBus(c+163,"Top IDUInst io_lengthMem", false,-1, 1,0);
        tracep->declBit(c+164,"Top IDUInst io_unsignMem", false,-1);
        tracep->declBit(c+165,"Top IDUInst io_jumpSel", false,-1);
        tracep->declBus(c+6,"Top IDUInst io_alu_aluSel", false,-1, 2,0);
        tracep->declBit(c+166,"Top IDUInst io_alu_typeBSel", false,-1);
        tracep->declBit(c+165,"Top IDUInst io_alu_typeJSel", false,-1);
        tracep->declBit(c+167,"Top IDUInst io_alu_aupicSel", false,-1);
        tracep->declBit(c+7,"Top IDUInst io_alu_immeSel", false,-1);
        tracep->declBit(c+8,"Top IDUInst io_alu_typeBEqSel", false,-1);
        tracep->declBit(c+9,"Top IDUInst io_alu_jalrSel", false,-1);
        tracep->declBit(c+10,"Top IDUInst io_alu_subSel", false,-1);
        tracep->declBit(c+11,"Top IDUInst io_alu_geSel", false,-1);
        tracep->declBit(c+12,"Top IDUInst io_alu_unsignSel", false,-1);
        tracep->declBit(c+13,"Top IDUInst io_alu_neqSel", false,-1);
        tracep->declBit(c+14,"Top IDUInst io_alu_rightSel", false,-1);
        tracep->declBit(c+15,"Top IDUInst io_alu_arithSel", false,-1);
        tracep->declBit(c+16,"Top IDUInst io_alu_wordSel", false,-1);
        tracep->declBit(c+168,"Top IDUInst EbreakInst_ebreak", false,-1);
        tracep->declBus(c+169,"Top IDUInst funct3", false,-1, 2,0);
        tracep->declBus(c+170,"Top IDUInst funct7", false,-1, 6,0);
        tracep->declBus(c+171,"Top IDUInst op5", false,-1, 4,0);
        tracep->declBit(c+28,"Top IDUInst typeII", false,-1);
        tracep->declBit(c+162,"Top IDUInst typeIL", false,-1);
        tracep->declBit(c+165,"Top IDUInst typeIJ", false,-1);
        tracep->declBit(c+29,"Top IDUInst typeR", false,-1);
        tracep->declBit(c+30,"Top IDUInst typeI", false,-1);
        tracep->declBit(c+161,"Top IDUInst typeS", false,-1);
        tracep->declBit(c+166,"Top IDUInst typeB", false,-1);
        tracep->declBit(c+31,"Top IDUInst typeU", false,-1);
        tracep->declQuad(c+172,"Top IDUInst io_imme_imme0", false,-1, 32,0);
        tracep->declBus(c+32,"Top IDUInst io_imme_imme2", false,-1, 7,0);
        tracep->declBit(c+33,"Top IDUInst io_imme_imme3", false,-1);
        tracep->declBus(c+34,"Top IDUInst io_imme_imme4", false,-1, 5,0);
        tracep->declBus(c+35,"Top IDUInst io_imme_imme5", false,-1, 3,0);
        tracep->declBit(c+36,"Top IDUInst io_imme_imme6", false,-1);
        tracep->declBus(c+37,"Top IDUInst io_imme_imme1", false,-1, 10,0);
        tracep->declBit(c+168,"Top IDUInst EbreakInst ebreak", false,-1);
        tracep->declBus(c+38,"Top IDUInst EbreakInst tmp", false,-1, 31,0);
        tracep->declBit(c+139,"Top RegFilesInst clock", false,-1);
        tracep->declBit(c+140,"Top RegFilesInst reset", false,-1);
        tracep->declBus(c+158,"Top RegFilesInst io_rs1Addr", false,-1, 4,0);
        tracep->declBus(c+159,"Top RegFilesInst io_rs2Addr", false,-1, 4,0);
        tracep->declBit(c+3,"Top RegFilesInst io_wen", false,-1);
        tracep->declBus(c+160,"Top RegFilesInst io_wAddr", false,-1, 4,0);
        tracep->declQuad(c+17,"Top RegFilesInst io_wData", false,-1, 63,0);
        tracep->declQuad(c+19,"Top RegFilesInst io_rs1Data", false,-1, 63,0);
        tracep->declQuad(c+21,"Top RegFilesInst io_rs2Data", false,-1, 63,0);
        tracep->declQuad(c+75,"Top RegFilesInst regFiles_0", false,-1, 63,0);
        tracep->declQuad(c+77,"Top RegFilesInst regFiles_1", false,-1, 63,0);
        tracep->declQuad(c+79,"Top RegFilesInst regFiles_2", false,-1, 63,0);
        tracep->declQuad(c+81,"Top RegFilesInst regFiles_3", false,-1, 63,0);
        tracep->declQuad(c+83,"Top RegFilesInst regFiles_4", false,-1, 63,0);
        tracep->declQuad(c+85,"Top RegFilesInst regFiles_5", false,-1, 63,0);
        tracep->declQuad(c+87,"Top RegFilesInst regFiles_6", false,-1, 63,0);
        tracep->declQuad(c+89,"Top RegFilesInst regFiles_7", false,-1, 63,0);
        tracep->declQuad(c+91,"Top RegFilesInst regFiles_8", false,-1, 63,0);
        tracep->declQuad(c+93,"Top RegFilesInst regFiles_9", false,-1, 63,0);
        tracep->declQuad(c+95,"Top RegFilesInst regFiles_10", false,-1, 63,0);
        tracep->declQuad(c+97,"Top RegFilesInst regFiles_11", false,-1, 63,0);
        tracep->declQuad(c+99,"Top RegFilesInst regFiles_12", false,-1, 63,0);
        tracep->declQuad(c+101,"Top RegFilesInst regFiles_13", false,-1, 63,0);
        tracep->declQuad(c+103,"Top RegFilesInst regFiles_14", false,-1, 63,0);
        tracep->declQuad(c+105,"Top RegFilesInst regFiles_15", false,-1, 63,0);
        tracep->declQuad(c+107,"Top RegFilesInst regFiles_16", false,-1, 63,0);
        tracep->declQuad(c+109,"Top RegFilesInst regFiles_17", false,-1, 63,0);
        tracep->declQuad(c+111,"Top RegFilesInst regFiles_18", false,-1, 63,0);
        tracep->declQuad(c+113,"Top RegFilesInst regFiles_19", false,-1, 63,0);
        tracep->declQuad(c+115,"Top RegFilesInst regFiles_20", false,-1, 63,0);
        tracep->declQuad(c+117,"Top RegFilesInst regFiles_21", false,-1, 63,0);
        tracep->declQuad(c+119,"Top RegFilesInst regFiles_22", false,-1, 63,0);
        tracep->declQuad(c+121,"Top RegFilesInst regFiles_23", false,-1, 63,0);
        tracep->declQuad(c+123,"Top RegFilesInst regFiles_24", false,-1, 63,0);
        tracep->declQuad(c+125,"Top RegFilesInst regFiles_25", false,-1, 63,0);
        tracep->declQuad(c+127,"Top RegFilesInst regFiles_26", false,-1, 63,0);
        tracep->declQuad(c+129,"Top RegFilesInst regFiles_27", false,-1, 63,0);
        tracep->declQuad(c+131,"Top RegFilesInst regFiles_28", false,-1, 63,0);
        tracep->declQuad(c+133,"Top RegFilesInst regFiles_29", false,-1, 63,0);
        tracep->declQuad(c+135,"Top RegFilesInst regFiles_30", false,-1, 63,0);
        tracep->declQuad(c+137,"Top RegFilesInst regFiles_31", false,-1, 63,0);
        tracep->declQuad(c+19,"Top ALUInst io_rs1", false,-1, 63,0);
        tracep->declQuad(c+21,"Top ALUInst io_rs2", false,-1, 63,0);
        tracep->declQuad(c+4,"Top ALUInst io_imme", false,-1, 63,0);
        tracep->declQuad(c+71,"Top ALUInst io_pc", false,-1, 63,0);
        tracep->declQuad(c+23,"Top ALUInst io_result", false,-1, 63,0);
        tracep->declBit(c+25,"Top ALUInst io_nextpcSel", false,-1);
        tracep->declBus(c+6,"Top ALUInst io_alu_aluSel", false,-1, 2,0);
        tracep->declBit(c+166,"Top ALUInst io_alu_typeBSel", false,-1);
        tracep->declBit(c+165,"Top ALUInst io_alu_typeJSel", false,-1);
        tracep->declBit(c+167,"Top ALUInst io_alu_aupicSel", false,-1);
        tracep->declBit(c+7,"Top ALUInst io_alu_immeSel", false,-1);
        tracep->declBit(c+8,"Top ALUInst io_alu_typeBEqSel", false,-1);
        tracep->declBit(c+9,"Top ALUInst io_alu_jalrSel", false,-1);
        tracep->declBit(c+10,"Top ALUInst io_alu_subSel", false,-1);
        tracep->declBit(c+11,"Top ALUInst io_alu_geSel", false,-1);
        tracep->declBit(c+12,"Top ALUInst io_alu_unsignSel", false,-1);
        tracep->declBit(c+13,"Top ALUInst io_alu_neqSel", false,-1);
        tracep->declBit(c+14,"Top ALUInst io_alu_rightSel", false,-1);
        tracep->declBit(c+15,"Top ALUInst io_alu_arithSel", false,-1);
        tracep->declBit(c+16,"Top ALUInst io_alu_wordSel", false,-1);
        tracep->declQuad(c+39,"Top ALUInst plusInst_io_data1", false,-1, 63,0);
        tracep->declQuad(c+41,"Top ALUInst plusInst_io_data2", false,-1, 63,0);
        tracep->declQuad(c+43,"Top ALUInst plusInst_io_result", false,-1, 63,0);
        tracep->declBit(c+11,"Top ALUInst lessInst_io_geSel", false,-1);
        tracep->declBit(c+12,"Top ALUInst lessInst_io_unsignSel", false,-1);
        tracep->declQuad(c+19,"Top ALUInst lessInst_io_data1", false,-1, 63,0);
        tracep->declQuad(c+45,"Top ALUInst lessInst_io_data2", false,-1, 63,0);
        tracep->declBit(c+47,"Top ALUInst lessInst_io_result", false,-1);
        tracep->declBit(c+14,"Top ALUInst shiftInst_io_rightSel", false,-1);
        tracep->declBit(c+15,"Top ALUInst shiftInst_io_arithSel", false,-1);
        tracep->declBit(c+16,"Top ALUInst shiftInst_io_wordSel", false,-1);
        tracep->declQuad(c+19,"Top ALUInst shiftInst_io_data1", false,-1, 63,0);
        tracep->declQuad(c+48,"Top ALUInst shiftInst_io_data2", false,-1, 63,0);
        tracep->declQuad(c+50,"Top ALUInst shiftInst_io_result", false,-1, 63,0);
        tracep->declQuad(c+48,"Top ALUInst src2", false,-1, 63,0);
        tracep->declQuad(c+43,"Top ALUInst plusResultTmp1", false,-1, 63,0);
        tracep->declQuad(c+52,"Top ALUInst plusResultTmp2", false,-1, 63,0);
        tracep->declQuad(c+54,"Top ALUInst plusResult", false,-1, 63,0);
        tracep->declQuad(c+56,"Top ALUInst andResult", false,-1, 63,0);
        tracep->declQuad(c+58,"Top ALUInst orResult", false,-1, 63,0);
        tracep->declQuad(c+60,"Top ALUInst xorResult", false,-1, 63,0);
        tracep->declBit(c+62,"Top ALUInst equalResultTmp", false,-1);
        tracep->declBit(c+63,"Top ALUInst equalResult", false,-1);
        tracep->declBit(c+47,"Top ALUInst lessResult", false,-1);
        tracep->declQuad(c+50,"Top ALUInst shiftResult", false,-1, 63,0);
        tracep->declQuad(c+39,"Top ALUInst plusInst io_data1", false,-1, 63,0);
        tracep->declQuad(c+41,"Top ALUInst plusInst io_data2", false,-1, 63,0);
        tracep->declQuad(c+43,"Top ALUInst plusInst io_result", false,-1, 63,0);
        tracep->declBit(c+11,"Top ALUInst lessInst io_geSel", false,-1);
        tracep->declBit(c+12,"Top ALUInst lessInst io_unsignSel", false,-1);
        tracep->declQuad(c+19,"Top ALUInst lessInst io_data1", false,-1, 63,0);
        tracep->declQuad(c+45,"Top ALUInst lessInst io_data2", false,-1, 63,0);
        tracep->declBit(c+47,"Top ALUInst lessInst io_result", false,-1);
        tracep->declBit(c+64,"Top ALUInst lessInst unsignResult", false,-1);
        tracep->declBit(c+65,"Top ALUInst lessInst signedResult", false,-1);
        tracep->declBit(c+66,"Top ALUInst lessInst lessResult", false,-1);
        tracep->declBit(c+14,"Top ALUInst shiftInst io_rightSel", false,-1);
        tracep->declBit(c+15,"Top ALUInst shiftInst io_arithSel", false,-1);
        tracep->declBit(c+16,"Top ALUInst shiftInst io_wordSel", false,-1);
        tracep->declQuad(c+19,"Top ALUInst shiftInst io_data1", false,-1, 63,0);
        tracep->declQuad(c+48,"Top ALUInst shiftInst io_data2", false,-1, 63,0);
        tracep->declQuad(c+50,"Top ALUInst shiftInst io_result", false,-1, 63,0);
        tracep->declQuad(c+67,"Top ALUInst shiftInst data1", false,-1, 63,0);
        tracep->declQuad(c+69,"Top ALUInst shiftInst result", false,-1, 63,0);
        tracep->declBus(c+163,"Top MemExtendsInst io_lengthMem", false,-1, 1,0);
        tracep->declBit(c+164,"Top MemExtendsInst io_unsignMem", false,-1);
        tracep->declQuad(c+146,"Top MemExtendsInst io_data", false,-1, 63,0);
        tracep->declQuad(c+26,"Top MemExtendsInst io_result", false,-1, 63,0);
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
        tracep->fullBit(oldp+3,(vlSelf->Top__DOT__IDUInst_io_wenReg));
        tracep->fullQData(oldp+4,(vlSelf->Top__DOT__IDUInst_io_imme),64);
        tracep->fullCData(oldp+6,(vlSelf->Top__DOT__IDUInst_io_alu_aluSel),3);
        tracep->fullBit(oldp+7,((1U & (~ (IData)(vlSelf->Top__DOT__IDUInst__DOT__typeR)))));
        tracep->fullBit(oldp+8,(vlSelf->Top__DOT__IDUInst_io_alu_typeBEqSel));
        tracep->fullBit(oldp+9,(vlSelf->Top__DOT__IDUInst_io_alu_jalrSel));
        tracep->fullBit(oldp+10,(vlSelf->Top__DOT__IDUInst_io_alu_subSel));
        tracep->fullBit(oldp+11,(vlSelf->Top__DOT__IDUInst_io_alu_geSel));
        tracep->fullBit(oldp+12,(vlSelf->Top__DOT__IDUInst_io_alu_unsignSel));
        tracep->fullBit(oldp+13,(vlSelf->Top__DOT__IDUInst_io_alu_neqSel));
        tracep->fullBit(oldp+14,(vlSelf->Top__DOT__IDUInst_io_alu_rightSel));
        tracep->fullBit(oldp+15,(vlSelf->Top__DOT__IDUInst_io_alu_arithSel));
        tracep->fullBit(oldp+16,(vlSelf->Top__DOT__IDUInst_io_alu_wordSel));
        tracep->fullQData(oldp+17,(vlSelf->Top__DOT__RegFilesInst_io_wData),64);
        tracep->fullQData(oldp+19,(vlSelf->Top__DOT__RegFilesInst_io_rs1Data),64);
        tracep->fullQData(oldp+21,(vlSelf->Top__DOT__RegFilesInst_io_rs2Data),64);
        tracep->fullQData(oldp+23,(vlSelf->Top__DOT__ALUInst_io_result),64);
        tracep->fullBit(oldp+25,(vlSelf->Top__DOT__ALUInst_io_nextpcSel));
        tracep->fullQData(oldp+26,(vlSelf->Top__DOT__MemExtendsInst_io_result),64);
        tracep->fullBit(oldp+28,(vlSelf->Top__DOT__IDUInst__DOT__typeII));
        tracep->fullBit(oldp+29,(vlSelf->Top__DOT__IDUInst__DOT__typeR));
        tracep->fullBit(oldp+30,(vlSelf->Top__DOT__IDUInst__DOT__typeI));
        tracep->fullBit(oldp+31,(vlSelf->Top__DOT__IDUInst__DOT__typeU));
        tracep->fullCData(oldp+32,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme2),8);
        tracep->fullBit(oldp+33,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme3));
        tracep->fullCData(oldp+34,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme4),6);
        tracep->fullCData(oldp+35,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme5),4);
        tracep->fullBit(oldp+36,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme6));
        tracep->fullSData(oldp+37,((0x7ffU & (IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0))),11);
        tracep->fullIData(oldp+38,(vlSelf->Top__DOT__IDUInst__DOT__EbreakInst__DOT__tmp),32);
        tracep->fullQData(oldp+39,(vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1),64);
        tracep->fullQData(oldp+41,(vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2),64);
        tracep->fullQData(oldp+43,(vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result),64);
        tracep->fullQData(oldp+45,(vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2),64);
        tracep->fullBit(oldp+47,(vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_result));
        tracep->fullQData(oldp+48,(vlSelf->Top__DOT__ALUInst__DOT__src2),64);
        tracep->fullQData(oldp+50,(vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result),64);
        tracep->fullQData(oldp+52,(vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2),64);
        tracep->fullQData(oldp+54,(vlSelf->Top__DOT__ALUInst__DOT__plusResult),64);
        tracep->fullQData(oldp+56,(vlSelf->Top__DOT__ALUInst__DOT__andResult),64);
        tracep->fullQData(oldp+58,(vlSelf->Top__DOT__ALUInst__DOT__orResult),64);
        tracep->fullQData(oldp+60,(vlSelf->Top__DOT__ALUInst__DOT__xorResult),64);
        tracep->fullBit(oldp+62,(vlSelf->Top__DOT__ALUInst__DOT__equalResultTmp));
        tracep->fullBit(oldp+63,(vlSelf->Top__DOT__ALUInst__DOT__equalResult));
        tracep->fullBit(oldp+64,(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__unsignResult));
        tracep->fullBit(oldp+65,(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__signedResult));
        tracep->fullBit(oldp+66,(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__lessResult));
        tracep->fullQData(oldp+67,(vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1),64);
        tracep->fullQData(oldp+69,((((QData)((IData)(
                                                     vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U])))),64);
        tracep->fullQData(oldp+71,(vlSelf->Top__DOT__IFUInst__DOT__pc),64);
        tracep->fullQData(oldp+73,((4ULL + vlSelf->Top__DOT__IFUInst__DOT__pc)),64);
        tracep->fullQData(oldp+75,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_0),64);
        tracep->fullQData(oldp+77,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_1),64);
        tracep->fullQData(oldp+79,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_2),64);
        tracep->fullQData(oldp+81,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_3),64);
        tracep->fullQData(oldp+83,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_4),64);
        tracep->fullQData(oldp+85,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_5),64);
        tracep->fullQData(oldp+87,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_6),64);
        tracep->fullQData(oldp+89,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_7),64);
        tracep->fullQData(oldp+91,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_8),64);
        tracep->fullQData(oldp+93,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_9),64);
        tracep->fullQData(oldp+95,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_10),64);
        tracep->fullQData(oldp+97,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_11),64);
        tracep->fullQData(oldp+99,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_12),64);
        tracep->fullQData(oldp+101,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_13),64);
        tracep->fullQData(oldp+103,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_14),64);
        tracep->fullQData(oldp+105,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_15),64);
        tracep->fullQData(oldp+107,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_16),64);
        tracep->fullQData(oldp+109,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_17),64);
        tracep->fullQData(oldp+111,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_18),64);
        tracep->fullQData(oldp+113,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_19),64);
        tracep->fullQData(oldp+115,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_20),64);
        tracep->fullQData(oldp+117,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_21),64);
        tracep->fullQData(oldp+119,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_22),64);
        tracep->fullQData(oldp+121,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_23),64);
        tracep->fullQData(oldp+123,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_24),64);
        tracep->fullQData(oldp+125,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_25),64);
        tracep->fullQData(oldp+127,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_26),64);
        tracep->fullQData(oldp+129,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_27),64);
        tracep->fullQData(oldp+131,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_28),64);
        tracep->fullQData(oldp+133,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_29),64);
        tracep->fullQData(oldp+135,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_30),64);
        tracep->fullQData(oldp+137,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_31),64);
        tracep->fullBit(oldp+139,(vlSelf->clock));
        tracep->fullBit(oldp+140,(vlSelf->reset));
        tracep->fullBit(oldp+141,(vlSelf->io_cpuEn));
        tracep->fullQData(oldp+142,(vlSelf->io_instData),64);
        tracep->fullQData(oldp+144,(vlSelf->io_instAddr),64);
        tracep->fullQData(oldp+146,(vlSelf->io_rData),64);
        tracep->fullQData(oldp+148,(vlSelf->io_rAddr),64);
        tracep->fullQData(oldp+150,(vlSelf->io_wData),64);
        tracep->fullQData(oldp+152,(vlSelf->io_wAddr),64);
        tracep->fullBit(oldp+154,(vlSelf->io_wen));
        tracep->fullBit(oldp+155,(vlSelf->io_ren));
        tracep->fullCData(oldp+156,(vlSelf->io_length),2);
        tracep->fullIData(oldp+157,((IData)(vlSelf->io_instData)),32);
        tracep->fullCData(oldp+158,((0x1fU & (IData)(
                                                     (vlSelf->io_instData 
                                                      >> 0xfU)))),5);
        tracep->fullCData(oldp+159,((0x1fU & (IData)(
                                                     (vlSelf->io_instData 
                                                      >> 0x14U)))),5);
        tracep->fullCData(oldp+160,((0x1fU & (IData)(
                                                     (vlSelf->io_instData 
                                                      >> 7U)))),5);
        tracep->fullBit(oldp+161,((8U == (0x1fU & (IData)(
                                                          (vlSelf->io_instData 
                                                           >> 2U))))));
        tracep->fullBit(oldp+162,((0U == (0x1fU & (IData)(
                                                          (vlSelf->io_instData 
                                                           >> 2U))))));
        tracep->fullCData(oldp+163,((3U & (IData)((vlSelf->io_instData 
                                                   >> 0xcU)))),2);
        tracep->fullBit(oldp+164,((1U & (IData)((vlSelf->io_instData 
                                                 >> 0xeU)))));
        tracep->fullBit(oldp+165,((0x1bU == (0x1fU 
                                             & (IData)(
                                                       (vlSelf->io_instData 
                                                        >> 2U))))));
        tracep->fullBit(oldp+166,((0x18U == (0x1fU 
                                             & (IData)(
                                                       (vlSelf->io_instData 
                                                        >> 2U))))));
        tracep->fullBit(oldp+167,((5U == (0x1fU & (IData)(
                                                          (vlSelf->io_instData 
                                                           >> 2U))))));
        tracep->fullBit(oldp+168,((0x100073U == (IData)(vlSelf->io_instData))));
        tracep->fullCData(oldp+169,((7U & (IData)((vlSelf->io_instData 
                                                   >> 0xcU)))),3);
        tracep->fullCData(oldp+170,((0x7fU & (IData)(
                                                     (vlSelf->io_instData 
                                                      >> 0x19U)))),7);
        tracep->fullCData(oldp+171,((0x1fU & (IData)(
                                                     (vlSelf->io_instData 
                                                      >> 2U)))),5);
        tracep->fullQData(oldp+172,(((1U & (IData)(
                                                   (vlSelf->io_instData 
                                                    >> 0x1fU)))
                                      ? 0x1ffffffffULL
                                      : 0ULL)),33);
    }
}

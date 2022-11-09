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
        tracep->declBit(c+174,"clock", false,-1);
        tracep->declBit(c+175,"reset", false,-1);
        tracep->declBit(c+176,"io_cpuEn", false,-1);
        tracep->declBit(c+174,"Top clock", false,-1);
        tracep->declBit(c+175,"Top reset", false,-1);
        tracep->declBit(c+176,"Top io_cpuEn", false,-1);
        tracep->declBit(c+174,"Top IFUInst_clock", false,-1);
        tracep->declBit(c+175,"Top IFUInst_reset", false,-1);
        tracep->declQuad(c+3,"Top IFUInst_io_nextpc", false,-1, 63,0);
        tracep->declBit(c+176,"Top IFUInst_io_pcEn", false,-1);
        tracep->declBus(c+5,"Top IFUInst_io_inst", false,-1, 31,0);
        tracep->declQuad(c+6,"Top IFUInst_io_pc", false,-1, 63,0);
        tracep->declBus(c+5,"Top IDUInst_io_inst", false,-1, 31,0);
        tracep->declBus(c+8,"Top IDUInst_io_rs1Addr", false,-1, 4,0);
        tracep->declBus(c+9,"Top IDUInst_io_rs2Addr", false,-1, 4,0);
        tracep->declBus(c+10,"Top IDUInst_io_rdAddr", false,-1, 4,0);
        tracep->declBit(c+11,"Top IDUInst_io_wenReg", false,-1);
        tracep->declQuad(c+12,"Top IDUInst_io_imme", false,-1, 63,0);
        tracep->declBit(c+14,"Top IDUInst_io_wenMem", false,-1);
        tracep->declBit(c+15,"Top IDUInst_io_renMem", false,-1);
        tracep->declBus(c+16,"Top IDUInst_io_lengthMem", false,-1, 1,0);
        tracep->declBit(c+17,"Top IDUInst_io_unsignMem", false,-1);
        tracep->declBit(c+18,"Top IDUInst_io_jumpSel", false,-1);
        tracep->declBus(c+19,"Top IDUInst_io_alu_aluSel", false,-1, 2,0);
        tracep->declBit(c+20,"Top IDUInst_io_alu_typeBSel", false,-1);
        tracep->declBit(c+18,"Top IDUInst_io_alu_typeJSel", false,-1);
        tracep->declBit(c+21,"Top IDUInst_io_alu_aupicSel", false,-1);
        tracep->declBit(c+22,"Top IDUInst_io_alu_immeSel", false,-1);
        tracep->declBit(c+23,"Top IDUInst_io_alu_typeBEqSel", false,-1);
        tracep->declBit(c+24,"Top IDUInst_io_alu_jalrSel", false,-1);
        tracep->declBit(c+25,"Top IDUInst_io_alu_subSel", false,-1);
        tracep->declBit(c+26,"Top IDUInst_io_alu_geSel", false,-1);
        tracep->declBit(c+27,"Top IDUInst_io_alu_unsignSel", false,-1);
        tracep->declBit(c+28,"Top IDUInst_io_alu_neqSel", false,-1);
        tracep->declBit(c+29,"Top IDUInst_io_alu_rightSel", false,-1);
        tracep->declBit(c+30,"Top IDUInst_io_alu_arithSel", false,-1);
        tracep->declBit(c+31,"Top IDUInst_io_alu_wordSel", false,-1);
        tracep->declBit(c+174,"Top RegFilesInst_clock", false,-1);
        tracep->declBit(c+175,"Top RegFilesInst_reset", false,-1);
        tracep->declBus(c+8,"Top RegFilesInst_io_rs1Addr", false,-1, 4,0);
        tracep->declBus(c+9,"Top RegFilesInst_io_rs2Addr", false,-1, 4,0);
        tracep->declBit(c+11,"Top RegFilesInst_io_wen", false,-1);
        tracep->declBus(c+10,"Top RegFilesInst_io_wAddr", false,-1, 4,0);
        tracep->declQuad(c+32,"Top RegFilesInst_io_wData", false,-1, 63,0);
        tracep->declQuad(c+34,"Top RegFilesInst_io_rs1Data", false,-1, 63,0);
        tracep->declQuad(c+36,"Top RegFilesInst_io_rs2Data", false,-1, 63,0);
        tracep->declQuad(c+34,"Top ALUInst_io_rs1", false,-1, 63,0);
        tracep->declQuad(c+36,"Top ALUInst_io_rs2", false,-1, 63,0);
        tracep->declQuad(c+12,"Top ALUInst_io_imme", false,-1, 63,0);
        tracep->declQuad(c+6,"Top ALUInst_io_pc", false,-1, 63,0);
        tracep->declQuad(c+38,"Top ALUInst_io_result", false,-1, 63,0);
        tracep->declBit(c+40,"Top ALUInst_io_nextpcSel", false,-1);
        tracep->declBus(c+19,"Top ALUInst_io_alu_aluSel", false,-1, 2,0);
        tracep->declBit(c+20,"Top ALUInst_io_alu_typeBSel", false,-1);
        tracep->declBit(c+18,"Top ALUInst_io_alu_typeJSel", false,-1);
        tracep->declBit(c+21,"Top ALUInst_io_alu_aupicSel", false,-1);
        tracep->declBit(c+22,"Top ALUInst_io_alu_immeSel", false,-1);
        tracep->declBit(c+23,"Top ALUInst_io_alu_typeBEqSel", false,-1);
        tracep->declBit(c+24,"Top ALUInst_io_alu_jalrSel", false,-1);
        tracep->declBit(c+25,"Top ALUInst_io_alu_subSel", false,-1);
        tracep->declBit(c+26,"Top ALUInst_io_alu_geSel", false,-1);
        tracep->declBit(c+27,"Top ALUInst_io_alu_unsignSel", false,-1);
        tracep->declBit(c+28,"Top ALUInst_io_alu_neqSel", false,-1);
        tracep->declBit(c+29,"Top ALUInst_io_alu_rightSel", false,-1);
        tracep->declBit(c+30,"Top ALUInst_io_alu_arithSel", false,-1);
        tracep->declBit(c+31,"Top ALUInst_io_alu_wordSel", false,-1);
        tracep->declBit(c+15,"Top MemCtrlInst_io_ren", false,-1);
        tracep->declQuad(c+38,"Top MemCtrlInst_io_addr", false,-1, 63,0);
        tracep->declQuad(c+41,"Top MemCtrlInst_io_rData", false,-1, 63,0);
        tracep->declBit(c+14,"Top MemCtrlInst_io_wen", false,-1);
        tracep->declQuad(c+36,"Top MemCtrlInst_io_wData", false,-1, 63,0);
        tracep->declBus(c+16,"Top MemCtrlInst_io_length", false,-1, 1,0);
        tracep->declBit(c+17,"Top MemCtrlInst_io_unsign", false,-1);
        tracep->declQuad(c+43,"Top nextpcDefault", false,-1, 63,0);
        tracep->declBit(c+174,"Top IFUInst clock", false,-1);
        tracep->declBit(c+175,"Top IFUInst reset", false,-1);
        tracep->declQuad(c+3,"Top IFUInst io_nextpc", false,-1, 63,0);
        tracep->declBit(c+176,"Top IFUInst io_pcEn", false,-1);
        tracep->declBus(c+5,"Top IFUInst io_inst", false,-1, 31,0);
        tracep->declQuad(c+6,"Top IFUInst io_pc", false,-1, 63,0);
        tracep->declBit(c+177,"Top IFUInst MemVirtualInst_instr_ren", false,-1);
        tracep->declQuad(c+45,"Top IFUInst MemVirtualInst_instr_addr", false,-1, 63,0);
        tracep->declQuad(c+1,"Top IFUInst MemVirtualInst_instr_rData", false,-1, 63,0);
        tracep->declBit(c+177,"Top IFUInst MemVirtualInst_instr_wen", false,-1);
        tracep->declQuad(c+178,"Top IFUInst MemVirtualInst_instr_wData", false,-1, 63,0);
        tracep->declBus(c+180,"Top IFUInst MemVirtualInst_instr_wMask", false,-1, 7,0);
        tracep->declQuad(c+6,"Top IFUInst pc", false,-1, 63,0);
        tracep->declBus(c+5,"Top IDUInst io_inst", false,-1, 31,0);
        tracep->declBus(c+8,"Top IDUInst io_rs1Addr", false,-1, 4,0);
        tracep->declBus(c+9,"Top IDUInst io_rs2Addr", false,-1, 4,0);
        tracep->declBus(c+10,"Top IDUInst io_rdAddr", false,-1, 4,0);
        tracep->declBit(c+11,"Top IDUInst io_wenReg", false,-1);
        tracep->declQuad(c+12,"Top IDUInst io_imme", false,-1, 63,0);
        tracep->declBit(c+14,"Top IDUInst io_wenMem", false,-1);
        tracep->declBit(c+15,"Top IDUInst io_renMem", false,-1);
        tracep->declBus(c+16,"Top IDUInst io_lengthMem", false,-1, 1,0);
        tracep->declBit(c+17,"Top IDUInst io_unsignMem", false,-1);
        tracep->declBit(c+18,"Top IDUInst io_jumpSel", false,-1);
        tracep->declBus(c+19,"Top IDUInst io_alu_aluSel", false,-1, 2,0);
        tracep->declBit(c+20,"Top IDUInst io_alu_typeBSel", false,-1);
        tracep->declBit(c+18,"Top IDUInst io_alu_typeJSel", false,-1);
        tracep->declBit(c+21,"Top IDUInst io_alu_aupicSel", false,-1);
        tracep->declBit(c+22,"Top IDUInst io_alu_immeSel", false,-1);
        tracep->declBit(c+23,"Top IDUInst io_alu_typeBEqSel", false,-1);
        tracep->declBit(c+24,"Top IDUInst io_alu_jalrSel", false,-1);
        tracep->declBit(c+25,"Top IDUInst io_alu_subSel", false,-1);
        tracep->declBit(c+26,"Top IDUInst io_alu_geSel", false,-1);
        tracep->declBit(c+27,"Top IDUInst io_alu_unsignSel", false,-1);
        tracep->declBit(c+28,"Top IDUInst io_alu_neqSel", false,-1);
        tracep->declBit(c+29,"Top IDUInst io_alu_rightSel", false,-1);
        tracep->declBit(c+30,"Top IDUInst io_alu_arithSel", false,-1);
        tracep->declBit(c+31,"Top IDUInst io_alu_wordSel", false,-1);
        tracep->declBit(c+47,"Top IDUInst EbreakInst_ebreak", false,-1);
        tracep->declBus(c+48,"Top IDUInst funct3", false,-1, 2,0);
        tracep->declBus(c+49,"Top IDUInst funct7", false,-1, 6,0);
        tracep->declBus(c+50,"Top IDUInst op5", false,-1, 4,0);
        tracep->declBit(c+51,"Top IDUInst typeII", false,-1);
        tracep->declBit(c+52,"Top IDUInst typeIL", false,-1);
        tracep->declBit(c+18,"Top IDUInst typeIJ", false,-1);
        tracep->declBit(c+53,"Top IDUInst typeR", false,-1);
        tracep->declBit(c+54,"Top IDUInst typeI", false,-1);
        tracep->declBit(c+14,"Top IDUInst typeS", false,-1);
        tracep->declBit(c+20,"Top IDUInst typeB", false,-1);
        tracep->declBit(c+55,"Top IDUInst typeU", false,-1);
        tracep->declQuad(c+56,"Top IDUInst io_imme_imme0", false,-1, 32,0);
        tracep->declBus(c+58,"Top IDUInst io_imme_imme2", false,-1, 7,0);
        tracep->declBit(c+59,"Top IDUInst io_imme_imme3", false,-1);
        tracep->declBus(c+60,"Top IDUInst io_imme_imme4", false,-1, 5,0);
        tracep->declBus(c+61,"Top IDUInst io_imme_imme5", false,-1, 3,0);
        tracep->declBit(c+62,"Top IDUInst io_imme_imme6", false,-1);
        tracep->declBus(c+63,"Top IDUInst io_imme_imme1", false,-1, 10,0);
        tracep->declBit(c+47,"Top IDUInst EbreakInst ebreak", false,-1);
        tracep->declBit(c+174,"Top RegFilesInst clock", false,-1);
        tracep->declBit(c+175,"Top RegFilesInst reset", false,-1);
        tracep->declBus(c+8,"Top RegFilesInst io_rs1Addr", false,-1, 4,0);
        tracep->declBus(c+9,"Top RegFilesInst io_rs2Addr", false,-1, 4,0);
        tracep->declBit(c+11,"Top RegFilesInst io_wen", false,-1);
        tracep->declBus(c+10,"Top RegFilesInst io_wAddr", false,-1, 4,0);
        tracep->declQuad(c+32,"Top RegFilesInst io_wData", false,-1, 63,0);
        tracep->declQuad(c+34,"Top RegFilesInst io_rs1Data", false,-1, 63,0);
        tracep->declQuad(c+36,"Top RegFilesInst io_rs2Data", false,-1, 63,0);
        tracep->declQuad(c+64,"Top RegFilesInst regFiles_0", false,-1, 63,0);
        tracep->declQuad(c+66,"Top RegFilesInst regFiles_1", false,-1, 63,0);
        tracep->declQuad(c+68,"Top RegFilesInst regFiles_2", false,-1, 63,0);
        tracep->declQuad(c+70,"Top RegFilesInst regFiles_3", false,-1, 63,0);
        tracep->declQuad(c+72,"Top RegFilesInst regFiles_4", false,-1, 63,0);
        tracep->declQuad(c+74,"Top RegFilesInst regFiles_5", false,-1, 63,0);
        tracep->declQuad(c+76,"Top RegFilesInst regFiles_6", false,-1, 63,0);
        tracep->declQuad(c+78,"Top RegFilesInst regFiles_7", false,-1, 63,0);
        tracep->declQuad(c+80,"Top RegFilesInst regFiles_8", false,-1, 63,0);
        tracep->declQuad(c+82,"Top RegFilesInst regFiles_9", false,-1, 63,0);
        tracep->declQuad(c+84,"Top RegFilesInst regFiles_10", false,-1, 63,0);
        tracep->declQuad(c+86,"Top RegFilesInst regFiles_11", false,-1, 63,0);
        tracep->declQuad(c+88,"Top RegFilesInst regFiles_12", false,-1, 63,0);
        tracep->declQuad(c+90,"Top RegFilesInst regFiles_13", false,-1, 63,0);
        tracep->declQuad(c+92,"Top RegFilesInst regFiles_14", false,-1, 63,0);
        tracep->declQuad(c+94,"Top RegFilesInst regFiles_15", false,-1, 63,0);
        tracep->declQuad(c+96,"Top RegFilesInst regFiles_16", false,-1, 63,0);
        tracep->declQuad(c+98,"Top RegFilesInst regFiles_17", false,-1, 63,0);
        tracep->declQuad(c+100,"Top RegFilesInst regFiles_18", false,-1, 63,0);
        tracep->declQuad(c+102,"Top RegFilesInst regFiles_19", false,-1, 63,0);
        tracep->declQuad(c+104,"Top RegFilesInst regFiles_20", false,-1, 63,0);
        tracep->declQuad(c+106,"Top RegFilesInst regFiles_21", false,-1, 63,0);
        tracep->declQuad(c+108,"Top RegFilesInst regFiles_22", false,-1, 63,0);
        tracep->declQuad(c+110,"Top RegFilesInst regFiles_23", false,-1, 63,0);
        tracep->declQuad(c+112,"Top RegFilesInst regFiles_24", false,-1, 63,0);
        tracep->declQuad(c+114,"Top RegFilesInst regFiles_25", false,-1, 63,0);
        tracep->declQuad(c+116,"Top RegFilesInst regFiles_26", false,-1, 63,0);
        tracep->declQuad(c+118,"Top RegFilesInst regFiles_27", false,-1, 63,0);
        tracep->declQuad(c+120,"Top RegFilesInst regFiles_28", false,-1, 63,0);
        tracep->declQuad(c+122,"Top RegFilesInst regFiles_29", false,-1, 63,0);
        tracep->declQuad(c+124,"Top RegFilesInst regFiles_30", false,-1, 63,0);
        tracep->declQuad(c+126,"Top RegFilesInst regFiles_31", false,-1, 63,0);
        tracep->declQuad(c+34,"Top ALUInst io_rs1", false,-1, 63,0);
        tracep->declQuad(c+36,"Top ALUInst io_rs2", false,-1, 63,0);
        tracep->declQuad(c+12,"Top ALUInst io_imme", false,-1, 63,0);
        tracep->declQuad(c+6,"Top ALUInst io_pc", false,-1, 63,0);
        tracep->declQuad(c+38,"Top ALUInst io_result", false,-1, 63,0);
        tracep->declBit(c+40,"Top ALUInst io_nextpcSel", false,-1);
        tracep->declBus(c+19,"Top ALUInst io_alu_aluSel", false,-1, 2,0);
        tracep->declBit(c+20,"Top ALUInst io_alu_typeBSel", false,-1);
        tracep->declBit(c+18,"Top ALUInst io_alu_typeJSel", false,-1);
        tracep->declBit(c+21,"Top ALUInst io_alu_aupicSel", false,-1);
        tracep->declBit(c+22,"Top ALUInst io_alu_immeSel", false,-1);
        tracep->declBit(c+23,"Top ALUInst io_alu_typeBEqSel", false,-1);
        tracep->declBit(c+24,"Top ALUInst io_alu_jalrSel", false,-1);
        tracep->declBit(c+25,"Top ALUInst io_alu_subSel", false,-1);
        tracep->declBit(c+26,"Top ALUInst io_alu_geSel", false,-1);
        tracep->declBit(c+27,"Top ALUInst io_alu_unsignSel", false,-1);
        tracep->declBit(c+28,"Top ALUInst io_alu_neqSel", false,-1);
        tracep->declBit(c+29,"Top ALUInst io_alu_rightSel", false,-1);
        tracep->declBit(c+30,"Top ALUInst io_alu_arithSel", false,-1);
        tracep->declBit(c+31,"Top ALUInst io_alu_wordSel", false,-1);
        tracep->declQuad(c+128,"Top ALUInst plusInst_io_data1", false,-1, 63,0);
        tracep->declQuad(c+130,"Top ALUInst plusInst_io_data2", false,-1, 63,0);
        tracep->declQuad(c+132,"Top ALUInst plusInst_io_result", false,-1, 63,0);
        tracep->declBit(c+26,"Top ALUInst lessInst_io_geSel", false,-1);
        tracep->declBit(c+27,"Top ALUInst lessInst_io_unsignSel", false,-1);
        tracep->declQuad(c+34,"Top ALUInst lessInst_io_data1", false,-1, 63,0);
        tracep->declQuad(c+134,"Top ALUInst lessInst_io_data2", false,-1, 63,0);
        tracep->declBit(c+136,"Top ALUInst lessInst_io_result", false,-1);
        tracep->declBit(c+29,"Top ALUInst shiftInst_io_rightSel", false,-1);
        tracep->declBit(c+30,"Top ALUInst shiftInst_io_arithSel", false,-1);
        tracep->declBit(c+31,"Top ALUInst shiftInst_io_wordSel", false,-1);
        tracep->declQuad(c+34,"Top ALUInst shiftInst_io_data1", false,-1, 63,0);
        tracep->declQuad(c+137,"Top ALUInst shiftInst_io_data2", false,-1, 63,0);
        tracep->declQuad(c+139,"Top ALUInst shiftInst_io_result", false,-1, 63,0);
        tracep->declQuad(c+141,"Top ALUInst src2", false,-1, 63,0);
        tracep->declQuad(c+132,"Top ALUInst plusResultTmp1", false,-1, 63,0);
        tracep->declQuad(c+143,"Top ALUInst plusResultTmp2", false,-1, 63,0);
        tracep->declQuad(c+145,"Top ALUInst plusResult", false,-1, 63,0);
        tracep->declQuad(c+147,"Top ALUInst andResult", false,-1, 63,0);
        tracep->declQuad(c+149,"Top ALUInst orResult", false,-1, 63,0);
        tracep->declQuad(c+151,"Top ALUInst xorResult", false,-1, 63,0);
        tracep->declBit(c+153,"Top ALUInst equalResultTmp", false,-1);
        tracep->declBit(c+154,"Top ALUInst equalResult", false,-1);
        tracep->declBit(c+136,"Top ALUInst lessResult", false,-1);
        tracep->declQuad(c+139,"Top ALUInst shiftResult", false,-1, 63,0);
        tracep->declQuad(c+128,"Top ALUInst plusInst io_data1", false,-1, 63,0);
        tracep->declQuad(c+130,"Top ALUInst plusInst io_data2", false,-1, 63,0);
        tracep->declQuad(c+132,"Top ALUInst plusInst io_result", false,-1, 63,0);
        tracep->declBit(c+26,"Top ALUInst lessInst io_geSel", false,-1);
        tracep->declBit(c+27,"Top ALUInst lessInst io_unsignSel", false,-1);
        tracep->declQuad(c+34,"Top ALUInst lessInst io_data1", false,-1, 63,0);
        tracep->declQuad(c+134,"Top ALUInst lessInst io_data2", false,-1, 63,0);
        tracep->declBit(c+136,"Top ALUInst lessInst io_result", false,-1);
        tracep->declBit(c+155,"Top ALUInst lessInst unsignResult", false,-1);
        tracep->declBit(c+156,"Top ALUInst lessInst signedResult", false,-1);
        tracep->declBit(c+157,"Top ALUInst lessInst lessResult", false,-1);
        tracep->declBit(c+29,"Top ALUInst shiftInst io_rightSel", false,-1);
        tracep->declBit(c+30,"Top ALUInst shiftInst io_arithSel", false,-1);
        tracep->declBit(c+31,"Top ALUInst shiftInst io_wordSel", false,-1);
        tracep->declQuad(c+34,"Top ALUInst shiftInst io_data1", false,-1, 63,0);
        tracep->declQuad(c+137,"Top ALUInst shiftInst io_data2", false,-1, 63,0);
        tracep->declQuad(c+139,"Top ALUInst shiftInst io_result", false,-1, 63,0);
        tracep->declQuad(c+158,"Top ALUInst shiftInst data1", false,-1, 63,0);
        tracep->declQuad(c+160,"Top ALUInst shiftInst result", false,-1, 63,0);
        tracep->declBit(c+15,"Top MemCtrlInst io_ren", false,-1);
        tracep->declQuad(c+38,"Top MemCtrlInst io_addr", false,-1, 63,0);
        tracep->declQuad(c+41,"Top MemCtrlInst io_rData", false,-1, 63,0);
        tracep->declBit(c+14,"Top MemCtrlInst io_wen", false,-1);
        tracep->declQuad(c+36,"Top MemCtrlInst io_wData", false,-1, 63,0);
        tracep->declBus(c+16,"Top MemCtrlInst io_length", false,-1, 1,0);
        tracep->declBit(c+17,"Top MemCtrlInst io_unsign", false,-1);
        tracep->declBit(c+15,"Top MemCtrlInst MemInst_data_ren", false,-1);
        tracep->declQuad(c+162,"Top MemCtrlInst MemInst_data_addr", false,-1, 63,0);
        tracep->declQuad(c+164,"Top MemCtrlInst MemInst_data_rData", false,-1, 63,0);
        tracep->declBit(c+14,"Top MemCtrlInst MemInst_data_wen", false,-1);
        tracep->declQuad(c+166,"Top MemCtrlInst MemInst_data_wData", false,-1, 63,0);
        tracep->declBus(c+168,"Top MemCtrlInst MemInst_data_wMask", false,-1, 7,0);
        tracep->declBus(c+168,"Top MemCtrlInst mask", false,-1, 7,0);
        tracep->declBus(c+169,"Top MemCtrlInst dataByte", false,-1, 7,0);
        tracep->declBus(c+170,"Top MemCtrlInst dataHalf", false,-1, 15,0);
        tracep->declBus(c+171,"Top MemCtrlInst dataWord", false,-1, 31,0);
        tracep->declQuad(c+172,"Top MemCtrlInst dataDoub", false,-1, 63,0);
        tracep->declBit(c+177,"Top IFUInst MemVirtualInst_instr ren", false,-1);
        tracep->declQuad(c+45,"Top IFUInst MemVirtualInst_instr addr", false,-1, 63,0);
        tracep->declQuad(c+1,"Top IFUInst MemVirtualInst_instr rData", false,-1, 63,0);
        tracep->declBit(c+177,"Top IFUInst MemVirtualInst_instr wen", false,-1);
        tracep->declBus(c+180,"Top IFUInst MemVirtualInst_instr wMask", false,-1, 7,0);
        tracep->declQuad(c+178,"Top IFUInst MemVirtualInst_instr wData", false,-1, 63,0);
        tracep->declBit(c+15,"Top MemCtrlInst MemInst_data ren", false,-1);
        tracep->declQuad(c+162,"Top MemCtrlInst MemInst_data addr", false,-1, 63,0);
        tracep->declQuad(c+164,"Top MemCtrlInst MemInst_data rData", false,-1, 63,0);
        tracep->declBit(c+14,"Top MemCtrlInst MemInst_data wen", false,-1);
        tracep->declBus(c+168,"Top MemCtrlInst MemInst_data wMask", false,-1, 7,0);
        tracep->declQuad(c+166,"Top MemCtrlInst MemInst_data wData", false,-1, 63,0);
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
        tracep->fullQData(oldp+1,(vlSymsp->TOP__Top__DOT__IFUInst__DOT__MemVirtualInst_instr.rData),64);
        tracep->fullQData(oldp+3,(vlSelf->Top__DOT__IFUInst_io_nextpc),64);
        tracep->fullIData(oldp+5,(vlSelf->Top__DOT__IFUInst_io_inst),32);
        tracep->fullQData(oldp+6,(vlSelf->Top__DOT__IFUInst__DOT__pc),64);
        tracep->fullCData(oldp+8,((0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                            >> 0xfU))),5);
        tracep->fullCData(oldp+9,((0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                            >> 0x14U))),5);
        tracep->fullCData(oldp+10,((0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                             >> 7U))),5);
        tracep->fullBit(oldp+11,(vlSelf->Top__DOT__IDUInst_io_wenReg));
        tracep->fullQData(oldp+12,(vlSelf->Top__DOT__IDUInst_io_imme),64);
        tracep->fullBit(oldp+14,((8U == (0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                  >> 2U)))));
        tracep->fullBit(oldp+15,(vlSelf->Top__DOT__IDUInst_io_renMem));
        tracep->fullCData(oldp+16,((3U & (vlSelf->Top__DOT__IFUInst_io_inst 
                                          >> 0xcU))),2);
        tracep->fullBit(oldp+17,((1U & (vlSelf->Top__DOT__IFUInst_io_inst 
                                        >> 0xeU))));
        tracep->fullBit(oldp+18,((0x1bU == (0x1fU & 
                                            (vlSelf->Top__DOT__IFUInst_io_inst 
                                             >> 2U)))));
        tracep->fullCData(oldp+19,(vlSelf->Top__DOT__IDUInst_io_alu_aluSel),3);
        tracep->fullBit(oldp+20,((0x18U == (0x1fU & 
                                            (vlSelf->Top__DOT__IFUInst_io_inst 
                                             >> 2U)))));
        tracep->fullBit(oldp+21,((5U == (0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                                  >> 2U)))));
        tracep->fullBit(oldp+22,((1U & (~ (IData)(vlSelf->Top__DOT__IDUInst__DOT__typeR)))));
        tracep->fullBit(oldp+23,(vlSelf->Top__DOT__IDUInst_io_alu_typeBEqSel));
        tracep->fullBit(oldp+24,(vlSelf->Top__DOT__IDUInst_io_alu_jalrSel));
        tracep->fullBit(oldp+25,(vlSelf->Top__DOT__IDUInst_io_alu_subSel));
        tracep->fullBit(oldp+26,(vlSelf->Top__DOT__IDUInst_io_alu_geSel));
        tracep->fullBit(oldp+27,(vlSelf->Top__DOT__IDUInst_io_alu_unsignSel));
        tracep->fullBit(oldp+28,(vlSelf->Top__DOT__IDUInst_io_alu_neqSel));
        tracep->fullBit(oldp+29,(vlSelf->Top__DOT__IDUInst_io_alu_rightSel));
        tracep->fullBit(oldp+30,(vlSelf->Top__DOT__IDUInst_io_alu_arithSel));
        tracep->fullBit(oldp+31,(vlSelf->Top__DOT__IDUInst_io_alu_wordSel));
        tracep->fullQData(oldp+32,(vlSelf->Top__DOT__RegFilesInst_io_wData),64);
        tracep->fullQData(oldp+34,(vlSelf->Top__DOT__RegFilesInst_io_rs1Data),64);
        tracep->fullQData(oldp+36,(vlSelf->Top__DOT__RegFilesInst_io_rs2Data),64);
        tracep->fullQData(oldp+38,(vlSelf->Top__DOT__ALUInst_io_result),64);
        tracep->fullBit(oldp+40,(vlSelf->Top__DOT__ALUInst_io_nextpcSel));
        tracep->fullQData(oldp+41,(vlSelf->Top__DOT__MemCtrlInst_io_rData),64);
        tracep->fullQData(oldp+43,((4ULL + vlSelf->Top__DOT__IFUInst__DOT__pc)),64);
        tracep->fullQData(oldp+45,((0xfffffffffffffff8ULL 
                                    & vlSelf->Top__DOT__IFUInst__DOT__pc)),64);
        tracep->fullBit(oldp+47,((0x100073U == vlSelf->Top__DOT__IFUInst_io_inst)));
        tracep->fullCData(oldp+48,((7U & (vlSelf->Top__DOT__IFUInst_io_inst 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+49,((vlSelf->Top__DOT__IFUInst_io_inst 
                                    >> 0x19U)),7);
        tracep->fullCData(oldp+50,((0x1fU & (vlSelf->Top__DOT__IFUInst_io_inst 
                                             >> 2U))),5);
        tracep->fullBit(oldp+51,(vlSelf->Top__DOT__IDUInst__DOT__typeII));
        tracep->fullBit(oldp+52,(vlSelf->Top__DOT__IDUInst__DOT__typeIL));
        tracep->fullBit(oldp+53,(vlSelf->Top__DOT__IDUInst__DOT__typeR));
        tracep->fullBit(oldp+54,(vlSelf->Top__DOT__IDUInst__DOT__typeI));
        tracep->fullBit(oldp+55,(vlSelf->Top__DOT__IDUInst__DOT__typeU));
        tracep->fullQData(oldp+56,(((vlSelf->Top__DOT__IFUInst_io_inst 
                                     >> 0x1fU) ? 0x1ffffffffULL
                                     : 0ULL)),33);
        tracep->fullCData(oldp+58,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme2),8);
        tracep->fullBit(oldp+59,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme3));
        tracep->fullCData(oldp+60,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme4),6);
        tracep->fullCData(oldp+61,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme5),4);
        tracep->fullBit(oldp+62,(vlSelf->Top__DOT__IDUInst__DOT__io_imme_imme6));
        tracep->fullSData(oldp+63,((0x7ffU & (IData)(vlSelf->Top__DOT__IDUInst__DOT___GEN_0))),11);
        tracep->fullQData(oldp+64,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_0),64);
        tracep->fullQData(oldp+66,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_1),64);
        tracep->fullQData(oldp+68,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_2),64);
        tracep->fullQData(oldp+70,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_3),64);
        tracep->fullQData(oldp+72,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_4),64);
        tracep->fullQData(oldp+74,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_5),64);
        tracep->fullQData(oldp+76,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_6),64);
        tracep->fullQData(oldp+78,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_7),64);
        tracep->fullQData(oldp+80,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_8),64);
        tracep->fullQData(oldp+82,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_9),64);
        tracep->fullQData(oldp+84,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_10),64);
        tracep->fullQData(oldp+86,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_11),64);
        tracep->fullQData(oldp+88,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_12),64);
        tracep->fullQData(oldp+90,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_13),64);
        tracep->fullQData(oldp+92,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_14),64);
        tracep->fullQData(oldp+94,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_15),64);
        tracep->fullQData(oldp+96,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_16),64);
        tracep->fullQData(oldp+98,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_17),64);
        tracep->fullQData(oldp+100,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_18),64);
        tracep->fullQData(oldp+102,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_19),64);
        tracep->fullQData(oldp+104,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_20),64);
        tracep->fullQData(oldp+106,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_21),64);
        tracep->fullQData(oldp+108,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_22),64);
        tracep->fullQData(oldp+110,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_23),64);
        tracep->fullQData(oldp+112,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_24),64);
        tracep->fullQData(oldp+114,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_25),64);
        tracep->fullQData(oldp+116,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_26),64);
        tracep->fullQData(oldp+118,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_27),64);
        tracep->fullQData(oldp+120,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_28),64);
        tracep->fullQData(oldp+122,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_29),64);
        tracep->fullQData(oldp+124,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_30),64);
        tracep->fullQData(oldp+126,(vlSelf->Top__DOT__RegFilesInst__DOT__regFiles_31),64);
        tracep->fullQData(oldp+128,(vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data1),64);
        tracep->fullQData(oldp+130,(vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_data2),64);
        tracep->fullQData(oldp+132,(vlSelf->Top__DOT__ALUInst__DOT__plusInst_io_result),64);
        tracep->fullQData(oldp+134,(vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_data2),64);
        tracep->fullBit(oldp+136,(vlSelf->Top__DOT__ALUInst__DOT__lessInst_io_result));
        tracep->fullQData(oldp+137,(vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_data2),64);
        tracep->fullQData(oldp+139,(vlSelf->Top__DOT__ALUInst__DOT__shiftInst_io_result),64);
        tracep->fullQData(oldp+141,(vlSelf->Top__DOT__ALUInst__DOT__src2),64);
        tracep->fullQData(oldp+143,(vlSelf->Top__DOT__ALUInst__DOT__plusResultTmp2),64);
        tracep->fullQData(oldp+145,(vlSelf->Top__DOT__ALUInst__DOT__plusResult),64);
        tracep->fullQData(oldp+147,(vlSelf->Top__DOT__ALUInst__DOT__andResult),64);
        tracep->fullQData(oldp+149,(vlSelf->Top__DOT__ALUInst__DOT__orResult),64);
        tracep->fullQData(oldp+151,(vlSelf->Top__DOT__ALUInst__DOT__xorResult),64);
        tracep->fullBit(oldp+153,(vlSelf->Top__DOT__ALUInst__DOT__equalResultTmp));
        tracep->fullBit(oldp+154,(vlSelf->Top__DOT__ALUInst__DOT__equalResult));
        tracep->fullBit(oldp+155,(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__unsignResult));
        tracep->fullBit(oldp+156,(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__signedResult));
        tracep->fullBit(oldp+157,(vlSelf->Top__DOT__ALUInst__DOT__lessInst__DOT__lessResult));
        tracep->fullQData(oldp+158,(vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT__data1),64);
        tracep->fullQData(oldp+160,((((QData)((IData)(
                                                      vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->Top__DOT__ALUInst__DOT__shiftInst__DOT___GEN_2[0U])))),64);
        tracep->fullQData(oldp+162,((0xfffffffffffffff8ULL 
                                     & vlSelf->Top__DOT__ALUInst_io_result)),64);
        tracep->fullQData(oldp+164,(vlSymsp->TOP__Top__DOT__MemCtrlInst__DOT__MemInst_data.rData),64);
        tracep->fullQData(oldp+166,((((QData)((IData)(
                                                      vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->Top__DOT__MemCtrlInst__DOT___wData_T_2[0U])))),64);
        tracep->fullCData(oldp+168,((0xffU & (IData)(vlSelf->Top__DOT__MemCtrlInst__DOT___GEN_2))),8);
        tracep->fullCData(oldp+169,(vlSelf->Top__DOT__MemCtrlInst__DOT__dataByte),8);
        tracep->fullSData(oldp+170,(vlSelf->Top__DOT__MemCtrlInst__DOT__dataHalf),16);
        tracep->fullIData(oldp+171,(vlSelf->Top__DOT__MemCtrlInst__DOT__dataWord),32);
        tracep->fullQData(oldp+172,(vlSelf->Top__DOT__MemCtrlInst__DOT__dataDoub),64);
        tracep->fullBit(oldp+174,(vlSelf->clock));
        tracep->fullBit(oldp+175,(vlSelf->reset));
        tracep->fullBit(oldp+176,(vlSelf->io_cpuEn));
        tracep->fullBit(oldp+177,(0U));
        tracep->fullQData(oldp+178,(0ULL),64);
        tracep->fullCData(oldp+180,(0U),8);
    }
}

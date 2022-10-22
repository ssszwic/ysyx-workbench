/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

enum {
  TYPE_R, TYPE_I, TYPE_S, TYPE_B, TYPE_U, TYPE_J, 
  TYPE_N, // none
};

#define src1R() do { *src1 = R(rs1); } while (0)
#define src2R() do { *src2 = R(rs2); } while (0)
#define immI() do { *imm = SEXT(BITS(i, 31, 20), 12); } while(0)
#define immS() do { *imm = (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); } while(0)
#define immB() do { *imm = (SEXT(BITS(i, 31, 31), 1) << 12) | (BITS(i, 7, 7) << 11) | \
                            (BITS(i, 30, 25) << 5) | (BITS(i, 11, 8) << 1); } while(0)
#define immU() do { *imm = SEXT(BITS(i, 31, 12), 20) << 12; } while(0)
#define immJ() do { *imm = (SEXT(BITS(i, 31, 31), 1) << 20) | (BITS(i, 19, 12) << 12) | \
                            (BITS(i, 20, 20) << 11) | (BITS(i, 30, 21) << 1); } while(0)



static void decode_operand(Decode *s, int *dest, word_t *src1, word_t *src2, word_t *imm, int type) {
  uint32_t i = s->isa.inst.val;
  int rd  = BITS(i, 11, 7);
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  *dest = rd;
  switch (type) {
    case TYPE_R: src1R(); src2R();         break;
    case TYPE_I: src1R();          immI(); break;
    case TYPE_S: src1R(); src2R(); immS(); break;
    case TYPE_B: src1R(); src2R(); immB(); break;
    case TYPE_U:                   immU(); break;
    case TYPE_J:                   immJ(); break;
    
  }
}

static int decode_exec(Decode *s) {
  int dest = 0;
  word_t src1 = 0, src2 = 0, imm = 0;
  // dnpc = snpc when executed sequentially
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
  decode_operand(s, &dest, &src1, &src2, &imm, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

  INSTPAT_START();

  /*----------------------------------------- R -----------------------------------------*/
  // add        add rd, rs1, rs2
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(dest) = src1 + src2);
  // add word   addw rd, rs1, rs2
  INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw   , R, R(dest) = SEXT(BITS(src1 + src2, 31, 0), 32));
  // sub        sub rd, rs1, rs2
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(dest) = src1 - src2);
  // sub word   subw rd, rs1, rs2
  INSTPAT("0100000 ????? ????? 000 ????? 01110 11", subw   , R, R(dest) = SEXT(BITS(src1 - src2, 31, 0), 32));
  // set less than
  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt    , R, R(dest) = ((int64_t) src1 < (int64_t) src2));
  // remainder word
  INSTPAT("0000001 ????? ????? 110 ????? 01110 11", remw   , R, R(dest) = SEXT((int32_t) BITS(src1, 31, 0) % (int32_t) BITS(src2, 31, 0), 32));

  /*----------------------------------------- I -----------------------------------------*/
  // load double word (8 byte)
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest) = Mr(src1 + imm, 8));
  // load single word (4 byte)
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(dest) = SEXT(Mr(src1 + imm, 4), 32));
  // junp and link register 
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, R(dest) = s->snpc; s->dnpc = (src1 + imm) & (~1));
  // add immediate  addi rd, rs1, imm[11:0]
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(dest) = src1 + imm);
  // add immediate word addiw rd, rs1, imm[11:0]
  INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw  , I, R(dest) = SEXT(BITS(src1 + imm, 31, 0), 32));
  // set less than immediate unsigned
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(dest) = (src1 < imm));
  // and immediate
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(dest) = src1 & imm);
  // shift left logical immediate
  INSTPAT("0000000 ????? ????? 001 ????? 00100 11", slli   , I, R(dest) = src1 << imm);

  /*----------------------------------------- S -----------------------------------------*/
  // store double word (8 byte)
  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + imm, 8, src2));
  
  /*----------------------------------------- B -----------------------------------------*/
  // branch equal  
  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, s->dnpc = (src1 == src2) ? (s->pc + imm) : s->snpc);
  // branch not equal  
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, s->dnpc = (src1 != src2) ? (s->pc + imm) : s->snpc);
  // branch less than
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B, s->dnpc = ((int64_t) src1 < (int64_t) src2) ? (s->pc + imm) : s->snpc);
  // branch greater than
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, s->dnpc = ((int64_t) src1 >= (int64_t) src2) ? (s->pc + imm) : s->snpc);

  /*----------------------------------------- U -----------------------------------------*/
  // load upper immediate
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(dest) = s->pc + imm);;

  /*----------------------------------------- J -----------------------------------------*/
  // jump and link
  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, R(dest) = s->snpc; s->dnpc = s->pc + imm; );
  
  /*----------------------------------------- N -----------------------------------------*/
  // environment bread (I type)   $a0 is status?
  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0

  // error instruction
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4); // static pc + 4
  return decode_exec(s);
}

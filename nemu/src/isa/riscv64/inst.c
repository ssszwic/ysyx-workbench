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
#include <elf.h>

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


#define MAX_FUNC_NAME_WIDTH 50
#define FUN_BUF_REF 100
#define FUNC_LIST_NUM 100
#define SINGLE_BUF_WIDTH 100

// ring buf
static char func_buf[FUN_BUF_REF][SINGLE_BUF_WIDTH] = {};
// ring buf ref
static int func_buf_ref = FUN_BUF_REF - 1;
// funciton list
struct func {
  int id;
  size_t size;
  vaddr_t start_addr;
  char name[MAX_FUNC_NAME_WIDTH];
};

// num of function list
static int ref = 0;

// function state  -2: not use  -1: use
static int func_state = -2; 

static struct func func_list[FUNC_LIST_NUM];

static int func_pc(vaddr_t addr);

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
  bool jump = false;
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
  
  // set less than unsigned
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(dest) = (src1 < src2));
  // remainder unsigned
  INSTPAT("0000001 ????? ????? 111 ????? 01100 11", remu   , R, R(dest) = src1 % src2);
  // remainder word
  INSTPAT("0000001 ????? ????? 110 ????? 01110 11", remw   , R, R(dest) = SEXT((int32_t) BITS(src1, 31, 0) % (int32_t) BITS(src2, 31, 0), 32));
  // remainder unsigned word
  INSTPAT("0000001 ????? ????? 111 ????? 01110 11", remuw  , R, R(dest) = SEXT((uint32_t) BITS(src1, 31, 0) % (uint32_t) BITS(src2, 31, 0), 32));
  // divide unsigned
  INSTPAT("0000001 ????? ????? 101 ????? 01100 11", divu   , R, R(dest) = src1 / src2); // no consider exceptions 1/0
  // divide word
  INSTPAT("0000001 ????? ????? 100 ????? 01110 11", divw   , R, R(dest) = SEXT((int32_t) BITS(src1, 31, 0) / (int32_t) BITS(src2, 31, 0), 32)); // no consider exceptions 1/0
  // multiply
  INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul    , R, R(dest) = src1 * src2);
  // multiply word
  INSTPAT("0000001 ????? ????? 000 ????? 01110 11", mulw   , R, R(dest) = SEXT((int32_t) BITS(src1, 31, 0) * (int32_t) BITS(src2, 31, 0), 32)); // no consider signed
  // shift left logical
  INSTPAT("0000000 ????? ????? 001 ????? 01100 11", sll    , R, R(dest) = src1 << BITS(src2, 5, 0));
  // shift left logical word
  INSTPAT("0000000 ????? ????? 001 ????? 01110 11", sllw   , R, R(dest) = SEXT(BITS(src1 << BITS(src2, 4, 0), 31, 0), 32));
  // shift right logical
  INSTPAT("0000000 ????? ????? 101 ????? 01100 11", srl    , R, R(dest) = src1 >> BITS(src2, 5, 0));
  // shift right logical word
  INSTPAT("0000000 ????? ????? 101 ????? 01110 11", srlw   , R, R(dest) = SEXT(BITS(BITS(src1, 31, 0) >> BITS(src2, 4, 0), 31, 0), 32));
  // shift right arithmetic word
  INSTPAT("0100000 ????? ????? 101 ????? 01110 11", sraw   , R, R(dest) = SEXT(BITS((int32_t) BITS(src1, 31, 0) >> BITS(src2, 4, 0), 31, 0), 32));
  // and
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(dest) = src1 & src2);
  // or
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(dest) = src1 | src2);
  // xor
  INSTPAT("0000000 ????? ????? 100 ????? 01100 11", xor    , R, R(dest) = src1 ^ src2);


  /*----------------------------------------- I -----------------------------------------*/
  // load double word (8 byte)
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest) = Mr(src1 + imm, 8));
  // load byte
  INSTPAT("??????? ????? ????? 000 ????? 00000 11", lb     , I, R(dest) = SEXT(BITS(Mr(src1 + imm, 1), 7, 0), 8));
  // load byte unsigned
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(dest) = BITS(Mr(src1 + imm, 1), 7, 0)); // default add 0 for uint64
  // load single word (4 byte)
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(dest) = SEXT(BITS(Mr(src1 + imm, 4), 31, 0), 32));
  // load single word unsigned (4 byte)
  INSTPAT("??????? ????? ????? 110 ????? 00000 11", lwu    , I, R(dest) = BITS(Mr(src1 + imm, 4), 31, 0));
  // load half word (2 byte)
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, R(dest) = SEXT(BITS(Mr(src1 + imm, 2), 15, 0), 16));
  // load half word unsigned (2 byte)
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, R(dest) = BITS(Mr(src1 + imm, 2), 15, 0));
  // junp and link register 
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, R(dest) = s->snpc; s->dnpc = (src1 + imm) & (~1); jump = true);

  // add immediate  addi rd, rs1, imm[11:0]
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(dest) = src1 + imm);
  // add immediate word addiw rd, rs1, imm[11:0]
  INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw  , I, R(dest) = SEXT(BITS(src1 + imm, 31, 0), 32));
  // set less than immediate unsigned
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(dest) = (src1 < imm));
  // and immediate
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(dest) = src1 & imm);
  // exclusive-or immediate
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(dest) = src1 ^ imm);
  // shift left logical immediate
  INSTPAT("000000? ????? ????? 001 ????? 00100 11", slli   , I, R(dest) = src1 << BITS(imm, 5, 0));
  // shift right arithmetic immediate
  INSTPAT("010000? ????? ????? 101 ????? 00100 11", srai   , I, R(dest) = (int64_t) src1 >> BITS(imm, 5, 0)); // convert to signed, all shift is logical for unsigned
  // shift right logical immediate
  INSTPAT("000000? ????? ????? 101 ????? 00100 11", srli   , I, R(dest) = src1 >> BITS(imm, 5, 0)); // all shift is logic for unsigned
  // shift left logical immediate word
  INSTPAT("0000000 ????? ????? 001 ????? 00110 11", slliw  , I, R(dest) = SEXT(BITS(src1 << BITS(imm, 4, 0), 31, 0), 32));
  // shift right logical immediate word
  INSTPAT("0000000 ????? ????? 101 ????? 00110 11", srliw  , I, R(dest) = SEXT(BITS(BITS(src1, 31, 0) >> BITS(imm, 4, 0), 31, 0), 32));
  // shift right arithmetic immediate word
  INSTPAT("0100000 ????? ????? 101 ????? 00110 11", sraiw  , I, R(dest) = SEXT(BITS((int32_t) BITS(src1, 31, 0) >> BITS(imm, 4, 0), 31, 0), 32));

  /*----------------------------------------- S -----------------------------------------*/
  // store double word (8 byte)
  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + imm, 8, src2));
  // store word (4 byte)
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + imm, 4, BITS(src2, 31, 0))); // uint64 -> uint32, when write pmem
  // store half word (2 byte)
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + imm, 2, BITS(src2, 15, 0)));
  // store byte
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + imm, 1, BITS(src2, 7, 0)));
  
  /*----------------------------------------- B -----------------------------------------*/
  // branch equal  
  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, s->dnpc = (src1 == src2) ? (s->pc + imm) : s->snpc);
  // branch not equal  
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, s->dnpc = (src1 != src2) ? (s->pc + imm) : s->snpc);
  // branch less than
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B, s->dnpc = ((int64_t) src1 < (int64_t) src2) ? (s->pc + imm) : s->snpc);
  // branch less than unsigned
  INSTPAT("??????? ????? ????? 110 ????? 11000 11", blt    , B, s->dnpc = (src1 < src2) ? (s->pc + imm) : s->snpc);
  // branch greater than
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, s->dnpc = ((int64_t) src1 >= (int64_t) src2) ? (s->pc + imm) : s->snpc);
  // branch greater than unsigned
  INSTPAT("??????? ????? ????? 111 ????? 11000 11", bgeu   , B, s->dnpc = (src1 >= src2) ? (s->pc + imm) : s->snpc);

  /*----------------------------------------- U -----------------------------------------*/
  // add upper immediate to pc
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(dest) = s->pc + imm);
  // load upper immediate
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(dest) = imm);

  /*----------------------------------------- J -----------------------------------------*/
  // jump and link
  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, R(dest) = s->snpc; s->dnpc = s->pc + imm; jump = true);

  /*----------------------------------------- N -----------------------------------------*/
  // environment bread (I type)   $a0 is status?
  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0

  // error instruction
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0
  // check function when first is or jal or jalr
  if (func_state == -2) {return 0;}
  char tmp[SINGLE_BUF_WIDTH] = {};
  int tmp_state;
  if(func_state == -1) {
    tmp_state = func_pc(s->snpc-4);
  }
  else if(jump) {
    tmp_state = func_pc(s->dnpc);
  }
  else {
    return 0;
  }

  if(func_state != tmp_state) {
    func_state = tmp_state;
    memset(func_buf[func_buf_ref] + 12, ' ', 6);
    if (++func_buf_ref == FUN_BUF_REF) {func_buf_ref = 0;}
    sprintf(tmp, "0x%08lx: ----> jump [%s\t@0x%08lx] ", s->snpc-4, func_list[func_state].name, func_list[func_state].start_addr);
    strcpy(func_buf[func_buf_ref], tmp);
  }

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4); // static pc + 4
  return decode_exec(s);
}

void init_elf(const char *file) {
  func_state = -1;
  FILE *fp;
	fp = fopen(file, "r");
	if (NULL == fp)
	{
		printf("fail to open the file\n");
		assert(0);
	}
  // analysis head
  Elf64_Ehdr elf_head;
	int a;
  int i, j;
  char name[MAX_FUNC_NAME_WIDTH] = {};
  ref = 0;

  // read head
	a = fread(&elf_head, sizeof(Elf64_Ehdr), 1, fp);
	if (0 == a) {assert(0);}

  if (elf_head.e_ident[0] != 0x7F ||
		elf_head.e_ident[1] != 'E' ||
		elf_head.e_ident[2] != 'L' ||
		elf_head.e_ident[3] != 'F')
	{
		printf("Not a ELF file\n");
		assert(0);
	}

  // 解析section 分配内存 section * 数量
	Elf64_Shdr *start1 = (Elf64_Shdr*)malloc(sizeof(Elf64_Shdr) * elf_head.e_shnum);
  if (NULL == start1) { assert(0);}
  Elf64_Shdr *shdr = start1;
  Elf64_Shdr *sym_shdr = NULL;
  Elf64_Shdr *str_shdr = NULL;
	
	// 设置fp偏移量 offset，e_shoff含义
	a = fseek(fp, elf_head.e_shoff, SEEK_SET);
	if (0 != a) {assert(0);}

	// 读取section 到 shdr, 大小为shdr * 数量
	a = fread(shdr, sizeof(Elf64_Shdr) * elf_head.e_shnum, 1, fp);
	if (0 == a) { assert(0);}

  // find symbol table
  for (i = 0; i < elf_head.e_shnum; i++) {
    if (shdr->sh_type == 2) {
      sym_shdr = shdr;
    }
    else if (shdr->sh_type == 3) {
      // get first resdult when there are 2 section (type is 3)
      // .strtab is right and .shstrtab is wrong
      if (str_shdr == NULL) {
        str_shdr = shdr;
      }
    }
    shdr++;
  }
  assert(sym_shdr && str_shdr);

  Elf64_Sym *start2 = (Elf64_Sym*)malloc(sym_shdr->sh_size);
  if (NULL == start2) { assert(0);}

  Elf64_Sym *sym = start2;
  int sym_num = sym_shdr->sh_size / 24;
  rewind(fp);
  fseek(fp, sym_shdr->sh_offset, SEEK_SET);
  a = fread(sym, sym_shdr->sh_size, 1,  fp);
	if (0 == a) { assert(0);}

  for(i = 0; i < sym_num; i++) {
    if ((sym->st_info & 0xf) == 2) {
      rewind(fp);
      a = fseek(fp, str_shdr->sh_offset + sym->st_name, SEEK_SET);
	    if (0 != a) {assert(0);}
      a = fread(name, MAX_FUNC_NAME_WIDTH, 1, fp);
	    if (0 == a) { assert(0);}
      for (j = 0; j < MAX_FUNC_NAME_WIDTH; j++) {
        if (name[j] == '\0') {break;}
      }
      if (j == MAX_FUNC_NAME_WIDTH) {
        printf("function name is too long!\n");
        name[j-10] = '\0';
        // assert(0);
      }
      // limit num of func list
      if(ref == FUNC_LIST_NUM) {
        printf("function is too much!\n");
        assert(0);
      }
      func_list[ref].id = ref;
      func_list[ref].start_addr = sym->st_value;
      func_list[ref].size = sym->st_size;
      strcpy(func_list[ref].name, name);
      ref++;
    }
    sym++;
  }
  free(start1);
  free(start2);
  start1 = NULL;
  start2 = NULL;
  fclose(fp);
}

void print_func_list() {
  printf("function num: %d\n", ref);
  for (int i = 0; i < ref; i++) {
    printf("id: %d\n", func_list[i].id);
    printf("name: \t\t%s\n", func_list[i].name);
    printf("size: \t\t%ld\n", func_list[i].size);
    printf("start addr: \t0x%016lx\n", func_list[i].start_addr);
    printf("\n");
  }
}

void print_func_log() {
  if(func_state == -2) {
    printf("No elf file\n");
    return;
  }
  else if(func_state == -1) {
    printf("No function trace, the program is not running or no jumps are occurring\n");
    return;
  }
  printf("\nfunction trace ring buff\n");
  for (int i = 0; i < FUN_BUF_REF; i++) {
    if (func_buf[i][0] == '\0') break;
    printf("%s\n", func_buf[i]);
  }
  printf("\n");
}

// pc in which function
static int func_pc(vaddr_t addr) {
  for (int i = 0; i < ref; i++) {
    if(addr == func_list[i].start_addr || ((addr >= func_list[i].start_addr) && (addr < (func_list[i].start_addr + func_list[i].size)))) {
      return i;
    }
  }
  printf("0x%08lx no funciton match!\n", addr);
  assert(0);
  return 0;
}
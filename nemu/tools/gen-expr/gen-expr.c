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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>
#include <math.h>

// this should be enough
int len = 0;
static char buf[65536] = {};        // buf is expression without '(unsigned)' to cast
static char buf_unsign[65536] = {}; // buf_unsign is expression with '(unsigned)' to cast
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

static int choose(int n) {
  return rand()%n;
}

static void gen_num() {
  int num;
  num = rand();
  char num_str[32] = {};
  char num_str_unsign[32] = {};
  if (choose(2)) {
    sprintf(num_str_unsign, "(unsigned)%d", num);
    sprintf(num_str, "%d", num);
    strcat(buf_unsign, num_str_unsign);
    strcat(buf, num_str);
  }
  else {
    sprintf(num_str_unsign, "(unsigned)0x%x", num);
    sprintf(num_str, "0x%x", num);
    strcat(buf_unsign, num_str_unsign);
    strcat(buf, num_str);
  }
  
}

static void gen_rand_op() {
  switch(choose(7)) {
    case 0: strcat(buf, "+"); strcat(buf_unsign, "+");break;
    case 1: strcat(buf, "-"); strcat(buf_unsign, "-");break;
    case 2: strcat(buf, "*"); strcat(buf_unsign, "*");break;
    case 3: strcat(buf, "/"); strcat(buf_unsign, "/");break;
    case 4: strcat(buf, "&&"); strcat(buf_unsign, "&&");break;
    case 5: strcat(buf, "=="); strcat(buf_unsign, "==");break;
    case 6: strcat(buf, "!="); strcat(buf_unsign, "!=");break;
    default: assert(0);
  }
}

static void gen_space() {
  if (choose(2)) {
    strcat(buf, " ");
    strcat(buf_unsign, " ");
    gen_space();
  }
}

static void gen_rand_expr() {
  // when len = 31, no more length increases
  if (len > 30) {
    gen_num();
  }
  else {
    switch(choose(3)) {
      case 0: gen_space(); gen_num(); gen_space(); break;
      case 1: 
        len = len + 2; gen_space(); strcat(buf, "("); strcat(buf_unsign, "("); gen_space(); gen_rand_expr(); 
        gen_space(); strcat(buf, ")"); strcat(buf_unsign, ")"); gen_space(); break;
      case 2: 
        len = len + 2; gen_space(); gen_rand_expr(); gen_space(); 
        gen_rand_op(); gen_space(); gen_rand_expr(); gen_space(); break;
      default: assert(0);
    }
  }
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    // clear buf
    buf[0] = '\0';
    buf_unsign[0] = '\0';
    len = 1;
    gen_rand_expr();

    // buf[0] = '\0';
    // buf_unsign[0] = '\0';
    // strcat(buf, "0x16");
    // strcat(buf_unsign, "0x16");
    
    sprintf(code_buf, code_format, buf_unsign);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    uint32_t result;
    if (fscanf(fp, "%u", &result) == 0) {
      assert(0);
    }

    printf("%u\n%s\n", result, buf);
  }
  return 0;
}

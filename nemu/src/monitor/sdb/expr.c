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

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

#include "stdlib.h"
#include "stdio.h"

enum {
  TK_NOTYPE = 256, TK_EQ = 200, TK_NOEQ = 201, TK_NUM = 202, TK_AND = 203,

  /* TODO: Add more token types */

};

static bool eval_success;

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},            // spaces
  {"\\+", '+'},                 // plus 75
  {"\\-", '-'},                 // sub  77
  {"\\*", '*'},                 // mul  74
  {"\\/", '/'},                 // div  79
  {"\\(", '('},                 // left Parentheses  72
  {"\\)", ')'},                 // right Parentheses  73
  {"&&", TK_AND},                 // right Parentheses
  {"!=", TK_NOEQ},                 // right Parentheses
  {"==", TK_EQ},                 // right Parentheses
  {"[0-9]+", TK_NUM},           // num (consider '-' when eval)

};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        // first char match successful
        // char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;        

        // Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
        //     i, rules[i].regex, position, substr_len, substr_len, substr_start);

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        if (rules[i].token_type != TK_NOTYPE) {
          // limit paramater num
          if (nr_token >= 32) {
            printf("paramaters are too much, must less than 32 at position %d\n%s\n%*.s^\n", position, e, position, "");
            return false;
          }
          // limit paramater length
          if (substr_len > 32) {
            printf("string is too long, must less than 32 at position %d\n%s\n%*.s^\n", position, e, position, "");
            return false;
          }
          tokens[nr_token].type = rules[i].token_type;
          strncpy(tokens[nr_token].str, e + position, substr_len);
          tokens[nr_token].str[substr_len] = '\0'; // clear old string
          nr_token ++;
        }

        position += substr_len;
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  return true;
}

static int eliminate_parentheses(char *str_parent) {
  // if (str_parent[0] == '\0') {
  //   return 0;
  // }
  int i = 0;
  int len = strlen(str_parent);
  if (len < 2) {
    return 0;
  }
  for (i = 0; i < len - 1; i++) {
    if (str_parent[i] == '(' && str_parent[i+1] == ')') {
      break;
    }
  }
  // no eliminate parentheses
  if (i == strlen(str_parent)) {
    return 0;
  }
  // delate first '()'
  int j = 0;
  for (j = i; j < strlen(str_parent) - 2; j++) {
    str_parent[j] = str_parent[j+2];
  }
  str_parent[j] = '\0';
  return eliminate_parentheses(str_parent);
}

static bool check_parentheses(int p, int q) {
  char str_parent[40];
  int index = 0;

  for (int i = p; i <= q; i++) {
    if (tokens[i].type == '(' || tokens[i].type == ')') {
      str_parent[index++] = tokens[i].type;
    }
  }
  str_parent[index] = '\0';

  eliminate_parentheses(str_parent);
  // unmatched parentheses in token
  if (strlen(str_parent) == 0) {
    return true;
  }
  else {
    return false;
  }
}

static uint32_t eval(int p, int q) {
  // print tokens
  // printf("tkoens: ");
  // for (int i = p; i <= q; i++) {
  //   printf("%s", tokens[i].str);
  // }
  // printf("\n");

  if (p > q) {
    /* Bad expression */
    printf("p > q");
    assert(0);
  }

  // only one tokens
  if (p == q) {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
    // check paramater type, it must be num
    if (tokens[q].type != TK_NUM) {
      printf("error! single token must be num.\n");
      eval_success = false;
      return 0;
    }
    return strtoul(tokens[q].str, NULL, 10);
  }

  // check parentheses
  if (!check_parentheses(p, q)) {
    printf("error! parentheses token must be matched.\n");
    eval_success = false;
    return 0;
  }

  // The expression is surrounded by a matched pair of parentheses
  if ( tokens[p].type == '(' ) {
    // expression is ()
    if ((p + 1) == q) {
      printf("error! there must be an expression in the parentheses.\n");
      eval_success = false;
      return 0;
    }
    // The expression is surrounded by a matched pair of parentheses
    if (check_parentheses(p + 1, q - 1)) {
      return eval(p + 1, q - 1);
    }
  }

  // op = the position of 主运算符 in the token expression
  int op = -1; // -1 means no operator
  int i = p;
  int j = 0;
  while (i <= q) {
    switch(tokens[i].type) {
      case '(': {
        j = i + 1;
        while (!check_parentheses(p, j)) j++;
        i = j + 1;
        break;
      }
      case TK_AND: {
        op = i;
        i ++;
        break;
      }
      case TK_EQ: {
        if (op == -1 || (op != -1 && tokens[op].type != TK_AND)) {
          op = i;
        }
        i ++;
        break;
      }
      case TK_NOEQ: {
        if (op == -1 || (op != -1 && tokens[op].type != TK_AND)) {
          op = i;
        }
        i ++;
        break;
      }
      case '+': {
        if (op == -1 || (op != -1 && tokens[op].type != TK_AND && 
            tokens[op].type != TK_EQ && tokens[op].type != TK_NOEQ)) {
          op = i;
        }
        i ++;
        break;
      }
      case '-': {
        if (op == -1 || (op != -1 && tokens[op].type != TK_AND && 
            tokens[op].type != TK_EQ && tokens[op].type != TK_NOEQ)) {
          op = i;
        }
        i ++;
        break;
      }
      case '*': {
        if (op == -1 || 
            (op != -1 && tokens[op].type != TK_AND && tokens[op].type != TK_EQ && 
            tokens[op].type != TK_NOEQ && tokens[op].type != '+' && tokens[op].type != '-')) {
          op = i;
        }
        i ++;
        break;
      }
      case '/': {
        if (op == -1 || 
            (op != -1 && tokens[op].type != TK_AND && tokens[op].type != TK_EQ && 
            tokens[op].type != TK_NOEQ && tokens[op].type != '+' && tokens[op].type != '-')) {
          op = i;
        }
        i ++;
        break;
      }
      case TK_NUM: {
        i ++;
        break;
      }
      default: assert(0);
    }
  }

  // no op in expression
  if (op == -1) {
    printf("error! there must be an op between expression.\n");
    eval_success = false;
    return 0;
  }

  // if op on the edge, only '-' on left is allowed
  if ((op == p) || (op == q)) {
    if ((op == p) && (tokens[op].type == '-')) {
      return -eval(p + 1, q);
    }
    printf("error! the op isn't matched.\n");
    eval_success = false;
    return 0;
  }

  // cal
  switch (tokens[op].type) {
    case '+': return eval(p, op - 1) + eval(op + 1, q);
    case '-': return eval(p, op - 1) - eval(op + 1, q);
    case '*': return eval(p, op - 1) * eval(op + 1, q);
    case '/': {
      uint32_t tmp = eval(op + 1, q) == 0;
      if (tmp == 0) {
        if (!eval_success) {
          return 0;
        }
        printf("error! the divisor cannot be 0.\n");
        eval_success = false;
        return 0;
      }
      else {
        return eval(p, op - 1) / tmp;
      }
    }
    case TK_AND: return eval(p, op - 1) && eval(op + 1, q);
    case TK_EQ: return eval(p, op - 1) == eval(op + 1, q);
    case TK_NOEQ: return eval(p, op - 1) != eval(op + 1, q);
    default: assert(0);
  }

  return 0;
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  eval_success = true;
  uint32_t result = eval(0, nr_token-1);
  if (eval_success) {
    printf("%u\n", result);
  }

  // test for expression
  // type any valid expression to starttest
  FILE *fp = fopen("/home/ssszw/Work/ysyx-workbench/nemu/tools/gen-expr/input", "r");
  uint32_t test_result = 0;
  char test_str[40] = {};
  char buf[1000] = {};
  int i = 0;
  while (1) {
    if (fgets(test_str, sizeof(test_str), fp) == NULL) {
      break;
    }
    
    if (fgets(buf, sizeof(buf), fp) == NULL) {
      break;
    }
    // delate \n
    buf[strlen(buf) - 1] = '\0';
    if (!make_token(buf)) {
      printf("matched failed! at %d\n", i);
      break;
    }
    eval_success = true;
    test_result = eval(0, nr_token-1);
    if(!eval_success || (test_result != strtoul(test_str, NULL, 10))) {
      printf("cal error at %d\n", i);
      printf("expression: %s\n", buf);
      printf("cal result: %u\n", test_result);
      printf("real result: %lu\n", strtoul(test_str, NULL, 10));
      printf("\n");
    }
    printf("cal result: %u\n", test_result);
    printf("real result: %lu\n", strtoul(test_str, NULL, 10));
    i++;
  }
  fclose(fp);

  return 0;
}

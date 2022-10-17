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

enum {
  TK_NOTYPE = 256, TK_EQ, TK_NUM = 102,

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
  {"\\+", '+'},                 // plus
  {"\\-", '-'},                 // sub
  {"\\*", '*'},                 // mul
  {"\\/", '/'},                 // div
  {"\\(", '('},                 // left Parentheses
  {"\\)", ')'},                 // right Parentheses
  {"[0-9]+\\.?[0-9]+?", TK_NUM},  // num (consider '-' when eval)
  {"==", TK_EQ},                // equal
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
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;        

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

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

static bool eliminate_parentheses(char *str_parent) {
  int i = 0;
  for (i = 0; i < strlen(str_parent) - 1; i++) {
    if (str_parent[i] == '(' && str_parent[i+1] == ')') {
      break;
    }
  }
  int j = 0;
  for (j = i; j < strlen(str_parent) - 2; j++) {
    str_parent[j] = str_parent[j+2];
  }
  // no eliminate parentheses
  if (j == (strlen(str_parent) - 1)) {
    return 0;
  }
  else {
    str_parent[j+1] = '\0';
    return eliminate_parentheses(str_parent);
  }
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

static float eval(int p, int q) {
  // print tokens
  // printf("tkoens:\n");
  // for (int i = 0; i <= d; i++) {
  //   printf("%c: %s\n", tokens[i].type, tokens[i].str);
  // }

  printf("%d\n", check_parentheses(p, q));

  // if (p > q) {
  //   /* Bad expression */
  //   printf("p > q");
  //   assert(0);
  // }
  // else if (p == q) {
  //   /* Single token.
  //    * For now this token should be a number.
  //    * Return the value of the number.
  //    */
  //   // check paramater type, it must be num
  //   if (tokens[q].type != TK_NUM) {
  //     printf("error! single token must be num.");
  //     eval_success = false;
  //     return 0;
  //   }
  //   return strod(tokens[q].str, NULL);
  // }
  // else if (check_parentheses(p, q) == true) {
  //   /* The expression is surrounded by a matched pair otokensf parentheses.
  //    * If that is the case, just throw away the parentheses.
  //    */
  //   return eval(p + 1, q - 1);
  // }
  // else {
  //   /* We should do more things here. */
  //   switch(tokens[p].type) {
  //     case '+': 
  //       return eval(p + 1, q);
  //     case '-': {
  //       if (tokens[p+1].type == '(') {
  //         return -eval(p + 1, q);
  //       }
  //       else if(tokens[p+1].type == TK_NUM) {
  //         return ;
  //       }
  //     }

  //   }

  // }

  return 0;
}


word_t expr(char *e, bool *success) {
  printf("%s\n", e);
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  eval_success = true;
  eval(0, nr_token-1);

  /* TODO: Insert codes to evaluate the expression. */
  

  return 0;
}

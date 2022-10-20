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

#include "sdb.h"

#define NR_WP 32
#define EXPR_LEN 300 // expression string max length

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */
  char expr_str[EXPR_LEN];


} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void print_wb() {
  WP* tmp = head;
  if (tmp == NULL) {
    printf("No watchpoints!\n");
    return ;
  }
  while(tmp->next != NULL) {
    printf("id: %-2d    expression: %s\n", tmp->NO, tmp->expr_str);
  }
}

void new_wp(char *expr) {
  if (expr == NULL) {
    printf("set watchpoint failed! no expression!\n");
    return ;
  }
  if (strlen(expr) > EXPR_LEN) {
    printf("set watchpoint failed! expression too long (greater %d)!\n", EXPR_LEN);
    return ;
  }
  // delate wp at the begining of free_
  WP* tmp = free_;
  free_ = free_->next;
  // add new wp at the beginning of head
  tmp->next = head;
  head = tmp;
  strcpy(head->expr_str, expr);
}

void free_wp(int id) {
  if (id < 0 || id >= NR_WP) {
    printf("free watchpoint failed! id %d out of range.\n", id);
    return ;
  }
  WP* wp = &wp_pool[id];
  WP* tmp = head;
  if (tmp == NULL) {
    printf("No find in watchpoints!\n");
    return ;
  }
  // head is wp will be delated
  if (tmp == wp) {
    // delate wp in head
    head = head->next;
    // add wp at the beginning of free_
    tmp->next = free_;
    free_ = tmp;
    return ;
  }
  while(tmp->next != NULL) {
    if (tmp->next == wp) {
      // delate wp in head
      tmp->next = wp->next;
      // add wp at the beginning of free_
      wp->next = free_;
      free_ = tmp;
      return ;
    }
  }
  printf("No find in watchpoints!\n");
  return ;
}

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
    wp_pool[i].expr_str[0] = '\0';
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */


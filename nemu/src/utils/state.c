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

#include <utils.h>

NEMUState nemu_state = { .state = NEMU_STOP };

int is_exit_status_bad() {
  // when type 'q' without run 'c', nemu_state.state = NEMU_STOP, return 1
  // int good = (nemu_state.state == NEMU_END && nemu_state.halt_ret == 0) ||
  //   (nemu_state.state == NEMU_QUIT);

  // ssszw change 2022.1016
  // allow program to exit when STOP state
  int good = (nemu_state.state == NEMU_END && nemu_state.halt_ret == 0) ||
    (nemu_state.state == NEMU_QUIT) || (nemu_state.state == NEMU_STOP && nemu_state.halt_ret == 0);
  // end change
  printf("return\n");
  return !good;
}

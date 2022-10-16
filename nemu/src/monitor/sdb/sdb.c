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
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  // using prompt as a prompt
  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  // run client program is until the end of program
  cpu_exec(-1);
  return 0;
}

static int cmd_q(char *args) {
  return -1;
}

static int cmd_help(char *args);

static int cmd_si(char *args);

static int cmd_info(char *args);

static int cmd_x(char *args);

static int info_reg();

static int info_watch();

static struct {
  const char *name;
  const char *description;
  // funciton
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },

  /* TODO: Add more commands */
  { "si", "Execute N instructions in a singel step, default 1", cmd_si},
  { "info", "Print program state, reg (r): reg status; watch (w): watch state", cmd_info},
  { "x", "Print consecutive N data from the address, default 1 data", cmd_x},

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    // print cmd_table (help information)
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

// ssszw add funciton 2022.10.16
static int cmd_si(char *args) {
  int n;
  // N=1 when no extra argument
  if (args == NULL) {
    n = 1;
  }
  else {
    // N=1 when argument is space('  ')
    char *first = strtok(args, " ");
    if (first == NULL) {
      n = 1;
    }
    else {
      // string to int
      n = atoi(args);
    }
  }
  // N > 0
  if (n <= 0) {
    printf("Invalid input, N must be greater than 0\n");
    return 0;
  }
  cpu_exec(n);
  return 0;
}

static int cmd_info(char *args) {
  // no extra argument
  if (args == NULL) {
    printf("You must type info object, reg (r): reg status; watch (w): watch state\n");
    return 0;
  }
  else {
    char *first = strtok(args, " ");
    if (first == NULL) {
      // argument is space('  ')
      printf("You must type info object, reg (r): reg status; watch (w): watch state\n");
      return 0;
    }
    else if ((strcmp(first, "r") == 0) || (strcmp(first, "reg") == 0)) {
      info_reg();
    }
    else if ((strcmp(first, "w") == 0) || (strcmp(first, "watch") == 0)) {
      info_watch();
    }
    else {
      printf("Invalid argument, only 'reg' and 'watch' are acceptable\n");
    }
  }
  return 0;
}

static int cmd_x(char *args) {
  // printf("%s\n", args);
  // char *first = NULL;
  // char *second = NULL;
  // // no extra argument
  // if (args == NULL) {
  //   printf("You must specify memory address\n");
  //   return 0;
  // }
  // else {
  //   char *args_end = args + strlen(args);
  //   first = strtok(args, " ");
  //   if (first == NULL) {
  //     // argument is space('  ')
  //     printf("You must specify memory address\n");
  //     return 0;
  //   }
  //   char *tmp = first + strlen(first) + 1;
  //   if (tmp <= args_end) {
  //     // there is no second argument
  //     second = strtok(tmp, " ");
  //   }
  // }

  // paddr_t addr;
  // int num;
  // // only 1 argument
  // if (second == NULL) {
  //   sscanf(first, "%x", &addr);
  // }
  // else {
  //   printf("%d\n", sscanf(first, "%d", &num));
  //   printf("%d\n", sscanf(second, "%x", &addr));
  // }

  // paddr_t addr;
  // int num;
  // printf("%d\n", sscanf(args, "%d[^ ]%x", &num, &addr));
  // printf("%d\n", num);
  // printf("%x\n", addr);
  // no extra argument
  if (args == NULL) {
    printf("You must specify memory address\n");
    return 0;
  }
  char first[100] = {};
  char second[100] = {};
  int args_num = sscanf(args, "%s %s", first, second);
  // argument is space('  ')
  if(args_num == 0) {
    printf("You must specify memory address\n");
    return 0;
  }

  char num_str[100] = {};
  char addr_str[100] = {};

  int num;
  paddr_t addr;

  sscanf(first, "%[0-9]", num_str);
  printf("%s", num_str);
  if (strlen(num_str) != strlen(first)) {
    printf("Num must be integer greater than 0\n");
    return 0;
  }
  sscanf(num_str, "%d", &num);

  sscanf(second, "%[0-9]", addr_str);
  printf("%s", addr_str);
  if (strlen(addr_str) < (strlen(second) - 1)) {
    printf("Addr must be hexadecimal integer\n");
    return 0;
  }
  sscanf(addr_str, "%x", &addr);





  printf("%d\n", num);
  printf("%x\n", addr);


  // printf("%s\n", strlen(first));
  // printf("%s\n", strlen(second));




  // if (num != NULL) {
  //   printf("%d\n", *num);
  // }
  // printf("%x\n", addr);
  


  return 0;
}

static int info_reg() {
  isa_reg_display();
  return 0;
}

static int info_watch() {
  printf("watch not done\n");
  return 0;
}
// end

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }
  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    // get first string separated space
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    // args points to the remaining string separated of the input
    char *args = cmd + strlen(cmd) + 1;
    // there is no 2nd string
    if (args >= str_end) {
      args = NULL;
    }
#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif
    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        // the remaining string is used as argument to the function
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    // there is no matching com
    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}

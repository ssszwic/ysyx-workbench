#include "cpu/cpu.h"
#include <readline/readline.h>
#include <readline/history.h>
#include "mem/mem.h"

#define NR_CMD ARRLEN(cmd_table)
#define MAX_EXPR_LENGTH 100

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();
void print_wb();
void free_wp(int id);
uint64_t expr(char *e, bool *success);
void new_wp(char *expr, word_t result);
uint64_t isa_reg_str2val(const char *s, bool *success);
void isa_reg_display();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  // using prompt as a prompt
  line_read = readline("(npc) ");

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

static int cmd_watch(char *args);

static int cmd_delate(char *args);

static int cmd_f(char *args);

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
  { "x", "Print consecutive N uint8_t data from the address, default 1 data", cmd_x},
  { "w", "Add watch point.", cmd_watch},
  { "d", "Delate specified watchpoint", cmd_delate},
  { "f", "printf function calls", cmd_f},
};

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
  if (args == NULL) {
    printf("You must specify memory address\n");
    return 0;
  }

  char expr_str[300] = {};
  // uint8_t num default: 1
  int len = 1;

  int args_num = sscanf(args, "%*[\"]%[^\"]%*[\"]%d", expr_str, &len);
  if (args_num == 0) {
    // argument is space('  ')
    printf("You must specify memory address\n");
    return 0;
  }
  else if (args_num == 1) {
    // only one argument
    len = 1;
  }
  
  bool success;
  uint64_t addr = expr(expr_str, &success);
  if (!success) {
    printf("error! expression invalid.\n");
    return 0;
  }
  // read nemu member
  uint8_t* host_addr = guest_to_host(addr);

  printf("0x%016lx: ", addr);
  int i;
  for (i = 0; i < len; i++) {
    // little endian for riscv64
    printf("0x%02x ", *host_addr);
    host_addr++;
  }
  printf("\n");

  return 0;
}

static int info_reg() {
  isa_reg_display();
  return 0;
}

static int info_watch() {
  print_wb();
  return 0;
}

static int cmd_watch(char *args) {
  if (args == NULL) {
    printf("You must specify expression.\n");
    return 0;
  }
  char expr_str[300] = {};

  int args_num = sscanf(args, "%*[\"]%[^\"]%*[\"]", expr_str);
  if (args_num == 0) {
    // argument is space('  ')
    printf("You must specify expression.\n");
    return 0;
  }

  bool success;
  uint64_t result = expr(expr_str, &success);
  if (!success) {
    printf("error! expression invalid.\n");
    return 0;
  }
  new_wp(expr_str, result);
  return 0;
}

static int cmd_delate(char *args) {
  if (args == NULL) {
    printf("You must specify watchpoint id.\n");
    return 0;
  }
  int id;

  int args_num = sscanf(args, "%d", &id);
  if (args_num == 0) {
    // argument is space('  ')
    printf("You must specify watchpoint id.\n");
    return 0;
  }
  free_wp(id);
  return 0;
}

static int cmd_f(char *args) {
  #ifdef CONFIG_FUNCTION_TRACE
  print_func_log();
  return 0;
  #endif
  printf("function is closed in menuconfig.\n");
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }
  char expr_str[MAX_EXPR_LENGTH] = {};
  for (char *str; (str = rl_gets()) != NULL; ) {
    // copy str to expr_str for expression
    expr_str[0] = '\0';
    if (strlen(str) > MAX_EXPR_LENGTH) {
      printf("the string type is too long.\n");
      assert(0);
    }
    strcpy(expr_str, str);

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

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        // the remaining string is used as argument to the function
        // when cmd return value less 0, return
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    // there is no matching cmd
    if (i == NR_CMD) { 
      // if no matched cmd, consider it as expression
      bool success = true;
      uint64_t expr_result = expr(expr_str, &success);

      if (! success) {
        printf("Unknown command '%s'\n", cmd); 
      }
      else {
        printf("%lu\n", expr_result);
      }
    }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoinNULLt pool. */
  init_wp_pool();
}

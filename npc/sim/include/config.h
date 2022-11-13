#ifndef __CONFIG_H__
#define __CONFIG_H__

// switch
#define CONFIG_WAVE
// #define CONFIG_ITRACE
#define CONFIT_WATCHPOINT //depend CONFIG_ITRACE
#define CONFIG_MEMORY_TRACE
#define CONFIG_FUNCTION_TRACE
#define CONFIG_DIFFTEST

// mem
#define CONFIG_MSIZE 0x8000000
#define CONFIG_MBASE 0x80000000

#endif
#ifndef __CONFIG_H__
#define __CONFIG_H__

// switch
#define CONFIG_WAVE_ON
#define CONFIG_ITRACE
#define CONFIT_WATCHPOINT //depend CONFIG_ITRACE
#define CONFIG_MEMORY_TRACE
#define CONFIG_FUNCTION_TRACE

// mem
#define CONFIG_MSIZE 0x8000000
#define CONFIG_MBASE 0x80000000

#endif
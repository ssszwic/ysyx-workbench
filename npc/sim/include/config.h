#ifndef __CONFIG_H__
#define __CONFIG_H__


// must define 1 or 0 if use IFDEF...
// switch
// #define CONFIG_WAVE             1
// #define CONFIG_ITRACE           1
// #define CONFIT_WATCHPOINT       1//depend CONFIG_ITRACE
// #define CONFIG_MEMORY_TRACE     1
// #define CONFIG_FUNCTION_TRACE   1
// #define CONFIG_DIFFTEST         1
// #define STATISTIC               1
// #define PRINT_CPU_TIME          1


#define CONFIG_DEVICE           1
#define CONFIG_HAS_SERIAL       1
#define CONFIG_HAS_TIMER        1
// #define CONFIG_HAS_KEYBOARD     1
// #define CONFIG_HAS_VGA          1

// mem
#define CONFIG_MSIZE 0x8000000
#define CONFIG_MBASE 0x80000000

// device
#define CONFIG_SERIAL_MMIO      0xa00003f8
#define CONFIG_TIMER_MMIO       0xa0000048
#define CONFIG_I8042_DATA_MMIO  0xa0000080
#define CONFIG_VGA_CTL_MMIO     0xa0000100
#define CONFIG_FB_ADDR          0xa1000000

#endif
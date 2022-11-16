#ifndef __CONFIG_H__
#define __CONFIG_H__

// switch
// #define CONFIG_WAVE
// #define CONFIG_ITRACE
// #define CONFIT_WATCHPOINT //depend CONFIG_ITRACE
// #define CONFIG_MEMORY_TRACE
// #define CONFIG_FUNCTION_TRACE
// #define CONFIG_DIFFTEST
// #define STATISTIC


// #define CONFIG_DEVICE
// #define CONFIG_HAS_SERIAL
// #define CONFIG_HAS_TIMER
// #define CONFIG_HAS_KEYBOARD
// #define CONFIG_HAS_VGA

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
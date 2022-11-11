#ifndef __LOG_H__
#define __LOG_H__

void log_init(char *file);
void log_exit();
void log_write(const char *fmt, ...);

#endif
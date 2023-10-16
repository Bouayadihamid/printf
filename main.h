#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>

void print_char(va_list args);
void print_string(va_list args);
void print_percent(void);
int _printf(const char *format, ...);
int _putchar(char c);

#endif /* MAIN_H */

#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char c);
int printf_char(va_list args, int count);
int printf_string(va_list args, int count);
int printf_integer(va_list args, int count);
int selector(const char *format, va_list args);
int printf_binary(unsigned int num, int count);
int _printf(const char *format, ...);
int _h(unsigned int num, int count, int uppercase);
int printf_octal(unsigned int num, int count);
int printf_unsigned(unsigned int num, int count);
int printf_sreverse(va_list args, int count);
int printf_pointer(va_list args, int count);
int handle_unknown_specifier(const char **format);
int printf_decimal(int n);
int print_integer(int n);

#endif

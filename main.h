#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>



/**
 * struct format - the conversion
 * @f: pointer
 * @id: char pointer
 */

typedef struct format
{
	char *id;
	int (*f)();
} conver_t;

int printf_pointer(va_list var);
int printf_h_a(unsigned long int num);
int printf_H_a(unsigned int num);
int printf_ex_Str(va_list var);
int printf_H(va_list var);
int printf_h(va_list var);
int printf_octal(va_list var);
int printf_unsigned(va_list args);
int printf_binary(va_list var);
int printf_sreverse(va_list args);
int printf_rot13(va_list args);
int printf_integer(va_list args);
int printf_declaretion(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int rev_string(char *s);
int _strlenc(const char *s);
int printf_37(void);
int printf_char(va_list var);
int printf_string(va_list var);
int _putchar(char c);
int _printf(const char *format, ...);

#endif

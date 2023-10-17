#include "main.h"

/**
 * _printf - implementation of the inbuilt printf
 * @format: the format specifier
 * Return: the formated string
 */

int _printf(const char *format, ...)
{
	int count = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			count = selector(format, args, count);
			format++;
		}
		else
		{
			_putchar(*format);
			count++;
			format++;
		}
	}
	va_end(args);
	return (count);
}

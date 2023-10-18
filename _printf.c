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

	if (!format)
	{
		return (-1);
	}
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
			{
				return (-1);
			}
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

#include "main.h"

/**
 * _printf - is a function that prints
 * @format: is a pointer to format
 * Return: the string
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					print_char(args);
					count++;
					break;
				case 's':
					print_string(args);
					break;
				case '%':
					print_percent();
					count++;
					break;
				default:
					_putchar('%');
					count++;
					break;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

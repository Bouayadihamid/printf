#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: format specifier
 * Return: string of format
 */
int _printf(const char *format, ...)
{
	int printed = 0;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			printed++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				printed++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(args, int);

				write(1, &c, 1);
				printed++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char*);
				int str_len = 0;
			write(1, str, str_len);
			printed += str_len;
			}
		}
		format++;
	}
	va_end(args);
	return (printed);
}

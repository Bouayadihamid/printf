#include "main.h"

/**
 * selector - selects the appropriate specifiers
 * @args: number of arguements
 * @format: the format specifier
 * Return: printed charcaters
 */

int selector(const char *format, va_list args)
{
	/* unsigned int num;*/
	int count = 0;

	switch (*format)
	{
		case 'd':
		case 'i':
		/*	count = printf_integer(args, format, count);*/
			break;
		case 'c':
			count += _putchar(va_arg(args, int));
			break;
		case 's':
			count += printf_string(args, count);
			break;
		case '%':
			_putchar('%');
			count++;
			break;
		case 'b':
			count = printf_binary(va_arg(args, unsigned int), count);
			break;
		case 'x':
		case 'X':
			count = _h(va_arg(args, unsigned int), count, (*format == 'X') ? 1 : 0);
			break;
		case 'o':
			count = printf_octal(va_arg(args, unsigned int), count);
			break;
		default:

			write(1, "%", 1);
			_putchar(*format);
			count += 2;
			break;
	}
	return (count);
}

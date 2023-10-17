#include "main.h"

/**
 * selector - selects the appropriate specifiers
 * @args: number of arguements
 * @count: the printed characters
 * @format: the format specifier
 * Return: printed charcaters
 */

int selector(const char *format, va_list args, int count)
{
	switch (*format)
	{
		case 'd':
		case 'i':
			count = printf_integer(args, count);
			break;
		case 'c':
			_putchar(va_arg(args, int));
			count++;
			break;
		case 's':
			count = printf_string(args, count);
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
		case 'u':
			count = printf_unsigned(va_arg(args, unsigned int), count);
			break;
		case 'r':
			count = printf_sreverse(args, count);
			break;
		case 'p':
			count = printf_pointer(args, count);
			break;
		default:
			count = handle_unknown_specifier(&format);
			break;
	}
	return (count);
}

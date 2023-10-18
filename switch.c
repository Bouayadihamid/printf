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
	/* unsigned int num;*/

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
		/*	num = va_arg(args, unsigned int);*/
		/*	count += printf_unsigned(num);*/
			break;
		case 'p':
			count = printf_pointer(args, count);
			break;
		default:

			write(1, "%", 1);
			_putchar(*format);
			count += 2;
			break;
	}
	return (count);
}

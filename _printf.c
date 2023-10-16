#include "main.h"
/**
 * _printf - selects function to print.
 * @format: identifier
 * Return: str len
 */
int _printf(const char * const format, ...)
{
	conver_t m[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_37},
		{"%i", printf_integer}, {"%d", printf_declaretion}, {"%r", printf_sreverse},
		{"%R", printf_rot13}, {"%b", printf_binary}, {"%u", printf_unsigned},
		{"%o", printf_octal}, {"%x", printf_h}, {"%X", printf_H},
		{"%S", printf_ex_Str}, {"%p", printf_pointer}
	};
	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}

#include "main.h"

/**
 *handle_unknown_specifier- is a function
 *
 *@format: is the format
 *@args: arguments
 *
 *Return: return -1
 */

int handle_unknown_specifier(const char **format)
{
	const char *start = *format;
	int length;

	while (**format && **format != '%')
	{
		(*format)++;
	}
	length = *format - start;
	
	_printf("Unknown:[");
	while (length > 0)
	{
		_putchar(*start);
		start++;
		length--;
	}
	_printf("]\n");
	return (length);
}

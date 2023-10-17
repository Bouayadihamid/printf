#include "main.h"

/**
 *handle_unknown_specifier- is a function
 *
 *@format: is the format
 *
 *Return: return -1
 */

int handle_unknown_specifier(const char **format)
{
	_putchar('%');
	_putchar(**format);
	(*format)++;
	return (2);
}

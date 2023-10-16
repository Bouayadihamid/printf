#include "main.h"

/**
 * printf_char - function for a char.
 * @var: arguments.
 * Return: 1.
 */
int printf_char(va_list var)
{
	char s;

	s = va_arg(var, int);
	_putchar(s);
	return (1);
}

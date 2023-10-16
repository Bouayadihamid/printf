#include "main.h"

/**
 * printf_string - function for string.
 * @var: argument.
 * Return: the len of string.
 */

int printf_string(va_list var)
{
	char *s;
	int i, len;

	s = va_arg(var, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}

#include "main.h"

/**
 * printf_ex_Str- print ex string.
 * @var: argument.
 * Return: the len string.
 */

int printf_ex_Str(va_list var)
{
	char *s;
	int i, len = 0, cast;

	s = va_arg(var, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			cast = s[i];
			if (cast < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + printf_H_a(cast);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}

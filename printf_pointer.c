#include "main.h"
/**
 * printf_pointer - prints an hex pointer
 * @var: args
 * Return: count
 */
int printf_pointer(va_list var)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b, i;

	p = va_arg(var, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = printf_h_a(a);
	return (b + 2);
}

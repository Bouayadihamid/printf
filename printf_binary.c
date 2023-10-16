#include "main.h"

/**
 * printf_binary - prints binary number.
 * @var: arguments.
 * Return: 1.
 */
int printf_binary(va_list var)
{
	int flag = 0, cont = 0, i, a = 1, b;
	unsigned int num = va_arg(var, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}

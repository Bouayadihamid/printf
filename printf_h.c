#include "main.h"
/**
 * printf_h - prints a binary
 * @num: num args
 * @count: print char
 * @uppercase: uppercase
 * Return: print char
 */
int printf_h(unsigned int num, int count, int uppercase)
{
	int hex[100], i = 0, j;

	while (num != 0)
	{
		int rem = num % 16;

		if (rem < 10)
			hex[i] = 48 + rem;
		else
		{
			if (uppercase)
				hex[i] = 65 + (rem - 10);
			else
				hex[i] = 97 + (rem - 10);
		}
		i++;
		num /= 16;
	}
	if (i == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(hex[j]);
			count++;
		}
	}
	return (count);
}

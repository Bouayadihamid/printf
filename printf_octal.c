#include "main.h"
/**
 * printf_octal - prints a binary
 * @num: num args
 * @count: print char
 * Return: print char
 */
int printf_octal(unsigned int num, int count)
{
	int oct[100], i = 0, j;

	while (num != 0)
	{
		int rem = num % 8;

		oct[i] = 48 + rem;
		i++;
		num /= 8;
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
			_putchar(oct[j]);
			count++;
		}
	}
	return (count);
}

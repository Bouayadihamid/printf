#include "main.h"

/**
 * printf_sreverse - prints a binary number
 * @args: number of arguements
 * @count: the printed characters
 * Return: printed charcaters
 */

int printf_sreverse(va_list args, int count)
{
	char *str = va_arg(args, char *);
	int len = 0, i;

	while (str[len])
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		count++;
	}

	return (count);
}

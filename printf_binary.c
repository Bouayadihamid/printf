#include "main.h"
/**
 * printf_binary - prints a binary
 * @num: num of args
 * @count: print char
 * Return: print char
 */
int printf_binary(unsigned int num, int count)
{
	int binary[32] = {0};
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	while (num > 0)
	{
		binary[i] = num % 2;
		num /= 2;
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar('0' + binary[i]);
		count++;
	}
	return (count);
}

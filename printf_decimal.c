#include "main.h"

/**
 * printf_decimal - print a decimal number
 * @int: integer to be printed
 * Return: count
 */
int printf_decimal(int n)
{
	int number;
	int length = n % 10;
	int d;
	int count = 1;
	int num2 = 1;

	n = n / 10;

	number = n;

	if (length < 0)
	{
		_putchar('-');
		number = -number;
		n = -n;
		length = -length;
		count++;
	}

	if (number > 0)
	{
		while (number / 10 != 0)
		{
			num2 = num2 * 10;
			number = number / 10;
		}

		number = n;

		while (num2 > 0)
		{
		d = number / num2;
		_putchar(d + '0');
		number = number - (d * num2);
		num2 = num2 / 10;
		count++;
		}
	}
	_putchar(length + '0');
	return (count);
}

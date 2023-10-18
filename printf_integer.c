#include "main.h"

/**
 * print_integer - print an integer
 * @n: integer to be printed
 * Return: count
 */
int print_integer(int n)
{
	int number, length = n % 10, d, num2 = 1;
	int  count = 1;

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

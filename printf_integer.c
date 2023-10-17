#include "main.h"
/**
 * printf_integer - prints intiger
 * @args: num args
 * @count: The print char
 * Return: print char
 */
int printf_integer(va_list args, int count)
{
	int num = va_arg(args, int);
	int digits = 0;
	int temp = num, digit;

	if (num < 0)
	{
		count += _putchar('-');
		num = -num;
		temp = num;
	}
	do {
		digits++;
		temp /= 10;
	} while (temp != 0);
	while (digits > 0)
	{
		int pow10 = 1, i;

		for (i = 1; i < digits; i++)
			pow10 *= 10;

		digit = num / pow10;
		count += _putchar(digit + '0');
		num -= digit * pow10;
		digits--;
	}
	return (count);
}

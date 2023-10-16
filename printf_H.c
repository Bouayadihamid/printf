#include "main.h"

/**
 * printf_H - prints hexgecimal n.
 * @var: arguments.
 * Return: count.
 */
int printf_H(va_list var)
{
	int i;
	int *array;
	int count = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}

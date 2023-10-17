#include "main.h"
/**
 * printf_octal - prints an octal
 * @var: args.
 * Return: count
 */
int printf_octal(va_list var)
{
	int i,  *array,  counter = 0;
	unsigned int num = va_arg(var, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		array[i] = temp % 8;
		temp /= 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}

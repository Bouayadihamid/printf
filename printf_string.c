#include "main.h"

/**
 * printf_string - prints a string
 * @args: numberof arguements
 * @count: the printed characters
 * Return: printed charcaters
 */

int printf_string(va_list args, int count)
{
	char *string = va_arg(args, char *);
	char *null;
	int i;

	if (string == NULL)
	{
		null = "(null)";
		for (i = 0; i < 6; i++)
		{
			_putchar(*null);
			null++;
		}
		return (6);
	}
	while (*string)
	{
		_putchar(*string);
		count++;
		string++;
	}
	return (count);
}

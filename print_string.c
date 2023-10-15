#include "main.h"

/**
 * printf_string - prints a string
 * @args: number of arguments
 * @printed: the printed characters
 * Return: printed characters
 */

int printf_string(va_list args, int printed)
{
	char *string = va_arg(args, char *);

	while (*string != '\0')
	{
		_putchar(*string);
		printed++;
		string++;
	}
	return (printed);
}

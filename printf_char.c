#include "main.h"

/**
 * printf_char - prints a binary number
 * @args: arguments to use
 * @printed: the printed characters
 * Return: printed characters
 */

int printf_char(va_list args, int printed)
{
	int character = va_arg(args, int);

	_putchar(character);
	return (printed + 1);
}

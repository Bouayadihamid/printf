#include "main.h"
/**
 * printf_char - prints a binary
 * @args: args
 * @count: print char
 * Return: print char
 */
int printf_char(va_list args, int count)
{
	int character = va_arg(args, int);

	_putchar(character);
	return (count + 1);
}

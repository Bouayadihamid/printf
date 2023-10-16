#include "main.h"

/**
 * print_char - is a function
 * @args: arguments
 * Return: nothing
 */

void print_char(va_list args)
{
	char c = va_arg(args, int);

	putchar(c);
}

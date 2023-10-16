#include "main.h"

/**
 * print_string- is a function
 * @args: arguments
 * Return: nothing
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	while (*str)
	{
		putchar(*str);
		str++;
	}
}

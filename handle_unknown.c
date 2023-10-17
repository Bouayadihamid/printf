#include "main.h"

/**
 *handle_unknown_specifier- is a function
 *
 *@format: is the format
 *@args: arguments
 *
 *Return: return -1
 */

int handle_unknown_specifier(const char **format)
{
	fprintf(stderr, "Unknown format specifier: %%%c\n", **format);
	(*format)++;
	return (-1);
}

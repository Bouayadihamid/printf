#include "main.h"
/**
 * _putchar - write to char
 * @c: character to print
 * Return: 1, success, -1 error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

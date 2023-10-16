#include "main.h"

/**
 * printf_rot13 - printf string in ROT13 in buffer
 * @args: a struct
 * Return: count
 *
 */
int printf_rot13(va_list args)
{
	int i, j, count = 0, k = 0;
	char *s = va_arg(args, char*);
	char abc[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char nop[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; abc[j] && !k; j++)
		{
			if (s[i] == abc[j])
			{
				_putchar(nop[j]);
				count++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			count++;
		}
	}
	return (count);
}

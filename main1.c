#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
    int len;

    len = _printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d]\n", len);
    _printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", 4294967295);
    _printf("Binary:[%b]\n", 255);
    _printf("Hexadecimal:[%x, %X]\n", 255, 255);
    _printf("Octal:[%o]\n", 255);
    _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", (void *)0x7ffe637541f0);
    len = _printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    _printf("Unknown:[%r]\n");

    return (0);
}


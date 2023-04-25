#include <stdarg.h>
#include <stdio.h>

/**
 * print_unsigned_binary - function to print unsigned binary
 * @args: argument lists
 * Return: lenght of printed character
 */

int print_unsigned_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[33];
	int i = 0, j;

	do {
		buffer[i++] = num % 2 + '0';
		num /= 2;
	} while (num > 0 && i < 32);

	for (j = i - 1; j >= 0; j--)
	{
		putchar(buffer[j]);
	}
	return (i);
}

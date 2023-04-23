#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_int - function pointer for printing integer
 * @args: variable argument integer input
 * Return: len
 */

int print_int(va_list args)
{
	long int n = va_arg(args, long int);
	int len = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		len++;
	}
	if (n > 9)
	{
		len += print_int(args);
	}
	_putchar(n % 10 + '0');
	len++;

	return (len);
}

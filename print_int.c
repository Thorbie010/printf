#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>

/**
 * print_int - function pointer for printing integer
 * @args: variable argument integer input
 * Return: value for len
 *
 */

int print_int(va_list args)
{
	int64_t n = va_arg(args, int64_t);
	int len = 0;
	int digit;

	if (n == 0)
	{
		_putchar('0');
		len++;
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
		len++;
	}
	while (n > 0)
	{
		digit = n % 10;
		_putchar(digit + '0');
		n /= 10;
		len++;
	}
	return (len);
}


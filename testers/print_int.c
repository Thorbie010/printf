#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_int - prints an integer
 * @ap: user input
 *
 * Return: number of characters printed
 */
int print_int(va_list ap)
{
	long int x = va_arg(ap, int);
	int z = 0;
	long int i = 10000000000;
	int k = 0;
	int r_val = 0;

	if (x == 0)
	{
		r_val += put_count(x + '0');
		return (r_val);
	}
	if (x < 0)
	{
		x = x * (-1);
		r_val += put_count('-');
	}
	while (i > 0)
	{
		if (i > x)
		{
			if (k == 1)
			{
				r_val += put_count('0');
			}
		}
		else
		{
			z = x - (x % i);
			x = x - z;
			z = z / i;
			k = 1;
			r_val += put_count(z + '0');
		}
		i = i / 10;
	}
	return (r_val);
}

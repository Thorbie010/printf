#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>


/**
 * _printf - My custom printf that replicates what printf does
 * @format: List of types
 *
 * Return:  the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int x;
	int count;
	int (*f)(va_list, flags_t *);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	count = 0;
	va_start(args, format);
	x = 0;
	while (format[x] != '\0')
	{
		if (format[x] != '%')
		{
			_putchar(format[x]);
			count = count + 1;
		}
		else
		{
			f = get_print(format[x + 1]);
			if (f == NULL)
			{
				_putchar('%');
				_putchar(format[x]);
				count = count + 2;
			}
			else
			{
				count = count + f(args);
				x = x + 1;
			}
		}
		x = x + 1;
	}
	va_end(args);
	return (count);
}

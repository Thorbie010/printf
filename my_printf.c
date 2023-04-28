#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdio.h>

/**
 * _printf - a function that prints char, string, integer and decimal formats
 * @format: user input format string, may or may not contain format identifiers
 * Return: void
 */

int _printf(const char *format, ...)
{
	int r_val;
	int i;
	va_list args;
	int (*p)(va_list);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	r_val = 0;
	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			r_val = r_val + 1;
		}
		else
		{
			p = get_func(format[i + 1]);
			if (p == NULL)
			{
				return (-1);
			}
			else
			{
				r_val += p(args);
				i = i + 1;
			}
		}
		i = i + 1;
	}
	va_end(args);
	return (r_val);
}

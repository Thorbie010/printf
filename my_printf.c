#include "main.h"
#include <stdlib.h>

/**
 *
 *
 *
 */

int my_printf(const char *format, ...)
{
	int r_val = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					r_val += _putchr(va_arg(args,int));
					break;
				
				case 's':
				{
					char *s = va_arg(args, char *);
					while (*s != '\0')
					{
						r_val += _putchr(*s);
						s++;
					}
					break;
				}
				case '%':
					r_val += _putchr('%');
					break;
			}
		}
		r_val += _putchr(*format);

		format++;
		}
	va_end(args);
	return (r_val);
}

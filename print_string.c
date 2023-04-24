#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_string - prints a string
 * @args: user input
 * Return: number of characters printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL || str == (char *)0)
	{
		str = "(null)";
	}
	while (*str != '\0')
	{
		if (_putchar(*str) == EOF)
		{
			return (-1);
		}
		str++;
		count++;
	}
	return (count);
}

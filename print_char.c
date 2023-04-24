#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_char - function pointer for my_printf %c
 * @args: variable character argument to be printed
 * Return: 1
 */


int print_char(va_list args)
{
	int c = va_arg(args, int);

	if (_putchar(c) == EOF)
	{
		return (-1);
	}
	return (1);
}

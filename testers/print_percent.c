#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_percent - prints the percent sign
 * @args: user input
 * Return: number of percent signs
 */

int print_percent(__attribute__((unused))va_list args)
{
	_putchar('%');
	return (1);
}

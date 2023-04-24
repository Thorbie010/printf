#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
#include <inistd.h>
#include <stdio.h>

/**
 * put_count - calls _putchar and increments counter
 * @c: a character
 *
 * Return: 1
 */
int put_count(char c)
{
	_putchar(c);
	return (1);
}

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


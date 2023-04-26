#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

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
	int *digit, j;
	int i = 0;

	int64_t temp = n;

	while (temp != 0)
	{
		len++;
		temp /= 10;
	}
	digit = (int *)malloc(len * sizeof(int));
	if (digit == NULL)
		return (-1);
	if (n == 0)
	{
		_putchar('0');
		len++;
	}
	else if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
		len++;
	}
	while (n > 0)
	{
		digit[i++] = n % 10;
		n /= 10;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(digit[j] + '0');
		len++;
	}
	free(digit);
	return (len);
}

/**
 * * print_string - prints a string
 * @args: user input
 * Return: number of characters printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
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


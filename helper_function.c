#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
 * put_count - Calls _putchar and increments the counter
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
 * print_percent - Function that prints the percent sign
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

	_putchar(c);
	return (1);
}

/**
 * print_int - function pointer that prints integer
 * @args: variable argument integer input
 * Return: value for len
 *
 */
int print_int(va_list args)
{
	int num_length;

	num_length = print_number(args);
	return (num_length);
}

/**
 * * print_string - Function that prints a string
 * @args: user input
 * Return: number of characters printed
 */
int print_string(va_list args)
{
	int i;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}


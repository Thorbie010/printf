#include "main.h"

/**
 * _print_unsigned - Function that prints an unsigned integer
 * @args: The specifier type
 * @f: Pointer to the struct flags
 *
 * Return: number of char printed
 */
int _print_unsigned(va_list args, flags_t *f)
{
	unsigned int u = va_arg(args, unsigned int);
	char *str = convert(u, 10, 0);

	(void)f;
	return (_puts(str));
}

/**
 * _print_octal - Function that prints a number in base 8
 * @args: The specigier type.
 * @f: pointer to the struct that determines
 *
 * Return: the number of char printed
 */

int _print_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num, 8, 0);
	int count = 0;

	if (f->pound == 1 && str[0] != '0')
		count = count + _putchar('0');
	count = count + _puts(str);
	return (count);
}

/**
 * _print_hex - Function that prints a number in hexadecimal base,
 * in lowercase
 * @args: The specifier type.
 * @f: pointer to the struct flags that determines
 *
 * Return: the number of char printed
 */

int _print_hex(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num, 16, 1);
	int count = 0;

	if (f->pound == 1 && str[0] != '0')
		count = count +  _puts("0x");
	count = count + _puts(str);
	return (count);
}

/**
 * _print_HEX - prints a number in hexadecimal base,
 * in uppercase
 * @args: The specifier type.
 * @f: pointer to the struct
 * Return: the number of char printed
 */
int _print_HEX(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *str = convert(num, 16, 0);
	int count = 0;

	if (f->pound == 1 && str[0] != '0')
		count = count + _puts("0X");
	count = count + _puts(str);
	return (count);
}

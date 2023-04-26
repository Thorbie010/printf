#include "main.h"

/**
 * print_int - Function that prints an integer
 * @args: The specifier type.
 * @f: Pointer to the struct.
 * Return: number of char printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int res = count_digit(n);

	if (f->space == 1 && f->plus == 0 && n >= 0)
		res += _putchar(' ');
	if (f->plus == 1 && n >= 0)
		res += _putchar('+');
	if (n <= 0)
		res++;
	print_number(n);
	return (res);
}

#include "main.h"

/**
 * _print_rev - Function that prints a string in reverse
 * @args: The specifier type.
 * @f: Pointer to the struct.
 *
 * Return: Length of the string.
 */
int _print_rev(va_list args, flags_t *f)
{
	int x = 0, y;
	char *str = va_arg(args, char *);

	(void)f;
	if (!str)
		str = "(null)";

	while (str[x])
		x++;

	for (y = x - 1; y >= 0; y--)
		_putchar(str[y]);

	return (x);
}

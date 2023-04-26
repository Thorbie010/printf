#include "main.h"

/**
 * print_pointer - Function that prints the address.
 * @args: The specifier type.
 * @f: Pointer to the struct.
 * Return: number of characters printed.
 */
int print_pointer(va_list args)
{
	char *str, *f;
	unsigned long int p = va_arg(args, unsigned long int);

	register int count = 0;

	(void)f;

	if (!p)
		return (_puts("(nil)"));
	str = convert(p, 16, 1);
	count = count + _puts("0x");
	count = count + _puts(str);
	return (count);
}

#include "main.h"

/**
 * _print_rot13 - Function that prints a string using rot13
 * @args: The specifier type
 * @f: Pointer to the struct.
 *
 * Return: length of the printed string
 */
int _print_rot13(va_list args, flags_t *f)
{
	int x, y;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *str = va_arg(args, char *);

	(void)f;
	for (y = 0; str[y]; y++)
	{
		if (str[y] < 'A' || (str[y] > 'Z' && s[y] < 'a') || str[y] > 'z')
			_putchar(str[y]);
		else
		{
			for (x = 0; x <= 52; x++)
			{
				if (str[y] == rot13[x])
					_putchar(ROT13[x]);
			}
		}
	}

	return (y);
}

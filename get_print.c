#include "main.h"

/**
 * get_print - Function that selects specifier to print.
 * @s: List of specifiers.
 *
 * Return: A pointer.
 */

int (*get_print(char s))(va_list, flags_t *)
{
	ps argument[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"%", _print_percent},
		{"d", _print_int},
		{"i", _print_int},
		{"r", _print_reverse},
		{"R", _print_rot13},
		{"b", _print_binary},
		{"u", _print_unsigned},
		{"o", _print_octal},
		{"x", _print_hex},
		{"X", _print_HEX},
		{"S", _print_STRING},
		{"p", _print_pointer}
		{NULL, NULL}
	};

	int flags = 14;

	register int x;

	for (x = 0; x < flags; x++)
		if (arguments[x].c == s)
			return (arguments[x].f);
	return (NULL);
}

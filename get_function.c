#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * get_func - Pointer to a function that will extract the correlating function
 *  from a struct
 * @c:  string of the format specifier eg. "%c"or "%s"
 * Return: pointer to function or NULL if error
 */
int (*get_func(char c))(va_list)
{
	switch (c)
	{
		case 'c':
			return (&print_char);
		case 's':
			return (&print_string);
		case 'd':
			return (&print_int);
		case 'i':
			return (&print_int);
		case '%':
			return (&print_percent);
		case 'x':
			return (&print_unsigned_hex);
		case 'o':
			return (&print_unsigned_octal);
		case 'p':
			return (&print_pointer);
		case 'X':
			return (&print_hex_upper);
		case 'u':
			return (&print_unsigned_decimal);
		case 'b':
			return (&print_unsigned_binary);
		/**
		 * case 'r':
		 * return (&print_reversed);
		 */
		case 'R':
			return (&rot13);
		/**
		 * case 'S':
		 * return (&print_S);
		 */
		default:
			return (NULL);
	}
}

#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * get_func - pointer to a function that will extract the corralating function
 *  from a struct
 * @c:  string of the format specifier eg. "%c",or "%s"
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
		default:
			return (NULL);
	}
}

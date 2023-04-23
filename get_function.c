#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * get_func - pointer to a function that will extract the corralating function
 *  from a struct
 * @s: string of the format specifier eg. "%c",or "%d"
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
		case 'i':
			return (&print_int);
		default:
			return (NULL);
	}
}

#include "main.h"

/**
 * get_flag - Function that prints flag.
 * a flag modifier in the format string
 * @s: character that holds the flag specifier
 * @f: pointer to the struct.
 *
 * Return: 1 if a flag has been turned on, 0 otherwise
 */
int get_flag(char s, flags_t *f)
{
	int x = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			x = 1;
			break;
		case ' ':
			f->space = 1;
			x = 1;
			break;
		case '#':
			f->pound = 1;
			x = 1;
			break;
	}

	return (x);
}

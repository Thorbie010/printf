#include "main.h"

/**
 * convert - Function that converts number and base into string.
 * @num: input number
 * @base: input base
 * @lowercase: flag if hexa values need to be lowercase
 * Return: result string
 */
char *convert(unsigned long int num, int base, int lowercase)
{
	static char *zed;
	static char buffer[50];
	char *p;

	zed = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	p = &buffer[49];
	*p = '\0';
	do {
		*--p = zed[num % base];
		num /= base;
	} while (num != 0);

	return (p);
}

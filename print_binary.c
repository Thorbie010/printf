#include "main.h"
#include <string.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_unsigned_binary - function to print unsigned binary
 * @args: argument lists
 * Return: lenght of printed character
 */

int print_unsigned_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[33];
	int i = 0, j;

	do {
		buffer[i++] = num % 2 + '0';
		num /= 2;
	} while (num > 0 && i < 32);

	for (j = i - 1; j >= 0; j--)
	{
		putchar(buffer[j]);
	}
	return (i);
}


/**
 * rev_string - reverses a string in place
 *
 * @s: string to reverse
 * Return: A pointer to a character
 */
char *rev_string(char *s)
{
	int len;
	int head;
	char tmp;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}

	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, len);
	for (head = 0; head < len; head++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
}
/**
 * _memcpy - copy memory area
 * @dest: Destination for copying
 * @src: Source to copy from
 * @n: The number of bytes to copy
 * Return: The _memcpy() function returns a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

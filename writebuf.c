#include "main.h"
#include <unistd.h>

/**
 * _puts - Function that prints string to stdout
 * @str: pointer to the string to print
 * Return: number of chars written
 */
int _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
		_putchar(str[x]);
	return (x);
}

/**
 * _putchar - Function that writes character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(int c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}

#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - function that puts a single character to std output
 * @c: input character
 * Return: output
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}

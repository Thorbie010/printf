#include "main.h"
#include <stdarg.h>
#include <stdint.h>
/**
 * print_unsigned_octal - function to print unsigned octal
 * @args: argument lists
 * Return: lenght of printed character
 */
int print_unsigned_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int len = 0;
	int octal_digits[100];
	int i = 0;
	int j;

	if (n == 0)
	{
		_putchar('0');
		len++;
	}
	else
	{
		while (n > 0)
		{
			octal_digits[i] = n % 8;
			n = n / 8;
			i++;
		}
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(octal_digits[j] + '0');
			len++;
		}
	}
	return (len);
}

/**
 * print_unsigned_hex - function to print unsigned hexadecimal
 * @args: argument lists
 * Return: lenght of printed character
 */
int print_unsigned_hex(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int len = 0;
	char buffer[20];
	int i = 0;
	int digit;

	if (n == 0)
	{
		_putchar('0');
		len++;
	}
	else
	{
		while (n != 0)
		{
			digit = n % 16;
			if (digit < 10)
			{
				buffer[i++] = digit + '0';
			}
			else
			{
				buffer[i++] = digit - 10 + 'a';
			}
			n /= 16;
		}
		while (i > 0)
		{
			_putchar(buffer[--i]);
			len++;
		}
	}
	return (len);
}

/**
 * print_pointer - function to print address of a pointer
 * @args: argument lists
 * Return: lenght of printed character
 */

int print_pointer(va_list args)
{
	uintptr_t n = va_arg(args, uintptr_t);
	int len = 0;
	int i, digit;

	_printf("0x");
	len += 2;

	for (i = (sizeof(n) * 8) - 4; i >= 0; i -= 4)
	{
		digit = (n >> i) & 0xF;
		if (digit != 0 || len > 2)
		{
			if (digit < 10)
			{
				_putchar(digit + '0');
			}
			else
			{
				_putchar(digit - 10 + 'a');
			}
			len++;
		}
	}
	if (len == 2)
	{
		_putchar('0');
		len++;
	}
	return (len);
}

/**
 * print_hex_upper - function to print unsigned hexadecimal in caps
 * @args: argument lists
 * Return: lenght of printed character
 */
int print_hex_upper(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;
	char hex[100];
	int i = 0;
	int j, temp;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (n != 0)
		{
			temp = 0;
			temp = n % 16;

			if (temp < 10)
			{
				hex[i] = temp + 48;
				i++;
			}
			else
			{
				hex[i] = temp + 55;
				i++;
			}
			n = n / 16;
		}
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(hex[j]);
			count++;
		}
	}
	return (count);
}

/**
 * print_unsigned_decimal - function to print usigned decimal
 * @args: argument lists
 * Return: lenght of printed character
 */
int print_unsigned_decimal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[10];
	int i = 0;
	int j;

	do {
		buffer[i++] = num % 10 + '0';
		num /= 10;
	} while (num > 0 && i < 10);

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
	}
	return (i);
}

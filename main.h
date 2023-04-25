#ifndef MAIN_H
#define MAIN_H

#define UNUSED(x) VOID(x)
#define BUFF_SIZE 1024

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct flags - Function to print flags
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @pound: flag for the '#' character
 */

typedef struct flags
{
	int plus;
	int space;
	int pound;
} flags_t;

/**
 * struct printSpecifier - Function to print specifiers.
 * @z: The operators to be printed.
 * @f: The function
 */

typedef struct printSpecifier
{
	char z;
	int (*f)(va_list args, flags_t *f);
} ps;

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
int _print_char(va_list args, flags_t *f);
int _print_string(va_list args, flags_t *f);
int _print_percent(va_list args, flags_t *f);
int _print_int(va_list args, flags_t *f);
int _print_int(va_list args, flags_t *f);
int _print_binary(va_list args, flags_t *f);
int _print_unsigned(va_list args, flags_t *f);
int _print_octal(va_list args, flags_t *f);
int _print_hex(va_list args, flags_t *f);
int _print_HEX(va_list args, flags_t *f);
int _print_STRING(va_list args, flags_t *f);
int _print_pointer(va_list args, flags_t *f);
int _print_reverse(va_list args, flags_t *f);
int _print_rot13(va_list args, flags_t *f);
int count_digit(int i);
void _print_number(int n);
char *convert(unsigned int num, int base, int lowercase);
int (*get_print(char s))(va_list, flags_t *);
int get_flag(char s, flags_t *f);

#endif

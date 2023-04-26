#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

#define UNUSED(x) VOID(x)
#define BUFF_SIZE 1024


/**
 * struct - Function to print specifiers.
 * @z: The operators to be printed.
 * @f: The function
 */

struct fmt
{
	char fmt;
	int (*f)(va_list args);
};


typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_int(va_list args);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);
int print_STRING(va_list args);
int print_pointer(va_list args);
int print_reverse(va_list args);
int print_rot13(va_list args);
int count_digit(int i);
void print_number(int n);
char *convert(unsigned int num, int base, int lowercase);
int count_digit(int i);
void print_number(int n);
char *convert(unsigned int num, int base, int lowercase);
int (*get_print(char s))(va_list);
int get_flag(char s);

#endif

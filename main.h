#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>
#include <stdlib.h>
#include <stdint.h>

int _printf(const char *format, ...);
int _putchar(int c);
int print_int(va_list args);
int print_char(va_list args);
int print_string(va_list args);
int (*get_func(char s))(va_list);
int print_percent(__attribute__((unused))va_list args);
int put_count(char c);
int print_unsigned_octal(va_list args);
int print_unsigned_hex(va_list args);
int print_pointer(va_list args);
int print_unsigned_decimal(va_list args);
int print_hex_upper(va_list args);
int print_unsigned_binary(va_list args);
int rot13(va_list list);
int print_reversed(va_list arg);
char *rev_string(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
void write_base(char *str);
unsigned int base_len(unsigned int num, int base);
int print_number(va_list args);
int print_unsgined_number(unsigned int n);
#endif /* MAIN_H */

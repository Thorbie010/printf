#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(int c);
int print_int(va_list args);
int print_char(va_list args);
int print_string(va_list args);
int (*get_func(char s))(va_list);

#endif /* MAIN_H */

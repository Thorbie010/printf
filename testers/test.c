#include <stdint.h>
#include <stdio.h>
#include <stdarg.h>

int print_int(va_list args);

int _printf(const char* format, ...)
{
    va_list args;
    int printed_chars = 0;

    va_start(args, format);

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;

            switch (*format)
            {
                case 'd':
                    printed_chars += print_int(args);
                    break;

                default:
                    putchar(*format);
                    printed_chars++;
                    break;
            }
        }
        else
        {
            putchar(*format);
            printed_chars++;
        }

        format++;
    }

    va_end(args);

    return printed_chars;
}

int print_int(va_list args)
{
    intmax_t n = va_arg(args, intmax_t);
    int len = 0;

    if (n < 0) {
        putchar('-');
        n = -n;
        len++;
    }

    if (n == 0) {
        putchar('0');
        len++;
    }

    while (n != 0) {
        int digit = n % 10;
        putchar('0' + digit);
        n /= 10;
        len++;
    }

    return len;
}

int main()
{
    _printf("Negative:[%d]\n", -762534);

    return 0;
}


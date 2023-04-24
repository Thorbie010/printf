#include "main.h"
#include <stdio.h>

int main()
{
    char my_char = 'a';
    int my_int = 123;
    int len, len2;
    char my_string[] = "Hello, world!";

    _printf("Character: %c\n", my_char);
    _printf("Integer: %d\n", my_int);
    _printf("String: %s\n", my_string);
    len = _printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);

    len2 = printf("Percent:[%%]\n");
    printf("Len:[%d]\n", len2);
    printf("Character: %c\n", my_char);
    printf("Integer: %d\n", my_int);
    printf("String: %s\n", my_string);
    
    return (0);
}


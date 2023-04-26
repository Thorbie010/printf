#include "main.h"
#include <stdio.h>

int main()
{
    char my_char = 'a';
    int my_int = 1024;
    char my_string[] = "Hello, world!";

    _printf("Character: %c\n", my_char);
    _printf("Integer: %d\n", my_int);
    _printf("String: %s\n", my_string);
    _printf("Integer: %i\n", my_int);
    _printf("%i\n", 1024);
    _printf("%!\n");
   _printf("%K\n");






    printf("Integer: %i\n", my_int);
    printf("Character: %c\n", my_char);
    printf("Integer: %d\n", my_int);
    printf("String: %s\n", my_string);

    return (0);
}

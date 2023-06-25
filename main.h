#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
int _printf(const char *, ...);
int _strlen(const char *s);
int print(char *s);
char *itoa(long int, int);
int handler(const char *string, va_list num);
int percent_handler(char *string, va_list num, int *j);
int print_string(va_list);
int print_char(va_list);
int print_integer(va_list num);
int print_binary(va_list);
int rot13(char *str);
int print_unsigned(va_list);
int print_octal(va_list num);
int print_hexadecimal_low(va_list);
int print_hexadecimal_upp(va_list);
int print_pointer(va_list);
int print_rev_string(va_list);
int _putchar(char);
int buffer(char);
/**
 * struct _format - typedef struct
 * @type: format
 * @f: the function to be associated
 */
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;

#endif

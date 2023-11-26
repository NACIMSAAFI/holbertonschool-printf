#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct formatter - Structure to represent
 * a format specifier and its corresponding print function.
 * @spec: The format specifier character.
 * @print: Pointer to the print function for the specified type.
 */
typedef struct formatter
{
	char spec;
	int (*print)(va_list *);
} fmt;

int _putchar(char c);
int get_functions(const char *format, va_list *args, fmt *f);
int _printf(const char *format, ...);

int print_char(va_list *args);
int print_string(va_list *args);
int print_percent(va_list *args);
int print_integer(va_list *args);
int print_decimal(va_list *args);
int print_all_number(int a);
int print_INT_MIN(void);
#endif

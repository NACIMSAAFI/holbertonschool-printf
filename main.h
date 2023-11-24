#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
/**
 * struct fmt - Structure to associate
 * format specifiers with corresponding functions.
 * @spec: The format specifier character (e.g., 'c', 's', '%').
 * @print: A function pointer to the
 * associated print function for the specifier.
 */
typedef struct fmt
{
	char spec;
	int (*print)(va_list list);
} fmt;

int get_functions_printf(const char *format, va_list list, const fmt f[]);
int _printf(const char *format, ...);
int _putchar(char c);

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

#endif

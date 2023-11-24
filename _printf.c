#include "main.h"
#include <stdio.h>

/**
 * _printf - Custom printf function.
 * @format: A format string containing conversion specifiers.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	int count = 0;
	fmt f[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}};
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);

	count = get_functions_printf(format, args, f);

	va_end(args);
	return (count);
}

#include "main.h"
/**
 * _printf - Function with formatted printing
 * @format: format to be printed
 *
 * Return: number of printed caracters
 */
int _printf(const char *format, ...)
{
	int count = 0;
	fmt f[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_decimal},
		{'i', print_integer},
		{'\0', NULL}};
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	count = get_functions(format, &args, f);
	va_end(args);
	return (count);
}

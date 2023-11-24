#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...)
{
	int i, j;
	fmt f[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}};

	va_list args;
	va_start(args, format);
	if (format != NULL)
		for (i = 0; i != '\0'; i++)
		{
			if (format[i] != '%')
			{

				putchar(format[i]);
				i++;
			}
			j = 0;
			while (f[j].spec)
			{
				if (f[j].spec == format[i + 1])
				{
					f[j].print(&args);
					break;
				}
				j++;
			}
			i += 2;
		}
	va_end(args);
	return (0);
}

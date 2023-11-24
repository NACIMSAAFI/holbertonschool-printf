#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * get_functions - Process format specifiers in the given format string.
 * @format: A format string containing conversion specifiers.
 * @list: A va_list of arguments.
 * @f: An array of fmt structures.
 *
 * Return: The number of characters printed.
 */
int get_functions_printf(const char *format, va_list list, const fmt f[])
{
	int count = 0, i, j, num;

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count += 1;
		}
		else
		{
			for (j = 0; f[j].spec != '\0'; j++)
			{
				if (format[i + 1] == f[j].spec)
				{
					num = f[j].print(list);
					count += num;
					i++;
					break;
				}
			}
			if (f[j].spec == '\0' && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count += 2;
					i++;
				}
				else
					return (-1);
			}
		}
	}
	if (format == NULL)
		return (-1);
	return (count);
}

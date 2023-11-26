#include "main.h"
/**
 * get_functions - Function to print a character.
 * @format: format or template as you wish
 * @args: va_list containing the argument passed to printf
 * @f: pointer to an array of structures
 * Return: counter
 */

int get_functions(const char *format, va_list *args, fmt *f)
{
	int i, j, count = 0;
	for (i = 0; format[i] != '\0';)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{

			for (j = 0; f[j].spec != '\0'; j++)
			{
				if (f[j].spec == format[i + 1])
				{
					count += f[j].print(args);
					break;
				}
			}
			if (f[j].spec == '\0')
			{
				if (format[i + 1] == '\0')
				{
					return (-1);
				}
				else
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count += 2;
				}
			}
			i++;
		}
		i++;
	}
	return (count);
}
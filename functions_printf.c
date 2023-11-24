#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - Function to print a character.
 * @args: va_list containing the argument.
 */
int print_char(va_list *args)
{
	_putchar(va_arg(*args, int));
	return (1);
}
/**
 * print_string - Function to print a string.
 * @args: va_list containing the argument.
 */
int print_string(va_list *args)
{
	int i = 0;
	int count = 0;
	char *spec = va_arg(*args, char *);
	if (spec == NULL)
	{
		return (-1);
	}
	for (i=0; spec[i] != '\0'; i++)
		_putchar(spec[i]);
	count ++;
	return (count);
}
/**
 * print_percent - Function to print a percent sign
 * @args: va_list containing the argument.
 */
int print_percent(va_list *args)
{
	_putchar(va_arg(*args, int));
	return (1);
}

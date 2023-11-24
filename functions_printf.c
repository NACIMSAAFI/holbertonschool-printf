#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - Print a character.
 * @args: A va_list containing the argument.
 *
 * Return: Number of characters printed (always 1).
 */
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

/**
 * print_string - Print a string.
 * @args: A va_list containing the argument.
 *
 * Return: Number of characters printed.
 */
int print_string(va_list args)
{
	int count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}

	return (count);
}

/**
 * print_percent - Print a percent sign.
 * @args: A va_list containing the argument (unused).
 *
 * Return: Number of characters printed (always 1).
 */
int print_percent(__attribute__((unused)) va_list args)
{
	return (_putchar('%'));
}

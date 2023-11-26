#include "main.h"

/**
 * print_decimal - Function to print a character.
 * @args: va_list containing the argument.
 */
int print_decimal(va_list *args)
{
    int count = 0;
	int a = va_arg(*args, int);
	if (a < 0)
    {
		_putchar('-');
        a=-a;
        count ++;
    }
    count += print_all_number(a);
	return (count);
}

/**
 * print_integer - Function to print a character.
 * @args: va_list containing the argument.
 */
int print_integer(va_list *args)
{
	int a = va_arg(*args, int);
	if (a < 0)
		_putchar('-');
	return (print_all_number(a));
}

/**
 * print_all_number - Function to print a number.
 * @a: integer
 */
int print_all_number(int a)
{
	int count = 0;
	if (a < 0)
		a = -a;

	if (a == 0)
		_putchar('0');

	if (a / 10)
		count += print_all_number(a / 10);

	_putchar(a % 10 + '0');
	count ++;
	return (count);
}
#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...)
{
	  	int i, j, count = 0;
    fmt f[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'\0', NULL}};

    va_list args;
    va_start(args, format);

    if (format == NULL)
        return (-1); 

    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            _putchar(format[i]);
            count++;
        }
        else
        {
            if (!format[i + 1])
            {
                _putchar('%');
                count++;
                break;
            }
            j = 0;
            while (f[j].spec)
            {
                if (f[j].spec == format[i + 1])
                {
                    count += f[j].print(&args);
                    break;
                }
                j++;
            }
           
            i++;
        }
    }
    va_end(args);
    return (count);
}

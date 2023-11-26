_printf.c Documentation
This README.md file provides documentation for the _printf.c function, a variadic function designed for formatted printing.

Files Overview:
1. _putchar.c
This file contains a simple function, _putchar, responsible for printing characters.

2. functions_printf.c and functions2_printf.c
These two files house the functions corresponding to different specifiers. They include functions for characters (c), strings (s), percent signs (%), integers (d), and integers (i).

3. get_functions.c
This file outlines the functions that specify the conditions for the _printf function. It determines the appropriate action based on the encountered specifier.

4. _printf.c
The printf.c file is the main file for the _printf function, orchestrating the execution of the variadic printing function.

5. main.h
This header file provides declarations and structures essential for the proper functioning of the _printf function.

6. INT_MIN_case.c
This file ensure the right printing for a INT_MIN number

7. man_3_printf
man_3_printf is the manual of the _printf function

How to Use:
Compilation:

Ensure all the necessary files are present in your project directory.
Use a C compiler to compile the files:

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
Integration:

Include main.h in your project where you plan to use _printf.

#include "main.h"
Function Call:

Utilize the _printf function in your code to achieve formatted printing.

int main(void) {
    _printf("This is a formatted string with a specifier: %s\n", "example");
    return (0);
}
Contribution:
Contributions to enhance and improve the functionality of _printf.c are welcome. Please follow standard coding practices and create meaningful pull requests.


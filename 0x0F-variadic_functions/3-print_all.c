 #include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_c - Prints a char to the standard output
 * @ap: The argument(s) passed to the function
 */

void print_c(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_i - Prints an integer to the standard output
 * @ap: The argument(s) passed to the function
 */

void print_i(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_f - Prints a floating point number to the standard output
 * @ap: The argument(s) passed to the function
 */

void print_f(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_s - Prints a string to the standard output
 * @ap: The argument(s) passed to the function
 */

void print_s(va_list ap)
{
	char *str;
	
	str = va_arg(ap, char*);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Print whatever is passed to the function
 * @format: A list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int index = 0, index2 = 0;
	int count = 0;
	char *sep = "";
	test printer[5] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	va_start(ap, format);

	while (format[index2])
	{
		index = 0;
		while (index < 4)
		{
			if (format[index2] == *(printer[index].type))
			{
				printf("%s", sep);
				printer[index].f(ap);
				sep = ", ";
			}
			index++;
		}
		index2++;
		count++;
	}
	va_end(ap);
	printf("\n");
}

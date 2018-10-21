 #include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

void print_c(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

void print_i(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

void print_f(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

void print_s(va_list ap)
{
	printf("%s", va_arg(ap, char*));
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
				printer[index].f(ap);
				if (count < 3)
					printf(", ");
			}
			index++;
		}
		index2++;
		count++;
	}
	va_end(ap);
	printf("\n");
}

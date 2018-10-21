#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - Print strings, followed by a new line
 * @separator: String to be printed between strings
 * @n: Number of strings passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *str;
	unsigned int index;

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (separator != NULL && index != (n - 1))
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}

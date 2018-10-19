#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - Print numbers, ending in a new line
 * @separator: The pointer to the separator passed to the function
 * @n: The count of arguments passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int index;

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{
		if (separator == NULL)
			printf("%d", va_arg(ap, int));
		else
		{
			printf("%d", va_arg(ap, int));
			if (n - 1 != index)
				printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}

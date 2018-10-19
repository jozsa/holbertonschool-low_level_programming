#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Adds all parameters of the function
 * @n: The number of arguments/parameters provided
 *
 * Return: The sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int num, sum = 0;

	va_start (ap, n);

	if (n == 0)
		return (0);

	for (num = 0; num < n; num++)
		sum += va_arg (ap, int);

	va_end (ap);

	return (sum);
}

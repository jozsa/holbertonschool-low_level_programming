#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Print a name
 * @name: The name passed to the function
 * @f: The pointer to other functions used to print a name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}

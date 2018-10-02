#include "holberton.h"

/**
 * set_string - Set the value of a pointer to a char
 * @s: Pointer to pointer to a char
 * @to: Pointer to a char
 */

void set_string(char **s, char *to)
{
	*s = to;
}

#include "holberton.h"

/**
 * string_toupper - Convert a string to uppercase
 * @str: The string to be converted
 *
 */

char *string_toupper(char *str)
{
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
			*str = *str - 32;
		str++;
	}
	return (str);
}

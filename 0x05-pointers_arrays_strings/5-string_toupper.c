#include "holberton.h"

/**
 * string_toupper - Convert a string to uppercase
 * @str: The string to be converted
 *
 * Return: The string
 */

char *string_toupper(char *str)
{
	int num = 0;

	while (str[num])
	{
		if (str[num] >= 97 && str[num] <= 122)
			str[num] = str[num] - 32;
		num++;
	}
	return (str);
}

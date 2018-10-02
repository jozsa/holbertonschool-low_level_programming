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
		if (str[num] >= 'a' && str[num] <= 'z')
			str[num] = str[num] - 32;
		num++;
	}
	return (str);
}

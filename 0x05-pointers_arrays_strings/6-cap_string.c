#include "holberton.h"
#include <stdio.h>

char *cap_string(char *str)
{
	int index, index2;
	char test[] = {' ', '\t', '\n', '.', ',', ';', '?', '"', '('};

	for (index = 0; str[index] != '\0'; index++)
	{
		for (index2 = 0; test[index2] != '\0'; index2++)
	        {
			if (str[index] == test[index2])
			{
				index++;
				if (str[index] >= 'a' && str[index] <= 'z')
					str[index] = str[index] - 32;
			}
		}
	}
	return (str);
}

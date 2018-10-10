#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Prints all arguments of my program as strings
 * @ac: The number of arguments passed
 * @av: Pointer to pointers to the elements of the arguments themselves
 *
 * Return: Pointer to memory area allocated for new string
 */

char *argstostr(int ac, char **av)
{
	int str;
	int letter;
	int length = 0;
	char *arr;
	int index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (str = 0; str < ac; str++)
	{
		for (letter = 0; av[str][letter] != '\0'; letter++)
		{
		}
		length += letter + 1;
	}
	arr = malloc(sizeof(char) * length + 1);
	if (arr == NULL)
		return (NULL);
	for (str = 0; str < ac; str++)
	{
		for (letter = 0; av[str][letter] != '\0'; letter++)
		{
			arr[index] = av[str][letter];
			index++;
		}
		arr[index] = '\n';
		index++;
	}
	arr[index] = '\0';
	return (arr);
}

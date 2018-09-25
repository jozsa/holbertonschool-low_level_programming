#include "holberton.h"

/**
 * puts2 - Prints every other character in a string
 * @str: The string to be printed
 */

void puts2(char *str)
{
	int num;

	for (num = 0; *(str + num) != '\0'; num++)
	{
		_putchar(*str++);
		num++;
	}
}

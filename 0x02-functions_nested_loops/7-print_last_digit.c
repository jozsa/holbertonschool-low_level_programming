#include <stdio.h>
#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @number: The number to be checked
 *
 * Return: The last digit of the number
 */

int print_last_digit(int number)
{
	if (number < 0)
		number = number * -1;

	_putchar((number % 10) + '0');

	return (number % 10);
}

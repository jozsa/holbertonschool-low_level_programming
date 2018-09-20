#include <stdio.h>
#include "holberton.h"

/**
 * main - Prints all numbers
 *
 * Description: Replaces multiples of 3, 5, 3&5 with Fizz, Buzz, and FizzBuzz
 * Return: Always 0
 */

int main(void)
{
	int number = 1;

	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
		{
			number++;
			printf("FizzBuzz");
		}
		else if (number % 3 == 0)
		{
			number++;
			printf("Fizz");
		}
		else if (number % 5 == 0)
		{
			number++;
			printf("Buzz");
		}
		else
		{
			printf("%d", number);
			number++;
		}
		if (number <= 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

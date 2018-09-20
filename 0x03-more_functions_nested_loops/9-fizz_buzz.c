#include <stdio.h>
#include "holberton.h"

/*
 * main - Prints all numbers
 *
 * Description: Print Fizz, Buzz, and FizzBuzz for multiples of 3, 5, and 3&5
 * Return: Always 0
 */

int main(void)
{
	int number = 0;

	while (number < 100)
	{
		printf("%d ", number);
		number++;
		if (number % 3 == 0 && number % 3 == 0)
		{
			number++;
			printf("FizzBuzz ");
		}
		else if (number % 3 == 0)
		{
			number++;
			printf("Fizz ");
		}
		else if (number % 5 == 0)
		{
			number++;
			printf("Buzz ");
		}
	}
	if (number == 100)
		printf("%d\n", number);
	return (0);
}

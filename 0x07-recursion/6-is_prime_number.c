#include "holberton.h"

/**
 * prime_counter - Increments count to test if prime can be divided by it
 * @count: The number to divide prime by
 * @prime: The number to check against count
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int prime_counter(int count, int prime)
{
	if (prime < 0)
		return (0);
	if (count == prime)
		return (1);
	if (prime % count == 0)
		return (0);
	else
		return (prime_counter(++count, prime));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to be checked
 *
 * Return: 1 if number is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	return (prime_counter(2, n));
}

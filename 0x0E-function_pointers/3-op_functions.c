#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Return the sum of two numbers
 * @a: First number to add
 * @b: Second number to add
 *
 * Return: The sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Return the difference between two numbers
 * @a: The number to be subtracted
 * @b: The number to subtract from a
 *
 * Return: The difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Return the product of two numbers
 * @a: The first number to multiply
 * @b: The second number to multiply
 *
 * Return: The product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Return the result of division of two numbers
 * @a: The number to be divided
 * @b: The number to divide a by
 *
 * Return: The result of a divided by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Return the remainder of the division of two numbers
 * @a: The number to be divided
 * @b: The number to divide a by
 *
 * Return: The remainder of a divided by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}

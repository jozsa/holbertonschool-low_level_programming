#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
		       	else
			{
				printf("%d\n", n);
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d\n", n);
			}
			n--;
		}
	}
}

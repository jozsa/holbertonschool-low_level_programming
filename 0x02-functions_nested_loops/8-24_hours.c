#include <stdio.h>
#include "holberton.h"

/**
 * jack_bauer - Prints every minute of a day
 *
 */

void jack_bauer(void)
{
	int hr = 0;
	int min = 0;

	while (hr < 24)
	{
		_putchar((hr / 10) + '0');
		_putchar((hr % 10) + '0');
		_putchar(':');
		_putchar((min / 10) + '0');
		_putchar((min % 10) + '0');
		if (hr == 23 && min == 59)
			break;
		_putchar('\n');
		min++;
		if (min > 59)
		{
			hr++;
			min = 0;
		}
	}
	_putchar('\n');
}

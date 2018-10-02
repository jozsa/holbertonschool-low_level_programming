#include "holberton.h"

/**
 * print_chessboard - Print the chessboard in the 2D array
 * @a: The array containing the chessboard
 */

void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
			if (column == 7)
				_putchar('\n');
		}
	}
}

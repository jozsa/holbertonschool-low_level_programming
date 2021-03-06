#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Return a pointer to 2D array/matrix of integers
 * @width: Width of the 2D array
 * @height: Height of the 2D array
 *
 * Return: NULL if failure or width/height <= 0, 2D array pointer otherwise
 */

int **alloc_grid(int width, int height)
{
	int rows, columns;
	int **matrix;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(sizeof(int *) * height);

	if (matrix == NULL)
		return (NULL);

	for (rows = 0; rows < height; rows++)
	{
		matrix[rows] = malloc(sizeof(int) * width);
		if (matrix[rows] == NULL)
		{
			while (rows >= 0)
			{
				free(matrix[rows]);
				rows--;
			}
			free(matrix);
			return (NULL);
		}
		for (columns = 0; columns < width; columns++)
		{
			matrix[rows][columns] = 0;
		}
	}
	return (matrix);
}

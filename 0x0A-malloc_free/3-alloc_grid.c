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
	int **matrix = malloc(sizeof(int*) * height);

	if (matrix == NULL || width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (rows = 0; rows < height; rows++)
	{
		matrix[rows] = malloc(sizeof(int));
		if (matrix[rows] == NULL)
		{
			while (matrix[rows] != '\0')
			{
				free(matrix[rows]);
				rows--;
			}
			free(matrix);
			return (NULL);
		}
	}
	for (rows = 0; rows < height; rows++)
	{
		for (columns = 0; columns < width; columns++)
		{
			matrix[rows][columns] = 0;
		}
	}
	return (matrix);
}

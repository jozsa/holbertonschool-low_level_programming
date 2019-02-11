#!/usr/bin/python3
"""island_perimeter(grid)

One function that finds the perimeter of a given island within a grid
A grid is a list of lists of integers, 0 = water, 1 = land
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island in the grid
    """
    perimeter = 0
    for row in range(len(grid)):
        for column in range(len(grid[row])):
            if grid[row][column] == 1:
                perimeter += 4
                try:
                    if grid[row - 1][column] == 1 and row - 1 >= 0:
                        perimeter -= 1
                except IndexError:
                    perimeter = perimeter
                try:
                    if grid[row][column - 1] == 1 and column - 1 >= 0:
                        perimeter -= 1
                except IndexError:
                    perimeter = perimeter
                try:
                    if grid[row + 1][column] == 1:
                        perimeter -= 1
                except IndexError:
                    perimeter = perimeter
                try:
                    if grid[row][column + 1] == 1:
                        perimeter -= 1
                except IndexError:
                    perimeter = perimeter
    return perimeter

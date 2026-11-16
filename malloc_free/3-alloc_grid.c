#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 * @width: The number of columns
 * @height: The number of rows
 *
 * Return: A pointer to the grid with every element set to 0, or NULL if
 * width or height is 0 or negative, or if an allocation fails
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int row;
	int col;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	row = 0;
	while (row < height)
	{
		grid[row] = malloc(width * sizeof(int));
		if (grid[row] == NULL)
		{
			while (row > 0)
			{
				row--;
				free(grid[row]);
			}
			free(grid);
			return (NULL);
		}
		col = 0;
		while (col < width)
		{
			grid[row][col] = 0;
			col++;
		}
		row++;
	}

	return (grid);
}

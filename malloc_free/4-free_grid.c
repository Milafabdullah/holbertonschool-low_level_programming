#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid created by alloc_grid
 * @grid: The grid to free
 * @height: The number of rows of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int row;

	if (grid == NULL)
		return;

	row = 0;
	while (row < height)
	{
		free(grid[row]);
		row++;
	}
	free(grid);
}

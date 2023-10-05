#include "main.h"
#include <stdlib.h>

/**
 * free_grid - This function do something.
 *
 * @grid: Argument description.
 * @height: Argument description.
 *
 * Return: return value description.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

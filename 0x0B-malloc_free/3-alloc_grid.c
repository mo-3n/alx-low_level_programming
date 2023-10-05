#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - This function do something.
 *
 * @width: Argument description.
 * @height: Argument description.
 *
 * Return: return value description.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	while (i < height)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
		i++;
	}
	return (grid);
}

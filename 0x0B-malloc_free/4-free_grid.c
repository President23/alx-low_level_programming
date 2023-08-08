#include "main.h"
#include <stdlib.h>

/**
 * free_grid - bragging
 * @grid: in
 * @height: in
 * Return: change
 */
void free_grid(int **grid, int height)
{
	int c;

	for (c = 0; c < height; c++)
	{
		free(grid[c]);
	}

	free(grid);
}

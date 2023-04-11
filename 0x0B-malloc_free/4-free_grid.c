#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-d array
 * @grid: pointer to array
 * @height: array height
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int l;

	for (l = 0; l < height; l++)
		free(grid[l]);
	free(grid);
}

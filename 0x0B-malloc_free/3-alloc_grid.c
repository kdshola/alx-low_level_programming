#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates buffer for a 2-d array
 * @width: buffer column count
 * @height: buffer row count
 * Return: pointer to array or NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **twodptr;

	if (width == 0 || width < 0 || height < 0 || height == 0)
		return (NULL);
	twodptr = (int **)malloc(sizeof(int *) * height);
	if (twodptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		twodptr[i] = (int *)malloc(sizeof(int) * width);
		if (twodptr[i] == NULL)
		{
			for (j = i; j >= 0; j--)
				free(twodptr[j]);
			free(twodptr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			twodptr[i][j] = 0;
	}
	return (twodptr);
}

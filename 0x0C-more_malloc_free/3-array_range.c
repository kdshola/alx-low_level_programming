#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array and initializes the array
 * @min:number to initiste array from
 * @max: number to initate array to
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	i = (max - min) + 1;
	arr = malloc(sizeof(int) * i);
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		arr[i] = min++;
	return (arr);
}

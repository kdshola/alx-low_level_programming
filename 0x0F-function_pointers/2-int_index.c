#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to array to search
 * @size: array size
 * @cmp: pointer to funtion to search for int
 * Return: index of integer in array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (a = 0; a < size; a++)
			if (cmp(array[a]))
				return (a);
	}
	return (-1);
}

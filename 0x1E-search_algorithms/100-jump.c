#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in an array of
 * integers using the  Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int index = 0, prev = 0, root;

	if (!size || !array)
		return (-1);
	root = (int)sqrt((double)size);
	for (; index < (int)size && array[index] < value; index += root)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		prev = index;
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, index);
	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}

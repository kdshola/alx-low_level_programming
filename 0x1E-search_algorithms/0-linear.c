#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (!array)
		return (-1);
	for (; index < size; index++)
	{
		if (array[index] != value)
			printf("Value checked array[%ld] = %d\n", index, array[index]);
		else
			return (index);
	}
	return (-1);
}

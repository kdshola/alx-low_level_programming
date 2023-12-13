#include "search_algos.h"

/**
 * binary_search - function that searches for a value in an array of
 * integers using the binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, mid, end = size - 1, i;

	if (!array)
		return (-1);
	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d ", array[i]);
		printf("%d\n", array[i]);
		mid = start + (end - start) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}

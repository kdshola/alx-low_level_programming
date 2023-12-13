#include "search_algos.h"

/**
 * advanced_binary - function that searches for a value in an array of
 * integers using the  binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t start = 0, mid, end = size - 1, i;
	int pos = -1;

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
		{
			pos = mid;
			end = mid - 1;
		}
		else if (array[mid] < value)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}
	return (pos);
}

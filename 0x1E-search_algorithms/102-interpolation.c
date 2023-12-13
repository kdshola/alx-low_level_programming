#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in an array of
 * integers using the  interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, end = size - 1;
	double i;

	if (size == 0 || !array)
		return (-1);
	while (1)
	{
		i = (double)(end - low) / (array[end] - array[low]) * (value - array[low]);
		pos = (size_t)(low + i);
		if (pos >= size)
		{
			printf("Value checked array[%d] is out of range\n");
			break;
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int)pos, array[(int)pos]);
		}
		if (array[(int)pos] == value)
			return ((int)pos);
		if (array[(int)pos] > value)
			end = pos - 1;
		else
			low = pos + 1;
		if (low == end)
			return (-1);

	}
	return (-1);
}

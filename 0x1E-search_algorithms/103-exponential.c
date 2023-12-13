#include "search_algos.h"


int _binary_search(int *array, size_t low, size_t hi, int value);

/**
 * exponential_search - function that searches for a value in an array of
 * integers using the  exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, hi;

	if (!array)
		return (-1);
	if (array[0] == value)
	{
		printf("Value checked array[%d] = [%d]\n", 0, array[0]);
		return (0);
	}
	else
		for (i = 1; i < size && array[i] < value; i *= 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	if (i < size)
		hi = i;
	else
		hi = size - 1;
	printf("value found between [%ld] and [%ld]\n", i / 2, hi);
	return (_binary_search(array, i / 2, hi, value));
}

/**
 * _binary_search - function that searches for a value in an array of
 * integers using the binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @hi: right array boundary
 * @low: left array boundary
 * @value: the value to search for
 * Return: the index where value is located or -1
 */
int _binary_search(int *array, size_t low, size_t hi, int value)
{
	size_t i, mid;

	if (!array)
		return (-1);
	while (low <= hi)
	{
		printf("Searching in array: ");
		for (i = low; i < hi; i++)
			printf("%d ", array[i]);
		printf("%d\n", array[i]);
		mid = low + (hi - low) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			hi = mid - 1;
	}
	return (-1);
}

#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a funtion on every element ina an array
 * @array: pointer to array
 * @size: no of array elements
 * @action: adress of funtion to execute
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t cnt;

	if (array != NULL && action != NULL)
	{
		for (cnt = 0; cnt < size; cnt++)
			action(array[cnt]);
	}
}

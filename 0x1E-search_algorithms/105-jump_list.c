#include "search_algos.h"
#include <math.h>

/**
 * jump_list - function that searches for a value in an array of
 * integers using the  jump search algorithm
 * @list: pointer to the first node of the list to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the pointer to the first node where value is located or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index = 0, root, sz = size;
	listint_t *prev = list;

	if (!size || !list)
		return (NULL);
	root = (int)sqrt((double)size);
	for (; index < sz && list->next && list->n < value; index += root)
	{
		prev = list;
		while (list->next && list->index < index)
			list = list->next;
		printf("Value checked array[%ld] = [%d]\n", index, list->n);
		if (list->next ==  NULL && index != list->index)
			index = list->index;
	}
	printf("Value found between indexes [%ld]", prev->index);
	printf(" and [%ld]\n", list->index);
	for (; prev && prev->index < list->index; prev = prev->next)
	{
		printf("Value checked array[%ld]", prev->index);
		printf(" = [%d]\n", prev->n);
		if (prev->n == value)
			return (prev);
	}
	return (NULL);
}

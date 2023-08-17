#include "lists.h"

/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: pointer to rhe first list node
 * Return: number of list nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}

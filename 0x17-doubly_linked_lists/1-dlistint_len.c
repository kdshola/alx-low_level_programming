#include "lists.h"

/**
 * dlistint_len - finds the length of a doubly linked list
 * @h: pointer to list head node
 * Return: number of list nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

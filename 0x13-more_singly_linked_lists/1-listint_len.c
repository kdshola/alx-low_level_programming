#include "lists.h"

/**
 * listint_len - Finds lenght of a list of type listint_len
 * @h: head pointer of linked list
 * Return: no of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (cnt);
}

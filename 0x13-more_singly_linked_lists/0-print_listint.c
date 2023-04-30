#include "lists.h"

/**
 * print_listint - prints all elemts of a list of type listint_t
 * @h: pointer to start of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}

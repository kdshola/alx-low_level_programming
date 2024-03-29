#include "lists.h"

/**
 * print_list - prints all elements of a linked list
 * @h:pointer to linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		cnt++;
		h = h->next;
	}
	return (cnt);
}


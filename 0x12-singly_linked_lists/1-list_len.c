#include "lists.h"

/**
 * list_len - finds length of a list
 * @h: pointer to list
 * Return: list length
 */
size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	if (h == NULL)
		return (cnt);
	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}

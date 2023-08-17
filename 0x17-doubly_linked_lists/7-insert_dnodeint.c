#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at given index
 * @h: lisat start
 * @idx: index t insert data
 * @n: data to insert
 * Return: adress of new node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int pos = 1;
	dlistint_t *temp, *new = NULL;

	if (h == NULL)
		return (NULL);
	temp = *h;
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	temp = *h;
	new->n = n;
	while (pos != idx)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		pos++;
	}
	if (temp->next == NULL)
	{
		new->next = NULL;
		temp->next = new;
		new->prev = temp;
	}
	else
	{
		new->prev = temp;
		new->next = temp->next;
		temp->next->prev = new;
		temp->next = new;
	}
	return (new);

}

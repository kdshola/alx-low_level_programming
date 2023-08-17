#include "lists.h"

/**
 * get_dnodeint_at_index - returns list node at given index
 * @head: list start
 * @index: node index
 * Return: node at endex or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int pos = 0;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	while (pos != index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		pos++;
	}
	return (head);
}

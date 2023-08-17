#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at a given a given index
 * @head: pointer to list start
 * @index: node index to delete
 * Return: 1 on success else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int pos = 0;
	dlistint_t *current = NULL;

	if (*head == NULL || head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (current->next)
			current->next->prev = NULL;
		free(current);
		return (1);
	}
	while (pos < index)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
		pos++;
	}
	current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;
	free(current);
	return (1);
}

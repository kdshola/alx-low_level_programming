#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index of list listint_t
 * @head: double pointer to first node
 * @index: node index to delete
 * Return: ! on sucess else 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *todel = *head;
	listint_t *prev = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = todel->next;
		free(todel);
		todel = NULL;
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		prev = todel;
		todel = todel->next;
		if (todel == NULL)
			return (-1);
	}
	prev->next = todel->next;
	free(todel);
	todel = NULL;
	return (1);
}

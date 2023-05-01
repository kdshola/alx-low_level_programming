#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a list of type listint_t
 * @head: double pointer to list
 * @idx: index to insert node
 * @n: data to insert at node
 * Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index = 1;
	listint_t *new, *ptr = *head;

	if (*head == NULL || head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (index < idx)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
		index++;
	}
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}

#include "lists.h"

/**
 * get_nodeint_at_index - finds node at given index
 * @head: adress of first node
 * @index: index to find node
 * Return: pointer to node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int move;

	if (head == NULL)
		return (NULL);
	move = 0;
	while (move < index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		move++;
	}
	return (head);
}


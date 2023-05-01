#include "lists.h"

/**
 * reverse_listint - Reverses a list of  type listint_t
 * @head: double pointer to first node
 * Return: pointer to linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *prev = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);
	if (curr->next == NULL)
		return (curr);
	while (*head != NULL)
	{
		curr = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = curr;
	}
	*head = prev;
	return (*head);
}

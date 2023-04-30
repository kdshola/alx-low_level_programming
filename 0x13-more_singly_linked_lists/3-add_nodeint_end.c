#include "lists.h"

/**
 * add_nodeint_end - adds node to the and of a list of type listint_t
 * @head: pointer to head of list
 * @n:  data to add to list
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end, *befend = *head;

	if (head == NULL)
		return (NULL);
	end = malloc(sizeof(listint_t));
	if (end == NULL)
		return (NULL);
	end->n = n;
	end->next = NULL;
	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	while (befend->next != NULL)
		befend = befend->next;
	befend->next = end;
	end = NULL;
	return (befend);
}

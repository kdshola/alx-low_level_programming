#include "lists.h"

/**
 * add_nodeint - adds a node to the start of listint_t
 * @head: pointer to start of list
 * @n: data to add to list
 * Return: pointer to list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

#include "lists.h"

/**
 * pop_listint - deletes first node of a list type listint_t
 * @head: double pointer to first node
 * Return:data of deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int del = 0;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	del = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (del);
}

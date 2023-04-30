#include "lists.h"

/**
 * free_listint2 - frees a linked list of type listint_t
 * @head: adress of first node in list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}

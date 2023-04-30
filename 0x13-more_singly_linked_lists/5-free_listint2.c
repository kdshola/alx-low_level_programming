#include "lists.h"

/**
 * free_listint2 - frees a linked list of type listint_t
 * @head: adress of first node in list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *fre = NULL;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		fre = *head;
		*head = (*head)->next;
		free(fre);
	}
	*head = NULL;
}

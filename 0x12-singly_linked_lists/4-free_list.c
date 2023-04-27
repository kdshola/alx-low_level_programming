#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to list to free
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *ptr = head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}

#include "lists.h"

/**
 * sum_dlistint - adds all integers in a DLL
 * @head: list start
 * Return: sum of all list data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

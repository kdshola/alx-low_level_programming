#include "lists.h"

/**
 * add_dnodeint_end - adds node to then end of a DLL
 * @head: pointer to list head
 * @n: data to add to list
 * Return: adress of last node else NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL, *end = NULL;

	if (head == NULL)
		return (NULL);
	temp = *head;
	end = malloc(sizeof(dlistint_t));
	if (end == NULL)
		return (NULL);
	end->n = n;
	end->next = NULL;
	if (temp == NULL)
	{
		end->prev = NULL;
		*head = end;
		return (end);
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		end->prev = temp;
		temp->next = end;
	}
	return (end);
}

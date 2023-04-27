#include "lists.h"

/**
 * _len - finds string length
 * @str: string to find length
 * Return: string length
 */
size_t _len(const char *str)
{
	size_t len = 0;

	while (str[len])
		len++;
	return (len);
}


/**
 * add_node_end - adds new node to list end
 * @head: double pointer to first node
 * @str: string to duplicate to new node
 * Return: adress of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end, *temp;

	if (str == NULL)
		return (NULL);
	temp = *head;
	end = malloc(sizeof(list_t));
	if (end == NULL)
		return (NULL);
	end->str = strdup(str);
	end->len = _len(str);
	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = end;
	end->next = NULL;
	return (end);
}

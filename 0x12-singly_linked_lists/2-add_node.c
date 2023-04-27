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
 * add_node - adds new node at the beginning of a list
 * @head: double pointer to the first node element
 * @str: string pointer
 * Return: pointer to new node or null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _len(str);
	new->next = *head;
	*head = new;
	return (new);
}

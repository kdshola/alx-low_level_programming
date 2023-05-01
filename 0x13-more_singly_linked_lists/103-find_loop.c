#include "lists.h"

/**
 * find_listint_loop - finds node at which lop starts in a list
 * @head: adress of first node of list
 * Return: pointer to loop start
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = fast = head;
	if (head == NULL || head->next == NULL)
		return (NULL);
	slow = slow->next;
	fast = fast->next->next;
	while (fast && fast->next)
	{
		if (slow == fast)
			break;
		slow = slow->next;
		fast = fast->next->next;
	}
	if (slow != fast)
		return (NULL);
	slow = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (slow);
}

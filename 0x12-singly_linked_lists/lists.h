#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

int _putchar(char b);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

/**
 * struct list - singly linked list prototype
 * @s: pointer to string
 * @b: length of string
 * @nxtnode: pointer to next node in the list
 */

typedef struct list
{
	char *s;
	unsigned int b;
	struct list *nxtnode;
} list_t;


#endif

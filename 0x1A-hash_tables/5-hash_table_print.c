#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp = NULL;
	char *sep = "";

	if (!ht)
	{
		return;
	}
	putchar('{');
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		if (!temp)
			continue;
		while (temp)
		{
			printf("%s'%s': '%s'", sep, temp->key, temp->value);
			sep = ", ";
			temp = temp->next;
		}
	}
	putchar('}');
	putchar('\n');
}

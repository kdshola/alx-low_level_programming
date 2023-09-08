#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp = NULL, *to_free = NULL;

	if (ht == NULL)
	{
		return;
	}
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp)
		{
			to_free = temp;
			temp = temp->next;
			free(to_free->key);
			free(to_free->value);
			free(to_free);
		}
	}
	free(ht->array);
	free(ht);
}

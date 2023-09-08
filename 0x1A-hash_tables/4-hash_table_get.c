#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hashtable pointer
 * @key: key to retrieve its value
 * Return: value else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	 unsigned long int index;
	 hash_node_t *temp = NULL;

	if (!ht || !key || !(*key))
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	if (temp == NULL)
		return (NULL);
	while (temp)
	{
		if (!strcmp(temp->key, key))
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

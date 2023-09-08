#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hastable to update key/value or add element to
 * @key: key to insert or change its associated value
 * @value: value associated with key
 * Return: 1 on success else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *table_element = NULL, *temp = NULL;

	if (key == NULL || !(*key) || !ht || !value)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (!strcmp(temp->key, key))
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	table_element = malloc(sizeof(hash_node_t));
	if (!table_element)
		return (0);
	table_element->key = strdup(key);
	table_element->value = strdup(value);
	table_element->next = ht->array[index];
	ht->array[index] = table_element;
	return (1);
}

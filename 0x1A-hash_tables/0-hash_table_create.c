#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table of known size
 * @size: Size of the table
 * Return: pointer to the table or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	hash_node_t **array = NULL;
	unsigned long int i = 0;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (; i < size; i++)
		array[i] = NULL;
	new_table->array = array;
	new_table->size = size;
	return (new_table);
}

#include "hash_tables.h"

/**
 * shash_table_create - creates hash table(ordered) of known size
 * @size: table size
 * Return: pointer to table or NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table = NULL;
	shash_node_t **array = NULL;
	unsigned long int i = 0;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);
	array = malloc(sizeof(shash_node_t *) * size);
	if (array == NULL)
		return (NULL);
	for (; i < size; i++)
		array[i] = NULL;
	new_table->array = array;
	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;
	return (new_table);
}

/**
 * shash_table_set - inserts key/value into a sorted hash table
 * @ht: pointer to table
 * @key: key to insert
 * @value: value to insert
 * Return: 1 on success else 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *temp = NULL;

	if (!ht || !key || !value || !(*key))
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp)
	{
		if (!strcmp(key, temp->key))
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	temp = malloc(sizeof(shash_node_t));
	if (temp == NULL)
		return (0);
	temp->value = strdup(value);
	temp->key = strdup(key);
	temp->next = ht->array[index];
	ht->array[index] = temp;
	add_to_list(ht, temp);
	return (1);
}

/**
 * shash_table_get - fetches table data using key
 * @ht: pointer to table
 * @key: key to value
 * Return: value or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp = NULL;

	if (!ht || !key || !(*key))
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (!strcmp(temp->key, key))
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints hash table
 * @ht: table pointer
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp = NULL;
	char *sep = "";

	if (!ht)
		return;
	temp = ht->shead;
	putchar('{');
	while (temp)
	{
		printf("%s'%s': '%s'", sep, temp->key, temp->value);
		sep = ", ";
		temp = temp->snext;
	}
	putchar('}');
	putchar('\n');
}

/**
 * shash_table_print_rev - prints table in reverse
 * @ht: table pointer
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp = NULL;
	char *sep = "";

	if (!ht)
		return;
	temp = ht->stail;
	putchar('{');
	while (temp)
	{
		printf("%s'%s': '%s'", sep, temp->key, temp->value);
		sep = ", ";
		temp = temp->sprev;
	}
	putchar('}');
	putchar('\n');
}

/**
 * shash_table_delete - deletes the ordered table
 * @ht: table pointer
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int index;
	shash_node_t *temp = NULL, *to_free = NULL;

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

/**
 * add_to_list - adds node to table double linked list
 * @ht: pointer to yable
 * @node: node to add
 * Return: Nothing
 */
void add_to_list(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *temp = ht->shead;
	int pos;

	while (temp)
	{
		pos = strcmp(node->key, temp->key);
		if (!pos)
		{
			return;
		}
		else if (pos < 0)
		{
			node->sprev = temp->sprev;
			if (temp->sprev)
				temp->sprev->snext = node;
			else
				ht->shead = node;
			node->snext = temp;
			temp->sprev = node;
			return;
		}
		if (!temp->snext)
			break;
		temp = temp->snext;
	}
	node->sprev = temp;
	node->snext = NULL;
	ht->stail = node;
	if (temp)
		temp->snext = node;
	else
		ht->shead = node;
}

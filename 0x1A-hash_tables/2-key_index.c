#include "hash_tables.h"

/**
 * key_index - finds the index of a key
 * @key: data key
 * @size: size of hash table array
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (!size || !key)
		return (0);
	index = hash_djb2(key) % size;
	return (index);
}

#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block;
 * @ptr: memory to reallocate
 * @old_size: size of ptr
 * @new_size: new size of ptr
 * Return: pointer to newly allocate memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newp, *oldp = ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		newp = malloc(new_size);
		if (newp == NULL)
			return (NULL);
		free(ptr);
		return (newp);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newp = malloc(new_size);
	if (newp == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		newp[i] = oldp[i];
	free(ptr);
	return (newp);
}

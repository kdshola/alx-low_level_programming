#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array and fills in with a specific character
 * @size: size of array
 * @c: char to fill array with
 * Return: pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int l;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (l = 0; l < size; l++)
		ptr[l] = c;
	return (ptr);
}

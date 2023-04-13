#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory of given size
 * @b: size
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);

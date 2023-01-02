#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: location to copy to
 * @src: source to be copied
 * @n: n bytes of @src
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

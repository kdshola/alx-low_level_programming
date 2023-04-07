#include "main.h"

/**
 * _memcpy - copies n bytes from source to dest
 * @src: buffer to copy from
 * @dest: buffer to copy to
 * @n: no of bytes to copy to dest
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

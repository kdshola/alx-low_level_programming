#include "main.h"

/**
 * _strncpy - copies n bytes from source to destination buffer
 * @n: String count in bytes
 * @src: pointer to source buffer
 * @dest: pointer to destination buffer
 * Return: pointer to dest  buffer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; *(src + i) && i < n; i++)
		*(dest + i) = *(src + i);
	while (i < n)
	{
		dest[i] = '\0';
		++i;
	}
	return (dest);
}

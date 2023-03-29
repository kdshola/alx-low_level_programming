#include "main.h"

/**
 * _strncat - concatenates up till n bytes
 * @n: number of bytes
 * @src: pointer to string to concatenate to another
 * @dest: pointer to string to concatenate to
 * Return: pointer to concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}


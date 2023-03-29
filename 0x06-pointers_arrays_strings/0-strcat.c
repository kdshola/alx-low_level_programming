#include "main.h"

/**
 * _strcat - concatenates source to destination overwriding dest last null byte
 * @src: pointer string to concatenate to dest
 * @dest: pointer to concatenation location
 * Return: pointer to concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k;

	for (i = 0; *(dest + i); i++)
	{}
	for (j = 0; src[j] != '\0'; j++)
	{}
	for (k = 0; k <= j; k++)
		dest[i + k] = src[k];
	return (dest);
}

#include "main.h"

/**
 * _strcpy - copy an array of string to destination from source
 * @dest: destination to copy to
 * @src: location to copy from
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}


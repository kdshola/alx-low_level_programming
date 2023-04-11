#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates sting to new buffer
 * @str: string buffer to duplicate
 * Return: pointer to duplicate string
 */

char *_strdup(char *str)
{
	char *dupptr;
	unsigned int new, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	dupptr = (char *)malloc(sizeof(char) * (len + 1));
	if (dupptr == NULL)
		return (NULL);
	for (new = 0; new < len; new++)
		dupptr[new] = str[new];
	dupptr[new] = '\0';
	return (dupptr);
}

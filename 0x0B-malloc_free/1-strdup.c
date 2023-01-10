#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == '\0')
		return ('\0');

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == '\0')
		return ('\0');

	while ((dup[i] = str[i]) != '\0')
		i++;

	return (dup);
}

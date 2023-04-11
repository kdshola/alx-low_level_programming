#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates arguments to amin
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i, j, len, k = 0;
	char *new;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}
	len++;
	new = (char *)malloc(sizeof(char) * len);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			new[k] = av[i];
			k++;
		}
		new[k] = '\n';
		k++;
	}
	new[k] = '\0';
	return (new);
}

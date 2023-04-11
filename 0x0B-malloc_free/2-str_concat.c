#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string or null
 */

char *str_concat(char *s1, char *s2)
{
	int a, b, l1, l2, totlen;
	char *catstr;

	l1 = l2 = 0;

	if (s1 != NULL)
	{
		for (a = 0; s1[a] != '\0'; a++)
			l1++;
	}
	if (s2 != NULL)
	{
		for (a = 0; s2[a] != '\0'; a++)
			l2++;
	}
	totlen = l1 + l2 + 1;
	catstr = (char *)malloc(sizeof(char) * totlen);
	if (totlen == NULL)
		return (NULL);
	for (a = 0; a < l1; a++)
		catstr[a] = s1[a];
	for (b = 0; b < l2; b++)
	{
		catstr[a] = s2[b];
		a++;
	}
	catstr[a] = '\0';
	return (catsrt);
}

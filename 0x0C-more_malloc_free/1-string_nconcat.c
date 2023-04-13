#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two string up to n bytes from string 2
 * @s1: string 1
 * @s2:string 2
 * @n: no of bytes to concate in string two
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cats;
	unsigned int l1, l2, a, b;

	if (s1 == NULL)
		l1 = 0;
	if (s2 == NULL)
		l2 = 0;
	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;
	if (n >= l2)
		n = l2;
	cats = malloc(sizeof(char) * (l1 + n + 1));
	if (cats == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
		cats[a] = s1[a];
	for (b = 0; s2[b] != '\0' && b < n; b++)
		cats[a + b] = s2[b];
	cats[l1 + n] = '\0';
	return (cats);
}

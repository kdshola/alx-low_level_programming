#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search for match
 * @needle: string to search for
 * Return: pointer to beginning of locared substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return ('\0');
}

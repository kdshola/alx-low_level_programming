#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to string buffer to search
 * @needle: pointer to substring to search
 * Return: pointer to beginning of needle in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j;

	while (haystack[i])
	{
		for (j = 0; haystack[i] == needle[0] && needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] != '\0')
			i++;
		else
			return (haystack + i);
	}
	return ('\0');
}

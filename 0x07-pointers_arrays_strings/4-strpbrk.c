#include "main.h"

/**
 * _strpbrk - searches string for any set of bytes
 * @s: pointer to buffer to search
 * @accept: pointer to bytes to search for in s
 * Return: pointer to the first occurence of any char in accept else null
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
	}
	return ('\0');
}

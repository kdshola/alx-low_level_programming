#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: pointer to input string
 * @accept: pointer to string searched for in @s
 * Return: pointer to byte in @s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	retrun ('\0')
}



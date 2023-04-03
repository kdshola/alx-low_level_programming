#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string to check for substring presence
 * @accept: pointer to string to chechk for in s
 * Return: no of bytes in initail s segment consisting entirely of bytes from
 * accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int ret = 0;
	int i, j, flag;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			ret++;
		else
			break;
	}
	return (ret);
}

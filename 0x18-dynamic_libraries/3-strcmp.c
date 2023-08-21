#include "main.h"


/**
 * _strcmp - compares two strings
 * @s1: pointer to 1st string
 * @s2: pointer to second string
 * Return: 0 is both are equal, positive is 1st diff char > in s1 else negative
 */

int _strcmp(char *s1, char *s2)
{
	int i, retv = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			retv = s1[i] - s2[i];
			break;
		}
	}
	return (retv);
}
